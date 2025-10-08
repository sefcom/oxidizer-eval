__int64 __fastcall alacritty::display::damage::RenderDamageIterator::overdamage(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  int v4; // ebp
  int v5; // eax
  unsigned int v6; // eax
  int v7; // ebp
  int v8; // eax
  unsigned int v9; // eax
  __int64 result; // rax

  v4 = a2[6];
  v5 = core::cmp::Ord::max((unsigned int)(*a3 - v4), 0LL);
  *a3 = v5;
  v6 = core::cmp::Ord::max((unsigned int)(a2[4] - v5), 0LL);
  a3[2] = core::cmp::Ord::min(v6, (unsigned int)(a3[2] + 2 * v4));
  v7 = a2[7];
  v8 = core::cmp::Ord::max((unsigned int)(a3[1] - v7 / 2), 0LL);
  a3[1] = v8;
  v9 = core::cmp::Ord::max((unsigned int)(a2[5] - v8), 0LL);
  a3[3] = core::cmp::Ord::min(v9, (unsigned int)(a3[3] + v7));
  *(_QWORD *)a1 = *(_QWORD *)a3;
  *(_DWORD *)(a1 + 8) = a3[2];
  result = (unsigned int)a3[3];
  *(_DWORD *)(a1 + 12) = result;
  return result;
}