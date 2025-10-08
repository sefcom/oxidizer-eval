__int64 __fastcall alacritty::display::Display::request_frame(__int64 a1, int a2)
{
  int v2; // edx
  double v3; // xmm0_8
  double v4; // xmm1_8
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rcx
  int v7; // r14d
  int v8; // edx
  int v9; // ebp
  __int64 v10; // r15
  _OWORD v12[7]; // [rsp+8h] [rbp-210h] BYREF
  __int64 v13; // [rsp+78h] [rbp-1A0h]
  _OWORD v14[7]; // [rsp+80h] [rbp-198h] BYREF
  __int64 v15; // [rsp+F0h] [rbp-128h]
  _BYTE v16[232]; // [rsp+130h] [rbp-E8h] BYREF

  *(_BYTE *)(a1 + 1040) = 0;
  alacritty::display::window::Window::current_monitor(v12, *(_QWORD *)(a1 + 832), *(_QWORD *)(a1 + 840));
  if ( *(_QWORD *)&v12[0] == 0x8000000000000001LL )
    goto LABEL_4;
  v15 = v13;
  v14[6] = v12[6];
  v14[5] = v12[5];
  v14[4] = v12[4];
  v14[3] = v12[3];
  v14[2] = v12[2];
  v14[1] = v12[1];
  v14[0] = v12[0];
  if ( (alacritty::display::Display::request_frame::{{closure}}(v14) & 1) == 0 )
LABEL_4:
    v3 = 60000.0;
  else
    v3 = (double)v2;
  v4 = 1000000.0 / v3 * 1000.0;
  v5 = 0LL;
  if ( v4 >= 0.0 )
    v5 = (unsigned int)(int)v4;
  v6 = -1LL;
  if ( v4 <= 1.844674407370955e19 )
    v6 = v5;
  v7 = alacritty::display::FrameTimer::compute_timeout(a1 + 1480, v6 / 0xF4240, 1000 * (unsigned int)(v6 % 0xF4240));
  v9 = v8;
  v10 = alacritty::display::window::Window::id(a1 + 800);
  *(_QWORD *)&v14[0] = 0x800000000000000ALL;
  alacritty::event::Event::new(v16, v14, v10);
  return alacritty::scheduler::Scheduler::schedule(a2, (unsigned int)v16, v7, v9, 0, v10, 4);
}