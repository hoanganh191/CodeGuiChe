/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package LabMenu;

import java.awt.BorderLayout;
import java.awt.Dimension;
import java.awt.Image;
import java.awt.event.InputEvent;
import java.awt.event.KeyEvent;
import javax.swing.ImageIcon;
import javax.swing.JButton;
import javax.swing.JComboBox;
import javax.swing.JFrame;
import javax.swing.JMenu;
import javax.swing.JMenuBar;
import javax.swing.JMenuItem;
import javax.swing.JToolBar;
import javax.swing.KeyStroke;

/**
 *
 * @author Hoang_Anh
 */
public class MenuNetBean extends JFrame {

    private JMenuBar menuBar;

    public MenuNetBean() {
        initGUI();
        initMenuBar();
        initToolBar();
        this.setVisible(true);
    }

    private void initGUI() {
        this.setSize(1200, 800);
        this.setLocationRelativeTo(null);
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setTitle("Menu NetBeans");
        this.setAlwaysOnTop(true);
        this.setLayout(new BorderLayout());

    }

    private void initMenuBar() {
        menuBar = new JMenuBar();
        initMenuFile();
        this.setJMenuBar(menuBar);
    }

    private void initToolBar() {
        JToolBar toolBar = new JToolBar();
        toolBar.setFloatable(false);

        JButton btnNewFile = new JButton(resizeImageIcon(new ImageIcon("D:/imgNetBean/newfile.jpg"), 40, 40));
        btnNewFile.setToolTipText("New File");

        JButton btnNewProject = new JButton(resizeImageIcon(new ImageIcon("D:/imgNetBean/newproject.png"), 40, 40));
        btnNewProject.setToolTipText("New Project");

        JButton btnOpenProject = new JButton(resizeImageIcon(new ImageIcon("D:/imgNetBean/openproject.png"), 40, 40));
        btnOpenProject.setToolTipText("Open Project");

        JButton btnSaveAll = new JButton(resizeImageIcon(new ImageIcon("D:/imgNetBean/save-all.jpg"), 40, 40));
        btnSaveAll.setToolTipText("Save All");

        JButton btnUndo = new JButton(resizeImageIcon(new ImageIcon("D:/imgNetBean/undo.png"), 40, 40));
        btnUndo.setToolTipText("Undo");

        JButton btnRedo = new JButton(resizeImageIcon(new ImageIcon("D:/imgNetBean/redo.png"), 40, 40));
        btnRedo.setToolTipText("Redo");

        JButton earth = new JButton(resizeImageIcon(new ImageIcon("D:/imgNetBean/earth-icon.png"), 40, 40));
        earth.setToolTipText("Earth");

        JButton btnBuild = new JButton(resizeImageIcon(new ImageIcon("D:/imgNetBean/buid.png"), 40, 40));
        btnBuild.setToolTipText("Build Project");

        JButton btnCleanBuild = new JButton(resizeImageIcon(new ImageIcon("D:/imgNetBean/cleanBuild.png"), 40, 40));
        btnCleanBuild.setToolTipText("Clean and Build Project");

        JButton btnRun = new JButton(resizeImageIcon(new ImageIcon("D:/imgNetBean/run.png"), 40, 40));
        btnRun.setToolTipText("Run Project");

        JButton btnRebuild = new JButton(resizeImageIcon(new ImageIcon("D:/imgNetBean/rebuid.png"), 40, 40));
        btnRebuild.setToolTipText("Run File");

        JButton btnDebugFile = new JButton(resizeImageIcon(new ImageIcon("D:/imgNetBean/debug.png"), 40, 40));
        btnDebugFile.setToolTipText("Debug File");

        JButton btnUse = new JButton(resizeImageIcon(new ImageIcon("D:/imgNetBean/use.png"), 80, 40));
        btnRedo.setToolTipText("Use");
        
        JButton btnProfile = new JButton(resizeImageIcon(new ImageIcon("D:/imgNetBean/apache-netbeans.jpg"), 40, 40));
        btnProfile.setToolTipText("Netbean Project");

        JButton btnPause = new JButton(resizeImageIcon(new ImageIcon("D:/imgNetBean/apache-netbeans.jpg"), 40, 40));
        btnProfile.setToolTipText("Netbean Pause");

        //Thứ tự đầu vào ở đây
        toolBar.add(btnNewFile);
        toolBar.add(btnNewProject);
        toolBar.add(btnOpenProject);
        toolBar.add(btnSaveAll);
        toolBar.addSeparator(new Dimension(10, 0));
        toolBar.add(btnUndo);
        toolBar.add(btnRedo);
        String[] options = {"Deafault config", "customize"};
        JComboBox<String> comboBox = new JComboBox<>(options);
        toolBar.add(comboBox);
        toolBar.add(earth);
        toolBar.add(btnBuild);
        toolBar.add(btnCleanBuild);
        toolBar.add(btnRun);
        toolBar.add(btnRebuild);
        toolBar.add(btnDebugFile);
        toolBar.addSeparator(new Dimension(10, 0));
        toolBar.add(btnUse);
        toolBar.add(btnProfile);
        toolBar.add(btnPause);

        add(toolBar, BorderLayout.NORTH);

    }

    private void initMenuFile() {
        JMenu menuFile = new JMenu("File");
        createMenuItem(menuFile);
        menuBar.add(menuFile);

        JMenu menuEdit = new JMenu("Edit");
        menuBar.add(menuEdit);
        createMenuItem(menuEdit);

        JMenu menuView = new JMenu("View");
        menuBar.add(menuView);
        createMenuItem(menuView);

        JMenu menuNavigate = new JMenu("Navigate");
        menuBar.add(menuNavigate);
        createMenuItem(menuNavigate);

        JMenu menuSource = new JMenu("Source");
        menuBar.add(menuSource);
        createMenuItem(menuSource);

        JMenu menuRefactor = new JMenu("Refactor");
        menuBar.add(menuRefactor);
        createMenuItem(menuRefactor);

        JMenu menuRun = new JMenu("Run");
        menuBar.add(menuRun);
        createMenuItem(menuRun);

        JMenu menuDebug = new JMenu("Debug");
        menuBar.add(menuDebug);
        createMenuItem(menuDebug);

        JMenu menuProfile = new JMenu("Profile");
        menuBar.add(menuProfile);
        createMenuItem(menuProfile);

        JMenu menuTeam = new JMenu("Team");
        menuBar.add(menuTeam);
        createMenuItem(menuTeam);

        JMenu menuTool = new JMenu("Tool");
        menuBar.add(menuTool);
        createMenuItem(menuTool);

        JMenu menuWindow = new JMenu("Window");
        menuBar.add(menuWindow);
        createMenuItem(menuWindow);

        JMenu menuHelp = new JMenu("Help");
        menuBar.add(menuHelp);
        createMenuItem(menuHelp);

    }

    private ImageIcon resizeImageIcon(ImageIcon icon, int width, int height) {
        Image image = icon.getImage();
        image = image.getScaledInstance(width, height, Image.SCALE_SMOOTH);
        return new ImageIcon(image);
    }

    public static void main(String[] args) {
        MenuNetBean menu = new MenuNetBean();
    }

    private void createMenuItem(JMenu menuFile) {

        ImageIcon iconNewFile = new ImageIcon("D:/imgNetBean/newfile.jpg");
        iconNewFile = resizeImageIcon(iconNewFile, 16, 16);
        JMenuItem newFile = new JMenuItem("New File", iconNewFile);
        newFile.setAccelerator(KeyStroke.getKeyStroke(KeyEvent.VK_L, InputEvent.CTRL_DOWN_MASK));
        menuFile.add(newFile);

        ImageIcon iconNewProject = new ImageIcon("D:/imgNetBean/openproject.png");
        iconNewProject = resizeImageIcon(iconNewProject, 16, 16);
        JMenuItem newProject = new JMenuItem("New Project", iconNewProject);
        newProject.setAccelerator(KeyStroke.getKeyStroke(KeyEvent.VK_N, InputEvent.CTRL_DOWN_MASK));
        menuFile.add(newProject);

        JMenu menuOpenRecentFile = new JMenu("Open Recent File");
        ImageIcon iconFile1 = resizeImageIcon(new ImageIcon("D:/imgNetBean/newfile.jpg"), 16, 16);
        JMenuItem file1 = new JMenuItem("File 1", iconFile1);
        file1.setAccelerator(KeyStroke.getKeyStroke(KeyEvent.VK_O, InputEvent.CTRL_DOWN_MASK));
        menuOpenRecentFile.add(file1);

        ImageIcon iconFile2 = resizeImageIcon(new ImageIcon("D:/imgNetBean/newfile.jpg"), 16, 16);
        JMenuItem file2 = new JMenuItem("File 2", iconFile2);
        file2.setAccelerator(KeyStroke.getKeyStroke(KeyEvent.VK_M, InputEvent.CTRL_DOWN_MASK));
        menuOpenRecentFile.add(file2);

        menuFile.add(menuOpenRecentFile);
        menuBar.add(menuFile);

        menuFile.add(menuOpenRecentFile);
        menuBar.add(menuFile);

    }

}