__int64 __fastcall alacritty_terminal::vi_mode::semantic(_QWORD *a1, __int64 a2, unsigned int a3, int a4, int a5)
{
  unsigned __int8 v5; // r12
  unsigned int v6; // ebp
  unsigned __int8 v7; // al
  __int64 v8; // r13
  unsigned int v9; // edx
  int v10; // r12d
  __int64 v11; // rbp
  unsigned int v12; // edx
  unsigned int v13; // r15d
  unsigned __int8 v14; // bl
  char is_boundary; // al
  int v16; // ecx
  char v17; // r15
  __int64 v18; // rdx
  char is_space; // al
  _QWORD *v20; // r14
  unsigned __int64 v21; // r12
  unsigned int v22; // edx
  unsigned int v23; // r13d
  char v24; // al
  char v25; // r13
  int v26; // ebp
  _QWORD *v27; // rbx
  __int64 v28; // r12
  unsigned int v29; // r14d
  unsigned int v30; // edx
  __int64 result; // rax
  _QWORD *v32; // rbx
  __int64 v33; // r14
  unsigned int v34; // ebp
  unsigned __int8 v35; // [rsp+Bh] [rbp-4Dh] BYREF
  int v36; // [rsp+Ch] [rbp-4Ch]
  int v37; // [rsp+10h] [rbp-48h]
  int v38; // [rsp+14h] [rbp-44h]
  _QWORD *v39; // [rsp+18h] [rbp-40h]
  __int64 v40; // [rsp+20h] [rbp-38h]

  v5 = a4;
  v35 = a4;
  v37 = a4 ^ a5;
  v36 = a4;
  if ( (a4 ^ a5) == 1 )
  {
    v6 = a3;
    if ( alacritty_terminal::vi_mode::is_boundary(a1, a2, a3, (unsigned __int8)a4) )
    {
      v7 = v5;
      a3 = v6;
    }
    else
    {
      a2 = alacritty_terminal::vi_mode::semantic::{{closure}}(a1, &v35, a2, v6);
      v7 = v35;
    }
  }
  else
  {
    v7 = a4;
  }
  v8 = alacritty_terminal::term::Term<T>::expand_wide((__int64)a1, a2, a3, v7 & 1);
  v10 = v9;
  v11 = alacritty_terminal::vi_mode::advance((__int64)a1, v8, v9, v35);
  v13 = v12;
  v14 = v35;
  v40 = v8;
  v38 = v10;
  is_boundary = alacritty_terminal::vi_mode::is_boundary(a1, v8, v10, v35);
  v39 = a1;
  if ( is_boundary )
  {
    v16 = v38;
    v17 = v37;
    v18 = v40;
  }
  else
  {
    is_space = alacritty_terminal::vi_mode::is_space((__int64)a1, v11, v13);
    v14 = v35;
    if ( is_space )
    {
      v20 = v39;
      while ( 1 )
      {
        v21 = alacritty_terminal::vi_mode::advance((__int64)v20, v11, v13, v14);
        v23 = v22;
        v14 = v35;
        if ( alacritty_terminal::vi_mode::is_boundary(v20, v11, v13, v35) )
          break;
        v24 = alacritty_terminal::vi_mode::is_space((__int64)v20, v21, v23);
        v14 = v35;
        v18 = v11;
        v16 = v13;
        v13 = v23;
        v11 = v21;
        if ( !v24 )
          goto LABEL_15;
      }
      v16 = v13;
      v18 = v11;
    }
    else
    {
      v16 = v38;
      v18 = v40;
    }
LABEL_15:
    v17 = v37;
  }
  v25 = v36;
  v26 = v14 & 1;
  v27 = v39;
  v28 = v18;
  v29 = v16;
  if ( alacritty_terminal::vi_mode::is_boundary(v39, v18, v16, v26) )
  {
    v30 = v29;
    result = v28;
  }
  else
  {
    result = alacritty_terminal::vi_mode::advance((__int64)v27, v28, v29, v26);
    if ( !v25 )
      result = alacritty_terminal::term::Term<T>::expand_wide((__int64)v27, result, v30, v35);
  }
  if ( !v17 )
  {
    v32 = v39;
    v33 = result;
    v34 = v30;
    if ( alacritty_terminal::vi_mode::is_boundary(v39, result, v30, v35) )
      return v33;
    else
      return alacritty_terminal::vi_mode::semantic::{{closure}}(v32, &v35, v33, v34);
  }
  return result;
}