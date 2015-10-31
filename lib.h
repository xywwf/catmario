#include <stdint.h>
#include <emscripten.h>

typedef uint8_t byte;
#define TRUE 1
#define FALSE 0


#define DX_FONTTYPE_EDGE                            (1)             // ���å��Ĥ��ե����
#define DX_FONTTYPE_NORMAL                          (0)             // �Ω`�ޥ�ե����

#define DX_INPUT_KEY_PAD1                           (0x1001)        // ���`�����ȥѥåɣ�����


#define PAD_INPUT_LEFT                              (0x01)
#define PAD_INPUT_RIGHT                             (0x02)
#define PAD_INPUT_DOWN                              (0x04)
#define PAD_INPUT_UP                                (0x08)
#define PAD_INPUT_JUMP								(0x10)
#define PAD_INPUT_DECIDE							(0x20)

extern "C" {
  void input_init();
  int input_waitkey(void);
  int input_get();

  int  graphics_init();
  void begindraw();
  void enddraw();

  int loadimage(const char *FileName);
  int subimage(int SrcX, int SrcY, int Width, int Height, int SrcGraphHandle);
  void getimagesize(int GrHandle, int *SizeXBuf, int *SizeYBuf);

  void clearscreen();
  void drawline(int a, int b, int c, int d);
  void drawrect(int a, int b, int c, int d);
  void fillrect(int a, int b, int c, int d);
  void drawarc(int a, int b, int c, int d);
  void fillarc(int a, int b, int c, int d);

  void setcolor(int red, int green, int blue);
  void setc0();
  void setc1();
  void setmirror(int mirror);
  void drawimage(int mx, int a, int b);
  void drawimageflip(int mx, int a, int b);

  void setfont(int x, int y);
  int setfonttype(int FontType);
  int drawstring(int x, int y, const char *String);

  void sound_init();
  void soundplay(int x);
  void soundstop(int x);
  int soundcheck(int x);
  void bgmchange(int x);
  void bgmplay();
  void bgmstop();

  int getrand(int value);
  int gettime();
}