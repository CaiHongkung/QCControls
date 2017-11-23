#pragma once
//�����Ҫ�Զ���ؼ�����ۣ�����ʹ��QStyle ��ִ�пؼ��Ĳ��ֻ��ƣ�����:
/*drawItemText(), drawItemPixmap(), drawPrimitive(), drawControl(), drawComplexControl().

һ��QStyle���ƺ�����Ҫ�����ĸ�������
1 һ��ö�ٱ���ָ���Ĳ���Ԫ����Ҫ���ƣ�
2 һ��QStyleOptionָ�� ���� �� �����ȾԪ��
3 QPainter ��������Ԫ��
4 QWidget ����ͼ��ִ�ж��󣨿�ѡ��*/

//ö�ٱ��� ComplexControl �� ���Ͱ����ڸ��ӿؼ���ͬλ�õ�����£��в�ͬ��Ч��SubControl �� drawComplexControl()
/*QStyle::CC_SpinBox      A spinbox, like QSpinBox.
QStyle::CC_ComboBox     A combobox, like QComboBox.
QStyle::CC_ScrollBar    A scroll bar, like QScrollBar.
QStyle::CC_Slider       A slider, like QSlider.
QStyle::CC_ToolButton   A tool button, like QToolButton.
QStyle::CC_TitleBar     A Title bar, like those used in QMdiSubWindow.
QStyle::CC_GroupBox     A group box, like QGroupBox.
QStyle::CC_Dial         A dial, like QDial.
QStyle::CC_MdiControls  The minimize, close, and normal button in the menu bar for a maximized MDI subwindow.
QStyle::CC_CustomBase   Base value for custom complex controls. Custom values must be greater than this value.*/

//ContentsType �������ͣ��������㲻ͬ�ؼ����ݵĳߴ硣ʹ�� sizeFromContents()
/*
QStyle::CT_CheckBox
QStyle::CT_ComboBox
QStyle::CT_HeaderSection
QStyle::CT_LineEdit
QStyle::CT_Menu
QStyle::CT_MenuBar
QStyle::CT_MenuBarItem
QStyle::CT_MenuItem
QStyle::CT_ProgressBar
QStyle::CT_PushButton
QStyle::CT_RadioButton
QStyle::CT_SizeGrip
QStyle::CT_Slider
QStyle::CT_ScrollBar
QStyle::CT_SpinBox
QStyle::CT_Splitter
QStyle::CT_TabBarTab
QStyle::CT_TabWidget
QStyle::CT_ToolButton
QStyle::CT_GroupBox
QStyle::CT_ItemViewItem
QStyle::CT_CustomBase
QStyle::CT_MdiControls*/
//ControlElement �ؼ���ĳһ����Ԫ�� drawControl()
/*
QStyle::CE_PushButton
QStyle::CE_PushButtonBevel
QStyle::CE_PushButtonLabel
QStyle::CE_DockWidgetTitle
QStyle::CE_Splitter
QStyle::CE_CheckBox
QStyle::CE_CheckBoxLabel
QStyle::CE_RadioButton
QStyle::CE_RadioButtonLabel
QStyle::CE_TabBarTab
QStyle::CE_TabBarTabShape
QStyle::CE_TabBarTabLabel
QStyle::CE_ProgressBar
QStyle::CE_ProgressBarGroove
QStyle::CE_ProgressBarContents
QStyle::CE_ProgressBarLabel
QStyle::CE_ToolButtonLabel
QStyle::CE_MenuBarItem
QStyle::CE_MenuBarEmptyArea
QStyle::CE_MenuItem
QStyle::CE_MenuScroller
QStyle::CE_MenuTearoff
QStyle::CE_MenuEmptyArea
QStyle::CE_MenuHMargin
QStyle::CE_MenuVMargin
QStyle::CE_ToolBoxTab
QStyle::CE_SizeGrip
QStyle::CE_Header
QStyle::CE_HeaderSection
QStyle::CE_HeaderLabel
QStyle::CE_ScrollBarAddLine
QStyle::CE_ScrollBarSubLine
QStyle::CE_ScrollBarAddPage
QStyle::CE_ScrollBarSubPage
QStyle::CE_ScrollBarSlider
QStyle::CE_ScrollBarFirst
QStyle::CE_ScrollBarLast
QStyle::CE_RubberBand
QStyle::CE_FocusFrame
QStyle::CE_ItemViewItem
QStyle::CE_CustomBase
QStyle::CE_ComboBoxLabel
QStyle::CE_ToolBar
QStyle::CE_ToolBoxTabShape
QStyle::CE_ToolBoxTabLabel
QStyle::CE_HeaderEmptyArea
QStyle::CE_ShapedFrame*/
//PixelMetric ����ֵ pixelMetric()
/*QStyle::PM_ButtonMargin
QStyle::PM_DockWidgetTitleBarButtonMargin
QStyle::PM_ButtonDefaultIndicator
QStyle::PM_MenuButtonIndicator
QStyle::PM_ButtonShiftHorizontal
QStyle::PM_ButtonShiftVertical
QStyle::PM_DefaultFrameWidth
QStyle::PM_SpinBoxFrameWidth
QStyle::PM_ComboBoxFrameWidth
QStyle::PM_MDIFrameWidth
QStyle::PM_MdiSubWindowFrameWidth
QStyle::PM_MDIMinimizedWidth
QStyle::PM_MdiSubWindowMinimizedWidth
QStyle::PM_LayoutLeftMargin
QStyle::PM_LayoutTopMargin
QStyle::PM_LayoutRightMargin
QStyle::PM_LayoutBottomMargin
QStyle::PM_LayoutHorizontalSpacing
QStyle::PM_LayoutVerticalSpacing
QStyle::PM_MaximumDragDistance
QStyle::PM_ScrollBarExtent
QStyle::PM_ScrollBarSliderMin
QStyle::PM_SliderThickness
QStyle::PM_SliderControlThickness
QStyle::PM_SliderLength
QStyle::PM_SliderTickmarkOffset
QStyle::PM_SliderSpaceAvailable
QStyle::PM_DockWidgetSeparatorExtent
QStyle::PM_DockWidgetHandleExtent
QStyle::PM_DockWidgetFrameWidth
QStyle::PM_DockWidgetTitleMargin
QStyle::PM_MenuBarPanelWidth
QStyle::PM_MenuBarItemSpacing
QStyle::PM_MenuBarHMargin
QStyle::PM_MenuBarVMargin
QStyle::PM_ToolBarFrameWidth
QStyle::PM_ToolBarHandleExtent
QStyle::PM_ToolBarItemMargin
QStyle::PM_ToolBarItemSpacing
QStyle::PM_ToolBarSeparatorExtent
QStyle::PM_ToolBarExtensionExtent
QStyle::PM_TabBarTabOverlap
QStyle::PM_TabBarTabHSpace
QStyle::PM_TabBarTabVSpace
QStyle::PM_TabBarBaseHeight
QStyle::PM_TabBarBaseOverlap
QStyle::PM_TabBarScrollButtonWidth
QStyle::PM_TabBarTabShiftHorizontal
QStyle::PM_TabBarTabShiftVertical
QStyle::PM_ProgressBarChunkWidth
QStyle::PM_SplitterWidth
QStyle::PM_TitleBarHeight
QStyle::PM_IndicatorWidth
QStyle::PM_IndicatorHeight
QStyle::PM_ExclusiveIndicatorWidth
QStyle::PM_ExclusiveIndicatorHeight
QStyle::PM_MenuPanelWidth
QStyle::PM_MenuHMargin
QStyle::PM_MenuVMargin
QStyle::PM_MenuScrollerHeight
QStyle::PM_MenuTearoffHeight
QStyle::PM_MenuDesktopFrameWidth
QStyle::PM_HeaderMarkSize
QStyle::PM_HeaderGripMargin
QStyle::PM_HeaderMargin
QStyle::PM_SpinBoxSliderHeight
QStyle::PM_ToolBarIconSize
QStyle::PM_SmallIconSize
QStyle::PM_LargeIconSize
QStyle::PM_FocusFrameHMargin
QStyle::PM_FocusFrameVMargin
QStyle::PM_IconViewIconSize
QStyle::PM_ListViewIconSize
QStyle::PM_ToolTipLabelFrameWidth
QStyle::PM_CheckBoxLabelSpacing
QStyle::PM_RadioButtonLabelSpacing
QStyle::PM_TabBarIconSize
QStyle::PM_SizeGripSize
QStyle::PM_MessageBoxIconSize
QStyle::PM_ButtonIconSize
QStyle::PM_TextCursorWidth
QStyle::PM_TabBar_ScrollButtonOverlap
QStyle::PM_TabCloseIndicatorWidth
QStyle::PM_TabCloseIndicatorHeight
QStyle::PM_ScrollView_ScrollBarSpacing
QStyle::PM_ScrollView_ScrollBarOverlap
QStyle::PM_SubMenuOverlap
QStyle::PM_TreeViewIndentation
QStyle::PM_HeaderDefaultSectionSizeHorizontal
QStyle::PM_HeaderDefaultSectionSizeVertical
QStyle::PM_TitleBarButtonIconSize
QStyle::PM_TitleBarButtonSize
QStyle::PM_CustomBase*/
//PrimitiveElement ��Ԫ����һ��ͨ��GUIԪ�أ�����checkboxָʾ�����߰�ť��б�ǣ�bevel��drawPrimitive()
/*
QStyle::PE_FrameStatusBar
QStyle::PE_PanelButtonCommand
QStyle::PE_FrameDefaultButton
QStyle::PE_PanelButtonBevel
QStyle::PE_PanelButtonTool
QStyle::PE_PanelLineEdit
QStyle::PE_IndicatorButtonDropDown
QStyle::PE_FrameFocusRect
QStyle::PE_IndicatorArrowUp
QStyle::PE_IndicatorArrowDown
QStyle::PE_IndicatorArrowRight
QStyle::PE_IndicatorArrowLeft
QStyle::PE_IndicatorSpinUp
QStyle::PE_IndicatorSpinDown
QStyle::PE_IndicatorSpinPlus
QStyle::PE_IndicatorSpinMinus
QStyle::PE_IndicatorItemViewItemCheck
QStyle::PE_IndicatorCheckBox
QStyle::PE_IndicatorRadioButton
QStyle::PE_IndicatorDockWidgetResizeHandle
QStyle::PE_Frame
QStyle::PE_FrameMenu
QStyle::PE_PanelMenuBar
QStyle::PE_PanelScrollAreaCorner
QStyle::PE_FrameDockWidget
QStyle::PE_FrameTabWidget
QStyle::PE_FrameLineEdit
QStyle::PE_FrameGroupBox
QStyle::PE_FrameButtonBevel
QStyle::PE_FrameButtonTool
QStyle::PE_IndicatorHeaderArrow
QStyle::PE_FrameStatusBarItem
QStyle::PE_FrameWindow
QStyle::PE_IndicatorMenuCheckMark
QStyle::PE_IndicatorProgressChunk
QStyle::PE_IndicatorBranch
QStyle::PE_IndicatorToolBarHandle
QStyle::PE_IndicatorToolBarSeparator
QStyle::PE_PanelToolBar
QStyle::PE_PanelTipLabel
QStyle::PE_FrameTabBarBase
QStyle::PE_IndicatorTabTear
QStyle::PE_IndicatorTabTearLeft
QStyle::PE_IndicatorTabTearRight
QStyle::PE_IndicatorColumnViewArrow
QStyle::PE_Widget
QStyle::PE_CustomBase
QStyle::PE_IndicatorItemViewItemDrop
QStyle::PE_PanelItemViewItem
QStyle::PE_PanelItemViewRow
QStyle::PE_PanelStatusBar
QStyle::PE_IndicatorTabClose
QStyle::PE_PanelMenu
*/
//RequestSoftwareInputPanel: ��������ʲô�����һ�����������屻��ҪQInputMethod����
/*
QStyle::RSIP_OnMouseClickAndAlreadyFocused  ��������һ�ȡ����
QStyle::RSIP_OnMouseClick                   �����
*/
//StandardPixmap:��ʾ���Ի�ȡ�ı�׼ͼ��standardIcon()
/*

QStyle::SP_TitleBarMinButton
QStyle::SP_TitleBarMenuButton
QStyle::SP_TitleBarMaxButton
QStyle::SP_TitleBarCloseButton
QStyle::SP_TitleBarNormalButton
QStyle::SP_TitleBarShadeButton
QStyle::SP_TitleBarUnshadeButton
QStyle::SP_TitleBarContextHelpButton
QStyle::SP_MessageBoxInformation
QStyle::SP_MessageBoxWarning
QStyle::SP_MessageBoxCritical
QStyle::SP_MessageBoxQuestion
QStyle::SP_DesktopIcon
QStyle::SP_TrashIcon
QStyle::SP_ComputerIcon
QStyle::SP_DriveFDIcon
QStyle::SP_DriveHDIcon
QStyle::SP_DriveCDIcon
QStyle::SP_DriveDVDIcon
QStyle::SP_DriveNetIcon
QStyle::SP_DirHomeIcon
QStyle::SP_DirOpenIcon
QStyle::SP_DirClosedIcon
QStyle::SP_DirIcon
QStyle::SP_DirLinkIcon
QStyle::SP_DirLinkOpenIcon
QStyle::SP_FileIcon
QStyle::SP_FileLinkIcon
QStyle::SP_FileDialogStart
QStyle::SP_FileDialogEnd
QStyle::SP_FileDialogToParent
QStyle::SP_FileDialogNewFolder
QStyle::SP_FileDialogDetailedView
QStyle::SP_FileDialogInfoView
QStyle::SP_FileDialogContentsView
QStyle::SP_FileDialogListView
QStyle::SP_FileDialogBack
QStyle::SP_DockWidgetCloseButton
QStyle::SP_ToolBarHorizontalExtensionButton
QStyle::SP_ToolBarVerticalExtensionButton
QStyle::SP_DialogOkButton
QStyle::SP_DialogCancelButton
QStyle::SP_DialogHelpButton
QStyle::SP_DialogOpenButton
QStyle::SP_DialogSaveButton
QStyle::SP_DialogCloseButton
QStyle::SP_DialogApplyButton
QStyle::SP_DialogResetButton
QStyle::SP_DialogDiscardButton
QStyle::SP_DialogYesButton
QStyle::SP_DialogNoButton
QStyle::SP_ArrowUp
QStyle::SP_ArrowDown
QStyle::SP_ArrowLeft
QStyle::SP_ArrowRight
QStyle::SP_ArrowBack
QStyle::SP_ArrowForward
QStyle::SP_CommandLink
QStyle::SP_VistaShield
QStyle::SP_BrowserReload
QStyle::SP_BrowserStop
QStyle::SP_MediaPlay
QStyle::SP_MediaStop
QStyle::SP_MediaPause
QStyle::SP_MediaSkipForward
QStyle::SP_MediaSkipBackward
QStyle::SP_MediaSeekForward
QStyle::SP_MediaSeekBackward
QStyle::SP_MediaVolume
QStyle::SP_MediaVolumeMuted
QStyle::SP_LineEditClearButton
QStyle::SP_CustomBase

*/
//StateFlag (flags QStyle::state) ��ʾ�����Ƽ�Ԫ��ʱʹ�õ���flags�����������м�Ԫ��ʹ�����е���Щflags��
//ͬһ��flags�ڲ�ͬitems����ͬ���塣���״̬������QFlags drawPrimitive()
/*
QStyle::State_None
QStyle::State_Active
QStyle::State_AutoRaise
QStyle::State_Children
QStyle::State_DownArrow
QStyle::State_Editing
QStyle::State_Enabled
QStyle::State_HasEditFocus
QStyle::State_HasFocus
QStyle::State_Horizontal
QStyle::State_KeyboardFocusChange
QStyle::State_MouseOver
QStyle::State_NoChange
QStyle::State_Off
QStyle::State_On
QStyle::State_Raised
QStyle::State_ReadOnly
QStyle::State_Selected
QStyle::State_Item
QStyle::State_Open
QStyle::State_Sibling
QStyle::State_Sunken
QStyle::State_UpArrow
QStyle::State_Mini
QStyle::State_Small
*/
//StyleHint ��ʽ��ʾ��look and/or feel hint,styleHint()
/*

QStyle::SH_EtchDisabledText
QStyle::SH_DitherDisabledText
QStyle::SH_ScrollBar_ContextMenu
QStyle::SH_ScrollBar_MiddleClickAbsolutePosition
QStyle::SH_ScrollBar_LeftClickAbsolutePosition
QStyle::SH_ScrollBar_ScrollWhenPointerLeavesControl
QStyle::SH_ScrollBar_RollBetweenButtons
QStyle::SH_TabBar_Alignment
QStyle::SH_Header_ArrowAlignment
QStyle::SH_Slider_SnapToValue
QStyle::SH_Slider_SloppyKeyEvents
QStyle::SH_ProgressDialog_CenterCancelButton
QStyle::SH_ProgressDialog_TextLabelAlignment
QStyle::SH_PrintDialog_RightAlignButtons
QStyle::SH_MainWindow_SpaceBelowMenuBar
QStyle::SH_FontDialog_SelectAssociatedText
QStyle::SH_Menu_KeyboardSearch
QStyle::SH_Menu_AllowActiveAndDisabled
QStyle::SH_Menu_SpaceActivatesItem
QStyle::SH_Menu_SubMenuPopupDelay
QStyle::SH_Menu_Scrollable
QStyle::SH_Menu_SloppySubMenus
QStyle::SH_Menu_SubMenuUniDirection
QStyle::SH_Menu_SubMenuUniDirectionFailCount
QStyle::SH_Menu_SubMenuSloppySelectOtherActions
QStyle::SH_Menu_SubMenuSloppyCloseTimeout
QStyle::SH_Menu_SubMenuResetWhenReenteringParent
QStyle::SH_Menu_SubMenuDontStartSloppyOnLeave
QStyle::SH_ScrollView_FrameOnlyAroundContents
QStyle::SH_MenuBar_AltKeyNavigation
QStyle::SH_ComboBox_ListMouseTracking
QStyle::SH_Menu_MouseTracking
QStyle::SH_MenuBar_MouseTracking
QStyle::SH_Menu_FillScreenWithScroll
QStyle::SH_Menu_SelectionWrap
QStyle::SH_ItemView_ChangeHighlightOnFocus
QStyle::SH_Widget_ShareActivation
QStyle::SH_TabBar_SelectMouseType
QStyle::SH_ListViewExpand_SelectMouseType
QStyle::SH_TabBar_PreferNoArrows
QStyle::SH_ComboBox_Popup
QStyle::SH_Workspace_FillSpaceOnMaximize
QStyle::SH_TitleBar_NoBorder
QStyle::SH_ScrollBar_StopMouseOverSlider
QStyle::SH_Slider_StopMouseOverSlider
QStyle::SH_BlinkCursorWhenTextSelected
QStyle::SH_RichText_FullWidthSelection
QStyle::SH_GroupBox_TextLabelVerticalAlignment
QStyle::SH_GroupBox_TextLabelColor
QStyle::SH_DialogButtons_DefaultButton
QStyle::SH_ToolBox_SelectedPageTitleBold
QStyle::SH_LineEdit_PasswordCharacter
QStyle::SH_LineEdit_PasswordMaskDelay
QStyle::SH_Table_GridLineColor
QStyle::SH_UnderlineShortcut
QStyle::SH_SpellCheckUnderlineStyle
QStyle::SH_SpinBox_AnimateButton
QStyle::SH_SpinBox_KeyPressAutoRepeatRate
QStyle::SH_SpinBox_ClickAutoRepeatRate
QStyle::SH_SpinBox_ClickAutoRepeatThreshold
QStyle::SH_ToolTipLabel_Opacity
QStyle::SH_DrawMenuBarSeparator
QStyle::SH_TitleBar_ModifyNotification
QStyle::SH_Button_FocusPolicy
QStyle::SH_CustomBase
QStyle::SH_MessageBox_UseBorderForButtonSpacing
QStyle::SH_MessageBox_CenterButtons
QStyle::SH_MessageBox_TextInteractionFlags
QStyle::SH_TitleBar_AutoRaise
QStyle::SH_ToolButton_PopupDelay
QStyle::SH_FocusFrame_Mask
QStyle::SH_RubberBand_Mask
QStyle::SH_WindowFrame_Mask
QStyle::SH_SpinControls_DisableOnBounds
QStyle::SH_Dial_BackgroundRole
QStyle::SH_ComboBox_LayoutDirection
QStyle::SH_ItemView_EllipsisLocation
QStyle::SH_ItemView_ShowDecorationSelected
QStyle::SH_ItemView_ActivateItemOnSingleClick
QStyle::SH_Slider_AbsoluteSetButtons
QStyle::SH_Slider_PageSetButtons
QStyle::SH_TabBar_ElideMode
QStyle::SH_DialogButtonLayout
QStyle::SH_WizardStyle
QStyle::SH_FormLayoutWrapPolicy
QStyle::SH_FormLayoutFieldGrowthPolicy
QStyle::SH_FormLayoutFormAlignment
QStyle::SH_FormLayoutLabelAlignment
QStyle::SH_ItemView_ArrowKeysNavigateIntoChildren
QStyle::SH_ComboBox_PopupFrameStyle
QStyle::SH_DialogButtonBox_ButtonsHaveIcons
QStyle::SH_ItemView_MovementWithoutUpdatingSelection
QStyle::SH_ToolTip_Mask
QStyle::SH_FocusFrame_AboveWidget
QStyle::SH_TextControl_FocusIndicatorTextCharFormat
QStyle::SH_Menu_FlashTriggeredItem
QStyle::SH_Menu_FadeOutOnHide
QStyle::SH_TabWidget_DefaultTabPosition
QStyle::SH_ToolBar_Movable
QStyle::SH_ItemView_PaintAlternatingRowColorsForEmptyArea
QStyle::SH_Menu_Mask
QStyle::SH_ItemView_DrawDelegateFrame
QStyle::SH_TabBar_CloseButtonPosition
QStyle::SH_DockWidget_ButtonsHaveFrame
QStyle::SH_ToolButtonStyle
QStyle::SH_RequestSoftwareInputPanel
QStyle::SH_ScrollBar_Transient
QStyle::SH_Menu_SupportsSections
QStyle::SH_ToolTip_WakeUpDelay
QStyle::SH_ToolTip_FallAsleepDelay
QStyle::SH_Widget_Animate
QStyle::SH_Splitter_OpaqueResize
QStyle::SH_TabBar_ChangeCurrentDelay
QStyle::SH_ItemView_ScrollMode

*/
//SubControl (QStyle::SubControls) ���ӿؼ��е���Ԫ��
/*

QStyle::SC_None
QStyle::SC_ScrollBarAddLine
QStyle::SC_ScrollBarSubLine
QStyle::SC_ScrollBarAddPage
QStyle::SC_ScrollBarSubPage
QStyle::SC_ScrollBarFirst
QStyle::SC_ScrollBarLast
QStyle::SC_ScrollBarSlider
QStyle::SC_ScrollBarGroove
QStyle::SC_SpinBoxUp
QStyle::SC_SpinBoxDown
QStyle::SC_SpinBoxFrame
QStyle::SC_SpinBoxEditField
QStyle::SC_ComboBoxEditField
QStyle::SC_ComboBoxArrow
QStyle::SC_ComboBoxFrame
QStyle::SC_ComboBoxListBoxPopup
QStyle::SC_SliderGroove
QStyle::SC_SliderHandle
QStyle::SC_SliderTickmarks
QStyle::SC_ToolButton
QStyle::SC_ToolButtonMenu
QStyle::SC_TitleBarSysMenu
QStyle::SC_TitleBarMinButton
QStyle::SC_TitleBarMaxButton
QStyle::SC_TitleBarCloseButton
QStyle::SC_TitleBarLabel
QStyle::SC_TitleBarNormalButton
QStyle::SC_TitleBarShadeButton
QStyle::SC_TitleBarUnshadeButton
QStyle::SC_TitleBarContextHelpButton
QStyle::SC_DialHandle
QStyle::SC_DialGroove
QStyle::SC_DialTickmarks
QStyle::SC_GroupBoxFrame
QStyle::SC_GroupBoxLabel
QStyle::SC_GroupBoxCheckBox
QStyle::SC_GroupBoxContents
QStyle::SC_MdiNormalButton
QStyle::SC_MdiMinButton
QStyle::SC_MdiCloseButton
QStyle::SC_All
*/
//SubElement widget��������ʹ�ø��������widget�Ĳ�ͬ����, subElementRect()
/*

QStyle::SE_PushButtonContents
QStyle::SE_PushButtonFocusRect
QStyle::SE_PushButtonLayoutItem
QStyle::SE_CheckBoxIndicator
QStyle::SE_CheckBoxContents
QStyle::SE_CheckBoxFocusRect
QStyle::SE_CheckBoxClickRect
QStyle::SE_CheckBoxLayoutItem
QStyle::SE_DateTimeEditLayoutItem
QStyle::SE_RadioButtonIndicator
QStyle::SE_RadioButtonContents
QStyle::SE_RadioButtonFocusRect
QStyle::SE_RadioButtonClickRect
QStyle::SE_RadioButtonLayoutItem
QStyle::SE_ComboBoxFocusRect
QStyle::SE_SliderFocusRect
QStyle::SE_SliderLayoutItem
QStyle::SE_SpinBoxLayoutItem
QStyle::SE_ProgressBarGroove
QStyle::SE_ProgressBarContents
QStyle::SE_ProgressBarLabel
QStyle::SE_ProgressBarLayoutItem
QStyle::SE_FrameContents
QStyle::SE_ShapedFrameContents
QStyle::SE_FrameLayoutItem
QStyle::SE_HeaderArrow
QStyle::SE_HeaderLabel
QStyle::SE_LabelLayoutItem
QStyle::SE_LineEditContents
QStyle::SE_TabWidgetLeftCorner
QStyle::SE_TabWidgetRightCorner
QStyle::SE_TabWidgetTabBar
QStyle::SE_TabWidgetTabContents
QStyle::SE_TabWidgetTabPane
QStyle::SE_TabWidgetLayoutItem
QStyle::SE_ToolBoxTabContents
QStyle::SE_ToolButtonLayoutItem
QStyle::SE_ItemViewItemCheckIndicator
QStyle::SE_TabBarTearIndicator
QStyle::SE_TabBarTearIndicatorLeft
QStyle::SE_TabBarTearIndicatorRight
QStyle::SE_TabBarScrollLeftButton
QStyle::SE_TabBarScrollRightButton
QStyle::SE_TreeViewDisclosureItem
QStyle::SE_DialogButtonBoxLayoutItem
QStyle::SE_GroupBoxLayoutItem
QStyle::SE_CustomBase
QStyle::SE_DockWidgetFloatButton
QStyle::SE_DockWidgetTitleBarText
QStyle::SE_DockWidgetCloseButton
QStyle::SE_DockWidgetIcon
QStyle::SE_ComboBoxLayoutItem
QStyle::SE_ItemViewItemDecoration
QStyle::SE_ItemViewItemText
QStyle::SE_ItemViewItemFocusRect
QStyle::SE_TabBarTabLeftButton
QStyle::SE_TabBarTabRightButton
QStyle::SE_TabBarTabText
QStyle::SE_ToolBarHandle

*/
/************************************************************************/
#include <QProxyStyle> 
#include "QStyleFactory.h"
#include<QWidget>
class QCStyle : public QProxyStyle
{
    Q_OBJECT

public:
    QCStyle(QStyle *style = Q_NULLPTR);
    ~QCStyle();
    /*����ָ���ߴ��Rect����ָ����rectangle������ָ�������кͷ���*/
   // QRect alignedRect(Qt::LayoutDirection direction, Qt::Alignment alignment, const QSize &size, const QRect &rectangle);
    /*����ָ��������control1��control2֮���spacing ���;oritention ָ��controls�Ƿ�ˮƽ���ֻ��ߴ�ֱ���֣�option�����������ݸ��ؼ��Ķ�����Ϣ��widget�����ǿ�ѡ��*/
    //int combinedLayoutSpacing(QSizePolicy::ControlTypes controls1, QSizePolicy::ControlTypes controls2, Qt::Orientation orientation,
    //    QStyleOption *option = Q_NULLPTR, QWidget *widget = Q_NULLPTR) const;
    /*����ָ���ؼ�*/
    //void drawComplexControl(ComplexControl control, const QStyleOptionComplex *option, QPainter *painter, const QWidget *widget = Q_NULLPTR) const;
    /*����ָ��Ԫ��*/
     void drawControl(ControlElement element, const QStyleOption *option, QPainter *painter, const QWidget *widget = Q_NULLPTR) const;

     void drawTabText(QStyleOptionTab &myTabOption, QPainter * painter) const;

     void drawTab(QStyleOptionTab &myTabOption, QPainter *painter) const;

     /*����ָ��ͼ��*/
    //void drawItemPixmap(QPainter *painter, const QRect &rectangle, int alignment, const QPixmap &pixmap) const;
    /*�����ı�*/
    //void drawItemText(QPainter *painter, const QRect &rectangle, int alignment, const QPalette &palette, bool enabled, const QString &text, QPalette::ColorRole textRole = QPalette::NoRole) const;
    /*���Ƽ�Ԫ��*/
    void drawPrimitive(PrimitiveElement element, const QStyleOption *option,QPainter *painter, const QWidget *widget) const;
    /*����һ��ͼ�񣬸���ָ��mode�ͻ���*/
    //QPixmap generatedIconPixmap(QIcon::Mode iconMode, const QPixmap &pixmap, const QStyleOption *option) const;
    /*���ظ��ӿؼ���ָ��λ�õ��ӿؼ�*/
    //SubControl hitTestComplexControl(ComplexControl control, const QStyleOptionComplex *option, const QPoint &position, const QWidget *widget = Q_NULLPTR) const;
    /*���ػ���ͼ���ָ������*/
    //QRect itemPixmapRect(const QRect &rectangle, int alignment, const QPixmap &pixmap) const;
    /*���ػ����ı���ָ������*/
    //QRect itemTextRect(const QFontMetrics &metrics, const QRect &rectangle, int alignment, bool enabled, const QString &text) const;
    /*�������ؼ����*/
    //int layoutSpacing(QSizePolicy::ControlType control1, QSizePolicy::ControlType control2, Qt::Orientation orientation, const QStyleOption *option = Q_NULLPTR, const QWidget *widget = Q_NULLPTR) const;
    /*����ָ������ֵ*/
    int pixelMetric(PixelMetric metric, const QStyleOption *option = Q_NULLPTR, const QWidget *widget = Q_NULLPTR) const;
    /*��ʼ��ָ���ؼ������*/
    void polish(QWidget *widget);
    /*��ʼ����������*/
    //void polish(QApplication *application);
    /*�ı仭��*/
    void polish(QPalette &palette);
    /*���ش���*/
    //QStyle *proxy();
    /*����ָ��Ԫ�صĳߴ�*/
    QSize sizeFromContents(ContentsType type, const QStyleOption *option, const QSize &contentsSize, const QWidget *widget = Q_NULLPTR) const;
    /*���߼�ֵת��Ϊ����λ��*/
    //int sliderPositionFromValue(int min, int max, int logicalValue, int span, bool upsideDown = false);
    /*������λ��ת��Ϊ�߼�ֵ*/
    //int sliderValueFromPosition(int min, int max, int position, int span, bool upsideDown = false);
    /*����icon*/
    //QIcon standardIcon(StandardPixmap standardIcon, const QStyleOption *option = Q_NULLPTR, const QWidget *widget = Q_NULLPTR) const;
    /*���ر�׼�Ļ���*/
    //QPalette standardPalette() const;
    /*����һ������������ʾָ����ʽ*/
    //int styleHint(StyleHint hint, const QStyleOption *option = Q_NULLPTR, const QWidget *widget = Q_NULLPTR, QStyleHintReturn *returnData = Q_NULLPTR) const;
    /*���ظ��ӿؼ���ָ���ӿؼ���Rect*/
    //QRect subControlRect(ComplexControl control, const QStyleOptionComplex *option, SubControl subControl, const QWidget *widget = Q_NULLPTR) const;
    /*����ָ��Ԫ�ص�������*/
   // QRect subElementRect(SubElement element, const QStyleOption *option, const QWidget *widget = Q_NULLPTR) const;
    /*ж��ָ��widget����ʽ*/
    //void unpolish(QWidget *widget);
    /*ж��Ӧ�ó������ʽ*/
    //void unpolish(QApplication *application);
    /*ת������*/
    //Qt::Alignment visualAlignment(Qt::LayoutDirection direction, Qt::Alignment alignment);
    /*����ָ���߼�λ�õ���Ļ����ϵ*/
    //QPoint visualPos(Qt::LayoutDirection direction, const QRect &boundingRectangle, const QPoint &logicalPosition);
    /*����ָ����ת������Ļ����ϵ���߼�����*/
    //QRect visualRect(Qt::LayoutDirection direction, const QRect &boundingRectangle, const QRect &logicalRectangle);
};
