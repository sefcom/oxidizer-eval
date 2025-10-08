char __fastcall alacritty_terminal::term::search::<impl alacritty_terminal::term::Term<T>>::regex_search_left(
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
  __int64 v12; // rax
  int v13; // ecx
  char result; // al
  __int64 v15; // [rsp+10h] [rbp-48h] BYREF
  __int64 v16; // [rsp+18h] [rbp-40h]
  int v17; // [rsp+20h] [rbp-38h]

  alacritty_terminal::term::search::<impl alacritty_terminal::term::Term<T>>::regex_search(&v15, a2, a4, a5, a6, a7, a3);
  if ( (_DWORD)v15 == 1
    && (v10 = v16,
        v11 = v17,
        alacritty_terminal::term::search::<impl alacritty_terminal::term::Term<T>>::regex_search(
          &v15,
          a2,
          v16,
          v17,
          a4,
          a5,
          a3 + 1088),
        (v15 & 1) != 0) )
  {
    v12 = v16;
    v13 = v17;
    *(_QWORD *)a1 = v10;
    *(_DWORD *)(a1 + 8) = v11;
    *(_QWORD *)(a1 + 16) = v12;
    *(_DWORD *)(a1 + 24) = v13;
    result = 0;
  }
  else
  {
    result = 2;
  }
  *(_BYTE *)(a1 + 32) = result;
  return result;
}