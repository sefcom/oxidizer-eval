__int64 __fastcall alacritty_terminal::term::Term<T>::line_to_string(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        char a6)
{
  __int64 v9; // r12
  __int64 v10; // rax
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // r15
  __int64 v13; // rbp
  bool v14; // r13
  __int64 v15; // rax
  unsigned __int64 v16; // r13
  unsigned __int64 v17; // rsi
  __int64 v18; // r14
  __int64 v19; // rbx
  __int64 v20; // rbx
  __int64 v21; // rbx
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rcx
  unsigned int *v25; // rax
  __int64 v26; // rbx
  __int64 v27; // rax
  unsigned __int64 v28; // r15
  unsigned __int64 v29; // rsi
  unsigned __int64 v30; // rsi
  unsigned __int64 v31; // r15
  __int64 v32; // rax
  __int64 result; // rax
  _OWORD *v34; // rcx
  unsigned __int64 v35; // [rsp+0h] [rbp-B8h]
  __int128 v38; // [rsp+18h] [rbp-A0h] BYREF
  __int64 v39; // [rsp+28h] [rbp-90h]
  __int64 v40; // [rsp+30h] [rbp-88h]
  __int64 v41; // [rsp+38h] [rbp-80h]
  __int64 v42; // [rsp+40h] [rbp-78h]
  unsigned __int64 v43; // [rsp+48h] [rbp-70h]
  _QWORD v44[13]; // [rsp+50h] [rbp-68h] BYREF

  v42 = a1;
  *(_QWORD *)&v38 = 0LL;
  *((_QWORD *)&v38 + 1) = 1LL;
  v39 = 0LL;
  v40 = a2 + 40;
  v9 = <alacritty_terminal::grid::storage::Storage<T> as core::ops::index::Index<alacritty_terminal::index::Line>>::index(
         a2 + 40,
         a3,
         &off_8776C8);
  v10 = <alacritty_terminal::grid::row::Row<alacritty_terminal::term::cell::Cell> as alacritty_terminal::term::cell::LineLength>::line_length(v9);
  v43 = a5;
  v35 = core::cmp::Ord::min(v10, a5 + 1);
  v11 = *(_QWORD *)(v9 + 16);
  if ( a4 >= v11 )
    core::panicking::panic_bounds_check(a4, v11, &off_8776E0);
  v12 = (__int16)((unsigned int)(__int16)((unsigned __int16)*(_DWORD *)(*(_QWORD *)(v9 + 8) + 24 * a4 + 20) << 9) >> 15)
      + a4;
  v41 = a2;
  v13 = a2 + 392;
  v14 = 0;
  while ( !v14 )
  {
    if ( v12 >= v35 )
      goto LABEL_20;
    v17 = *(_QWORD *)(v9 + 16);
    if ( v12 >= v17 )
LABEL_32:
      core::panicking::panic_bounds_check(v12, v17, &off_877770);
    v21 = 3 * v12++;
    v20 = *(_QWORD *)(v9 + 8) + 8 * v21;
LABEL_13:
    v22 = *(unsigned int *)(v20 + 16);
    v14 = (_DWORD)v22 == 9;
    if ( (*(_WORD *)(v20 + 20) & 0x440) == 0 )
    {
      alloc::string::String::push(&v38, v22);
      v23 = *(_QWORD *)v20;
      if ( *(_QWORD *)v20 )
      {
        v24 = *(_QWORD *)(v23 + 24);
        v23 = *(_QWORD *)(v23 + 32);
      }
      else
      {
        v24 = 0LL;
      }
      v44[0] = 1LL;
      v44[1] = v24;
      v44[2] = v23;
      v44[3] = 0LL;
      v44[5] = 0LL;
      while ( 1 )
      {
        v25 = (unsigned int *)<core::iter::adapters::flatten::FlattenCompat<I,U> as core::iter::traits::iterator::Iterator>::next(v44);
        if ( !v25 )
          break;
        alloc::string::String::push(&v38, *v25);
      }
    }
  }
  v15 = 24 * v12;
  while ( v12 < v35 )
  {
    v16 = v12;
    v17 = *(_QWORD *)(v9 + 16);
    if ( v12 >= v17 )
      goto LABEL_32;
    v18 = v15;
    v19 = *(_QWORD *)(v9 + 8);
    if ( !*(_BYTE *)<alacritty_terminal::term::TabStops as core::ops::index::IndexMut<alacritty_terminal::index::Column>>::index_mut(
                      v13,
                      v12,
                      &off_877788) )
    {
      v15 = v18 + 24;
      ++v12;
      if ( *(_DWORD *)(v19 + v18 + 16) == 32 )
        continue;
    }
    v20 = v18 + v19;
    v12 = v16 + 1;
    goto LABEL_13;
  }
LABEL_20:
  v26 = *(_QWORD *)(v41 + 184);
  if ( v43 >= v26 - 1 )
  {
    if ( !v35 )
      goto LABEL_24;
    v27 = <alacritty_terminal::grid::storage::Storage<T> as core::ops::index::Index<alacritty_terminal::index::Line>>::index(
            v40,
            a3,
            &off_8776F8);
    v28 = v35 - 1;
    v29 = *(_QWORD *)(v27 + 16);
    if ( v35 - 1 >= v29 )
      core::panicking::panic_bounds_check(v28, v29, &off_877710);
    if ( (*(_BYTE *)(*(_QWORD *)(v27 + 8) + 24 * v28 + 20) & 0x10) == 0 )
LABEL_24:
      alloc::string::String::push(&v38, 10LL);
  }
  if ( v35 == v26 && v35 >= 2 )
  {
    v30 = *(_QWORD *)(v9 + 16);
    v31 = v35 - 1;
    if ( v35 - 1 >= v30 )
      core::panicking::panic_bounds_check(v31, v30, &off_877728);
    if ( a6 && (*(_WORD *)(*(_QWORD *)(v9 + 8) + 24 * v31 + 20) & 0x400) != 0 )
    {
      v32 = <alacritty_terminal::grid::storage::Storage<T> as core::ops::index::Index<alacritty_terminal::index::Line>>::index(
              v40,
              a3 - 1,
              &off_877740);
      if ( !*(_QWORD *)(v32 + 16) )
        core::panicking::panic_bounds_check(0LL, 0LL, &off_877758);
      alloc::string::String::push(&v38, *(unsigned int *)(*(_QWORD *)(v32 + 8) + 16LL));
    }
  }
  result = v39;
  v34 = (_OWORD *)v42;
  *(_QWORD *)(v42 + 16) = v39;
  *v34 = v38;
  return result;
}