char __fastcall alacritty::display::hint::HintPostProcessor<T>::next_processed_match(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // rbp
  unsigned int v4; // ebx
  __int64 v5; // rax
  int v6; // r13d
  unsigned int v7; // edx
  int v8; // r12d
  char result; // al
  __int128 v10; // xmm0
  int v11; // edx
  __int128 v12; // xmm1
  __int64 v13; // [rsp+18h] [rbp-90h]
  __int128 v14; // [rsp+28h] [rbp-80h] BYREF
  __int128 v15; // [rsp+38h] [rbp-70h]
  __int64 v16; // [rsp+48h] [rbp-60h]
  _OWORD v17[2]; // [rsp+50h] [rbp-58h] BYREF
  __int64 v18; // [rsp+70h] [rbp-38h]

  v2 = *(_QWORD *)(a1 + 40);
  alacritty::display::hint::HintPostProcessor<T>::hint_post_processing(&v14, v2, (__int64 *)a2);
  if ( (_BYTE)v16 == 2 )
  {
    v13 = *(_QWORD *)(a1 + 32);
    v3 = *(_QWORD *)(a1 + 16);
    v4 = *(_DWORD *)(a1 + 24);
    while ( 1 )
    {
      v5 = alacritty_terminal::index::Point::add(*(_QWORD *)a2, *(_DWORD *)(a2 + 8), v2, 1u, 1LL);
      v6 = v5;
      v8 = v7;
      *(_QWORD *)a1 = v5;
      *(_DWORD *)(a1 + 8) = v7;
      result = <alacritty_terminal::index::Point<L,C> as core::cmp::Ord>::cmp(v5, v7, v3, v4);
      if ( result > 0 )
        break;
      result = alacritty_terminal::term::search::<impl alacritty_terminal::term::Term<T>>::regex_search_right(
                 (__int64)v17,
                 v2,
                 v13,
                 v6,
                 v8,
                 v3,
                 v4);
      if ( (_BYTE)v18 == 2 )
        break;
      *(_QWORD *)(a2 + 32) = v18;
      v10 = v17[0];
      *(_OWORD *)(a2 + 16) = v17[1];
      *(_OWORD *)a2 = v10;
      alacritty::display::hint::HintPostProcessor<T>::hint_post_processing(&v14, v2, (__int64 *)a2);
      if ( (_BYTE)v16 != 2 )
        goto LABEL_6;
    }
  }
  else
  {
LABEL_6:
    *(_QWORD *)a1 = alacritty_terminal::index::Point::add(v15, SDWORD2(v15), v2, 1u, 1LL);
    *(_DWORD *)(a1 + 8) = v11;
    v12 = v15;
    *(_OWORD *)(a1 + 48) = v14;
    *(_OWORD *)(a1 + 64) = v12;
    result = v16;
    *(_QWORD *)(a1 + 80) = v16;
  }
  return result;
}