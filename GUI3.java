import java.awt.*;
import java.awt.event.*;

class GUI3
{
public static void main(String arg[])
{
  MarvellousFrame mobj = new MarvellousFrame("PPA49");
}
}
class MarvellousFrame
{
public MarvellousFrame(String title)
{
  Frame fobj= new Frame(title);
  fobj.setSize(300,600);
  fobj.setVisible(true);
}
}
class MarvellousListener implements WindowListener
{
  public void windowDeactivated(WindowEvent obj){}
  public void windowActivated(WindowEvent obj){}
  public void windowDeiconified(WindowEvent obj){}
    public void windowIconified(WindowEvent obj){}
      public void window(WindowEvent obj){}
        public void window(WindowEvent obj){}
          public void windowDeiconified(WindowEvent obj){}

  
}