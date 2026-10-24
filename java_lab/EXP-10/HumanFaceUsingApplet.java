import java.applet.Applet;
import java.awt.Graphics;

public class HumanFaceUsingApplet extends Applet {
    @Override
    public void paint(Graphics graphics) {
        graphics.drawOval(50, 30, 200, 200);
        graphics.fillOval(105, 85, 20, 20);
        graphics.fillOval(175, 85, 20, 20);
        graphics.drawArc(105, 110, 90, 70, 180, 180);
    }
}
