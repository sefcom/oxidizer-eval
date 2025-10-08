__int64 __fastcall alacritty_terminal::vi_mode::word(
        _QWORD *a1,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned __int8 a4,
        char a5)
{
  _QWORD *v7; // rbx
  __int64 v8; // rax
  __int64 i; // rdx
  __int64 v10; // r14
  unsigned int v11; // ebp
  int v12; // edx
  int v13; // edx
  __int64 v15; // rsi
  __int64 v16; // r12
  unsigned int v17; // edx
  unsigned int v18; // r13d
  _QWORD *v19; // rdi
  __int64 v20; // rsi
  __int64 j; // rdx
  __int64 v22; // r12
  unsigned int v23; // edx
  unsigned int v24; // r13d

  v7 = a1;
  v8 = alacritty_terminal::term::Term<T>::expand_wide((__int64)a1, a2, a3, a4);
  v10 = v8;
  v11 = i;
  if ( a4 == a5 )
  {
    v15 = v8;
    for ( i = (unsigned int)i; ; i = v18 )
    {
      v16 = alacritty_terminal::vi_mode::advance(a1, v15, i, a4);
      v18 = v17;
      if ( alacritty_terminal::vi_mode::is_boundary(v7, v10, v11, a4)
        || !(unsigned __int8)alacritty_terminal::vi_mode::is_space(v7, v16, v18) )
      {
        break;
      }
      v10 = v16;
      v11 = v18;
      a1 = v7;
      v15 = v16;
    }
    v19 = v7;
    v20 = v10;
    for ( j = v11; ; j = v24 )
    {
      v22 = alacritty_terminal::vi_mode::advance(v19, v20, j, a4);
      v24 = v23;
      if ( alacritty_terminal::vi_mode::is_boundary(v7, v10, v11, a4)
        || (unsigned __int8)alacritty_terminal::vi_mode::is_space(v7, v22, v24) )
      {
        break;
      }
      v10 = v22;
      v11 = v24;
      v19 = v7;
      v20 = v22;
    }
  }
  else
  {
    if ( !alacritty_terminal::vi_mode::is_boundary(a1, v8, i, a4) )
    {
      do
      {
        if ( (unsigned __int8)alacritty_terminal::vi_mode::is_space(a1, v10, v11) )
          break;
        v10 = alacritty_terminal::vi_mode::advance(a1, v10, v11, a4);
        v11 = v12;
      }
      while ( !alacritty_terminal::vi_mode::is_boundary(a1, v10, v12, a4) );
    }
    if ( !alacritty_terminal::vi_mode::is_boundary(a1, v10, v11, a4) )
    {
      do
      {
        if ( !(unsigned __int8)alacritty_terminal::vi_mode::is_space(a1, v10, v11) )
          break;
        v10 = alacritty_terminal::vi_mode::advance(a1, v10, v11, a4);
        v11 = v13;
      }
      while ( !alacritty_terminal::vi_mode::is_boundary(a1, v10, v13, a4) );
    }
  }
  return v10;
}