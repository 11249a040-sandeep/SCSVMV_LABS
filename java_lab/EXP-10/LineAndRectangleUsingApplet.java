import java.applet.Applet;
import java.awt.Graphics;

public class LineAndRectangleUsingApplet extends Applet {
    @Override
    public void paint(Graphics graphics) {
        graphics.drawLine(20, 20, 180, 20);
        graphics.drawRect(40, 50, 120, 80);
    }
}
