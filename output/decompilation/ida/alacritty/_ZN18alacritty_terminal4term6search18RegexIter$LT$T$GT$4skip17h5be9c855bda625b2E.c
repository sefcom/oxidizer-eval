__int64 __fastcall alacritty_terminal::term::search::RegexIter<T>::skip(__int64 a1)
{
  __int64 v1; // r14
  int v2; // ebp
  __int64 v3; // rax
  unsigned int v4; // edx
  __int64 result; // rax
  int v6; // edx

  v1 = *(_QWORD *)(a1 + 40);
  v2 = *(unsigned __int8 *)(a1 + 48);
  v3 = alacritty_terminal::term::Term<T>::expand_wide(v1, *(_QWORD *)a1, *(_DWORD *)(a1 + 8), v2);
  *(_QWORD *)a1 = v3;
  *(_DWORD *)(a1 + 8) = v4;
  if ( v2 == 1 )
    result = alacritty_terminal::index::Point::add(v3, v4, v1, 2LL, 1LL);
  else
    result = alacritty_terminal::index::Point::sub(v3, v4, v1, 2LL);
  *(_QWORD *)a1 = result;
  *(_DWORD *)(a1 + 8) = v6;
  return result;
}