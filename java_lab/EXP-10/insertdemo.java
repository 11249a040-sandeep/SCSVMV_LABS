import java.applet.Applet;
import java.awt.Graphics;

public class insertdemo extends Applet {
    @Override
    public void paint(Graphics graphics) {
        graphics.drawString("Applet insertion demonstration", 20, 40);
        graphics.drawRect(20, 60, 180, 80);
    }
}
