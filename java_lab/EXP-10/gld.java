import java.applet.Applet;
import java.awt.Graphics;

public class gld extends Applet {
    @Override
    public void paint(Graphics graphics) {
        graphics.drawString("Graphics and Layout Demonstration", 20, 40);
        graphics.drawOval(80, 60, 80, 80);
    }
}
