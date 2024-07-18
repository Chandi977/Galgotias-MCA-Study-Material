import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class RegistrationApp extends JFrame implements ActionListener {
    private JTextField firstNameField, lastNameField;
    private JRadioButton maleRadioButton, femaleRadioButton;
    private JTextArea addressArea;
    private JCheckBox termsCheckBox;
    private JButton registerButton;

    public RegistrationApp() {
        // Set frame properties
        setTitle("Registration Application");
        setSize(400, 300);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLayout(new BorderLayout());

        // Create components
        JPanel formPanel = new JPanel(new GridLayout(6, 2));
        JLabel firstNameLabel = new JLabel("First Name:");
        firstNameField = new JTextField();
        JLabel lastNameLabel = new JLabel("Last Name:");
        lastNameField = new JTextField();
        JLabel genderLabel = new JLabel("Gender:");
        maleRadioButton = new JRadioButton("Male");
        femaleRadioButton = new JRadioButton("Female");
        ButtonGroup genderGroup = new ButtonGroup();
        genderGroup.add(maleRadioButton);
        genderGroup.add(femaleRadioButton);
        JLabel addressLabel = new JLabel("Address:");
        addressArea = new JTextArea(4, 20);
        JScrollPane scrollPane = new JScrollPane(addressArea);
        JLabel termsLabel = new JLabel("Accept Terms and Conditions:");
        termsCheckBox = new JCheckBox();
        registerButton = new JButton("Register");

        // Add components to the form panel
        formPanel.add(firstNameLabel);
        formPanel.add(firstNameField);
        formPanel.add(lastNameLabel);
        formPanel.add(lastNameField);
        formPanel.add(genderLabel);
        formPanel.add(maleRadioButton);
        formPanel.add(new JLabel()); // Empty space
        formPanel.add(femaleRadioButton);
        formPanel.add(addressLabel);
        formPanel.add(scrollPane);
        formPanel.add(termsLabel);
        formPanel.add(termsCheckBox);

        // Add register button action listener
        registerButton.addActionListener(this);

        // Add components to the frame
        add(formPanel, BorderLayout.CENTER);
        add(registerButton, BorderLayout.SOUTH);

        // Set frame visible
        setVisible(true);
    }

    public void actionPerformed(ActionEvent e) {
        if (e.getSource() == registerButton) {
            // Perform registration process
            String firstName = firstNameField.getText();
            String lastName = lastNameField.getText();
            String gender = maleRadioButton.isSelected() ? "Male" : "Female";
            String address = addressArea.getText();
            boolean acceptedTerms = termsCheckBox.isSelected();

            // Display registration information
            String message = "Registration Successful!\n\n";
            message += "First Name: " + firstName + "\n";
            message += "Last Name: " + lastName + "\n";
            message += "Gender: " + gender + "\n";
            message += "Address: " + address + "\n";
            message += "Terms and Conditions Accepted: " + (acceptedTerms ? "Yes" : "No");
            JOptionPane.showMessageDialog(this, message, "Registration Info", JOptionPane.INFORMATION_MESSAGE);
        }
    }

    public static void main(String[] args) {
        new RegistrationApp();
    }
}
