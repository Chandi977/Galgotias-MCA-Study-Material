package Cos;

import java.awt.*;
import java.awt.event.*;

public class Q39EventsListner extends Frame implements ActionListener, MouseListener, KeyListener {
    private TextField textField;
    private Label label;

    public Q39EventsListner() {
        // Create components
        label = new Label("Click inside the window and press any key:");
        textField = new TextField(20);
        
        // Add components to the frame
        add(label, BorderLayout.NORTH);
        add(textField, BorderLayout.SOUTH);
        
        // Add event listeners
        addMouseListener(this);
        addKeyListener(this);

        // Set frame properties
        setTitle("Event Handling Example");
        setSize(300, 200);
        setVisible(true);
    }

    // ActionListener event handler
    public void actionPerformed(ActionEvent e) {
        textField.setText("Button clicked!");
    }

    // MouseListener event handlers
    public void mouseClicked(MouseEvent e) {
        textField.setText("Mouse clicked at (" + e.getX() + ", " + e.getY() + ")");
    }
    public void mouseEntered(MouseEvent e) {}
    public void mouseExited(MouseEvent e) {}
    public void mousePressed(MouseEvent e) {}
    public void mouseReleased(MouseEvent e) {}

    // KeyListener event handlers
    public void keyPressed(KeyEvent e) {
        textField.setText("Key pressed: " + e.getKeyChar());
    }
    public void keyReleased(KeyEvent e) {}
    public void keyTyped(KeyEvent e) {}

    public static void main(String[] args) {
        new Q39EventsListner();
    }
}
