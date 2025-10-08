void __fastcall __noreturn alacritty::renderer::Renderer::draw_string(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  char v8; // [rsp+Fh] [rbp-99h] BYREF
  __int16 v9; // [rsp+10h] [rbp-98h] BYREF
  char v10; // [rsp+12h] [rbp-96h]
  __int16 v11; // [rsp+14h] [rbp-94h] BYREF
  char v12; // [rsp+16h] [rbp-92h]
  __int64 v13; // [rsp+18h] [rbp-90h] BYREF
  __int64 v14; // [rsp+20h] [rbp-88h] BYREF
  _QWORD v15[5]; // [rsp+28h] [rbp-80h] BYREF
  _BYTE v16[88]; // [rsp+50h] [rbp-58h] BYREF

  v13 = a2;
  v14 = a3;
  v9 = a4;
  v10 = BYTE2(a4);
  v11 = a5;
  v12 = BYTE2(a5);
  v8 = 0;
  core::iter::traits::iterator::Iterator::enumerate(v16, a6);
  v15[0] = &v8;
  v15[1] = &v13;
  v15[2] = &v14;
  v15[3] = &v9;
  v15[4] = &v11;
  alacritty::renderer::Renderer::draw_cells(a1, a7, a8, v15);
}