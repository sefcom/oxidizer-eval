unsigned __int8 __fastcall alacritty_terminal::grid::Grid<T>::scroll_up(__int64 a1, int a2, int a3, __int64 a4)
{
  unsigned int v6; // r12d
  unsigned __int8 result; // al
  __int64 v9; // rdi
  unsigned int v10; // ebp
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // r12d
  __int64 v15; // rdx
  int v16; // r15d
  __int64 v17; // rax

  v6 = a2;
  result = a3 - a2 > (int)a4;
  if ( result | (a2 == 0) )
  {
    v9 = *(_QWORD *)(a1 + 160);
    if ( v9 )
      *(_QWORD *)(a1 + 160) = core::cmp::Ord::min(a4 + v9, *(_QWORD *)(a1 + 168));
    if ( a2 )
    {
      if ( a2 < a3 - (int)a4 )
      {
        do
        {
          alacritty_terminal::grid::storage::Storage<T>::swap(a1, v6, (unsigned int)a4 + v6);
          ++v6;
        }
        while ( (int)v6 < a3 - (int)a4 );
      }
      goto LABEL_18;
    }
    alacritty_terminal::grid::Grid<T>::increase_scroll_limit((_QWORD *)a1, a4);
    v12 = *(_QWORD *)(a1 + 16);
    if ( !v12 )
      core::panicking::panic_const::panic_const_rem_by_zero(&off_877380);
    v13 = *(_QWORD *)(a1 + 24) + v12 - a4;
    if ( (v12 | v13) >> 32 )
    {
      *(_QWORD *)(a1 + 24) = (*(_QWORD *)(a1 + 24) + v12 - a4) % v12;
      v14 = *(_DWORD *)(a1 + 152);
      if ( a3 >= v14 )
        goto LABEL_18;
    }
    else
    {
      *(_QWORD *)(a1 + 24) = (unsigned int)v13 % (unsigned int)v12;
      v14 = *(_DWORD *)(a1 + 152);
      if ( a3 >= v14 )
        goto LABEL_18;
    }
    do
    {
      v15 = (unsigned int)(v14 + ~(_DWORD)a4);
      alacritty_terminal::grid::storage::Storage<T>::swap(a1, (unsigned int)--v14, v15);
    }
    while ( a3 < v14 );
LABEL_18:
    result = a3 - a4;
    if ( a3 - (int)a4 < a3 )
    {
      v16 = -(int)a4;
      do
      {
        v17 = <alacritty_terminal::grid::storage::Storage<T> as core::ops::index::Index<alacritty_terminal::index::Line>>::index(
                a1,
                (unsigned int)(a3 + v16),
                &off_877398);
        result = alacritty_terminal::grid::row::Row<T>::reset(v17, *(unsigned int *)(a1 + 76));
        ++v16;
      }
      while ( v16 );
    }
    return result;
  }
  if ( a3 > a2 )
  {
    v10 = *(_DWORD *)(a1 + 76);
    do
    {
      v11 = <alacritty_terminal::grid::storage::Storage<T> as core::ops::index::Index<alacritty_terminal::index::Line>>::index(
              a1,
              v6,
              &off_8773B0);
      result = alacritty_terminal::grid::row::Row<T>::reset(v11, v10);
      ++v6;
    }
    while ( a3 != v6 );
  }
  return result;
}