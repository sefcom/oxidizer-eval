unsigned __int64 __fastcall alacritty::input::Processor<T,A>::on_touch_end(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // r14
  __int128 *v6; // rax
  __int64 *v7; // rcx
  __int64 v8; // r15
  double v9; // [rsp+0h] [rbp-58h]
  double v10; // [rsp+8h] [rbp-50h]
  __int128 v11; // [rsp+10h] [rbp-48h]
  __int128 v12; // [rsp+20h] [rbp-38h]
  __int128 v13; // [rsp+30h] [rbp-28h]

  alacritty::input::Processor<T,A>::on_touch_motion(a1, a2);
  v2 = a1[4];
  <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::touch_purpose(v2);
  result = *(_QWORD *)v2 - 4LL;
  v4 = 3LL;
  if ( result < 7 )
    v4 = *(_QWORD *)v2 - 4LL;
  switch ( v4 )
  {
    case 0LL:
      return result;
    case 1LL:
      core::ptr::drop_in_place<alacritty::event::TouchPurpose>(v2);
      *(_QWORD *)v2 = 4LL;
      return alacritty::input::Processor<T,A>::mouse_input(a1, 1LL, 0LL);
    case 2LL:
    case 4LL:
      goto LABEL_4;
    case 3LL:
      v5 = *(_QWORD *)(v2 + 48);
      if ( v5 == *(_QWORD *)(a2 + 48) )
      {
        v6 = (__int128 *)(v2 + 64);
        v7 = (__int64 *)(v2 + 120);
        v5 = *(_QWORD *)(v2 + 112);
      }
      else
      {
        v7 = (__int64 *)(v2 + 56);
        v6 = (__int128 *)v2;
      }
      v8 = *v7;
      v13 = v6[2];
      v12 = v6[1];
      v11 = *v6;
      result = core::ptr::drop_in_place<alacritty::event::TouchPurpose>(v2);
      *(_QWORD *)v2 = 8LL;
      *(_OWORD *)(v2 + 8) = v11;
      *(_OWORD *)(v2 + 24) = v12;
      *(_OWORD *)(v2 + 40) = v13;
      *(_QWORD *)(v2 + 56) = v5;
      *(_QWORD *)(v2 + 64) = v8;
      return result;
    case 5LL:
      v10 = *(double *)(v2 + 40);
      v9 = *(double *)(v2 + 48);
      core::ptr::drop_in_place<alacritty::event::TouchPurpose>(v2);
      *(_QWORD *)v2 = 4LL;
      alacritty::input::Processor<T,A>::mouse_moved(a1, v10, v9);
      alacritty::input::Processor<T,A>::mouse_input(a1, 0LL, 0LL);
      return alacritty::input::Processor<T,A>::mouse_input(a1, 1LL, 0LL);
    case 6LL:
      result = hashbrown::map::HashMap<K,V,S,A>::remove(v2 + 8, a2 + 48);
      if ( !*(_QWORD *)(v2 + 32) )
      {
LABEL_4:
        result = core::ptr::drop_in_place<alacritty::event::TouchPurpose>(v2);
        *(_QWORD *)v2 = 4LL;
      }
      return result;
  }
}