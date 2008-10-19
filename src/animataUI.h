// generated by Fast Light User Interface Designer (fluid) version 1.0108

#ifndef animataUI_h
#define animataUI_h
#include <FL/Fl.H>
class Fl_Eval_Slider;
#include <FL/Fl_Double_Window.H>
#include <stdlib.h>
#include "animata.h"
#include <Fl/Fl_File_Chooser.h>
#include <FL/Fl_Menu_Bar.H>
#include <FL/Fl_Slider.H> /* Fl_Eval_Slider */
#include <math.h> /* Fl_Eval_Slider */
#include "Playback.h"
#include <FL/Fl_Tabs.H>
#include <FL/Fl_Group.H>
#include <FL/Fl_Button.H>
#include <Fl/Fl_JPEG_Image.h>
#include <Fl/Fl_PNG_Image.h>
#include "ImageBox.h"
extern void cb_Move(Fl_Button*, long);
#include <FL/Fl_Scroll.H>
#include <FL/Fl_Pack.H>
extern void cb_Create(Fl_Button*, long);
#include <vector>
#include <FL/Fl_Value_Slider.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Value_Input.H>
#include <FL/Fl_Check_Button.H>
#include <FL/Fl_Light_Button.H>
#include <FL/Fl_Dial.H>
extern void cb_Vertex(Fl_Check_Button*, long);
#include "Layer.h"
#include "FLU/Flu_Tree_Browser.h"

class AnimataUI {
public:
  Playback *playback; 
  AnimataSettings settings; 
  AnimataUI();
  Fl_Double_Window *window;
  static Fl_Menu_Item menu_[];
private:
  void cb_New_i(Fl_Menu_*, void*);
  static void cb_New(Fl_Menu_*, void*);
  void cb_Open_i(Fl_Menu_*, void*);
  static void cb_Open(Fl_Menu_*, void*);
  void cb_Import_i(Fl_Menu_*, void*);
  static void cb_Import(Fl_Menu_*, void*);
  void cb_Save_i(Fl_Menu_*, void*);
  static void cb_Save(Fl_Menu_*, void*);
  void cb_Save1_i(Fl_Menu_*, void*);
  static void cb_Save1(Fl_Menu_*, void*);
  void cb_Quit_i(Fl_Menu_*, void*);
  static void cb_Quit(Fl_Menu_*, void*);
  void cb_About_i(Fl_Menu_*, void*);
  static void cb_About(Fl_Menu_*, void*);
  Fl_Tabs *tabs;
  void cb_tabs_i(Fl_Tabs*, void*);
  static void cb_tabs(Fl_Tabs*, void*);
public:
  Fl_Group *imagePanel;
  Fl_Group *imageButtons;
private:
  void cb_Add_i(Fl_Button*, void*);
  static void cb_Add(Fl_Button*, void*);
  void cb_Move_i(Fl_Button*, long);
  static void cb_Move(Fl_Button*, long);
public:
  Fl_Scroll *imageScrollArea;
  Fl_Pack *imagePack;
private:
  void cb_Create_i(Fl_Button*, long);
  static void cb_Create(Fl_Button*, long);
  void cb_Triangulate_i(Fl_Button*, void*);
  static void cb_Triangulate(Fl_Button*, void*);
  void cb_Texturize_i(Fl_Button*, long);
  static void cb_Texturize(Fl_Button*, long);
  void cb_threshold_i(Fl_Value_Slider*, void*);
  static void cb_threshold(Fl_Value_Slider*, void*);
public:
  Fl_Tabs *skeletonPrefTabs;
  Fl_Group *jointPrefs;
  Fl_Input *jointName;
private:
  void cb_jointName_i(Fl_Input*, void*);
  static void cb_jointName(Fl_Input*, void*);
public:
  Fl_Value_Input *jointX;
private:
  void cb_jointX_i(Fl_Value_Input*, void*);
  static void cb_jointX(Fl_Value_Input*, void*);
public:
  Fl_Value_Input *jointY;
private:
  void cb_jointY_i(Fl_Value_Input*, void*);
  static void cb_jointY(Fl_Value_Input*, void*);
public:
  Fl_Check_Button *jointFixed;
private:
  void cb_jointFixed_i(Fl_Check_Button*, void*);
  static void cb_jointFixed(Fl_Check_Button*, void*);
public:
  Fl_Check_Button *jointOSC;
private:
  void cb_jointOSC_i(Fl_Check_Button*, void*);
  static void cb_jointOSC(Fl_Check_Button*, void*);
public:
  Fl_Group *bonePrefs;
  Fl_Input *boneName;
private:
  void cb_boneName_i(Fl_Input*, void*);
  static void cb_boneName(Fl_Input*, void*);
public:
  Fl_Eval_Slider *boneStiffness;
private:
  void cb_boneStiffness_i(Fl_Eval_Slider*, void*);
  static void cb_boneStiffness(Fl_Eval_Slider*, void*);
public:
  Fl_Value_Slider *boneLengthMult;
private:
  void cb_boneLengthMult_i(Fl_Value_Slider*, void*);
  static void cb_boneLengthMult(Fl_Value_Slider*, void*);
public:
  Fl_Value_Slider *boneLengthMultMin;
private:
  void cb_boneLengthMultMin_i(Fl_Value_Slider*, void*);
  static void cb_boneLengthMultMin(Fl_Value_Slider*, void*);
public:
  Fl_Value_Slider *boneLengthMultMax;
private:
  void cb_boneLengthMultMax_i(Fl_Value_Slider*, void*);
  static void cb_boneLengthMultMax(Fl_Value_Slider*, void*);
public:
  Fl_Value_Slider *boneTempo;
private:
  void cb_boneTempo_i(Fl_Value_Slider*, void*);
  static void cb_boneTempo(Fl_Value_Slider*, void*);
public:
  Fl_Group *attachVertices;
  Fl_Value_Slider *attachArea;
private:
  void cb_attachArea_i(Fl_Value_Slider*, void*);
  static void cb_attachArea(Fl_Value_Slider*, void*);
public:
  Fl_Value_Slider *attachFalloff;
private:
  void cb_attachFalloff_i(Fl_Value_Slider*, void*);
  static void cb_attachFalloff(Fl_Value_Slider*, void*);
  void cb_Attach_i(Fl_Button*, void*);
  static void cb_Attach(Fl_Button*, void*);
  void cb_Disattach_i(Fl_Button*, void*);
  static void cb_Disattach(Fl_Button*, void*);
public:
  Fl_Group *noPrefs;
private:
  void cb_play_i(Fl_Light_Button*, void*);
  static void cb_play(Fl_Light_Button*, void*);
  void cb_iteration_i(Fl_Value_Slider*, void*);
  static void cb_iteration(Fl_Value_Slider*, void*);
  void cb_gravity_i(Fl_Light_Button*, void*);
  static void cb_gravity(Fl_Light_Button*, void*);
  void cb__i(Fl_Value_Slider*, void*);
  static void cb_(Fl_Value_Slider*, void*);
  void cb_1_i(Fl_Dial*, void*);
  static void cb_1(Fl_Dial*, void*);
  void cb_Add1_i(Fl_Button*, void*);
  static void cb_Add1(Fl_Button*, void*);
  void cb_Delete_i(Fl_Button*, void*);
  static void cb_Delete(Fl_Button*, void*);
public:
  Fl_Input *layerName;
private:
  void cb_layerName_i(Fl_Input*, void*);
  static void cb_layerName(Fl_Input*, void*);
public:
  Fl_Value_Slider *layerAlpha;
private:
  void cb_layerAlpha_i(Fl_Value_Slider*, void*);
  static void cb_layerAlpha(Fl_Value_Slider*, void*);
public:
  Fl_Check_Button *layerVisible;
private:
  void cb_layerVisible_i(Fl_Check_Button*, long);
  static void cb_layerVisible(Fl_Check_Button*, long);
  void cb_Vertex_i(Fl_Check_Button*, long);
  static void cb_Vertex(Fl_Check_Button*, long);
  void cb_show_i(Fl_Check_Button*, void*);
  static void cb_show(Fl_Check_Button*, void*);
public:
  AnimataWindow *editorBox;
private:
  Fl_Group *layers;
public:
  Flu_Tree_Browser *layerTree;
private:
  void cb_layerTree_i(Flu_Tree_Browser*, void*);
  static void cb_layerTree(Flu_Tree_Browser*, void*);
public:
  void show();
  void fullscreen();
  void resize(int x, int y, int w, int h);
  ImageBox * loadImage(const char *filename);
  ~AnimataUI();
  Fl_File_Chooser *fileChooser; 
  void refreshLayerTree(Layer *root);
  void clearLayerTree();
private:
  void addLayerNodeRecursive(Layer *layer, Flu_Tree_Browser::Node *node);
  union { int i; float f; const char *str; } tempStorage /* temporary storage space for returning values as void * */; 
};

class Fl_Eval_Slider : public Fl_Slider {
  uchar textfont_, textsize_; 
  unsigned textcolor_; 
public:
  Fl_Eval_Slider(int X, int Y, int W, int H, const char *L) ;
  void draw();
  int handle(int event);
  Fl_Font textfont() const;
  void textfont(uchar s);
  uchar textsize() const;
  void textsize(uchar s);
  Fl_Color textcolor() const;
  void textcolor(unsigned s);
private:
  float eval(float f);
  float evalinv(float f);
public:
  float value();
  void value(float f);
};
#endif
