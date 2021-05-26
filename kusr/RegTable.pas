Unit RegTable;

interface

uses System, System.Drawing, System.Windows.Forms;

type
  Form2 = class(Form)
    procedure AddBt_Click(sender: Object; e: EventArgs);
    procedure UdalBt_Click(sender: Object; e: EventArgs);
    procedure PoiskBt_Click(sender: Object; e: EventArgs);
    procedure NazadBt_Click(sender: Object; e: EventArgs);
    procedure ExxBt_Click(sender: Object; e: EventArgs);
    procedure Form2_Load(sender: Object; e: EventArgs);
  {$region FormDesigner}
  private
    {$resource RegTable.Form2.resources}
    AllTable: DataGridView;
    HeadAdd: &Label;
    NumCardBox: TextBox;
    FamBox: TextBox;
    ImBox: TextBox;
    OtchBox: TextBox;
    DateRBox: TextBox;
    GrachBox: TextBox;
    DatePBox: TextBox;
    label1: &Label;
    label2: &Label;
    label3: &Label;
    label4: &Label;
    label5: &Label;
    label6: &Label;
    label7: &Label;
    AddBt: Button;
    HeadDel: &Label;
    DelInfo: &Label;
    label8: &Label;
    label9: &Label;
    NumCard: DataGridViewTextBoxColumn;
    Fam: DataGridViewTextBoxColumn;
    Im: DataGridViewTextBoxColumn;
    Otch: DataGridViewTextBoxColumn;
    DateR: DataGridViewTextBoxColumn;
    Grach: DataGridViewTextBoxColumn;
    DateP: DataGridViewTextBoxColumn;
    UdalBt: Button;
    PoiskBt: Button;
    NazadBt: Button;
    ExxBt: Button;
    FindBox: TextBox;
    {$include RegTable.Form2.inc}
  {$endregion FormDesigner}
  public
    constructor;
    begin
      InitializeComponent;
    end;
  end;

implementation

Type 
 MaTable = record
   NumCard: integer;
   Fam: string[20];
   Im: string[20];
   Otch: string[20];
   DateR: string[10];
   Grach: string[25];
   DateP: string[10];
 end;

procedure Form2.AddBt_Click(sender: Object; e: EventArgs);

Var
 MaFile:file of MaTable;
 OneStr:MaTable;
 
begin
 
 AllTable.Rows.Add(NumCardBox.Text, FamBox.Text, ImBox.Text, OtchBox.Text, DateRBox.Text, GrachBox.Text, DatePBox.Text);
 
 Assign(MaFile,'WorkFile.dat');
 Reset(MaFile);
 Seek(MaFile, Filesize(MaFile));
 
 With OneStr do
 begin
   NumCard:=Convert.ToInt64(NumCardBox.Text);
   Fam:= Convert.ToString(FamBox.Text);
   Im:= Convert.ToString(ImBox.Text);
   Otch:= Convert.ToString(OtchBox.Text);
   DateR:= Convert.ToString(DateRBox.Text);
   Grach:= Convert.ToString(GrachBox.Text);
   DateP:= Convert.ToString(DatePBox.Text);
 end;
 
 Write(MaFile,OneStr);
 Closefile(MaFile);
 
end;

procedure Form2.UdalBt_Click(sender: Object; e: EventArgs);

Var
 MaFile:file of MaTable;
 OneStr:MaTable;
 i,n:integer;
 
begin
  
 Foreach item:DataGridViewRow in AllTable.SelectedRows do
   AllTable.Rows.RemoveAt(item.index);
 
 n:=AllTable.RowCount;
 
 Assign(MaFile,'WorkFile.dat');
 Rewrite(MaFile);
 
 For i:=0 to n-1 do
  begin
    With OneStr do
    begin
      NumCard:=Convert.ToInt64(AllTable.Rows[i].Cells[0].Value);
      Fam:= Convert.ToString(AllTable.Rows[i].Cells[1].Value);
      Im:= Convert.ToString(AllTable.Rows[i].Cells[2].Value);
      Otch:= Convert.ToString(AllTable.Rows[i].Cells[3].Value);
      DateR:= Convert.ToString(AllTable.Rows[i].Cells[4].Value);
      Grach:= Convert.ToString(AllTable.Rows[i].Cells[5].Value);
      DateP:= Convert.ToString(AllTable.Rows[i].Cells[6].Value);
    end;
    Write(MaFile,OneStr);
  end;
 Closefile(MaFile);
 
end;

procedure Form2.PoiskBt_Click(sender: Object; e: EventArgs);

Var
 MaFile:file of MaTable;
 OneStr:MaTable;
 Test:string;
 
begin
  
 Assign(MaFile,'WorkFile.dat'); 
 Test:=Convert.ToString(FindBox.Text);
 AllTable.RowCount:=0;
 Reset(Mafile);
  
 While not Eof(MaFile) do
  begin
   Read(MaFile,OneStr);
   With OneStr do
    begin
     If (NumCard.ToString=Test) or (Fam=Test) or (Im=Test)or (Otch=Test) or (DateR=Test) or (Grach=Test) or (DateP=Test) then
       AllTable.Rows.Add(NumCard, Fam, Im, Otch, DateR, Grach, DateP);
    end;
  end;
 Closefile(MaFile);
 
end;

procedure Form2.NazadBt_Click(sender: Object; e: EventArgs);

Var
 MaFile:file of MaTable;
 OneStr:MaTable;
 
begin
 
 AllTable.RowCount:=0;
 Assign(MaFile,'WorkFile.dat');
 Reset(MaFile);
   While not Eof(MaFile) do 
     begin
      Read(MaFile, OneStr);
      With OneStr do 
        begin
         AllTable.Rows.Add(NumCard, Fam, Im, Otch, DateR, Grach, DateP);
        end;
     end;
 Closefile(MaFile);
 
end;

procedure Form2.ExxBt_Click(sender: Object; e: EventArgs);
begin
  Form2.ActiveForm.Close;
end;

procedure Form2.Form2_Load(sender: Object; e: EventArgs);

Var
 MaFile:file of MaTable;
 OneStr:MaTable;
 
begin
  
  Assign(MaFile,'WorkFile.dat');
  Reset(MaFile);
  While not Eof(MaFile) do
   begin
    Read(MaFile,OneStr);
    With OneStr do
     begin
      AllTable.Rows.Add(NumCard, Fam, Im, Otch, DateR, Grach, DateP);
     end;
   end;
  Closefile(MaFile);
end;

end.
