// This file is generated by kconfig_compiler from adwaita.kcfg.
// All changes you do to this file will be lost.

#include "fakeadwaitastyleconfigdata.h"

#include <QtCore/QFile>

using namespace Adwaita;

namespace Adwaita {

class StyleConfigDataHelper
{
  public:
    StyleConfigDataHelper() : q(0) {}
    ~StyleConfigDataHelper() { delete q; }
    StyleConfigData *q;
};
}

StyleConfigData* StyleConfigData::_self = nullptr;

StyleConfigData *StyleConfigData::self()
{
  if (!_self)
    _self = new StyleConfigData;

  return _self;
}

StyleConfigData::StyleConfigData(  )
{
  /*
  setCurrentGroup( QLatin1String( "Common" ) );

  KConfigSkeleton::ItemInt  *itemShadowStrength;
  itemShadowStrength = new KConfigSkeleton::ItemInt( currentGroup(), QLatin1String( "ShadowStrength" ), mShadowStrength, 90 );
  itemShadowStrength->setMinValue(25);
  itemShadowStrength->setMaxValue(255);
  addItem( itemShadowStrength, QLatin1String( "ShadowStrength" ) );
  KConfigSkeleton::ItemInt  *itemShadowSize;
  itemShadowSize = new KConfigSkeleton::ItemInt( currentGroup(), QLatin1String( "ShadowSize" ), mShadowSize, 16 );
  itemShadowSize->setMinValue(6);
  itemShadowSize->setMaxValue(64);
  addItem( itemShadowSize, QLatin1String( "ShadowSize" ) );
  KConfigSkeleton::ItemColor  *itemShadowColor;
  itemShadowColor = new KConfigSkeleton::ItemColor( currentGroup(), QLatin1String( "ShadowColor" ), mShadowColor, QColor( 0, 0, 0 ) );
  addItem( itemShadowColor, QLatin1String( "ShadowColor" ) );
  KConfigSkeleton::ItemBool  *itemOutlineCloseButton;
  itemOutlineCloseButton = new KConfigSkeleton::ItemBool( currentGroup(), QLatin1String( "OutlineCloseButton" ), mOutlineCloseButton, true );
  addItem( itemOutlineCloseButton, QLatin1String( "OutlineCloseButton" ) );

  setCurrentGroup( QLatin1String( "Style" ) );

  KConfigSkeleton::ItemBool  *itemAnimationsEnabled;
  itemAnimationsEnabled = new KConfigSkeleton::ItemBool( currentGroup(), QLatin1String( "AnimationsEnabled" ), mAnimationsEnabled, true );
  addItem( itemAnimationsEnabled, QLatin1String( "AnimationsEnabled" ) );
  KConfigSkeleton::ItemInt  *itemAnimationSteps;
  itemAnimationSteps = new KConfigSkeleton::ItemInt( currentGroup(), QLatin1String( "AnimationSteps" ), mAnimationSteps, 10 );
  addItem( itemAnimationSteps, QLatin1String( "AnimationSteps" ) );
  KConfigSkeleton::ItemInt  *itemAnimationsDuration;
  itemAnimationsDuration = new KConfigSkeleton::ItemInt( currentGroup(), QLatin1String( "AnimationsDuration" ), mAnimationsDuration, 100 );
  addItem( itemAnimationsDuration, QLatin1String( "AnimationsDuration" ) );
  KConfigSkeleton::ItemBool  *itemStackedWidgetTransitionsEnabled;
  itemStackedWidgetTransitionsEnabled = new KConfigSkeleton::ItemBool( currentGroup(), QLatin1String( "StackedWidgetTransitionsEnabled" ), mStackedWidgetTransitionsEnabled, false );
  addItem( itemStackedWidgetTransitionsEnabled, QLatin1String( "StackedWidgetTransitionsEnabled" ) );
  KConfigSkeleton::ItemBool  *itemProgressBarAnimated;
  itemProgressBarAnimated = new KConfigSkeleton::ItemBool( currentGroup(), QLatin1String( "ProgressBarAnimated" ), mProgressBarAnimated, true );
  addItem( itemProgressBarAnimated, QLatin1String( "ProgressBarAnimated" ) );
  KConfigSkeleton::ItemInt  *itemProgressBarBusyStepDuration;
  itemProgressBarBusyStepDuration = new KConfigSkeleton::ItemInt( currentGroup(), QLatin1String( "ProgressBarBusyStepDuration" ), mProgressBarBusyStepDuration, 800 );
  addItem( itemProgressBarBusyStepDuration, QLatin1String( "ProgressBarBusyStepDuration" ) );
  KConfigSkeleton::ItemInt  *itemScrollBarAddLineButtons;
  itemScrollBarAddLineButtons = new KConfigSkeleton::ItemInt( currentGroup(), QLatin1String( "ScrollBarAddLineButtons" ), mScrollBarAddLineButtons, 1 );
  addItem( itemScrollBarAddLineButtons, QLatin1String( "ScrollBarAddLineButtons" ) );
  KConfigSkeleton::ItemInt  *itemScrollBarSubLineButtons;
  itemScrollBarSubLineButtons = new KConfigSkeleton::ItemInt( currentGroup(), QLatin1String( "ScrollBarSubLineButtons" ), mScrollBarSubLineButtons, 1 );
  addItem( itemScrollBarSubLineButtons, QLatin1String( "ScrollBarSubLineButtons" ) );
  KConfigSkeleton::ItemBool  *itemScrollBarShowOnMouseOver;
  itemScrollBarShowOnMouseOver = new KConfigSkeleton::ItemBool( currentGroup(), QLatin1String( "ScrollBarShowOnMouseOver" ), mScrollBarShowOnMouseOver, true );
  addItem( itemScrollBarShowOnMouseOver, QLatin1String( "ScrollBarShowOnMouseOver" ) );
  QList<KConfigSkeleton::ItemEnum::Choice2> valuesMnemonicsMode;
  {
    KConfigSkeleton::ItemEnum::Choice2 choice;
    choice.name = QLatin1String("MN_NEVER");
    valuesMnemonicsMode.append( choice );
  }
  {
    KConfigSkeleton::ItemEnum::Choice2 choice;
    choice.name = QLatin1String("MN_AUTO");
    valuesMnemonicsMode.append( choice );
  }
  {
    KConfigSkeleton::ItemEnum::Choice2 choice;
    choice.name = QLatin1String("MN_ALWAYS");
    valuesMnemonicsMode.append( choice );
  }
  KConfigSkeleton::ItemEnum  *itemMnemonicsMode;
  itemMnemonicsMode = new KConfigSkeleton::ItemEnum( currentGroup(), QLatin1String( "MnemonicsMode" ), mMnemonicsMode, valuesMnemonicsMode, MN_AUTO );
  addItem( itemMnemonicsMode, QLatin1String( "MnemonicsMode" ) );
  KConfigSkeleton::ItemBool  *itemToolBarDrawItemSeparator;
  itemToolBarDrawItemSeparator = new KConfigSkeleton::ItemBool( currentGroup(), QLatin1String( "ToolBarDrawItemSeparator" ), mToolBarDrawItemSeparator, true );
  addItem( itemToolBarDrawItemSeparator, QLatin1String( "ToolBarDrawItemSeparator" ) );
  KConfigSkeleton::ItemBool  *itemViewDrawFocusIndicator;
  itemViewDrawFocusIndicator = new KConfigSkeleton::ItemBool( currentGroup(), QLatin1String( "ViewDrawFocusIndicator" ), mViewDrawFocusIndicator, true );
  addItem( itemViewDrawFocusIndicator, QLatin1String( "ViewDrawFocusIndicator" ) );
  KConfigSkeleton::ItemBool  *itemSliderDrawTickMarks;
  itemSliderDrawTickMarks = new KConfigSkeleton::ItemBool( currentGroup(), QLatin1String( "SliderDrawTickMarks" ), mSliderDrawTickMarks, true );
  addItem( itemSliderDrawTickMarks, QLatin1String( "SliderDrawTickMarks" ) );
  KConfigSkeleton::ItemBool  *itemViewDrawTreeBranchLines;
  itemViewDrawTreeBranchLines = new KConfigSkeleton::ItemBool( currentGroup(), QLatin1String( "ViewDrawTreeBranchLines" ), mViewDrawTreeBranchLines, true );
  addItem( itemViewDrawTreeBranchLines, QLatin1String( "ViewDrawTreeBranchLines" ) );
  KConfigSkeleton::ItemBool  *itemViewInvertSortIndicator;
  itemViewInvertSortIndicator = new KConfigSkeleton::ItemBool( currentGroup(), QLatin1String( "ViewInvertSortIndicator" ), mViewInvertSortIndicator, false );
  addItem( itemViewInvertSortIndicator, QLatin1String( "ViewInvertSortIndicator" ) );
  KConfigSkeleton::ItemBool  *itemTabBarDrawCenteredTabs;
  itemTabBarDrawCenteredTabs = new KConfigSkeleton::ItemBool( currentGroup(), QLatin1String( "TabBarDrawCenteredTabs" ), mTabBarDrawCenteredTabs, false );
  addItem( itemTabBarDrawCenteredTabs, QLatin1String( "TabBarDrawCenteredTabs" ) );
  KConfigSkeleton::ItemBool  *itemTitleWidgetDrawFrame;
  itemTitleWidgetDrawFrame = new KConfigSkeleton::ItemBool( currentGroup(), QLatin1String( "TitleWidgetDrawFrame" ), mTitleWidgetDrawFrame, false );
  addItem( itemTitleWidgetDrawFrame, QLatin1String( "TitleWidgetDrawFrame" ) );
  KConfigSkeleton::ItemBool  *itemDockWidgetDrawFrame;
  itemDockWidgetDrawFrame = new KConfigSkeleton::ItemBool( currentGroup(), QLatin1String( "DockWidgetDrawFrame" ), mDockWidgetDrawFrame, false );
  addItem( itemDockWidgetDrawFrame, QLatin1String( "DockWidgetDrawFrame" ) );
  KConfigSkeleton::ItemBool  *itemSidePanelDrawFrame;
  itemSidePanelDrawFrame = new KConfigSkeleton::ItemBool( currentGroup(), QLatin1String( "SidePanelDrawFrame" ), mSidePanelDrawFrame, false );
  addItem( itemSidePanelDrawFrame, QLatin1String( "SidePanelDrawFrame" ) );
  KConfigSkeleton::ItemBool  *itemMenuItemDrawStrongFocus;
  itemMenuItemDrawStrongFocus = new KConfigSkeleton::ItemBool( currentGroup(), QLatin1String( "MenuItemDrawStrongFocus" ), mMenuItemDrawStrongFocus, true );
  addItem( itemMenuItemDrawStrongFocus, QLatin1String( "MenuItemDrawStrongFocus" ) );
  QList<KConfigSkeleton::ItemEnum::Choice2> valuesWindowDragMode;
  {
    KConfigSkeleton::ItemEnum::Choice2 choice;
    choice.name = QLatin1String("WD_NONE");
    valuesWindowDragMode.append( choice );
  }
  {
    KConfigSkeleton::ItemEnum::Choice2 choice;
    choice.name = QLatin1String("WD_MINIMAL");
    valuesWindowDragMode.append( choice );
  }
  {
    KConfigSkeleton::ItemEnum::Choice2 choice;
    choice.name = QLatin1String("WD_FULL");
    valuesWindowDragMode.append( choice );
  }
  KConfigSkeleton::ItemEnum  *itemWindowDragMode;
  itemWindowDragMode = new KConfigSkeleton::ItemEnum( currentGroup(), QLatin1String( "WindowDragMode" ), mWindowDragMode, valuesWindowDragMode, WD_FULL );
  addItem( itemWindowDragMode, QLatin1String( "WindowDragMode" ) );
  KConfigSkeleton::ItemStringList  *itemWindowDragWhiteList;
  itemWindowDragWhiteList = new KConfigSkeleton::ItemStringList( currentGroup(), QLatin1String( "WindowDragWhiteList" ), mWindowDragWhiteList );
  addItem( itemWindowDragWhiteList, QLatin1String( "WindowDragWhiteList" ) );
  KConfigSkeleton::ItemStringList  *itemWindowDragBlackList;
  itemWindowDragBlackList = new KConfigSkeleton::ItemStringList( currentGroup(), QLatin1String( "WindowDragBlackList" ), mWindowDragBlackList );
  addItem( itemWindowDragBlackList, QLatin1String( "WindowDragBlackList" ) );
  KConfigSkeleton::ItemBool  *itemUseWMMoveResize;
  itemUseWMMoveResize = new KConfigSkeleton::ItemBool( currentGroup(), QLatin1String( "UseWMMoveResize" ), mUseWMMoveResize, true );
  addItem( itemUseWMMoveResize, QLatin1String( "UseWMMoveResize" ) );
  KConfigSkeleton::ItemBool  *itemSplitterProxyEnabled;
  itemSplitterProxyEnabled = new KConfigSkeleton::ItemBool( currentGroup(), QLatin1String( "SplitterProxyEnabled" ), mSplitterProxyEnabled, true );
  addItem( itemSplitterProxyEnabled, QLatin1String( "SplitterProxyEnabled" ) );
  KConfigSkeleton::ItemInt  *itemSplitterProxyWidth;
  itemSplitterProxyWidth = new KConfigSkeleton::ItemInt( currentGroup(), QLatin1String( "SplitterProxyWidth" ), mSplitterProxyWidth, 12 );
  addItem( itemSplitterProxyWidth, QLatin1String( "SplitterProxyWidth" ) );
  KConfigSkeleton::ItemBool  *itemWidgetExplorerEnabled;
  itemWidgetExplorerEnabled = new KConfigSkeleton::ItemBool( currentGroup(), QLatin1String( "WidgetExplorerEnabled" ), mWidgetExplorerEnabled, false );
  addItem( itemWidgetExplorerEnabled, QLatin1String( "WidgetExplorerEnabled" ) );
  KConfigSkeleton::ItemBool  *itemDrawWidgetRects;
  itemDrawWidgetRects = new KConfigSkeleton::ItemBool( currentGroup(), QLatin1String( "DrawWidgetRects" ), mDrawWidgetRects, false );
  addItem( itemDrawWidgetRects, QLatin1String( "DrawWidgetRects" ) );
  */
}

StyleConfigData::~StyleConfigData()
{
}

