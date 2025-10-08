__int64 __fastcall alacritty::display::Display::handle_update(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  float v10; // xmm1_4
  float v11; // xmm0_4
  __int64 v12; // rax
  float v13; // xmm1_4
  float v14; // xmm5_4
  __int64 v15; // r12
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rbp
  unsigned __int64 v20; // r15
  __int128 v21; // xmm0
  float updated; // [rsp+0h] [rbp-1D8h] BYREF
  float v24; // [rsp+4h] [rbp-1D4h] BYREF
  float v25; // [rsp+8h] [rbp-1D0h]
  float v26; // [rsp+Ch] [rbp-1CCh]
  float v27; // [rsp+10h] [rbp-1C8h]
  float v28; // [rsp+14h] [rbp-1C4h]
  __int128 v29; // [rsp+18h] [rbp-1C0h] BYREF
  __int128 v30; // [rsp+28h] [rbp-1B0h]
  __int64 v31; // [rsp+38h] [rbp-1A0h]
  __int64 v32; // [rsp+40h] [rbp-198h]
  __int64 v33; // [rsp+48h] [rbp-190h]
  _QWORD v34[4]; // [rsp+50h] [rbp-188h] BYREF
  _QWORD v35[5]; // [rsp+70h] [rbp-168h] BYREF
  _QWORD v36[6]; // [rsp+98h] [rbp-140h] BYREF
  _QWORD dest[34]; // [rsp+C8h] [rbp-110h] BYREF

  v33 = a3;
  v32 = a2;
  memcpy(dest, (const void *)(a1 + 1152), 0xE0uLL);
  *(_QWORD *)(a1 + 1152) = 0x8000000000000000LL;
  *(_DWORD *)(a1 + 1360) = 0;
  *(_WORD *)(a1 + 1372) = 0;
  v10 = *(float *)(a1 + 1972);
  updated = *(float *)(a1 + 1968);
  v24 = v10;
  if ( __OFSUB__(0LL, dest[0]) )
  {
    if ( BYTE5(dest[27]) == 1 )
    {
      core::option::Option<T>::get_or_insert_with(a1 + 2100);
      *(_BYTE *)(a1 + 2101) = 1;
    }
    if ( (dest[26] & 1) != 0 )
    {
LABEL_5:
      v26 = (float)SHIDWORD(dest[26]);
      v11 = (float)SLODWORD(dest[27]);
      goto LABEL_10;
    }
  }
  else
  {
    core::option::Option<T>::get_or_insert_with(a1 + 2100);
    *(_BYTE *)(a1 + 2101) = 1;
    updated = alacritty::display::Display::update_font_size(
                a1 + 1528,
                *(_DWORD *)(a6 + 300),
                *(_BYTE *)(a6 + 301),
                (__int64)dest);
    v24 = v10;
    if ( (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) >= 3 )
    {
      v34[0] = &updated;
      v34[1] = core::fmt::float::<impl core::fmt::Display for f32>::fmt;
      v34[2] = &v24;
      v34[3] = core::fmt::float::<impl core::fmt::Display for f32>::fmt;
      v36[0] = &off_882408;
      v36[1] = 2LL;
      v36[4] = 0LL;
      v36[2] = v34;
      v36[3] = 2LL;
      v12 = log::__private_api::loc(&off_882620);
      v35[0] = "alacritty::displayfailed to swap buffers.failed to disable contextContext lost for window Recovered windo"
               "w  from gpu resetfailed to recreate context.failed to reativate context after reset.failed to recreate re"
               "nderer after reseterror calling swap_buffers: Backward Search: ";
      v35[1] = 18LL;
      v35[2] = "alacritty::displayfailed to swap buffers.failed to disable contextContext lost for window Recovered windo"
               "w  from gpu resetfailed to recreate context.failed to reativate context after reset.failed to recreate re"
               "nderer after reseterror calling swap_buffers: Backward Search: ";
      v35[3] = 18LL;
      v35[4] = v12;
      log::__private_api::log(v36, 3LL, v35);
    }
    *(_BYTE *)(a1 + 72) = 1;
    if ( (dest[26] & 1) != 0 )
      goto LABEL_5;
  }
  v26 = *(float *)(a1 + 1960);
  v11 = *(float *)(a1 + 1964);
LABEL_10:
  v25 = v11;
  v13 = *(double *)(a1 + 824);
  v27 = v13;
  v28 = floorf(COERCE_DOUBLE((unsigned __int64)COERCE_UNSIGNED_INT((float)*(unsigned __int16 *)(a6 + 424) * v13)));
  v14 = floorf(COERCE_DOUBLE((unsigned __int64)COERCE_UNSIGNED_INT((float)*(unsigned __int16 *)(a6 + 426) * v27)));
  alacritty::display::SizeInfo::new(
    (__int64)&v29,
    *(unsigned __int8 *)(a6 + 428),
    v26,
    v25,
    updated,
    v24,
    COERCE_DOUBLE((unsigned __int64)LODWORD(v28)),
    v14);
  v15 = *(_QWORD *)(a5 + 4352);
  v16 = alloc::collections::vec_deque::VecDeque<T,A>::get(a4);
  v17 = v15 + core::option::Option<T>::map_or(v16, &v29);
  v18 = 0LL;
  if ( (unsigned __int64)v29 >= v17 )
    v18 = v29 - v17;
  v19 = core::cmp::Ord::max(v18, 1LL);
  *(_QWORD *)&v29 = v19;
  if ( *(_BYTE *)(a6 + 431) )
    alacritty::display::window::Window::set_resize_increments(
      *(_QWORD *)(a1 + 832),
      *(_QWORD *)(a1 + 840),
      updated,
      v24);
  if ( *(_QWORD *)(a1 + 1944) != v19 )
  {
    v20 = *((_QWORD *)&v29 + 1);
    goto LABEL_18;
  }
  v20 = *((_QWORD *)&v29 + 1);
  if ( *(_QWORD *)(a1 + 1952) != *((_QWORD *)&v29 + 1) )
  {
LABEL_18:
    <alacritty_terminal::event_loop::Notifier as alacritty_terminal::event::OnResize>::on_resize(
      v33,
      ((unsigned __int64)(unsigned int)(int)fminf(65535.0, fmaxf(0.0, *((float *)&v30 + 3))) << 48) | ((unsigned __int64)(unsigned __int16)(int)fminf(65535.0, fmaxf(0.0, *((float *)&v30 + 2))) << 32) | (unsigned int)((_DWORD)v20 << 16) | (unsigned __int16)v19);
    alacritty_terminal::term::Term<T>::resize(v32, v19, v20);
    alacritty::display::damage::DamageTracker::resize(a1, v19, v20);
  }
  if ( !(unsigned __int8)<alacritty::display::SizeInfo<T> as core::cmp::PartialEq>::eq(&v29, a1 + 1944) )
  {
    core::option::Option<T>::get_or_insert_with(a1 + 2100);
    *(_BYTE *)(a1 + 2100) = 1;
    *(_BYTE *)(a5 + 4448) = 2;
  }
  *(_QWORD *)(a1 + 1976) = v31;
  v21 = v29;
  *(_OWORD *)(a1 + 1960) = v30;
  *(_OWORD *)(a1 + 1944) = v21;
  return core::ptr::drop_in_place<alacritty::display::DisplayUpdate>(dest);
}