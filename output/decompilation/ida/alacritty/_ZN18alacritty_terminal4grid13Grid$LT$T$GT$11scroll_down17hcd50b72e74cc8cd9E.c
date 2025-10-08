__int64 __fastcall alacritty_terminal::grid::Grid<T>::scroll_down(__int64 a1, int a2, int a3, __int64 a4)
{
  unsigned int v5; // r12d
  int v6; // r14d
  __int64 result; // rax
  int v8; // ebp
  int v9; // r15d
  __int64 v10; // rdx
  unsigned int v11; // r15d
  __int64 v12; // rax
  unsigned int v13; // ebp
  __int64 v14; // rax
  int v15; // eax
  unsigned int v16; // ebp
  __int64 v17; // rdx
  __int64 v18; // rsi
  int v19; // r12d
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rax
  __int64 v22; // rdx
  unsigned int v23; // ebp
  __int64 i; // rsi
  __int64 v25; // rax
  __int64 v26; // rsi
  int v27; // ebp

  v5 = a3;
  v6 = a2;
  result = (unsigned int)(a3 - a2);
  if ( (int)result > (int)a4 )
  {
    if ( *(_QWORD *)(a1 + 168) )
    {
      v8 = a2 + a4;
      if ( a2 + (int)a4 < a3 )
      {
        v9 = ~(_DWORD)a4;
        do
        {
          v10 = v9 + v5--;
          result = alacritty_terminal::grid::storage::Storage<T>::swap(a1, v5, v10);
        }
        while ( v8 < (int)v5 );
      }
      if ( a2 < v8 )
      {
        v11 = *(_DWORD *)(a1 + 76);
        do
        {
          v12 = <alacritty_terminal::grid::storage::Storage<T> as core::ops::index::Index<alacritty_terminal::index::Line>>::index(
                  a1,
                  (unsigned int)--v8,
                  &off_877308);
          result = alacritty_terminal::grid::row::Row<T>::reset(v12, v11);
        }
        while ( a2 < v8 );
      }
      return result;
    }
    v15 = *(_DWORD *)(a1 + 152);
    if ( a3 < v15 )
    {
      do
      {
        v16 = v5 + 1;
        v17 = v5 - (unsigned int)a4;
        v18 = v5;
        v19 = v15;
        alacritty_terminal::grid::storage::Storage<T>::swap(a1, v18, v17);
        v15 = v19;
        v5 = v16;
      }
      while ( v15 != v16 );
    }
    v20 = *(_QWORD *)(a1 + 16);
    if ( !v20 )
      core::panicking::panic_const::panic_const_rem_by_zero(&off_8772D8);
    v21 = a4 + *(_QWORD *)(a1 + 24);
    if ( (v20 | v21) >> 32 )
    {
      result = v21 / v20;
      *(_QWORD *)(a1 + 24) = (a4 + *(_QWORD *)(a1 + 24)) % v20;
      if ( !a4 )
        goto LABEL_23;
    }
    else
    {
      v22 = (unsigned int)v21 % (unsigned int)v20;
      result = (unsigned int)v21 / (unsigned int)v20;
      *(_QWORD *)(a1 + 24) = v22;
      if ( !a4 )
        goto LABEL_23;
    }
    v23 = *(_DWORD *)(a1 + 76);
    for ( i = 0LL; i != a4; ++i )
    {
      v25 = <alacritty_terminal::grid::storage::Storage<T> as core::ops::index::Index<alacritty_terminal::index::Line>>::index(
              a1,
              i,
              &off_8772F0);
      result = alacritty_terminal::grid::row::Row<T>::reset(v25, v23);
    }
LABEL_23:
    if ( v6 > 0 )
    {
      v26 = 0LL;
      do
      {
        v27 = v26 + 1;
        result = alacritty_terminal::grid::storage::Storage<T>::swap(a1, v26, (unsigned int)(a4 + v26));
        v26 = (unsigned int)(v26 + 1);
      }
      while ( v6 != v27 );
    }
    return result;
  }
  if ( a3 > a2 )
  {
    v13 = *(_DWORD *)(a1 + 76);
    do
    {
      v14 = <alacritty_terminal::grid::storage::Storage<T> as core::ops::index::Index<alacritty_terminal::index::Line>>::index(
              a1,
              (unsigned int)v6,
              &off_877320);
      result = alacritty_terminal::grid::row::Row<T>::reset(v14, v13);
      ++v6;
    }
    while ( v5 != v6 );
  }
  return result;
}