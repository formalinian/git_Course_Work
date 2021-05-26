procedure InitializeComponent;
    begin
        self.InfoButton := new System.Windows.Forms.Button();
        self.ToTableBtn := new System.Windows.Forms.Button();
        self.ExitButton := new System.Windows.Forms.Button();
        self.StartFormLabel := new System.Windows.Forms.Label();
        self.SuspendLayout();
        // 
        // InfoButton
        // 
        self.InfoButton.Font := new System.Drawing.Font('Microsoft Sans Serif', 10, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.InfoButton.Location := new System.Drawing.Point(424, 242);
        self.InfoButton.Name := 'InfoButton';
        self.InfoButton.Size := new System.Drawing.Size(168, 66);
        self.InfoButton.TabIndex := 0;
        self.InfoButton.Text := 'Информация';
        self.InfoButton.UseVisualStyleBackColor := true;
        self.InfoButton.Click += InfoButton_Click;
        // 
        // ToTableBtn
        // 
        self.ToTableBtn.Font := new System.Drawing.Font('Microsoft Sans Serif', 10, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.ToTableBtn.Location := new System.Drawing.Point(424, 170);
        self.ToTableBtn.Name := 'ToTableBtn';
        self.ToTableBtn.Size := new System.Drawing.Size(168, 66);
        self.ToTableBtn.TabIndex := 1;
        self.ToTableBtn.Text := 'Перейти к таблице';
        self.ToTableBtn.UseVisualStyleBackColor := true;
        self.ToTableBtn.Click += ToTableBtn_Click;
        // 
        // ExitButton
        // 
        self.ExitButton.Font := new System.Drawing.Font('Microsoft Sans Serif', 10, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.ExitButton.Location := new System.Drawing.Point(424, 315);
        self.ExitButton.Name := 'ExitButton';
        self.ExitButton.Size := new System.Drawing.Size(168, 66);
        self.ExitButton.TabIndex := 2;
        self.ExitButton.Text := 'Выход';
        self.ExitButton.UseVisualStyleBackColor := true;
        self.ExitButton.Click += ExitButton_Click;
        // 
        // StartFormLabel
        // 
        self.StartFormLabel.Font := new System.Drawing.Font('Microsoft Sans Serif', 50, (System.Drawing.FontStyle((System.Drawing.FontStyle.Bold or System.Drawing.FontStyle.Underline))), System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.StartFormLabel.Location := new System.Drawing.Point(301, 43);
        self.StartFormLabel.Name := 'StartFormLabel';
        self.StartFormLabel.Size := new System.Drawing.Size(415, 103);
        self.StartFormLabel.TabIndex := 3;
        self.StartFormLabel.Text := 'Метрология';
        // 
        // StartForm
        // 
        self.ClientSize := new System.Drawing.Size(1016, 550);
        self.Controls.Add(self.StartFormLabel);
        self.Controls.Add(self.ExitButton);
        self.Controls.Add(self.ToTableBtn);
        self.Controls.Add(self.InfoButton);
        self.Name := 'StartForm';
        self.Text := 'КП Леонов';
        self.ResumeLayout(false);
    end;
