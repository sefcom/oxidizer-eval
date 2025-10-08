__int64 __fastcall alacritty::display::hint::visible_regex_match_iter(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebp
  unsigned int v4; // edx
  int v5; // r13d
  int v6; // eax
  __int64 result; // rax
  unsigned int v8; // [rsp+4h] [rbp-54h]
  unsigned int v9; // [rsp+8h] [rbp-50h]
  unsigned __int64 v10; // [rsp+10h] [rbp-48h]
  int v11; // [rsp+18h] [rbp-40h]

  v11 = *(_DWORD *)(a2 + 192);
  v3 = *(_DWORD *)(a2 + 200);
  v8 = alacritty_terminal::term::search::<impl alacritty_terminal::term::Term<T>>::line_search_left((_QWORD *)a2, -v3);
  v10 = alacritty_terminal::term::search::<impl alacritty_terminal::term::Term<T>>::line_search_right(a2, v11 + ~v3);
  v9 = v4;
  v5 = core::cmp::Ord::max(v8, (unsigned int)(-100 - v3));
  v6 = core::cmp::Ord::min(v9, (unsigned int)(v11 + ~v3 + 100));
  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 8) = v5;
  *(_QWORD *)(a1 + 16) = v10;
  *(_DWORD *)(a1 + 24) = v6;
  *(_QWORD *)(a1 + 32) = a3;
  *(_QWORD *)(a1 + 40) = a2;
  *(_WORD *)(a1 + 48) = 1;
  *(_DWORD *)(a1 + 56) = -v3;
  *(_BYTE *)(a1 + 60) = 0;
  *(_BYTE *)(a1 + 68) = 0;
  result = (unsigned int)(v11 + ~v3);
  *(_DWORD *)(a1 + 64) = v11 + ~v3;
  return result;
}