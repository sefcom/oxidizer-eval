__int64 __fastcall alacritty::display::damage::RenderDamageIterator::rect_for_line(int *a1, _DWORD *a2, int *a3)
{
  int v3; // ecx
  __int64 result; // rax
  int v5; // r8d
  int v6; // r9d
  int v7; // edx
  int v8; // ecx
  int v9; // esi

  v3 = a2[6];
  result = (unsigned int)(a2[5] - a2[9]);
  v5 = *a3;
  v6 = a3[2];
  v7 = v3 * (a3[4] - v6 + 1);
  v8 = a2[8] + v6 * v3;
  v9 = a2[7];
  *a1 = v8;
  a1[1] = result + v9 * ~v5;
  a1[2] = v7;
  a1[3] = v9;
  return result;
}