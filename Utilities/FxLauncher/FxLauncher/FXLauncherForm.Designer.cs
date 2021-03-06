﻿namespace FxLauncher
{
    partial class FXLauncherForm
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.tabControl1 = new System.Windows.Forms.TabControl();
            this.browserTabPage = new System.Windows.Forms.TabPage();
            this.browserTreeView = new System.Windows.Forms.TreeView();
            this.mapsTreeView = new System.Windows.Forms.TreeView();
            //this.historyTreeView = new System.Windows.Forms.TreeView();
            //this.searchTreeView = new System.Windows.Forms.TreeView();
            //this.favoritesTreeView = new System.Windows.Forms.TreeView();
            this.historyTreeView = new TreeViewMultiSelect();
            this.searchTreeView = new TreeViewMultiSelect();
            this.favoritesTreeView = new TreeViewMultiSelect();
            this.cntx = new System.Windows.Forms.ContextMenu();
            this.openFile_menuItem = new System.Windows.Forms.MenuItem();
            this.clearTreeView_menuItem = new System.Windows.Forms.MenuItem();
            this.addToFavorite_menuItem = new System.Windows.Forms.MenuItem();
            this.copy_menuItem = new System.Windows.Forms.MenuItem();
            this.historyTabPage = new System.Windows.Forms.TabPage();
            this.searchTabpage = new System.Windows.Forms.TabPage();
            this.parseTree_menuItem = new System.Windows.Forms.MenuItem();
            this.mapTabpage = new System.Windows.Forms.TabPage();
            this.panel1 = new System.Windows.Forms.Panel();
            this.panel2 = new System.Windows.Forms.Panel();
            this.wireframeOn_ckbx = new System.Windows.Forms.CheckBox();
            this.killFx_btn = new System.Windows.Forms.Button();
            this.fxDebugOn_ckbx = new System.Windows.Forms.CheckBox();
            this.button1 = new System.Windows.Forms.Button();
            this.label1 = new System.Windows.Forms.Label();
            this.searchTXBX = new System.Windows.Forms.TextBox();
            this.favorite_tabpage = new System.Windows.Forms.TabPage();
            this.tabControl1.SuspendLayout();
            this.browserTabPage.SuspendLayout();
            this.historyTabPage.SuspendLayout();
            this.searchTabpage.SuspendLayout();
            this.mapTabpage.SuspendLayout();
            this.panel1.SuspendLayout();
            this.panel2.SuspendLayout();
            this.SuspendLayout();
            // 
            // tabControl1
            // 
            this.tabControl1.Controls.Add(this.browserTabPage);
            this.tabControl1.Controls.Add(this.historyTabPage);
            this.tabControl1.Controls.Add(this.searchTabpage);
            this.tabControl1.Controls.Add(this.favorite_tabpage);
            this.tabControl1.Dock = System.Windows.Forms.DockStyle.Fill;
            this.tabControl1.Location = new System.Drawing.Point(0, 73);
            this.tabControl1.Name = "tabControl1";
            this.tabControl1.SelectedIndex = 0;
            this.tabControl1.Size = new System.Drawing.Size(579, 660);
            this.tabControl1.TabIndex = 0;
            this.tabControl1.SelectedIndexChanged += new System.EventHandler(this.tabControl1_SelectedIndexChanged);
            // 
            // browserTabPage
            // 
            this.browserTabPage.Controls.Add(this.browserTreeView);
            this.browserTabPage.Location = new System.Drawing.Point(4, 22);
            this.browserTabPage.Name = "browserTabPage";
            this.browserTabPage.Padding = new System.Windows.Forms.Padding(3);
            this.browserTabPage.Size = new System.Drawing.Size(571, 634);
            this.browserTabPage.TabIndex = 0;
            this.browserTabPage.Tag = "c:\\game\\data\\fx";
            this.browserTabPage.Text = "Game";
            this.browserTabPage.UseVisualStyleBackColor = true;
            // 
            // browserTreeView
            // 
            this.browserTreeView.ContextMenu = this.cntx;
            this.browserTreeView.Dock = System.Windows.Forms.DockStyle.Fill;
            this.browserTreeView.Location = new System.Drawing.Point(3, 3);
            this.browserTreeView.Name = "browserTreeView";
            this.browserTreeView.Size = new System.Drawing.Size(565, 628);
            this.browserTreeView.TabIndex = 0;
            this.browserTreeView.MouseDoubleClick += new System.Windows.Forms.MouseEventHandler(this.treeView_MouseDoubleClick);
            this.browserTreeView.LostFocus += new System.EventHandler(this.treeView_LostFocus);
            this.browserTreeView.BeforeExpand += new System.Windows.Forms.TreeViewCancelEventHandler(this.treeView_BeforeExpand);
            this.browserTreeView.KeyUp += new System.Windows.Forms.KeyEventHandler(this.treeView_KeyUp);
            this.browserTreeView.GotFocus += new System.EventHandler(this.treeView_GotFocus);
            // 
            // historyTabPage
            // 
            this.historyTabPage.Controls.Add(this.historyTreeView);
            this.historyTabPage.Location = new System.Drawing.Point(4, 22);
            this.historyTabPage.Name = "historyTabPage";
            this.historyTabPage.Size = new System.Drawing.Size(571, 634);
            this.historyTabPage.TabIndex = 2;
            this.historyTabPage.Text = "FX History";
            this.historyTabPage.UseVisualStyleBackColor = true;
            // 
            // treeView3
            // 
            this.historyTreeView.ContextMenu = this.cntx;
            this.historyTreeView.Dock = System.Windows.Forms.DockStyle.Fill;
            this.historyTreeView.Location = new System.Drawing.Point(0, 0);
            this.historyTreeView.Name = "historyTreeView";
            this.historyTreeView.Size = new System.Drawing.Size(571, 634);
            this.historyTreeView.TabIndex = 0;
            this.historyTreeView.MouseDoubleClick += new System.Windows.Forms.MouseEventHandler(this.treeView_MouseDoubleClick);
            this.historyTreeView.LostFocus += new System.EventHandler(this.treeView_LostFocus);
            this.historyTreeView.KeyUp += new System.Windows.Forms.KeyEventHandler(this.treeView_KeyUp);
            this.historyTreeView.GotFocus += new System.EventHandler(this.treeView_GotFocus);
            // 
            // searchTabpage
            // 
            this.searchTabpage.Controls.Add(this.searchTreeView);
            this.searchTabpage.Location = new System.Drawing.Point(4, 22);
            this.searchTabpage.Name = "searchTabpage";
            this.searchTabpage.Size = new System.Drawing.Size(571, 634);
            this.searchTabpage.TabIndex = 3;
            this.searchTabpage.Text = "Search Results";
            this.searchTabpage.UseVisualStyleBackColor = true;
            // 
            // searchTreeView
            // 
            this.searchTreeView.ContextMenu = this.cntx;
            this.searchTreeView.Dock = System.Windows.Forms.DockStyle.Fill;
            this.searchTreeView.Location = new System.Drawing.Point(0, 0);
            this.searchTreeView.Name = "searchTreeView";
            this.searchTreeView.Size = new System.Drawing.Size(571, 634);
            this.searchTreeView.TabIndex = 0;
            this.searchTreeView.MouseDoubleClick += new System.Windows.Forms.MouseEventHandler(this.treeView_MouseDoubleClick);
            this.searchTreeView.LostFocus += new System.EventHandler(this.treeView_LostFocus);
            this.searchTreeView.KeyUp += new System.Windows.Forms.KeyEventHandler(this.treeView_KeyUp);
            this.searchTreeView.GotFocus += new System.EventHandler(this.treeView_GotFocus);
            // 
            // mapTabpage
            // 
            this.mapTabpage.Controls.Add(this.mapsTreeView);
            this.mapTabpage.Location = new System.Drawing.Point(4, 22);
            this.mapTabpage.Name = "mapTabpage";
            this.mapTabpage.Padding = new System.Windows.Forms.Padding(3);
            this.mapTabpage.Size = new System.Drawing.Size(571, 600);
            this.mapTabpage.TabIndex = 1;
            this.mapTabpage.Tag = "c:\\gamefix\\data\\fx";
            this.mapTabpage.Text = "Maps";
            this.mapTabpage.UseVisualStyleBackColor = true;
            // 
            // mapsTreeView
            // 
            this.mapsTreeView.ContextMenu = this.cntx;
            this.mapsTreeView.Dock = System.Windows.Forms.DockStyle.Fill;
            this.mapsTreeView.LineColor = System.Drawing.Color.Empty;
            this.mapsTreeView.Location = new System.Drawing.Point(3, 3);
            this.mapsTreeView.Name = "mapsTreeView";
            this.mapsTreeView.Size = new System.Drawing.Size(565, 594);
            this.mapsTreeView.TabIndex = 0;
            this.mapsTreeView.MouseDoubleClick += new System.Windows.Forms.MouseEventHandler(this.treeView_MouseDoubleClick);
            this.mapsTreeView.LostFocus += new System.EventHandler(this.treeView_LostFocus);
            this.mapsTreeView.GotFocus += new System.EventHandler(this.treeView_GotFocus);
            // 
            // panel1
            // 
            this.panel1.Controls.Add(this.panel2);
            this.panel1.Controls.Add(this.button1);
            this.panel1.Controls.Add(this.label1);
            this.panel1.Controls.Add(this.searchTXBX);
            this.panel1.Dock = System.Windows.Forms.DockStyle.Top;
            this.panel1.Location = new System.Drawing.Point(0, 0);
            this.panel1.Name = "panel1";
            this.panel1.Size = new System.Drawing.Size(579, 73);
            this.panel1.TabIndex = 1;
            // 
            // panel2
            // 
            this.panel2.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Left)
                        | System.Windows.Forms.AnchorStyles.Right)));
            this.panel2.BackColor = System.Drawing.SystemColors.ControlLight;
            this.panel2.Controls.Add(this.wireframeOn_ckbx);
            this.panel2.Controls.Add(this.killFx_btn);
            this.panel2.Controls.Add(this.fxDebugOn_ckbx);
            this.panel2.Location = new System.Drawing.Point(0, 36);
            this.panel2.Name = "panel2";
            this.panel2.Size = new System.Drawing.Size(579, 29);
            this.panel2.TabIndex = 5;
            // 
            // wireframeOn_ckbx
            // 
            this.wireframeOn_ckbx.AutoSize = true;
            this.wireframeOn_ckbx.Location = new System.Drawing.Point(109, 6);
            this.wireframeOn_ckbx.Name = "wireframeOn_ckbx";
            this.wireframeOn_ckbx.Size = new System.Drawing.Size(93, 17);
            this.wireframeOn_ckbx.TabIndex = 3;
            this.wireframeOn_ckbx.Text = "Wireframe ON";
            this.wireframeOn_ckbx.UseVisualStyleBackColor = true;
            this.wireframeOn_ckbx.CheckedChanged += new System.EventHandler(this.wireframeOn_ckbx_CheckedChanged);
            // 
            // killFx_btn
            // 
            this.killFx_btn.Location = new System.Drawing.Point(466, 3);
            this.killFx_btn.Name = "killFx_btn";
            this.killFx_btn.Size = new System.Drawing.Size(101, 23);
            this.killFx_btn.TabIndex = 4;
            this.killFx_btn.Text = "Kill Fx";
            this.killFx_btn.UseVisualStyleBackColor = true;
            this.killFx_btn.Click += new System.EventHandler(this.killFx_btn_Click);
            // 
            // fxDebugOn_ckbx
            // 
            this.fxDebugOn_ckbx.AutoSize = true;
            this.fxDebugOn_ckbx.Location = new System.Drawing.Point(12, 6);
            this.fxDebugOn_ckbx.Name = "fxDebugOn_ckbx";
            this.fxDebugOn_ckbx.Size = new System.Drawing.Size(91, 17);
            this.fxDebugOn_ckbx.TabIndex = 3;
            this.fxDebugOn_ckbx.Text = "Fx Debug ON";
            this.fxDebugOn_ckbx.UseVisualStyleBackColor = true;
            this.fxDebugOn_ckbx.CheckedChanged += new System.EventHandler(this.fxDebugOn_ckbx_CheckedChanged);
            // 
            // button1
            // 
            this.button1.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Right)));
            this.button1.Location = new System.Drawing.Point(466, 8);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(101, 23);
            this.button1.TabIndex = 2;
            this.button1.Text = "Rebuild Fx Cache";
            this.button1.UseVisualStyleBackColor = true;
            this.button1.Click += new System.EventHandler(this.refreshCache_Click);
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(13, 13);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(55, 13);
            this.label1.TabIndex = 1;
            this.label1.Text = "Fx Search";
            // 
            // searchTXBX
            // 
            this.searchTXBX.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Left)
                        | System.Windows.Forms.AnchorStyles.Right)));
            this.searchTXBX.Location = new System.Drawing.Point(74, 10);
            this.searchTXBX.Name = "searchTXBX";
            this.searchTXBX.Size = new System.Drawing.Size(364, 20);
            this.searchTXBX.TabIndex = 0;
            this.searchTXBX.KeyDown += new System.Windows.Forms.KeyEventHandler(this.searchTXBX_KeyDown);
            // 
            // favorite_tabpage
            // 
            this.favorite_tabpage.Controls.Add(this.favoritesTreeView);
            this.favorite_tabpage.Location = new System.Drawing.Point(4, 22);
            this.favorite_tabpage.Name = "favorite_tabpage";
            this.favorite_tabpage.Size = new System.Drawing.Size(571, 634);
            this.favorite_tabpage.TabIndex = 4;
            this.favorite_tabpage.Text = "Favorite";
            this.favorite_tabpage.UseVisualStyleBackColor = true;
            // 
            // searchTreeView
            // 
            this.favoritesTreeView.ContextMenu = this.cntx;
            this.favoritesTreeView.Dock = System.Windows.Forms.DockStyle.Fill;
            this.favoritesTreeView.Location = new System.Drawing.Point(0, 0);
            this.favoritesTreeView.Name = "favoritesTreeView";
            this.favoritesTreeView.Size = new System.Drawing.Size(571, 634);
            this.favoritesTreeView.TabIndex = 0;
            this.favoritesTreeView.MouseDoubleClick += new System.Windows.Forms.MouseEventHandler(this.treeView_MouseDoubleClick);
            this.favoritesTreeView.LostFocus += new System.EventHandler(this.treeView_LostFocus);
            this.favoritesTreeView.KeyUp += new System.Windows.Forms.KeyEventHandler(this.treeView_KeyUp);
            this.favoritesTreeView.GotFocus += new System.EventHandler(this.treeView_GotFocus);
            // 
            // cntx
            // 
            this.cntx.MenuItems.AddRange(new System.Windows.Forms.MenuItem[] {
            this.openFile_menuItem});
            this.cntx.Popup += new System.EventHandler(this.cntx_Popup);
            // 
            // menuItem1
            // 
            this.openFile_menuItem.Index = 0;
            this.openFile_menuItem.Text = "Open File";
            this.openFile_menuItem.Click += new System.EventHandler(this.openFile_menuItem_Click);
            // 
            // parseTree_menuItem
            // 
            this.parseTree_menuItem.Index = -1;
            this.parseTree_menuItem.Text = "Parse FX Tree";
            this.parseTree_menuItem.Click += new System.EventHandler(this.parseTree_menuItem_Click);
            // 
            // clearHistory_menuItem
            // 
            this.clearTreeView_menuItem.Index = -1;
            this.clearTreeView_menuItem.Text = "Clear List";
            this.clearTreeView_menuItem.Click += new System.EventHandler(this.clearTreeView_Click);
            // 
            // copy_menuItem
            // 
            this.copy_menuItem.Index = -1;
            this.copy_menuItem.Text = "Copy Selected to Clipboard";
            this.copy_menuItem.Click += new System.EventHandler(this.copy_Click);
            // 
            // addToFavorite_menuItem
            // 
            this.addToFavorite_menuItem.Index = -1;
            this.addToFavorite_menuItem.Text = "Add to Favorite";
            this.addToFavorite_menuItem.Click += new System.EventHandler(this.addToFavorite_Click);
            // 
            // FXLauncherForm
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(579, 733);
            this.Controls.Add(this.tabControl1);
            this.Controls.Add(this.panel1);
            this.Name = "FXLauncherForm";
            this.Text = "FX Launcher";
            this.tabControl1.ResumeLayout(false);
            this.browserTabPage.ResumeLayout(false);
            this.historyTabPage.ResumeLayout(false);
            this.searchTabpage.ResumeLayout(false);
            this.mapTabpage.ResumeLayout(false);
            this.panel1.ResumeLayout(false);
            this.panel1.PerformLayout();
            this.panel2.ResumeLayout(false);
            this.panel2.PerformLayout();
            this.ResumeLayout(false);

        }


        #endregion

        private System.Windows.Forms.TabControl tabControl1;
        private System.Windows.Forms.TabPage browserTabPage;
        private System.Windows.Forms.TreeView browserTreeView;
        private System.Windows.Forms.TreeView mapsTreeView;
        //private System.Windows.Forms.TreeView historyTreeView;
        //private System.Windows.Forms.TreeView searchTreeView;
        //private System.Windows.Forms.TreeView favoritesTreeView;
        private TreeViewMultiSelect historyTreeView;
        private TreeViewMultiSelect searchTreeView;
        private TreeViewMultiSelect favoritesTreeView;
        private System.Windows.Forms.TabPage mapTabpage;
        private System.Windows.Forms.ImageList imgList;
        private System.Windows.Forms.TabPage historyTabPage;
        private System.Windows.Forms.ContextMenu cntx;
        private System.Windows.Forms.MenuItem openFile_menuItem;
        private System.Windows.Forms.MenuItem copy_menuItem;
        private System.Windows.Forms.MenuItem addToFavorite_menuItem;
        private System.Windows.Forms.MenuItem parseTree_menuItem;
        private System.Windows.Forms.MenuItem clearTreeView_menuItem;
        private System.Windows.Forms.Panel panel1;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.TextBox searchTXBX;
        private System.Windows.Forms.TabPage searchTabpage;
        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.CheckBox fxDebugOn_ckbx;
        private System.Windows.Forms.CheckBox wireframeOn_ckbx;
        private System.Windows.Forms.Button killFx_btn;
        private System.Windows.Forms.Panel panel2;
        private System.Windows.Forms.TabPage favorite_tabpage;

    }
}

