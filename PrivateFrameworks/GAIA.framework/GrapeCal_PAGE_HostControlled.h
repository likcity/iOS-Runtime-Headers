/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GAIA.framework/GAIA
 */

@class <iGaiaProject>, DPTextLayer, NSTimer, SKButton, SKImageLayer, SKLayer;

@interface GrapeCal_PAGE_HostControlled : SKLayerModule <iGaiaGrapeSystemUi> {
    struct tGaia_HostControlledUiSetup { 
        unsigned char bgColorR; 
        unsigned char bgColorG; 
        unsigned char bgColorB; 
        unsigned char bgColorA; 
        BOOL imagePathName[424]; 
        BOOL unitName[16]; 
        unsigned char msgColorR; 
        unsigned char msgColorG; 
        unsigned char msgColorB; 
        unsigned char msgColorA; 
        BOOL message1[32]; 
        BOOL message2[128]; 
        BOOL infoText[10][64]; 
        unsigned char infoTextColor[10][4]; 
        unsigned char infoTextBgColor[10][4]; 
        unsigned char sysPwrCtrl; 
    SKButton *cBtn_menuHalt;
    SKButton *cBtn_menuQuit;
    SKButton *cBtn_menuReboot;
    SKButton *cBtn_quit;
    SKLayer *cLyr_background;
    SKImageLayer *cLyr_image;
    SKLayer *cLyr_menu;
    DPTextLayer *cTxt_infoText[10];
    DPTextLayer *cTxt_textMessage2;
    DPTextLayer *cTxt_textMessage;
    DPTextLayer *cTxt_unitNumber;
    DPTextLayer *cTxt_version;
    <iGaiaProject> *proj;
    NSTimer *tempMonitor;
    } uiStat;
}

- (void)OnButton:(id)arg1;
- (void)OnTimer:(id)arg1;
- (void)SetProject:(id)arg1;
- (void)UpdateUiStatus;
- (void)addContentToLayer:(id)arg1;
- (id)init;
- (void)quit:(id)arg1;
- (void)reboot:(id)arg1;
- (void)shutdown:(id)arg1;

@end
