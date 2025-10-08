__int64 __fastcall alacritty::display::damage::merge_rects(_DWORD *a1, unsigned int *a2, unsigned int *a3)
{
  _DWORD *v3; // r14
  int v4; // r12d
  int v5; // r13d
  int v6; // ebp
  int v7; // r12d
  unsigned int v8; // r13d
  unsigned int v9; // r15d
  __int64 result; // rax

  v3 = a3;
  v4 = *a2;
  v5 = *a3;
  v6 = core::cmp::Ord::min(*a2, *a3);
  v7 = core::cmp::Ord::max(a2[2] + v4, (unsigned int)(v3[2] + v5));
  v8 = a2[1];
  v9 = v3[1];
  LODWORD(v3) = core::cmp::Ord::max(v8 + a2[3], v9 + v3[3]);
  result = core::cmp::Ord::min(v8, v9);
  *a1 = v6;
  a1[1] = result;
  a1[2] = v7 - v6;
  a1[3] = (_DWORD)v3 - result;
  return result;
}