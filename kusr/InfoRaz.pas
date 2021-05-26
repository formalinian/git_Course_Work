Unit InfoRaz;

interface

uses System, System.Drawing, System.Windows.Forms;

type
  Form3 = class(Form)
    procedure ExtBt_Click(sender: Object; e: EventArgs);
  {$region FormDesigner}
  private
    {$resource InfoRaz.Form3.resources}
    AllInfo: &Label;
    ExtBt: Button;
    {$include InfoRaz.Form3.inc}
  {$endregion FormDesigner}
  public
    constructor;
    begin
      InitializeComponent;
    end;
  end;

implementation

procedure Form3.ExtBt_Click(sender: Object; e: EventArgs);
begin
  Form3.ActiveForm.Close;
end;

end.
