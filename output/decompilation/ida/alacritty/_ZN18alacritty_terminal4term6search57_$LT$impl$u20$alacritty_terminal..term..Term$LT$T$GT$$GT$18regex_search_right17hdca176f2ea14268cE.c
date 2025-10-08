char __fastcall alacritty_terminal::term::search::<impl alacritty_terminal::term::Term<T>>::regex_search_right(
        __int64 a1,
        int a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        int a7)
{
  __int64 v10; // r13
  int v11; // r15d
  int v12; // ecx
  char result; // al
  __int64 v14; // [rsp+10h] [rbp-48h] BYREF
  __int64 v15; // [rsp+18h] [rbp-40h]
  int v16; // [rsp+20h] [rbp-38h]

  alacritty_terminal::term::search::<impl alacritty_terminal::term::Term<T>>::regex_search(
    &v14,
    a2,
    a4,
    a5,
    a6,
    a7,
    a3 + 3264);
  if ( (_DWORD)v14 == 1
    && (v10 = v15,
        v11 = v16,
        alacritty_terminal::term::search::<impl alacritty_terminal::term::Term<T>>::regex_search(
          &v14,
          a2,
          v15,
          v16,
          a4,
          a5,
          a3 + 2176),
        (v14 & 1) != 0) )
  {
    v12 = v16;
    *(_QWORD *)a1 = v15;
    *(_DWORD *)(a1 + 8) = v12;
    *(_QWORD *)(a1 + 16) = v10;
    *(_DWORD *)(a1 + 24) = v11;
    result = 0;
  }
  else
  {
    result = 2;
  }
  *(_BYTE *)(a1 + 32) = result;
  return result;
}