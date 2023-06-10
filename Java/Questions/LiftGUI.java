package Questions;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class LiftGUI extends JFrame {
    private int liftPos = 0;
    private int movedestFloor = 0;
    private int maxFloors = 5; // Maximum number of floors

    private JLabel floorLabel;
    private JTextField floorTextField;
    private JButton goToButton;
    private JTextArea outputTextArea;

    public LiftGUI() {
        setTitle("Lift Program");
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLayout(new BorderLayout());
        setResizable(false);

        floorLabel = new JLabel("Enter the Destination Floor (0-" + maxFloors + "):");
        floorTextField = new JTextField(10);
        goToButton = new JButton("Go To Floor");
        outputTextArea = new JTextArea(10, 30);
        outputTextArea.setEditable(false);

        JPanel inputPanel = new JPanel();
        inputPanel.add(floorLabel);
        inputPanel.add(floorTextField);
        inputPanel.add(goToButton);

        JScrollPane outputScrollPane = new JScrollPane(outputTextArea);

        add(inputPanel, BorderLayout.NORTH);
        add(outputScrollPane, BorderLayout.CENTER);

        pack();
        setLocationRelativeTo(null);

        goToButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                String input = floorTextField.getText();
                int destFloor = Integer.parseInt(input);

                if (destFloor < 0 || destFloor > maxFloors) {
                    JOptionPane.showMessageDialog(null, "Invalid floor! Please enter a floor between 0 and " + maxFloors + ".");
                } else {
                    processDestinationFloor(destFloor);
                }
            }
        });
    }

    private void processDestinationFloor(int destFloor) {
        outputTextArea.append("Destination Floor: " + destFloor + "\n");

        if (liftPos == destFloor) {
            outputTextArea.append("You are on your destination floor\n");
        } else if (liftPos < destFloor) {
            for (int i = liftPos; i < destFloor; i++) {
                outputTextArea.append("You are on floor: " + (i + 1) + "\n");
                movedestFloor = i;

                if (destFloor == (i + 1)) {
                    outputTextArea.append("You are on your destination floor\n");
                    break;
                }
            }
            liftPos = movedestFloor + 1;
        } else if (liftPos > destFloor) {
            for (int i = liftPos; i > destFloor; i--) {
                outputTextArea.append("You are on floor: " + (i - 1) + "\n");
                movedestFloor = i;

                if (destFloor == (i + 1)) {
                    outputTextArea.append("You are on your destination floor\n");
                    break;
                }
            }
            liftPos = movedestFloor - 1;
        }

        floorTextField.setText("");
        floorTextField.requestFocus();
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(new Runnable() {
            @Override
            public void run() {
                LiftGUI liftGUI = new LiftGUI();
                liftGUI.setVisible(true);
            }
        });
    }
}
