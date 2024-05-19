import java.awt.*;
import java.awt.event.*;

public class EventHandlingExample extends Frame implements ActionListener, MouseListener, KeyListener {
    private TextField textField;
    private Label label;
    private Button button;

    public EventHandlingExample() {
        // Create components
        label = new Label("Click inside the window and press any key:");
        textField = new TextField(20);
        button = new Button("Click me");
        
        // Add components to the frame
        add(label, BorderLayout.NORTH);
        add(textField, BorderLayout.SOUTH);
        add(button, BorderLayout.CENTER);
        
        // Add event listeners
        button.addActionListener(this);
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
        
        // Remove ActionListener from the button
        button.removeActionListener(this);
    }

    // MouseListener event handlers
    public void mouseClicked(MouseEvent e) {
        textField.setText("Mouse clicked at (" + e.getX() + ", " + e.getY() + ")");
        
        // Remove MouseListener from the frame
        removeMouseListener(this);
    }
    public void mouseEntered(MouseEvent e) {}
    public void mouseExited(MouseEvent e) {}
    public void mousePressed(MouseEvent e) {}
    public void mouseReleased(MouseEvent e) {}

    // KeyListener event handlers
    public void keyPressed(KeyEvent e) {
        textField.setText("Key pressed: " + e.getKeyChar());
        
        // Remove KeyListener from the frame
        removeKeyListener(this);
    }
    public void keyReleased(KeyEvent e) {}
    public void keyTyped(KeyEvent e) {}

    public static void main(String[] args) {
        new EventHandlingExample();
    }
}
