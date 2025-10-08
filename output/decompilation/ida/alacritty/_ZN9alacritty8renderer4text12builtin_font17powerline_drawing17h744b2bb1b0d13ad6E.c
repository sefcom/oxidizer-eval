__int64 __fastcall alacritty::renderer::text::builtin_font::powerline_drawing(
        _QWORD *a1,
        __int64 a2,
        double *a3,
        char a4,
        char a5)
{
  double v5; // xmm0_8
  int v6; // ebx
  int v7; // r15d
  int v8; // ebp
  int v9; // r15d
  __int64 result; // rax
  double v11; // xmm2_8
  double v12; // xmm2_8
  int v13; // r15d
  int v14; // r14d
  int v15; // ebp
  double v16; // xmm5_8
  double v17; // xmm3_8
  float v18; // xmm7_4
  float v19; // xmm6_4
  __int64 v20; // rax
  double v21; // xmm3_8
  float v22; // xmm0_4
  int v23; // ecx
  int v24; // r8d
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rsi
  _QWORD *v28; // rdi
  float v29; // [rsp+8h] [rbp-130h]
  unsigned __int64 v30; // [rsp+8h] [rbp-130h]
  float v31; // [rsp+Ch] [rbp-12Ch]
  int v32; // [rsp+10h] [rbp-128h] BYREF
  int v33; // [rsp+14h] [rbp-124h] BYREF
  int v34; // [rsp+18h] [rbp-120h] BYREF
  int v35; // [rsp+1Ch] [rbp-11Ch] BYREF
  float v36; // [rsp+20h] [rbp-118h]
  float v37; // [rsp+24h] [rbp-114h]
  float v38; // [rsp+28h] [rbp-110h]
  float v39; // [rsp+2Ch] [rbp-10Ch]
  __int64 v40; // [rsp+30h] [rbp-108h]
  int v41; // [rsp+38h] [rbp-100h]
  int v42; // [rsp+3Ch] [rbp-FCh]
  int v43; // [rsp+40h] [rbp-F8h]
  float v44; // [rsp+44h] [rbp-F4h]
  _QWORD *v45; // [rsp+48h] [rbp-F0h]
  __int64 v46; // [rsp+50h] [rbp-E8h]
  __int64 v47; // [rsp+58h] [rbp-E0h] BYREF
  __int64 v48; // [rsp+60h] [rbp-D8h]
  __int64 v49; // [rsp+68h] [rbp-D0h]
  double *v50; // [rsp+80h] [rbp-B8h]
  __int64 v51; // [rsp+88h] [rbp-B0h]
  _QWORD v52[2]; // [rsp+90h] [rbp-A8h] BYREF
  int v53; // [rsp+A0h] [rbp-98h]
  int v54; // [rsp+A4h] [rbp-94h]
  _QWORD v55[2]; // [rsp+A8h] [rbp-90h] BYREF
  int v56; // [rsp+B8h] [rbp-80h]
  int v57; // [rsp+BCh] [rbp-7Ch]
  _BYTE v58[120]; // [rsp+C0h] [rbp-78h] BYREF

  v40 = a2;
  v45 = a1;
  v5 = *a3;
  v50 = a3;
  v6 = (int)fmin(fmax(a3[1], -2147483648.0), 2147483647.0);
  v7 = a5;
  v8 = v6 + a5;
  v43 = (int)fmin(fmax(v5, -2147483648.0), 2147483647.0) + a4;
  v46 = alacritty::renderer::text::builtin_font::calculate_stroke_size(v43);
  alacritty::renderer::text::builtin_font::Canvas::new(&v47, v43, v8);
  v32 = 1;
  v33 = 1;
  v34 = v6 + v7 - 2;
  v9 = (int)(((unsigned int)(v6 + v7 + 1) >> 31) + v8 + 1) >> 1;
  v51 = v43;
  if ( v9 - 1 - v43 <= 1 )
  {
    v41 = v8;
    v53 = 0;
    v54 = v9 - 1;
    v52[0] = &v32;
    v52[1] = &v33;
    v56 = 0;
    v57 = v9 - 1;
    v55[0] = &v32;
    v55[1] = &v34;
    core::iter::traits::iterator::Iterator::zip(v58, v52, v55);
    <core::iter::adapters::zip::Zip<A,B> as core::iter::adapters::zip::ZipImpl<A,B>>::next(&v35, v58);
    if ( v35 == 1 )
    {
      switch ( (int)v40 )
      {
        case 57520:
        case 57522:
          do
          {
            v31 = v38;
            v29 = v39;
            *(_QWORD *)&v11 = LODWORD(v36);
            *(float *)&v11 = v36 + 1.0;
            alacritty::renderer::text::builtin_font::Canvas::draw_rect(
              &v47,
              0.0,
              COERCE_DOUBLE((unsigned __int64)LODWORD(v37)),
              v11,
              COERCE_DOUBLE(1065353216LL));
            *(_QWORD *)&v12 = LODWORD(v31);
            *(float *)&v12 = v31 + 1.0;
            alacritty::renderer::text::builtin_font::Canvas::draw_rect(
              &v47,
              0.0,
              COERCE_DOUBLE((unsigned __int64)LODWORD(v29)),
              v12,
              COERCE_DOUBLE(1065353216LL));
            <core::iter::adapters::zip::Zip<A,B> as core::iter::adapters::zip::ZipImpl<A,B>>::next(&v35, v58);
          }
          while ( (v35 & 1) != 0 );
          break;
        case 57521:
        case 57523:
          v42 = v46 - 1;
          v13 = v9 - v46;
          v14 = 0;
          v15 = 0;
          while ( 1 )
          {
            *(_QWORD *)&v16 = LODWORD(v39);
            *(_QWORD *)&v17 = LODWORD(v39);
            if ( v14 < v13 )
            {
              HIDWORD(v17) = 0;
              *(float *)&v17 = (float)(v42 + v33 + v14 * v32);
            }
            v18 = v37;
            v19 = v36;
            if ( v15 < v13 )
            {
              v19 = (float)v15;
              v18 = (float)(v34 - (v46 + v15 * v32) + 1);
            }
            v20 = 0LL;
            if ( v36 >= 0.0 )
              v20 = (unsigned int)(int)v36;
            if ( v36 > 1.8446743e19 )
              v20 = -1LL;
            if ( v20 + 1 == v51 )
              break;
            v44 = v18;
            v30 = __PAIR64__(LODWORD(v39), LODWORD(v19));
            *(float *)&v17 = (float)(*(float *)&v17 - v37) + 1.0;
            alacritty::renderer::text::builtin_font::Canvas::draw_rect(
              &v47,
              COERCE_DOUBLE((unsigned __int64)LODWORD(v36)),
              COERCE_DOUBLE((unsigned __int64)LODWORD(v37)),
              COERCE_DOUBLE(1065353216LL),
              v17);
            *(_QWORD *)&v21 = HIDWORD(v30);
            *(float *)&v21 = (float)(*((float *)&v30 + 1) - v44) + 1.0;
            alacritty::renderer::text::builtin_font::Canvas::draw_rect(
              &v47,
              COERCE_DOUBLE((unsigned __int64)(unsigned int)v30),
              COERCE_DOUBLE((unsigned __int64)LODWORD(v44)),
              COERCE_DOUBLE(1065353216LL),
              v21);
            v14 += v14 < v13;
            v15 += v15 < v13;
            <core::iter::adapters::zip::Zip<A,B> as core::iter::adapters::zip::ZipImpl<A,B>>::next(&v35, v58);
            if ( (v35 & 1) == 0 )
              goto LABEL_20;
          }
          *(float *)&v16 = (float)(v39 - v37) + 1.0;
          alacritty::renderer::text::builtin_font::Canvas::draw_rect(
            &v47,
            COERCE_DOUBLE((unsigned __int64)LODWORD(v36)),
            COERCE_DOUBLE((unsigned __int64)LODWORD(v37)),
            COERCE_DOUBLE(1065353216LL),
            v16);
          break;
      }
    }
LABEL_20:
    if ( (~(_DWORD)v40 & 0xE0B2) == 0 )
      alacritty::renderer::text::builtin_font::Canvas::flip_horizontal(&v47);
    v22 = *((float *)v50 + 4);
    v23 = 0x7FFFFFFF;
    if ( v22 <= 2147483500.0 )
      v23 = (int)v22;
    v24 = v41;
    result = (unsigned int)(v41 + v23);
    v25 = v48;
    v26 = 3 * v47;
    v27 = 3 * v49;
    v28 = v45;
    *v45 = 0LL;
    v28[1] = v26;
    v28[2] = v25;
    v28[3] = v27;
    LODWORD(v25) = v43;
    *((_DWORD *)v28 + 8) = v43;
    *((_DWORD *)v28 + 9) = v24;
    *((_DWORD *)v28 + 10) = v40;
    *((_DWORD *)v28 + 11) = v25;
    *((_DWORD *)v28 + 12) = v24;
    *(_QWORD *)((char *)v28 + 52) = (unsigned int)result;
  }
  else
  {
    *v45 = 2LL;
    return core::ptr::drop_in_place<alacritty::renderer::text::builtin_font::Canvas>(v47, v48);
  }
  return result;
}