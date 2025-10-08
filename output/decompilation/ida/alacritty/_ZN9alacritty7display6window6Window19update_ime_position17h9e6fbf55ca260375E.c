__int64 __fastcall alacritty::display::window::Window::update_ime_position(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        float *a4)
{
  float v4; // xmm0_4
  float v5; // xmm2_4
  double v6; // xmm0_8
  __int64 v7; // rsi
  float v8; // xmm1_4

  if ( a3 < 0 )
    v4 = (float)(int)(((unsigned __int64)a3 >> 1) | a3 & 1) + (float)(int)(((unsigned __int64)a3 >> 1) | a3 & 1);
  else
    v4 = (float)(int)a3;
  v5 = a4[6];
  v6 = (float)((float)(v4 * v5) + a4[8]);
  v7 = *(unsigned __int8 *)(a1 + 243) + a2;
  if ( v7 < 0 )
    v8 = (float)(int)(((unsigned __int64)v7 >> 1) | v7 & 1) + (float)(int)(((unsigned __int64)v7 >> 1) | v7 & 1);
  else
    v8 = (float)(int)v7;
  return winit::window::Window::set_ime_cursor_area(
           *(_QWORD *)(a1 + 32),
           *(_QWORD *)(a1 + 40),
           v6,
           (float)((float)(v8 * a4[7]) + a4[9]),
           v5 + v5,
           a4[7]);
}