#include "global.h"

Global::Global(){
    init();
}

QString Global::valueOfKey(const int key) const{
    QMap<int,QString>::const_iterator iter=map.find(key);
    QString str=QString("%1").arg(key);
    if(iter != map.end()){
        str=iter.value();
    }

    return str;
}

void Global::init(){
    map.insert(0,"None");
    map.insert(1,"Timer-----timer event");
    map.insert(2,"MouseButtonPress-----mouse button pressed");
    map.insert(3,"MouseButtonRelease-----mouse button released");
    map.insert(4,"MouseButtonDblClick----- mouse button double click");

    map.insert(5,"MouseMove----- mouse move");
    map.insert(6,"KeyPress----- key pressed");
    map.insert(7,"KeyRelease----- key released");
    map.insert(8,"FocusIn----- keyboard focus received");
    map.insert(9,"FocusOut----- keyboard focus lost");
    map.insert(10,"Enter----- mouse enters widget");
    map.insert(11,"Leave----- mouse leaves widget");
    map.insert(12,"Paint----- paint widget");
    map.insert(13,"Move----- move widget");
    map.insert(14,"Resize----- resize widget");
    map.insert(15,"Create----- after widget creation");
    map.insert(16,"Destroy----- during widget destruction");
    map.insert(17,"Show----- widget is shown");
    map.insert(18,"Hide-----widget is hidden");
    map.insert(19,"Close----request to close widget");
    map.insert(20,"Quit----request to quit application");
    map.insert(21,"ParentChange----widget has been reparented");
    map.insert(23,"FocusAboutToChange----keyboard focus is about to be lost");
    map.insert(22,"ThreadChange----object has changed threads");
    map.insert(131,"ParentAboutToChange----sent just before the parent change is done");
    map.insert(24,"WindowActivate----window was activated");
    map.insert(25,"WindowDeactivate----window was deactivated");
    map.insert(26,"ShowToParent----widget is shown to parent");

    map.insert(27,"HideToParent----widget is hidden to parent");
    map.insert(31,"Wheel----wheel event");
    map.insert(33,"WindowTitleChange----window title changed");
    map.insert(34,"WindowIconChange----icon changed");
    map.insert(35,"ApplicationWindowIconChange----application icon changed");
    map.insert(36,"ApplicationFontChange----application font changed");

    map.insert(37,"ApplicationLayoutDirectionChange----application layout direction changed");
    map.insert(38,"ApplicationPaletteChange----application palette changed");
    map.insert(39,"PaletteChange----widget palette changed");
    map.insert(40,"Clipboard----internal clipboard event");
    map.insert(42,"Speech----reserved for speech input");
    map.insert(43,"MetaCall----meta call event");

    map.insert(50,"SockAct----socket activation");
    map.insert(132,"WinEventAct----win event activation");
    map.insert(52,"DeferredDelete----deferred delete event");
    map.insert(60,"DragEnter----drag moves into widget");
    map.insert(61,"DragMove----drag moves in widget");

    map.insert(62,"DragLeave----drag leaves or is cancelled");
    map.insert(63,"Drop----actual drop");
    map.insert(64,"DragResponse----drag accepted/rejected");
    map.insert(68,"ChildAdded----new child widget");
    map.insert(69,"ChildPolished----polished child widget");
    map.insert(67,"ChildInsertedRequest----send ChildInserted compatibility events to receiver");
    map.insert(70,"ChildInserted----compatibility child inserted");
    map.insert(72,"LayoutHint----compatibility relayout request");
    map.insert(71,"ChildRemoved----deleted child widget");
    map.insert(73,"ShowWindowRequest----widget's window should be mapped");


    map.insert(74,"PolishRequest----widget should be polished");
    map.insert(75,"Polish----widget is polished");
    map.insert(76,"LayoutRequest----widget should be relayouted");
    map.insert(77,"UpdateRequest----widget should be repainted");
    map.insert(78,"UpdateLater----request update() later");
    map.insert(79,"EmbeddingControl----ActiveX embedding");
    map.insert(80,"ActivateControl---- ActiveX activation");

    map.insert(81,"DeactivateControl----ActiveX deactivation");
    map.insert(82,"ContextMenu---- context popup menu");

    map.insert(83,"InputMethod----input method");
    map.insert(86,"AccessibilityPrepare---- accessibility information is requested");
    map.insert(87,"TabletMove----Wacom tablet event");
    map.insert(88,"LocaleChange---- the system locale changed");
    map.insert(89,"LanguageChange----the application language changed");
    map.insert(90,"LayoutDirectionChange---- the layout direction changed");
    map.insert(91,"Style----internal style event");
    map.insert(92,"TabletPress---- tablet press");

    map.insert(93,"TabletRelease----tablet release");
    map.insert(94,"OkRequest---- CE (Ok) button pressed");


    map.insert(95,"HelpRequest---CE (?)  button pressed");
    map.insert(96,"IconDrag---- proxy icon dragged");

    map.insert(97,"FontChange--- font has changed");
    map.insert(98,"EnabledChange---- enabled state has changed");

    map.insert(99,"ActivationChange--- window activation has changed");
    map.insert(100,"StyleChange----style has changed");

    map.insert(101,"IconTextChange--- icon text has changed");
    map.insert(102,"ModifiedChange----modified state has changed");


    map.insert(109,"MouseTrackingChange--- mouse tracking state has changed");
    map.insert(103,"WindowBlocked----window is about to be blocked modally");

    map.insert(104,"WindowUnblocked--- windows modal blocking has ended");
    map.insert(105,"WindowStateChange----window is about to be blocked modally");

    map.insert(110,"ToolTip--- ");
    map.insert(111,"WhatsThis----");
    map.insert(112,"StatusTip--- ");
    map.insert(113,"ActionChanged----");

    map.insert(114,"ActionAdded--- ");
    map.insert(115,"ActionRemoved----");
    map.insert(116,"FileOpen---file open request ");
    map.insert(117,"Shortcut----shortcut triggered");

    map.insert(51,"ShortcutOverride---shortcut override request ");
    map.insert(30,"Accel----accelerator event");

    map.insert(32,"AccelAvailable---accelerator available event");
    map.insert(118,"WhatsThisClickedt");

    map.insert(120,"ToolBarChange----toolbar visibility toggled");
    map.insert(121,"ApplicationActivate----application has been changed to active");
    map.insert(122,"ApplicationDeactivate----application has been changed to inactive");
    map.insert(123,"QueryWhatsThis----query what's this widget help");

    map.insert(124,"EnterWhatsThisMode");
    map.insert(125,"LeaveWhatsThisMode");

    map.insert(126,"ZOrderChange----child widget has had its z-order changed");
    map.insert(127,"HoverEnter----mouse cursor enters a hover widget");
    map.insert(128,"HoverLeave----mouse cursor leaves a hover widget");
    map.insert(129,"HoverMove---- mouse cursor move inside a hover widget");

    map.insert(119,"AccessibilityHelp----accessibility help text request");
    map.insert(130,"AccessibilityDescription----accessibility description text request");
    map.insert(150,"EnterEditFocus----enter edit mode in keypad navigation (Defined only with QT_KEYPAD_NAVIGATION)");
    map.insert(151,"LeaveEditFocus----leave edit mode in keypad navigation (Defined only with QT_KEYPAD_NAVIGATION)");
    map.insert(152,"AcceptDropsChange");

    map.insert(153,"MenubarUpdated---- Support event for Q3MainWindow, which needs to");
    map.insert(154,"ZeroTimerEvent---- Used for Windows Zero timer events");

    map.insert(155,"GraphicsSceneMouseMove---- GraphicsView");

    map.insert(156,"GraphicsSceneMousePress");
    map.insert(157,"GraphicsSceneMouseRelease");
    map.insert(158,"GraphicsSceneMouseDoubleClick");
    map.insert(159,"GraphicsSceneContextMenu");
    map.insert(160,"GraphicsSceneHoverEnter");
    map.insert(161,"GraphicsSceneHoverMove");
    map.insert(162,"GraphicsSceneHoverLeave");
    map.insert(163,"GraphicsSceneHelp");

    map.insert(164,"GraphicsSceneDragEnter");
    map.insert(165,"GraphicsSceneDragMove");
    map.insert(166,"GraphicsSceneDragLeave");
    map.insert(167,"GraphicsSceneDrop");
    map.insert(168,"GraphicsSceneWheel");

    map.insert(169,"KeyboardLayoutChange---- keyboard layout changed");
    map.insert(170,"DynamicPropertyChange---- A dynamic property was changed through setProperty/property");

    map.insert(171,"TabletEnterProximity");
    map.insert(172,"TabletLeaveProximity");
    map.insert(173,"NonClientAreaMouseMove");

    map.insert(174,"NonClientAreaMouseButtonPress");
    map.insert(175,"NonClientAreaMouseButtonRelease");
    map.insert(176,"NonClientAreaMouseButtonDblClick");

    map.insert(177,"MacSizeChange---- when the Qt::WA_Mac{Normal,Small,Mini}Size changes");
    map.insert(178,"ContentsRectChange---- sent by QWidget::setContentsMargins (internal)");
    map.insert(179,"MacGLWindowChange---- Internal! the window of the GLWidget has changed");
    map.insert(180,"FutureCallOut---- ");
    map.insert(181,"GraphicsSceneResize---- ");
    map.insert(182,"GraphicsSceneMove---- ");
    map.insert(183,"CursorChange---- ");
    map.insert(184,"ToolTipChange---- ");
    map.insert(185,"NetworkReplyUpdated---- Internal for QNetworkReply");

    map.insert(186,"GrabMouse---- ");
    map.insert(187,"UngrabMouse---- ");
    map.insert(188,"GrabKeyboard---- ");
    map.insert(189,"UngrabKeyboard---- ");
    map.insert(191,"MacGLClearDrawable---- Internal Cocoa, the window has changed, so we must clear");
    map.insert(192,"StateMachineSignal---- ");
    map.insert(193,"StateMachineWrapped---- ");

    map.insert(194,"TouchBegin---- ");
    map.insert(195,"TouchUpdate---- ");
    map.insert(196,"TouchEnd---- ");
    map.insert(197,"NativeGesture---- Internal for platform gesture support");

    map.insert(199,"RequestSoftwareInputPanel---- ");
    map.insert(200,"CloseSoftwareInputPanel---- ");
    map.insert(201,"UpdateSoftKeys---- Internal for compressing soft key updates");
    map.insert(203,"WinIdChange---- ");
    map.insert(198,"Gesture---- ");
    map.insert(202,"GestureOverride---- ");
    map.insert(207,"InputMethodQuery---- ");


    map.insert(212,"PlatformPanel---- ");
    map.insert(213,"StyleAnimationUpdate---- ");

    map.insert(1000,"User----first user event id ");
    map.insert(65535,"MaxUser---- last user event id");
    map.insert(206,"Expose---- ");
    map.insert(214,"ApplicationStateChange---- ");

}


Global g_Global;
