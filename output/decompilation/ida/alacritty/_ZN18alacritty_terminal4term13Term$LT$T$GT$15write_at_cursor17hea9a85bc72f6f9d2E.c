__int64 __fastcall alacritty_terminal::term::Term<T>::write_at_cursor(__int64 a1, unsigned int a2)
{
  unsigned __int8 *v2; // rax
  int v3; // eax
  volatile signed __int64 *v4; // rdx
  __int64 v5; // r13
  __int64 v6; // r12
  __int16 v7; // ax
  unsigned __int64 v8; // r12
  unsigned int v9; // ebp
  _QWORD *v10; // rbx
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // rsi
  _QWORD *v13; // rbx
  unsigned __int64 v14; // rax
  int v15; // ecx
  bool v16; // cf
  unsigned __int64 v17; // rax
  __int64 v18; // rbx
  _QWORD *v19; // r14
  __int64 v20; // r12
  __int64 result; // rax
  char **v22; // rdx
  __int16 v23; // [rsp+6h] [rbp-62h]
  __int64 v24; // [rsp+8h] [rbp-60h]
  __int64 v25; // [rsp+8h] [rbp-60h]
  int v26; // [rsp+14h] [rbp-54h]
  __m128 v27; // [rsp+20h] [rbp-48h]

  v2 = (unsigned __int8 *)<alacritty_terminal::grid::Charsets as core::ops::index::Index<vte::ansi::CharsetIndex>>::index(
                            a1 + 128,
                            *(unsigned __int8 *)(a1 + 1763),
                            &off_8777A0);
  v3 = vte::ansi::StandardCharset::map(*v2, a2);
  v27 = (__m128)*(unsigned __int64 *)(a1 + 112);
  v4 = *(volatile signed __int64 **)(a1 + 104);
  v23 = *(_WORD *)(a1 + 124);
  v26 = v3;
  if ( v4 )
  {
    if ( _InterlockedIncrement64(v4) <= 0 )
      BUG();
    v5 = *(_QWORD *)(a1 + 104);
  }
  else
  {
    v5 = 0LL;
  }
  v6 = alacritty_terminal::grid::Grid<T>::cursor_cell(a1 + 40);
  v7 = *(_WORD *)(v6 + 20);
  if ( (v7 & 0x60) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 88);
    v9 = *(_DWORD *)(a1 + 96);
    if ( (v7 & 0x20) != 0 && v8 < *(_QWORD *)(a1 + 184) - 1LL )
    {
      v10 = (_QWORD *)<alacritty_terminal::grid::storage::Storage<T> as core::ops::index::Index<alacritty_terminal::index::Line>>::index(
                        a1 + 40,
                        v9,
                        &off_8777B8);
      v24 = v5;
      v11 = v8 + 1;
      v10[3] = core::cmp::Ord::max(v10[3], v8 + 2);
      v12 = v10[2];
      if ( v8 + 1 >= v12 )
      {
        v22 = &off_8777D0;
        goto LABEL_24;
      }
      *(_WORD *)(v10[1] + 24 * v11 + 20) &= ~0x40u;
      v5 = v24;
    }
    else
    {
      if ( !v8 )
      {
LABEL_14:
        v14 = *(_QWORD *)(a1 + 80);
        v15 = 0;
        v16 = v14 < *(_QWORD *)(a1 + 192);
        v17 = v14 - *(_QWORD *)(a1 + 192);
        if ( !v16 )
          v15 = v17;
        if ( !(v9 + v15) )
          goto LABEL_19;
        v18 = *(_QWORD *)(a1 + 184);
        v19 = (_QWORD *)<alacritty_terminal::grid::storage::Storage<T> as core::ops::index::Index<alacritty_terminal::index::Line>>::index(
                          a1 + 40,
                          v9 - 1,
                          &off_877818);
        v20 = v5;
        v11 = v18 - 1;
        v19[3] = core::cmp::Ord::max(v19[3], v18);
        v12 = v19[2];
        if ( v18 - 1 < v12 )
        {
          *(_WORD *)(v19[1] + 24 * v11 + 20) &= ~0x400u;
          v5 = v20;
          goto LABEL_19;
        }
        v22 = &off_877830;
LABEL_24:
        core::panicking::panic_bounds_check(v11, v12, v22);
      }
      v13 = (_QWORD *)<alacritty_terminal::grid::storage::Storage<T> as core::ops::index::Index<alacritty_terminal::index::Line>>::index(
                        a1 + 40,
                        v9,
                        &off_8777E8);
      v25 = v5;
      v11 = v8 - 1;
      v13[3] = core::cmp::Ord::max(v13[3], v8);
      v12 = v13[2];
      if ( v8 - 1 >= v12 )
      {
        v22 = &off_877800;
        goto LABEL_24;
      }
      alacritty_terminal::term::cell::Cell::clear_wide(v13[1] + 24 * v11);
      v5 = v25;
    }
    if ( v8 >= 2 )
    {
LABEL_19:
      v6 = alacritty_terminal::grid::Grid<T>::cursor_cell(a1 + 40);
      goto LABEL_20;
    }
    goto LABEL_14;
  }
LABEL_20:
  *(_DWORD *)(v6 + 16) = v26;
  _mm_storel_ps((double *)(v6 + 8), v27);
  *(_WORD *)(v6 + 20) = v23;
  result = core::ptr::drop_in_place<core::option::Option<alloc::sync::Arc<alacritty_terminal::term::cell::CellExtra>>>(v6);
  *(_QWORD *)v6 = v5;
  return result;
}