__int64 __fastcall alacritty::display::hint::HintLabels::next(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int128 v4; // [rsp+8h] [rbp-40h] BYREF
  __int64 v5; // [rsp+18h] [rbp-30h]
  _QWORD v6[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a2 + 32) + 8LL * *(_QWORD *)(a2 + 40);
  v6[0] = *(_QWORD *)(a2 + 32);
  v6[1] = v2;
  v6[2] = a2;
  core::iter::traits::iterator::Iterator::collect(&v4, v6);
  alacritty::display::hint::HintLabels::increment(a2);
  result = v5;
  *(_QWORD *)(a1 + 16) = v5;
  *(_OWORD *)a1 = v4;
  return result;
}