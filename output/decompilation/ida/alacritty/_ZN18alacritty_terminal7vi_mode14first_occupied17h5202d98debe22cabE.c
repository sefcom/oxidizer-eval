__int64 __fastcall alacritty_terminal::vi_mode::first_occupied(_QWORD *a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v3; // rbp
  __int64 v4; // rdx
  int v5; // r12d
  int v6; // edx
  int v7; // r13d
  __int64 result; // rax
  unsigned __int64 v9; // rax
  int v10; // r12d
  bool v11; // cf
  unsigned __int64 v12; // rax
  int v13; // r12d
  char v14; // r15
  int v15; // ebp
  int v16; // [rsp+Ch] [rbp-8Ch]
  __int64 v17; // [rsp+10h] [rbp-88h] BYREF
  int v18; // [rsp+18h] [rbp-80h] BYREF
  __int64 v19; // [rsp+20h] [rbp-78h]
  int v20; // [rsp+28h] [rbp-70h]
  _QWORD *v21; // [rsp+30h] [rbp-68h] BYREF
  int *v22; // [rsp+38h] [rbp-60h]
  __int64 *v23; // [rsp+40h] [rbp-58h]
  __int64 v24; // [rsp+48h] [rbp-50h]
  char v25[8]; // [rsp+50h] [rbp-48h] BYREF
  __int64 v26; // [rsp+58h] [rbp-40h]

  v17 = a1[23] - 1LL;
  v3 = alacritty_terminal::term::Term<T>::expand_wide((__int64)a1, a2, a3, 0);
  v5 = v4;
  alacritty_terminal::vi_mode::first_occupied_in_line(&v18, a1, v4);
  v6 = v5;
  v7 = v5;
  result = v17;
  if ( (_BYTE)v18 )
  {
    v7 = v20;
    result = v19;
  }
  if ( v5 == v7 && v3 == result )
  {
    v9 = a1[10];
    v10 = 0;
    v11 = v9 < a1[24];
    v12 = v9 - a1[24];
    if ( !v11 )
      v10 = v12;
    v13 = -v10;
    if ( v6 <= v13 )
    {
      v18 = v6;
      v21 = a1;
      v22 = &v18;
      v23 = &v17;
      return alacritty_terminal::vi_mode::first_occupied::{{closure}}(&v21);
    }
    v14 = 0;
    v16 = v6;
    v15 = v6;
    do
    {
      --v15;
      if ( !(unsigned __int8)alacritty_terminal::vi_mode::is_wrap(a1, v17) )
        break;
      alacritty_terminal::vi_mode::first_occupied_in_line(v25, a1, (unsigned int)v15);
      if ( v25[0] )
        v24 = v26;
      v14 |= v25[0];
    }
    while ( v15 > v13 );
    v18 = v16;
    v21 = a1;
    v22 = &v18;
    v23 = &v17;
    result = v24;
    if ( (v14 & 1) == 0 )
      return alacritty_terminal::vi_mode::first_occupied::{{closure}}(&v21);
  }
  return result;
}