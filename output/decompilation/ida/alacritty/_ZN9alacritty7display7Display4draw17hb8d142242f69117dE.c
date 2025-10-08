void __fastcall __noreturn alacritty::display::Display::draw(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        const __m128i *a6)
{
  __int64 v7; // r15
  __int64 v8; // rbp
  unsigned int v9; // ebp
  unsigned int v10; // ecx
  __int128 v11; // xmm0
  __int128 v12; // xmm0
  unsigned int v13; // [rsp+14h] [rbp-644h]
  __int64 v14; // [rsp+18h] [rbp-640h]
  __int128 v16; // [rsp+28h] [rbp-630h] BYREF
  __int64 v17; // [rsp+38h] [rbp-620h]
  __int64 v18; // [rsp+40h] [rbp-618h]
  unsigned int v19; // [rsp+4Ch] [rbp-60Ch]
  __int64 v20; // [rsp+50h] [rbp-608h]
  __int64 v21; // [rsp+58h] [rbp-600h]
  __int64 v22; // [rsp+60h] [rbp-5F8h]
  unsigned int v23; // [rsp+68h] [rbp-5F0h]
  int v24; // [rsp+6Ch] [rbp-5ECh]
  __int128 v25; // [rsp+90h] [rbp-5C8h]
  __int128 v26; // [rsp+A0h] [rbp-5B8h]
  __int64 v27; // [rsp+B0h] [rbp-5A8h]
  __int64 v28; // [rsp+D0h] [rbp-588h]
  __int128 v29; // [rsp+F0h] [rbp-568h] BYREF
  __int64 v30; // [rsp+100h] [rbp-558h]
  __int64 v31; // [rsp+140h] [rbp-518h]
  __int64 v32; // [rsp+148h] [rbp-510h]
  __int64 v33; // [rsp+150h] [rbp-508h]
  _QWORD v34[6]; // [rsp+160h] [rbp-4F8h] BYREF
  __int128 v35; // [rsp+190h] [rbp-4C8h] BYREF
  __int128 v36; // [rsp+1A0h] [rbp-4B8h]
  __int128 v37; // [rsp+1D0h] [rbp-488h] BYREF
  __int128 v38; // [rsp+1E0h] [rbp-478h]
  __int128 v39; // [rsp+2F0h] [rbp-368h]
  __int128 v40; // [rsp+300h] [rbp-358h]
  __int64 v41; // [rsp+310h] [rbp-348h]
  _OWORD v42[2]; // [rsp+320h] [rbp-338h] BYREF
  __int64 v43; // [rsp+340h] [rbp-318h]
  __int128 v44; // [rsp+3A0h] [rbp-2B8h] BYREF
  _BYTE v45[28]; // [rsp+3C0h] [rbp-298h] BYREF
  int v46; // [rsp+3DCh] [rbp-27Ch]
  _BYTE v47[72]; // [rsp+3F0h] [rbp-268h] BYREF
  __int64 v48; // [rsp+438h] [rbp-220h]
  __int64 v49; // [rsp+468h] [rbp-1F0h]
  __int128 v50; // [rsp+488h] [rbp-1D0h]
  __int128 v51; // [rsp+498h] [rbp-1C0h]
  __int64 v52; // [rsp+4A8h] [rbp-1B0h]
  __int64 v53; // [rsp+4E0h] [rbp-178h]

  v22 = a4;
  v32 = a3;
  alacritty::display::content::RenderableContent::new((__int64)v47, a5, a1, a2 + 8, a6);
  v34[0] = 0LL;
  v34[1] = 8LL;
  v34[2] = 0LL;
  while ( 1 )
  {
    <alacritty::display::content::RenderableContent as core::iter::traits::iterator::Iterator>::next(v45, v47);
    if ( v46 == (_DWORD)&unk_110000 )
      break;
    alloc::vec::Vec<T,A>::push(v34, v45);
  }
  v21 = a5;
  v43 = v52;
  v42[1] = v51;
  v42[0] = v50;
  v7 = v49;
  v8 = v53;
  v24 = alacritty::display::content::RenderableContent::color(v49, v53, 0x100uLL);
  v9 = alacritty::display::content::RenderableContent::color(v7, v8, 0x101uLL);
  v14 = v48;
  alacritty::display::content::RenderableContent::cursor(&v44, (__int64)v47);
  v20 = *(_QWORD *)(a2 + 88);
  v31 = *(_QWORD *)(a2 + 96);
  v10 = *(_DWORD *)(a2 + 104);
  v41 = *(_QWORD *)(a1 + 1624);
  v11 = *(_OWORD *)(a1 + 1592);
  v40 = *(_OWORD *)(a1 + 1608);
  v39 = v11;
  v27 = *(_QWORD *)(a1 + 1976);
  v12 = *(_OWORD *)(a1 + 1944);
  v26 = *(_OWORD *)(a1 + 1960);
  v25 = v12;
  LODWORD(v18) = *(_DWORD *)(a2 + 1764);
  v23 = v10;
  if ( (v18 & 0x10000) != 0 )
  {
    v28 = *(_QWORD *)(a2 + 664);
    v13 = *(_DWORD *)(a2 + 672);
  }
  else
  {
    v13 = v10;
  }
  alacritty_terminal::term::Term<T>::damage(&v16, a2 + 8);
  v19 = v9;
  if ( (_QWORD)v16 )
  {
    *(_QWORD *)&v36 = v17;
    *(_QWORD *)&v12 = v16;
    v35 = v16;
    while ( 1 )
    {
      <alacritty_terminal::term::TermDamageIterator as core::iter::traits::iterator::Iterator>::next(&v37, &v35);
      if ( (_DWORD)v37 != 1 )
        break;
      alacritty::display::damage::FrameDamage::damage_line(
        *(_QWORD *)(a1 + 32),
        *(_QWORD *)(a1 + 40),
        (unsigned __int64 *)&v37 + 1);
    }
    v9 = v19;
  }
  else
  {
    *(_BYTE *)(a1 + 72) = 1;
  }
  alacritty_terminal::term::TermDamageState::reset(a2 + 496, *(_QWORD *)(a2 + 192));
  core::ptr::drop_in_place<lock_api::mutex::MutexGuard<parking_lot::raw_mutex::RawMutex,alacritty_terminal::term::Term<alacritty::event::EventProxy>>>(a2);
  alacritty::display::Display::validate_hint_highlights(a1, v14);
  v33 = a1 + 1440;
  alacritty::display::bell::VisualBell::intensity(a1 + 1440);
  if ( *(double *)&v12 != 0.0 || *(_QWORD *)(a1 + 1144) || alacritty::event::SearchState::regex(a6) )
  {
    *(_BYTE *)(a1 + 72) = 1;
    *(_BYTE *)(a1 + 128) = 1;
  }
  if ( (v18 & 0x10000) != 0 )
    alacritty::display::Display::draw::{{closure}}(&v29, v14, v28, v13);
  else
    *(_QWORD *)&v29 = 0LL;
  *(_QWORD *)&v38 = v30;
  v37 = v29;
  alacritty::display::damage::DamageTracker::damage_vi_cursor(a1, (__int64)&v37);
  alacritty::display::damage::DamageTracker::damage_selection(a1, (__int64)v42, v14);
  alacritty::display::Display::make_current(a1);
  alacritty::renderer::Renderer::clear(v9, *(float *)(v21 + 420));
}