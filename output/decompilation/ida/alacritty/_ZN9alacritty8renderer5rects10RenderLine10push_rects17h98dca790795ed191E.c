__int64 __fastcall alacritty::renderer::rects::RenderLine::push_rects(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v10; // r8
  float v11; // xmm0_4
  __int128 v12; // xmm2
  float v13; // xmm1_4
  char v14; // bp
  char v16; // [rsp+8h] [rbp-A0h] BYREF
  _QWORD v17[3]; // [rsp+10h] [rbp-98h] BYREF
  __int128 v18; // [rsp+28h] [rbp-80h]
  __int128 v19; // [rsp+40h] [rbp-68h]
  __int128 v20; // [rsp+50h] [rbp-58h]
  _BYTE v21[72]; // [rsp+60h] [rbp-48h] BYREF

  v10 = a7;
  if ( a4 <= 0xFFFu )
  {
    switch ( a4 )
    {
      case 8u:
        v13 = *(float *)(a2 + 20);
        goto LABEL_13;
      case 0x200u:
        v13 = *(float *)(a2 + 28);
        goto LABEL_13;
      case 0x800u:
        v11 = *(float *)(a2 + 16);
        v12 = 0x3F400000u;
        *(float *)&v12 = 0.75 * v11;
        v20 = v12;
        v19 = *(unsigned int *)(a2 + 24);
        alacritty::renderer::rects::RenderLine::create_rect(v17, a3, a5, a6, a7, v11, 0.25 * v11);
        alloc::vec::Vec<T,A>::push(a1, v17, &off_883960);
        v13 = *(float *)&v20;
        v10 = a7;
LABEL_13:
        v14 = 0;
        goto LABEL_15;
    }
LABEL_16:
    v17[0] = &off_883950;
    v17[1] = 1LL;
    v17[2] = &v16;
    v18 = 0LL;
    core::panicking::panic_fmt(v17, &off_883990);
  }
  switch ( a4 )
  {
    case 0x1000u:
      v13 = *(float *)(a2 + 16);
      v14 = 1;
      break;
    case 0x2000u:
      v13 = *(float *)(a2 + 16);
      v14 = 2;
      break;
    case 0x4000u:
      v13 = *(float *)(a2 + 20);
      v14 = 3;
      break;
    default:
      goto LABEL_16;
  }
LABEL_15:
  alacritty::renderer::rects::RenderLine::create_rect(v21, a3, a5, a6, v10, *(float *)(a2 + 16), v13);
  v21[23] = v14;
  return alloc::vec::Vec<T,A>::push(a1, v21, &off_883978);
}