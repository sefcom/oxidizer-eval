__int64 __fastcall alacritty_terminal::selection::Selection::range_semantic(
        __int64 a1,
        __int64 a2,
        const char *a3,
        signed int a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  __int64 result; // rax
  signed int v11; // ecx
  signed int v12; // edx
  const char *v13; // rsi
  __int64 v14; // r14
  int v15; // edx
  int v16; // ebp
  _BYTE v17[8]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v18; // [rsp+8h] [rbp-40h]
  signed int v19; // [rsp+10h] [rbp-38h]

  if ( a4 != a6
    || a3 != (const char *)a5
    || (alacritty_terminal::term::search::<impl alacritty_terminal::term::Term<T>>::bracket_search(
          (__int64)v17,
          a2,
          a3,
          a4),
        (v17[0] & 1) == 0) )
  {
    v14 = alacritty_terminal::term::search::<impl alacritty_terminal::term::Term<T>>::semantic_search_left(
            a2,
            (__int64)a3,
            a4);
    v16 = v15;
    result = alacritty_terminal::term::search::<impl alacritty_terminal::term::Term<T>>::semantic_search_right(
               a2,
               a5,
               a6);
    *(_QWORD *)a1 = v14;
    *(_DWORD *)(a1 + 8) = v16;
    *(_QWORD *)(a1 + 16) = result;
  }
  else
  {
    result = v18;
    v11 = v19;
    if ( v19 < a4 || v19 == a4 && v18 < (unsigned __int64)a3 )
    {
      v12 = a4;
      v13 = a3;
    }
    else
    {
      v12 = v19;
      v13 = (const char *)v18;
      result = (__int64)a3;
      v11 = a4;
    }
    *(_QWORD *)a1 = result;
    *(_DWORD *)(a1 + 8) = v11;
    *(_QWORD *)(a1 + 16) = v13;
  }
  *(_DWORD *)(a1 + 24) = v12;
  *(_BYTE *)(a1 + 32) = 0;
  return result;
}