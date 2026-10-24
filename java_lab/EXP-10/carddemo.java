import java.applet.Applet;
import java.awt.Graphics;

public class carddemo extends Applet {
    @Override
    public void paint(Graphics graphics) {
        graphics.drawRect(40, 30, 120, 170);
        graphics.drawString("JAVA", 85, 115);
    }
}
