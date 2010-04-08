#import <Cocoa/Cocoa.h>
#import "MainWindow.h"
#import "ServerTreeView.h"
#import "MemberListView.h"
#import "InputTextField.h"
#import "ChatBox.h"
#import "ThinSplitView.h"
#import "FieldEditorTextView.h"
#import "IRCWorld.h"
#import "InputHistory.h"
#import "MenuController.h"
#import "ViewTheme.h"


@interface AppController : NSObject
{
	IBOutlet MainWindow* window;
	IBOutlet ServerTreeView* tree;
	IBOutlet NSBox* logBase;
	IBOutlet NSBox* consoleBase;
	IBOutlet MemberListView* memberList;
	IBOutlet InputTextField* text;
	IBOutlet ChatBox* chatBox;
	IBOutlet NSScrollView* treeScrollView;
	IBOutlet NSView* leftTreeBase;
	IBOutlet NSView* rightTreeBase;
	IBOutlet ThinSplitView* rootSplitter;
	IBOutlet ThinSplitView* logSplitter;
	IBOutlet ThinSplitView* infoSplitter;
	IBOutlet ThinSplitView* treeSplitter;
	IBOutlet MenuController* menu;
	IBOutlet NSMenuItem* serverMenu;
	IBOutlet NSMenuItem* channelMenu;
	IBOutlet NSMenu* memberMenu;
	IBOutlet NSMenu* treeMenu;
	IBOutlet NSMenu* logMenu;
	IBOutlet NSMenu* consoleMenu;
	IBOutlet NSMenu* urlMenu;
	IBOutlet NSMenu* addrMenu;
	IBOutlet NSMenu* chanMenu;
	
	FieldEditorTextView* fieldEditor;
	IRCWorld* world;
	ViewTheme* viewTheme;
	InputHistory* inputHistory;
	
	BOOL terminating;
}

@end