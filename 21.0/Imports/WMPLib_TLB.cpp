// ************************************************************************ //
// WARNING                                                                    
// -------                                                                    
// The types declared in this file were generated from data read from a       
// Type Library. If this type library is explicitly or indirectly (via        
// another type library referring to this type library) re-imported, or the   
// 'Refresh' command of the Type Library Editor activated while editing the   
// Type Library, the contents of this file will be regenerated and all        
// manual modifications will be lost.                                         
// ************************************************************************ //

// $Rev: 98350 $
// File generated on 4/20/2022 8:03:04 PM from Type Library described below.

// ************************************************************************  //
// Type Lib: C:\Windows\system32\wmp.dll (1)
// LIBID: {6BF52A50-394A-11D3-B153-00C04F79FAA6}
// LCID: 0
// Helpfile: 
// HelpString: Windows Media Player
// DepndLst: 
//   (1) v2.0 stdole, (C:\Windows\SysWOW64\stdole2.tlb)
// SYS_KIND: SYS_WIN32
// Errors:
//   Hint: Symbol 'Click' renamed to '_Click'
// ************************************************************************ //

#include <vcl.h>
#pragma hdrstop

#include "WMPLib_TLB.h"

#if !defined(__PRAGMA_PACKAGE_SMART_INIT)
#define      __PRAGMA_PACKAGE_SMART_INIT
#pragma package(smart_init)
#endif

namespace Wmplib_tlb
{


// *********************************************************************//
// GUIDS declared in the TypeLibrary                                      
// *********************************************************************//
const GUID LIBID_WMPLib = {0x6BF52A50, 0x394A, 0x11D3,{ 0xB1, 0x53, 0x00,0xC0, 0x4F, 0x79,0xFA, 0xA6} };
const GUID IID_IWMPEvents = {0x19A6627B, 0xDA9E, 0x47C1,{ 0xBB, 0x23, 0x00,0xB5, 0xE6, 0x68,0x23, 0x6A} };
const GUID IID_IWMPEvents2 = {0x1E7601FA, 0x47EA, 0x4107,{ 0x9E, 0xA9, 0x90,0x04, 0xED, 0x96,0x84, 0xFF} };
const GUID IID_IWMPSyncDevice = {0x82A2986C, 0x0293, 0x4FD0,{ 0xB2, 0x79, 0xB2,0x1B, 0x86, 0xC0,0x58, 0xBE} };
const GUID IID_IWMPEvents3 = {0x1F504270, 0xA66B, 0x4223,{ 0x8E, 0x96, 0x26,0xA0, 0x6C, 0x63,0xD6, 0x9F} };
const GUID IID_IWMPCdromRip = {0x56E2294F, 0x69ED, 0x4629,{ 0xA8, 0x69, 0xAE,0xA7, 0x2C, 0x0D,0xCC, 0x2C} };
const GUID IID_IWMPCdromBurn = {0xBD94DBEB, 0x417F, 0x4928,{ 0xAA, 0x06, 0x08,0x7D, 0x56, 0xED,0x9B, 0x59} };
const GUID IID_IWMPPlaylist = {0xD5F0F4F1, 0x130C, 0x11D3,{ 0xB1, 0x4E, 0x00,0xC0, 0x4F, 0x79,0xFA, 0xA6} };
const GUID IID_IWMPMedia = {0x94D55E95, 0x3FAC, 0x11D3,{ 0xB1, 0x55, 0x00,0xC0, 0x4F, 0x79,0xFA, 0xA6} };
const GUID IID_IWMPLibrary = {0x3DF47861, 0x7DF1, 0x4C1F,{ 0xA8, 0x1B, 0x4C,0x26, 0xF0, 0xF7,0xA7, 0xC6} };
const GUID IID_IWMPMediaCollection = {0x8363BC22, 0xB4B4, 0x4B19,{ 0x98, 0x9D, 0x1C,0xD7, 0x65, 0x74,0x9D, 0xD1} };
const GUID IID_IWMPStringCollection = {0x4A976298, 0x8C0D, 0x11D3,{ 0xB3, 0x89, 0x00,0xC0, 0x4F, 0x68,0x57, 0x4B} };
const GUID IID_IWMPEvents4 = {0x26DABCFA, 0x306B, 0x404D,{ 0x9A, 0x6F, 0x63,0x0A, 0x84, 0x05,0x04, 0x8D} };
const GUID DIID__WMPOCXEvents = {0x6BF52A51, 0x394A, 0x11D3,{ 0xB1, 0x53, 0x00,0xC0, 0x4F, 0x79,0xFA, 0xA6} };
const GUID CLSID_WindowsMediaPlayer = {0x6BF52A52, 0x394A, 0x11D3,{ 0xB1, 0x53, 0x00,0xC0, 0x4F, 0x79,0xFA, 0xA6} };
const GUID IID_IWMPPlayer4 = {0x6C497D62, 0x8919, 0x413C,{ 0x82, 0xDB, 0xE9,0x35, 0xFB, 0x3E,0xC5, 0x84} };
const GUID IID_IWMPCore3 = {0x7587C667, 0x628F, 0x499F,{ 0x88, 0xE7, 0x6A,0x6F, 0x4E, 0x88,0x84, 0x64} };
const GUID IID_IWMPCore2 = {0xBC17E5B7, 0x7561, 0x4C18,{ 0xBB, 0x90, 0x17,0xD4, 0x85, 0x77,0x56, 0x59} };
const GUID IID_IWMPCore = {0xD84CCA99, 0xCCE2, 0x11D2,{ 0x9E, 0xCC, 0x00,0x00, 0xF8, 0x08,0x59, 0x81} };
const GUID IID_IWMPControls = {0x74C09E02, 0xF828, 0x11D2,{ 0xA7, 0x4B, 0x00,0xA0, 0xC9, 0x05,0xF3, 0x6E} };
const GUID IID_IWMPSettings = {0x9104D1AB, 0x80C9, 0x4FED,{ 0xAB, 0xF0, 0x2E,0x64, 0x17, 0xA6,0xDF, 0x14} };
const GUID IID_IWMPPlaylistCollection = {0x10A13217, 0x23A7, 0x439B,{ 0xB1, 0xC0, 0xD8,0x47, 0xC7, 0x9B,0x77, 0x74} };
const GUID IID_IWMPPlaylistArray = {0x679409C0, 0x99F7, 0x11D3,{ 0x9F, 0xB7, 0x00,0x10, 0x5A, 0xA6,0x20, 0xBB} };
const GUID IID_IWMPNetwork = {0xEC21B779, 0xEDEF, 0x462D,{ 0xBB, 0xA4, 0xAD,0x9D, 0xDE, 0x2B,0x29, 0xA7} };
const GUID IID_IWMPCdromCollection = {0xEE4C8FE2, 0x34B2, 0x11D3,{ 0xA3, 0xBF, 0x00,0x60, 0x97, 0xC9,0xB3, 0x44} };
const GUID IID_IWMPCdrom = {0xCFAB6E98, 0x8730, 0x11D3,{ 0xB3, 0x88, 0x00,0xC0, 0x4F, 0x68,0x57, 0x4B} };
const GUID IID_IWMPClosedCaption = {0x4F2DF574, 0xC588, 0x11D3,{ 0x9E, 0xD0, 0x00,0xC0, 0x4F, 0xB6,0xE9, 0x37} };
const GUID IID_IWMPError = {0xA12DCF7D, 0x14AB, 0x4C1B,{ 0xA8, 0xCD, 0x63,0x90, 0x9F, 0x06,0x02, 0x5B} };
const GUID IID_IWMPErrorItem = {0x3614C646, 0x3B3B, 0x4DE7,{ 0xA8, 0x1E, 0x93,0x0E, 0x3F, 0x21,0x27, 0xB3} };
const GUID IID_IWMPDVD = {0x8DA61686, 0x4668, 0x4A5C,{ 0xAE, 0x5D, 0x80,0x31, 0x93, 0x29,0x3D, 0xBE} };
const GUID IID_IWMPPlayerApplication = {0x40897764, 0xCEAB, 0x47BE,{ 0xAD, 0x4A, 0x8E,0x28, 0x53, 0x7F,0x9B, 0xBF} };
const GUID IID_IWMPPlayer3 = {0x54062B68, 0x052A, 0x4C25,{ 0xA3, 0x9F, 0x8B,0x63, 0x34, 0x65,0x11, 0xD4} };
const GUID IID_IWMPPlayer2 = {0x0E6B01D1, 0xD407, 0x4C85,{ 0xBF, 0x5F, 0x1C,0x01, 0xF6, 0x15,0x02, 0x80} };
const GUID IID_IWMPPlayer = {0x6BF52A4F, 0x394A, 0x11D3,{ 0xB1, 0x53, 0x00,0xC0, 0x4F, 0x79,0xFA, 0xA6} };
const GUID IID_IWMPErrorItem2 = {0xF75CCEC0, 0xC67C, 0x475C,{ 0x93, 0x1E, 0x87,0x19, 0x87, 0x0B,0xEE, 0x7D} };
const GUID IID_IWMPControls2 = {0x6F030D25, 0x0890, 0x480F,{ 0x97, 0x75, 0x1F,0x7E, 0x40, 0xAB,0x5B, 0x8E} };
const GUID IID_IWMPMedia2 = {0xAB7C88BB, 0x143E, 0x4EA4,{ 0xAC, 0xC3, 0xE4,0x35, 0x0B, 0x21,0x06, 0xC3} };
const GUID IID_IWMPMedia3 = {0xF118EFC7, 0xF03A, 0x4FB4,{ 0x99, 0xC9, 0x1C,0x02, 0xA5, 0xC1,0x06, 0x5B} };
const GUID IID_IWMPMetadataPicture = {0x5C29BBE0, 0xF87D, 0x4C45,{ 0xAA, 0x28, 0xA7,0x0F, 0x02, 0x30,0xFF, 0xA9} };
const GUID IID_IWMPMetadataText = {0x769A72DB, 0x13D2, 0x45E2,{ 0x9C, 0x48, 0x53,0xCA, 0x9D, 0x5B,0x74, 0x50} };
const GUID IID_IWMPSettings2 = {0xFDA937A4, 0xEECE, 0x4DA5,{ 0xA0, 0xB6, 0x39,0xBF, 0x89, 0xAD,0xE2, 0xC2} };
const GUID IID_IWMPControls3 = {0xA1D1110E, 0xD545, 0x476A,{ 0x9A, 0x78, 0xAC,0x3E, 0x4C, 0xB1,0xE6, 0xBD} };
const GUID IID_IWMPClosedCaption2 = {0x350BA78B, 0x6BC8, 0x4113,{ 0xA5, 0xF5, 0x31,0x20, 0x56, 0x93,0x4E, 0xB6} };
const GUID IID_IWMPMediaCollection2 = {0x8BA957F5, 0xFD8C, 0x4791,{ 0xB8, 0x2D, 0xF8,0x40, 0x40, 0x1E,0xE4, 0x74} };
const GUID IID_IWMPQuery = {0xA00918F3, 0xA6B0, 0x4BFB,{ 0x91, 0x89, 0xFD,0x83, 0x4C, 0x7B,0xC5, 0xA5} };
const GUID IID_IWMPStringCollection2 = {0x46AD648D, 0x53F1, 0x4A74,{ 0x92, 0xE2, 0x2A,0x1B, 0x68, 0xD6,0x3F, 0xD4} };
const GUID IID_IWMPPlayerServices = {0x1D01FBDB, 0xADE2, 0x4C8D,{ 0x98, 0x42, 0xC1,0x90, 0xB9, 0x5C,0x33, 0x06} };
const GUID IID_IWMPPlayerServices2 = {0x1BB1592F, 0xF040, 0x418A,{ 0x9F, 0x71, 0x17,0xC7, 0x51, 0x2B,0x4D, 0x70} };
const GUID IID_IWMPRemoteMediaServices = {0xCBB92747, 0x741F, 0x44FE,{ 0xAB, 0x5B, 0xF1,0xA4, 0x8F, 0x3B,0x2A, 0x59} };
const GUID IID_IWMPSyncServices = {0x8B5050FF, 0xE0A4, 0x4808,{ 0xB3, 0xA8, 0x89,0x3A, 0x9E, 0x1E,0xD8, 0x94} };
const GUID IID_IWMPLibraryServices = {0x39C2F8D5, 0x1CF2, 0x4D5E,{ 0xAE, 0x09, 0xD7,0x34, 0x92, 0xCF,0x9E, 0xAA} };
const GUID IID_IWMPLibrarySharingServices = {0x82CBA86B, 0x9F04, 0x474B,{ 0xA3, 0x65, 0xD6,0xDD, 0x14, 0x66,0xE5, 0x41} };
const GUID IID_IWMPLibrary2 = {0xDD578A4E, 0x79B1, 0x426C,{ 0xBF, 0x8F, 0x3A,0xDD, 0x90, 0x72,0x50, 0x0B} };
const GUID IID_IWMPFolderMonitorServices = {0x788C8743, 0xE57F, 0x439D,{ 0xA4, 0x68, 0x5B,0xC7, 0x7F, 0x2E,0x59, 0xC6} };
const GUID IID_IWMPSyncDevice2 = {0x88AFB4B2, 0x140A, 0x44D2,{ 0x91, 0xE6, 0x45,0x43, 0xDA, 0x46,0x7C, 0xD1} };
const GUID IID_IWMPSyncDevice3 = {0xB22C85F9, 0x263C, 0x4372,{ 0xA0, 0xDA, 0xB5,0x18, 0xDB, 0x9B,0x40, 0x98} };
const GUID IID_IWMPPlaylistCtrl = {0x5F9CFD92, 0x8CAD, 0x11D3,{ 0x9A, 0x7E, 0x00,0xC0, 0x4F, 0x8E,0xFB, 0x70} };
const GUID IID_IAppDispatch = {0xE41C88DD, 0x2364, 0x4FF7,{ 0xA0, 0xF5, 0xCA,0x98, 0x59, 0xAF,0x78, 0x3F} };
const GUID IID_IWMPSafeBrowser = {0xEF870383, 0x83AB, 0x4EA9,{ 0xBE, 0x48, 0x56,0xFA, 0x42, 0x51,0xAF, 0x10} };
const GUID IID_IWMPObjectExtendedProps = {0x21D077C1, 0x4BAA, 0x11D3,{ 0xBD, 0x45, 0x00,0xC0, 0x4F, 0x6E,0xA5, 0xAE} };
const GUID IID_IWMPLayoutSubView = {0x72F486B1, 0x0D43, 0x11D3,{ 0xBD, 0x3F, 0x00,0xC0, 0x4F, 0x6E,0xA5, 0xAE} };
const GUID IID_IWMPLayoutView = {0x172E905D, 0x80D9, 0x4C2F,{ 0xB7, 0xCE, 0x2C,0xCB, 0x77, 0x17,0x87, 0xA2} };
const GUID IID_IWMPEventObject = {0x5AF0BEC1, 0x46AA, 0x11D3,{ 0xBD, 0x45, 0x00,0xC0, 0x4F, 0x6E,0xA5, 0xAE} };
const GUID IID_IWMPTheme = {0x6FCAE13D, 0xE492, 0x4584,{ 0x9C, 0x21, 0xD2,0xC0, 0x52, 0xA2,0xA3, 0x3A} };
const GUID IID_IWMPLayoutSettingsDispatch = {0xB2C2D18E, 0x97AF, 0x4B6A,{ 0xA5, 0x6B, 0x2F,0xFF, 0xF4, 0x70,0xFB, 0x81} };
const GUID IID_IWMPWindow = {0x43D5AE92, 0x4332, 0x477C,{ 0x88, 0x83, 0xE0,0xB3, 0xB0, 0x63,0xC5, 0xD2} };
const GUID IID_IWMPBrandDispatch = {0x98BB02D4, 0xED74, 0x43CC,{ 0xAD, 0x6A, 0x45,0x88, 0x8F, 0x2E,0x0D, 0xCC} };
const GUID IID_IWMPNowPlayingHelperDispatch = {0x504F112E, 0x77CC, 0x4E3C,{ 0xA0, 0x73, 0x53,0x71, 0xB3, 0x1D,0x9B, 0x36} };
const GUID IID_IWMPNowDoingDispatch = {0x2A2E0DA3, 0x19FA, 0x4F82,{ 0xBE, 0x18, 0xCD,0x7D, 0x7A, 0x3B,0x97, 0x7F} };
const GUID IID_IWMPHoverPreviewDispatch = {0x946B023E, 0x044C, 0x4473,{ 0x80, 0x18, 0x74,0x95, 0x4F, 0x09,0xDC, 0x7E} };
const GUID DIID_IWMPButtonCtrlEvents = {0xBB17FFF7, 0x1692, 0x4555,{ 0x91, 0x8A, 0x6A,0xF7, 0xBF, 0xAC,0xED, 0xD2} };
const GUID CLSID_WMPButtonCtrl = {0x87291B51, 0x0C8E, 0x11D3,{ 0xBB, 0x2A, 0x00,0xA0, 0xC9, 0x3C,0xA7, 0x3A} };
const GUID IID_IWMPButtonCtrl = {0x87291B50, 0x0C8E, 0x11D3,{ 0xBB, 0x2A, 0x00,0xA0, 0xC9, 0x3C,0xA7, 0x3A} };
const GUID CLSID_WMPListBoxCtrl = {0xFC1880CF, 0x83B9, 0x43A7,{ 0xA0, 0x66, 0xC4,0x4C, 0xE8, 0xC8,0x25, 0x83} };
const GUID IID_IWMPListBoxCtrl = {0xFC1880CE, 0x83B9, 0x43A7,{ 0xA0, 0x66, 0xC4,0x4C, 0xE8, 0xC8,0x25, 0x83} };
const GUID IID_IWMPListBoxItem = {0xD255DFB8, 0xC22A, 0x42CF,{ 0xB8, 0xB7, 0xF1,0x5D, 0x7B, 0xCF,0x65, 0xD6} };
const GUID IID_IWMPPlaylistCtrlColumn = {0x63D9D30F, 0xAE4C, 0x4678,{ 0x8C, 0xA8, 0x57,0x20, 0xF4, 0xFE,0x44, 0x19} };
const GUID DIID_IWMPSliderCtrlEvents = {0xCDAC14D2, 0x8BE4, 0x11D3,{ 0xBB, 0x48, 0x00,0xA0, 0xC9, 0x3C,0xA7, 0x3A} };
const GUID CLSID_WMPSliderCtrl = {0xF2BF2C90, 0x405F, 0x11D3,{ 0xBB, 0x39, 0x00,0xA0, 0xC9, 0x3C,0xA7, 0x3A} };
const GUID IID_IWMPSliderCtrl = {0xF2BF2C8F, 0x405F, 0x11D3,{ 0xBB, 0x39, 0x00,0xA0, 0xC9, 0x3C,0xA7, 0x3A} };
const GUID DIID_IWMPVideoCtrlEvents = {0xA85C0477, 0x714C, 0x4A06,{ 0xB9, 0xF6, 0x7C,0x8C, 0xA3, 0x8B,0x45, 0xDC} };
const GUID CLSID_WMPVideoCtrl = {0x61CECF11, 0xFC3A, 0x11D2,{ 0xA1, 0xCD, 0x00,0x50, 0x04, 0x60,0x27, 0x52} };
const GUID IID_IWMPVideoCtrl = {0x61CECF10, 0xFC3A, 0x11D2,{ 0xA1, 0xCD, 0x00,0x50, 0x04, 0x60,0x27, 0x52} };
const GUID CLSID_WMPEffects = {0x47DEA830, 0xD619, 0x4154,{ 0xB8, 0xD8, 0x6B,0x74, 0x84, 0x5D,0x6A, 0x2D} };
const GUID IID_IWMPEffectsCtrl = {0xA9EFAB80, 0x0A60, 0x4C3F,{ 0xBB, 0xD1, 0x45,0x58, 0xDD, 0x2A,0x97, 0x69} };
const GUID CLSID_WMPEqualizerSettingsCtrl = {0x93EB32F5, 0x87B1, 0x45AD,{ 0xAC, 0xC6, 0x0F,0x24, 0x83, 0xDB,0x83, 0xBB} };
const GUID IID_IWMPEqualizerSettingsCtrl = {0x2BD3716F, 0xA914, 0x49FB,{ 0x86, 0x55, 0x99,0x6D, 0x5F, 0x49,0x54, 0x98} };
const GUID CLSID_WMPVideoSettingsCtrl = {0xAE7BFAFE, 0xDCC8, 0x4A73,{ 0x92, 0xC8, 0xCC,0x30, 0x0C, 0xA8,0x88, 0x59} };
const GUID IID_IWMPVideoSettingsCtrl = {0x07EC23DA, 0xEF73, 0x4BDE,{ 0xA4, 0x0F, 0xF2,0x69, 0xE0, 0xB7,0xAF, 0xD6} };
const GUID CLSID_WMPLibraryTreeCtrl = {0xD9DE732A, 0xAEE9, 0x4503,{ 0x9D, 0x11, 0x56,0x05, 0x58, 0x99,0x77, 0xA8} };
const GUID IID_IWMPLibraryTreeCtrl = {0xB738FCAE, 0xF089, 0x45DF,{ 0xAE, 0xD6, 0x03,0x4B, 0x9E, 0x7D,0xB6, 0x32} };
const GUID CLSID_WMPEditCtrl = {0x6342FCED, 0x25EA, 0x4033,{ 0xBD, 0xDB, 0xD0,0x49, 0xA1, 0x43,0x82, 0xD3} };
const GUID IID_IWMPEditCtrl = {0x70E1217C, 0xC617, 0x4CFD,{ 0xBD, 0x8A, 0x69,0xCA, 0x20, 0x43,0xE7, 0x0B} };
const GUID CLSID_WMPSkinList = {0xA8A55FAC, 0x82EA, 0x4BD7,{ 0xBD, 0x7B, 0x11,0x58, 0x6A, 0x4D,0x99, 0xE4} };
const GUID IID_IWMPSkinList = {0x8CEA03A2, 0xD0C5, 0x4E97,{ 0x9C, 0x38, 0xA6,0x76, 0xA6, 0x39,0xA5, 0x1D} };
const GUID IID_IWMPPluginUIHost = {0x5D0AD945, 0x289E, 0x45C5,{ 0xA9, 0xC6, 0xF3,0x01, 0xF0, 0x15,0x21, 0x08} };
const GUID CLSID_WMPMenuCtrl = {0xBAB3768B, 0x8883, 0x4AEC,{ 0x9F, 0x9B, 0xE1,0x4C, 0x94, 0x79,0x13, 0xEF} };
const GUID IID_IWMPMenuCtrl = {0x158A7ADC, 0x33DA, 0x4039,{ 0xA5, 0x53, 0xBD,0xDB, 0xBE, 0x38,0x9F, 0x5C} };
const GUID CLSID_WMPAutoMenuCtrl = {0x6B28F900, 0x8D64, 0x4B80,{ 0x99, 0x63, 0xCC,0x52, 0xDD, 0xD1,0xFB, 0xB4} };
const GUID IID_IWMPAutoMenuCtrl = {0x1AD13E0B, 0x4F3A, 0x41DF,{ 0x9B, 0xE2, 0xF9,0xE6, 0xFE, 0x0A,0x78, 0x75} };
const GUID CLSID_WMPRegionalButtonCtrl = {0xAE3B6831, 0x25A9, 0x11D3,{ 0xBD, 0x41, 0x00,0xC0, 0x4F, 0x6E,0xA5, 0xAE} };
const GUID IID_IWMPRegionalButtonCtrl = {0x58D507B1, 0x2354, 0x11D3,{ 0xBD, 0x41, 0x00,0xC0, 0x4F, 0x6E,0xA5, 0xAE} };
const GUID DIID_IWMPRegionalButtonEvents = {0x50FC8D31, 0x67AC, 0x11D3,{ 0xBD, 0x4C, 0x00,0xC0, 0x4F, 0x6E,0xA5, 0xAE} };
const GUID CLSID_WMPRegionalButton = {0x09AEFF11, 0x69EF, 0x11D3,{ 0xBD, 0x4D, 0x00,0xC0, 0x4F, 0x6E,0xA5, 0xAE} };
const GUID IID_IWMPRegionalButton = {0x58D507B2, 0x2354, 0x11D3,{ 0xBD, 0x41, 0x00,0xC0, 0x4F, 0x6E,0xA5, 0xAE} };
const GUID DIID_IWMPCustomSliderCtrlEvents = {0x95F45AA4, 0xED0A, 0x11D2,{ 0xBA, 0x67, 0x00,0x00, 0xF8, 0x08,0x55, 0xE6} };
const GUID CLSID_WMPCustomSliderCtrl = {0x95F45AA3, 0xED0A, 0x11D2,{ 0xBA, 0x67, 0x00,0x00, 0xF8, 0x08,0x55, 0xE6} };
const GUID IID_IWMPCustomSlider = {0x95F45AA2, 0xED0A, 0x11D2,{ 0xBA, 0x67, 0x00,0x00, 0xF8, 0x08,0x55, 0xE6} };
const GUID CLSID_WMPTextCtrl = {0xDDDA102E, 0x0E17, 0x11D3,{ 0xA2, 0xE2, 0x00,0xC0, 0x4F, 0x79,0xF8, 0x8E} };
const GUID IID_IWMPTextCtrl = {0x237DAC8E, 0x0E32, 0x11D3,{ 0xA2, 0xE2, 0x00,0xC0, 0x4F, 0x79,0xF8, 0x8E} };
const GUID CLSID_WMPPlaylistCtrl = {0x5F9CFD93, 0x8CAD, 0x11D3,{ 0x9A, 0x7E, 0x00,0xC0, 0x4F, 0x8E,0xFB, 0x70} };
const GUID IID_ITaskCntrCtrl = {0x891EADB1, 0x1C45, 0x48B0,{ 0xB7, 0x04, 0x49,0xA8, 0x88, 0xDA,0x98, 0xC4} };
const GUID DIID__WMPCoreEvents = {0xD84CCA96, 0xCCE2, 0x11D2,{ 0x9E, 0xCC, 0x00,0x00, 0xF8, 0x08,0x59, 0x81} };
const GUID CLSID_WMPCore = {0x09428D37, 0xE0B9, 0x11D2,{ 0xB1, 0x47, 0x00,0xC0, 0x4F, 0x79,0xFA, 0xA6} };
const GUID IID_IWMPGraphEventHandler = {0x6B550945, 0x018F, 0x11D3,{ 0xB1, 0x4A, 0x00,0xC0, 0x4F, 0x79,0xFA, 0xA6} };
const GUID IID_IBattery = {0xF8578BFA, 0xCD8F, 0x4CE1,{ 0xA6, 0x84, 0x5B,0x7E, 0x85, 0xFC,0xA7, 0xDC} };
const GUID IID_IBatteryPreset = {0x40C6BDE7, 0x9C90, 0x49D4,{ 0xAD, 0x20, 0xBE,0xF8, 0x1A, 0x6C,0x5F, 0x22} };
const GUID IID_IBatteryRandomPreset = {0xF85E2D65, 0x207D, 0x48DB,{ 0x84, 0xB1, 0x91,0x5E, 0x17, 0x35,0xDB, 0x17} };
const GUID IID_IBatterySavedPreset = {0x876E7208, 0x0172, 0x4EBB,{ 0xB0, 0x8B, 0x2E,0x1D, 0x30, 0xDF,0xE4, 0x4C} };
const GUID IID_IBarsEffect = {0x33E9291A, 0xF6A9, 0x11D2,{ 0x94, 0x35, 0x00,0xA0, 0xC9, 0x2A,0x2F, 0x2D} };
const GUID IID_IWMPExternal = {0xE2CC638C, 0xFD2C, 0x409B,{ 0xA1, 0xEA, 0x5D,0xDB, 0x72, 0xDC,0x8E, 0x84} };
const GUID IID_IWMPExternalColors = {0xD10CCDFF, 0x472D, 0x498C,{ 0xB5, 0xFE, 0x36,0x30, 0xE5, 0x40,0x5E, 0x0A} };
const GUID IID_IWMPSubscriptionServiceLimited = {0x54DF358E, 0xCF38, 0x4010,{ 0x99, 0xF1, 0xF4,0x4B, 0x0E, 0x90,0x00, 0xE5} };
const GUID IID_IWMPSubscriptionServiceExternal = {0x2E922378, 0xEE70, 0x4CEB,{ 0xBB, 0xAB, 0xCE,0x7C, 0xE4, 0xA0,0x48, 0x16} };
const GUID IID_IWMPDownloadManager = {0xE15E9AD1, 0x8F20, 0x4CC4,{ 0x9E, 0xC7, 0x1A,0x32, 0x8C, 0xA8,0x6A, 0x0D} };
const GUID IID_IWMPDownloadCollection = {0x0A319C7F, 0x85F9, 0x436C,{ 0xB8, 0x8E, 0x82,0xFD, 0x88, 0x00,0x0E, 0x1C} };
const GUID IID_IWMPDownloadItem2 = {0x9FBB3336, 0x6DA3, 0x479D,{ 0xB8, 0xFF, 0x67,0xD4, 0x6E, 0x20,0xA9, 0x87} };
const GUID IID_IWMPDownloadItem = {0xC9470E8E, 0x3F6B, 0x46A9,{ 0xA0, 0xA9, 0x45,0x28, 0x15, 0xC3,0x42, 0x97} };
const GUID IID_IWMPSubscriptionServicePlayMedia = {0x5F0248C1, 0x62B3, 0x42D7,{ 0xB9, 0x27, 0x02,0x91, 0x19, 0xE6,0xAD, 0x14} };
const GUID IID_IWMPDiscoExternal = {0xA915CEA2, 0x72DF, 0x41E1,{ 0xA5, 0x76, 0xEF,0x0B, 0xAE, 0x5E,0x51, 0x69} };
const GUID IID_IWMPCDDVDWizardExternal = {0x2D7EF888, 0x1D3C, 0x484A,{ 0xA9, 0x06, 0x9F,0x49, 0xD9, 0x9B,0xB3, 0x44} };
const GUID IID_IWMPBaseExternal = {0xF81B2A59, 0x02BC, 0x4003,{ 0x8B, 0x2F, 0xC1,0x24, 0xAF, 0x66,0xFC, 0x66} };
const GUID IID_IWMPOfflineExternal = {0x3148E685, 0xB243, 0x423D,{ 0x83, 0x41, 0x84,0x80, 0xD6, 0xEF,0xF6, 0x74} };
const GUID IID_IWMPDMRAVTransportService = {0x4E195DB1, 0x9E29, 0x47FC,{ 0x9C, 0xE1, 0xDE,0x99, 0x37, 0xD3,0x29, 0x25} };
const GUID IID_IWMPDMRConnectionManagerService = {0xFB61CD38, 0x8DE7, 0x4479,{ 0x8B, 0x76, 0xA8,0xD0, 0x97, 0xC2,0x0C, 0x70} };
const GUID IID_IWMPDMRRenderingControlService = {0xFF4B1BDA, 0x19F0, 0x42CF,{ 0x8D, 0xDA, 0x19,0x16, 0x29, 0x50,0xC5, 0x43} };

};     // namespace Wmplib_tlb
