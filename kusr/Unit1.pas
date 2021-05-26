Unit Unit1;

interface

uses System, System.Drawing, System.Windows.Forms,InfoRaz,RegTable;

type
  Form1 = class(Form)
    procedure Form1_Load(sender: Object; e: EventArgs);
    procedure inTable_Click(sender: Object; e: EventArgs);
    procedure Info_Click(sender: Object; e: EventArgs);
    procedure exitBt_Click(sender: Object; e: EventArgs);
  {$region FormDesigner}
  private
    {$resource Unit1.Form1.resources}
    Head: &Label;
    Info: Button;
    exitBt: Button;
    inTable: Button;
    {$include Unit1.Form1.inc}
  {$endregion FormDesigner}
  public
    constructor;
    begin
      InitializeComponent;
    end;
  end;

implementation

procedure Form1.Form1_Load(sender: Object; e: EventArgs);
begin
  
end;

procedure Form1.inTable_Click(sender: Object; e: EventArgs);
begin
  Form(new Form2).show
end;

procedure Form1.Info_Click(sender: Object; e: EventArgs);
begin
  Form(new Form3).show
end;

procedure Form1.exitBt_Click(sender: Object; e: EventArgs);
begin
 Application.Exit; 
end;

end.
