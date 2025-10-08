void __fastcall alacritty::event::ActionContext<N,T>::inline_search(__int64 a1, char a2)
{
  unsigned int *v3; // r12
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r9
  __int64 v8; // r14
  unsigned __int64 v9; // rdx
  unsigned int v10; // ecx
  __int64 v11; // r15
  unsigned int v12; // ebp
  int v13; // ecx
  __int64 v14; // rdx
  int v15; // ecx
  __int64 v16; // rdx
  unsigned int v17; // edx
  int v18; // [rsp+4h] [rbp-84h] BYREF
  int v19; // [rsp+8h] [rbp-80h] BYREF
  __int64 v20; // [rsp+10h] [rbp-78h]
  unsigned int v21; // [rsp+18h] [rbp-70h]
  __int64 v22; // [rsp+20h] [rbp-68h] BYREF
  __int64 v23; // [rsp+28h] [rbp-60h]
  unsigned int v24; // [rsp+30h] [rbp-58h]
  __int64 v25; // [rsp+38h] [rbp-50h]
  int v26; // [rsp+40h] [rbp-48h]
  _BYTE v27[64]; // [rsp+48h] [rbp-40h] BYREF

  v3 = *(unsigned int **)(a1 + 112);
  v4 = *v3;
  if ( (_DWORD)v4 != (_DWORD)&unk_110000 )
  {
    v18 = 0;
    v5 = core::char::methods::encode_utf8_raw(v4, &v18);
    v7 = v6;
    v8 = *(_QWORD *)(a1 + 8);
    v9 = *(_QWORD *)(v8 + 656);
    v10 = *(_DWORD *)(v8 + 664);
    if ( a2 )
    {
      alacritty_terminal::term::search::<impl alacritty_terminal::term::Term<T>>::inline_search_right(
        (__int64)&v19,
        (_QWORD *)v8,
        v9,
        v10,
        v5,
        v7);
      if ( (v19 & 1) != 0 )
        return;
      v11 = v20;
      v12 = v21;
      if ( *((_BYTE *)v3 + 6) != 1 )
        goto LABEL_10;
      v13 = *(_DWORD *)(v8 + 192) - 1;
      v14 = *(_QWORD *)(v8 + 184) - 1LL;
      v22 = v8 + 40;
      v23 = v20;
      v24 = v21;
      v25 = v14;
      v26 = v13;
      <alacritty_terminal::grid::GridIterator<T> as alacritty_terminal::grid::BidirectionalIterator>::prev(v27, &v22);
    }
    else
    {
      alacritty_terminal::term::search::<impl alacritty_terminal::term::Term<T>>::inline_search_left(
        (__int64)&v19,
        (_QWORD *)v8,
        v9,
        v10,
        v5,
        v7);
      if ( v19 == 1 )
        return;
      v11 = v20;
      v12 = v21;
      if ( !*((_BYTE *)v3 + 6) )
        goto LABEL_10;
      v15 = *(_DWORD *)(v8 + 192) - 1;
      v16 = *(_QWORD *)(v8 + 184) - 1LL;
      v22 = v8 + 40;
      v23 = v20;
      v24 = v21;
      v25 = v16;
      v26 = v15;
      <alacritty_terminal::grid::GridIterator<T> as core::iter::traits::iterator::Iterator>::next(v27, &v22);
    }
    v11 = core::option::Option<T>::map_or(v27, v11, v12);
    v12 = v17;
LABEL_10:
    alacritty_terminal::term::Term<T>::scroll_to_point(v8, v12);
    *(_QWORD *)(v8 + 656) = v11;
    *(_DWORD *)(v8 + 664) = v12;
    alacritty_terminal::term::Term<T>::vi_mode_recompute_selection(v8);
    **(_BYTE **)(a1 + 120) = 1;
  }
}