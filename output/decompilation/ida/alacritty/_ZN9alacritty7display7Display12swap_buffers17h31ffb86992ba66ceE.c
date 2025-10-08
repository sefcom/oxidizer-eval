__int64 __fastcall alacritty::display::Display::swap_buffers(__int64 a1)
{
  _BYTE *v2; // rdx
  __int64 result; // rax
  __int64 v4; // rax
  float v5; // xmm2_4
  int v6; // eax
  float v7; // xmm3_4
  int v8; // esi
  float v9; // xmm2_4
  int v10; // edi
  bool v11; // cc
  float v12; // xmm2_4
  int v13; // r8d
  float v14; // xmm2_4
  int v15; // r9d
  float v16; // xmm2_4
  int v17; // r10d
  __int64 v18; // rcx
  __int64 v19; // r15
  __int128 v20; // [rsp+0h] [rbp-108h] BYREF
  __int128 v21; // [rsp+10h] [rbp-F8h]
  __int128 v22; // [rsp+20h] [rbp-E8h]
  __int128 v23; // [rsp+30h] [rbp-D8h]
  char **v24; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v25; // [rsp+50h] [rbp-B8h]
  _QWORD *v26; // [rsp+58h] [rbp-B0h]
  __int64 v27; // [rsp+60h] [rbp-A8h]
  __int64 v28; // [rsp+68h] [rbp-A0h]
  _QWORD v29[2]; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v30[5]; // [rsp+88h] [rbp-80h] BYREF
  _OWORD v31[5]; // [rsp+B0h] [rbp-58h] BYREF

  v2 = (_BYTE *)(a1 + 680);
  if ( *(_DWORD *)(a1 + 1376) == 8 || (*v2 & 1) != 0 || *(_DWORD *)(a1 + 1416) != 6 || *(_BYTE *)(a1 + 192) )
  {
    result = <glutin::surface::Surface<T> as glutin::surface::GlSurface<T>>::swap_buffers(v31, a1 + 1376, v2);
    if ( LODWORD(v31[0]) == 2 )
      return result;
    goto LABEL_6;
  }
  v5 = *(float *)(a1 + 1960);
  v6 = (int)v5;
  if ( v5 < 0.0 )
    v6 = 0;
  v7 = *(float *)(a1 + 1964);
  if ( v5 > 4294967000.0 )
    v6 = -1;
  v8 = (int)v7;
  if ( v7 < 0.0 )
    v8 = 0;
  v9 = *(float *)(a1 + 1968);
  if ( v7 > 4294967000.0 )
    v8 = -1;
  v10 = (int)v9;
  if ( v9 < 0.0 )
    v10 = 0;
  v11 = v9 <= 4294967000.0;
  v12 = *(float *)(a1 + 1972);
  if ( !v11 )
    v10 = -1;
  v13 = (int)v12;
  if ( v12 < 0.0 )
    v13 = 0;
  v11 = v12 <= 4294967000.0;
  v14 = *(float *)(a1 + 1976);
  if ( !v11 )
    v13 = -1;
  v15 = (int)v14;
  if ( v14 < 0.0 )
    v15 = 0;
  v11 = v14 <= 4294967000.0;
  v16 = *(float *)(a1 + 1980);
  if ( !v11 )
    v15 = -1;
  v17 = (int)v16;
  if ( v16 < 0.0 )
    v17 = 0;
  v18 = *(_QWORD *)(a1 + 1944);
  if ( v16 > 4294967000.0 )
    v17 = -1;
  *(_QWORD *)&v21 = __PAIR64__(v8, v6);
  *((_QWORD *)&v21 + 1) = __PAIR64__(v13, v10);
  *(_QWORD *)&v22 = __PAIR64__(v17, v15);
  *(_QWORD *)&v20 = v18;
  *((_QWORD *)&v20 + 1) = v18;
  alacritty::display::damage::DamageTracker::shape_frame_damage(&v24, a1, (__int64)&v20);
  v19 = v25;
  glutin::api::egl::surface::Surface<T>::swap_buffers_with_damage(
    v31,
    *(_QWORD *)(a1 + 1392),
    *(_QWORD *)(a1 + 1408),
    a1 + 688,
    v25,
    v26);
  result = core::ptr::drop_in_place<alloc::vec::Vec<glutin::surface::Rect>>(v24, v19);
  if ( LODWORD(v31[0]) != 2 )
  {
LABEL_6:
    v23 = v31[3];
    v22 = v31[2];
    v21 = v31[1];
    v20 = v31[0];
    if ( (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) >= 4 )
    {
      v29[0] = &v20;
      v29[1] = <glutin::error::Error as core::fmt::Display>::fmt;
      v24 = &off_8825F8;
      v25 = 1LL;
      v28 = 0LL;
      v26 = v29;
      v27 = 1LL;
      v4 = log::__private_api::loc(&off_882608);
      v30[0] = "alacritty::displayfailed to swap buffers.failed to disable contextContext lost for window Recovered windo"
               "w  from gpu resetfailed to recreate context.failed to reativate context after reset.failed to recreate re"
               "nderer after reseterror calling swap_buffers: Backward Search: ";
      v30[1] = 18LL;
      v30[2] = "alacritty::displayfailed to swap buffers.failed to disable contextContext lost for window Recovered windo"
               "w  from gpu resetfailed to recreate context.failed to reativate context after reset.failed to recreate re"
               "nderer after reseterror calling swap_buffers: Backward Search: ";
      v30[3] = 18LL;
      v30[4] = v4;
      log::__private_api::log(&v24, 4LL, v30);
    }
    return core::ptr::drop_in_place<glutin::error::Error>(&v20);
  }
  return result;
}