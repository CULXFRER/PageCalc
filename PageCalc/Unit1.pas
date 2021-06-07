Unit Unit1;

interface

uses System, System.Drawing, System.Windows.Forms;

type
  Form1 = class(Form)
    procedure toolStripMenuItem2_Click(sender: Object; e: EventArgs);
    procedure button1_Click(sender: Object; e: EventArgs);
    procedure toolStripMenuItem16_Click(sender: Object; e: EventArgs);
    procedure toolStripMenuItem5_Click(sender: Object; e: EventArgs);
  {$region FormDesigner}
  internal
    {$resource Unit1.Form1.resources}
    menuStrip1: MenuStrip;
    toolStripMenuItem1: ToolStripMenuItem;
    toolStripMenuItem5: ToolStripMenuItem;
    toolStripMenuItem6: ToolStripMenuItem;
    tabControl1: TabControl;
    tabPage1: TabPage;
    groupBox1: GroupBox;
    label1: &Label;
    numericUpDown2: NumericUpDown;
    numericUpDown1: NumericUpDown;
    button1: Button;
    label4: &Label;
    label3: &Label;
    label2: &Label;
    groupBox2: GroupBox;
    textBox1: TextBox;
    textBox2: TextBox;
    label5: &Label;
    toolStripMenuItem7: ToolStripMenuItem;
    {$include Unit1.Form1.inc}
  {$endregion FormDesigner}
  public
    constructor;
    begin
      InitializeComponent;
    end;
  end;

implementation

procedure Form1.toolStripMenuItem2_Click(sender: Object; e: EventArgs);
begin
  
end;

procedure Form1.button1_Click(sender: Object; e: EventArgs);
var BeginOfPages:integer;
var EndOfPages:integer;
var PriceOfPages:integer;
var LengthOfPages: integer;
var a: integer;
begin
a := 0;
BeginOfPages := NumericUpDown1.Text.ToInteger();
EndOfPages := NumericUpDown2.Text.ToInteger();
PriceOfPages := Textbox1.Text.ToInteger();
LengthOfPages := 0;

If BeginOfPages > 0 then
for var i := BeginOfPages to EndOfPages do
  LengthOfPages := LengthOfPages + 1;
  
Textbox2.Text := $'Ваш документ со стоимостью {Textbox1.Text.ToInteger*LengthOfPages} состовляет {LengthOfPages} страниц.';
  
end;

procedure Form1.toolStripMenuItem16_Click(sender: Object; e: EventArgs);
begin
  MessageBox.Show($'Автор: Собиржон Матназаров (t.me/matnazaroff_s)','О программе')
end;

procedure Form1.toolStripMenuItem5_Click(sender: Object; e: EventArgs);
begin
  Application.Exit;
end;

end.
