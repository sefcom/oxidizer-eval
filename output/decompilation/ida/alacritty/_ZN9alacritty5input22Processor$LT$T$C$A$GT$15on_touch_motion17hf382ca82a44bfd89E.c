void __fastcall alacritty::input::Processor<T,A>::on_touch_motion(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r15
  unsigned __int64 v3; // rax
  __int128 *v4; // r13
  double v5; // xmm3_8
  __int128 v6; // xmm1
  __int128 v7; // xmm2
  __int128 v8; // xmm3
  double v9; // [rsp+0h] [rbp-88h]
  unsigned __int64 v10; // [rsp+0h] [rbp-88h]
  double v11; // [rsp+8h] [rbp-80h]
  __int128 v12; // [rsp+10h] [rbp-78h]
  __int128 v13; // [rsp+10h] [rbp-78h]
  __int128 v14; // [rsp+20h] [rbp-68h]
  __int128 v15; // [rsp+20h] [rbp-68h]
  __int128 v16; // [rsp+30h] [rbp-58h]
  __int128 v17; // [rsp+30h] [rbp-58h]
  __int128 v18; // [rsp+40h] [rbp-48h]
  __int128 v19; // [rsp+40h] [rbp-48h]
  double v20; // [rsp+50h] [rbp-38h]

  v11 = *(double *)(a2 + 32);
  v9 = *(double *)(a2 + 40);
  while ( 1 )
  {
    v2 = a1[4];
    <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::touch_purpose(v2);
    v3 = *(_QWORD *)v2 - 4LL;
    if ( v3 >= 7 )
      v3 = 3LL;
    if ( v3 != 5 )
      break;
    v4 = (__int128 *)(v2 + 8);
    v5 = *(double *)(v2 + 48);
    if ( fabs(v11 - *(double *)(v2 + 40)) > 20.0 )
    {
      v18 = *(_OWORD *)(v2 + 56);
      v16 = *(_OWORD *)(v2 + 40);
      v14 = *(_OWORD *)(v2 + 24);
      v12 = *v4;
      v20 = *(double *)(v2 + 40);
      core::ptr::drop_in_place<alacritty::event::TouchPurpose>(v2);
      *(_QWORD *)v2 = 5LL;
      *(_OWORD *)(v2 + 56) = v18;
      *(_OWORD *)(v2 + 40) = v16;
      *(_OWORD *)(v2 + 24) = v14;
      *v4 = v12;
      alacritty::input::Processor<T,A>::mouse_moved(a1, v20, v5);
      alacritty::input::Processor<T,A>::mouse_input(a1, 0LL, 0LL);
    }
    else
    {
      if ( fabs(v9 - v5) <= 20.0 )
        return;
      v19 = *(_OWORD *)(v2 + 56);
      v17 = *(_OWORD *)(v2 + 40);
      v15 = *(_OWORD *)(v2 + 24);
      v13 = *v4;
      core::ptr::drop_in_place<alacritty::event::TouchPurpose>(v2);
      *(_QWORD *)v2 = 6LL;
      *(_OWORD *)(v2 + 56) = v19;
      *(_OWORD *)(v2 + 40) = v17;
      *(_OWORD *)(v2 + 24) = v15;
      *v4 = v13;
    }
  }
  switch ( v3 )
  {
    case 0uLL:
    case 4uLL:
    case 6uLL:
      return;
    case 1uLL:
      alacritty::input::Processor<T,A>::mouse_moved(a1, v11, v9);
      break;
    case 2uLL:
      *(double *)&v10 = v9 - *(double *)(v2 + 48);
      core::ptr::drop_in_place<alacritty::event::TouchPurpose>(v2);
      *(_QWORD *)v2 = 6LL;
      v6 = *(_OWORD *)(a2 + 16);
      v7 = *(_OWORD *)(a2 + 32);
      v8 = *(_OWORD *)(a2 + 48);
      *(_OWORD *)(v2 + 8) = *(_OWORD *)a2;
      *(_OWORD *)(v2 + 24) = v6;
      *(_OWORD *)(v2 + 40) = v7;
      *(_OWORD *)(v2 + 56) = v8;
      alacritty::input::Processor<T,A>::scroll_terminal(a1, (__m128d)0LL, (__m128d)v10, (__m128d)0x3FF0000000000000uLL);
      break;
    case 3uLL:
      alacritty::event::TouchZoom::font_delta(v2, a2);
      <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::change_font_size(a1[6], a1[8]);
      break;
    case 5uLL:
      BUG();
  }
}