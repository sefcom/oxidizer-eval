__int64 __fastcall uu_fmt::parasplit::Line::get_noformatline(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD v3[3]; // [rsp+8h] [rbp-40h] BYREF
  __int128 v4; // [rsp+20h] [rbp-28h]

  if ( *(_QWORD *)a2 != 0x8000000000000000LL )
  {
    v3[0] = &off_1265F8;
    v3[1] = 1LL;
    v3[2] = 8LL;
    v4 = 0LL;
    core::panicking::panic_fmt(v3, &off_126608);
  }
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 24);
  *(_OWORD *)a1 = *(_OWORD *)(a2 + 8);
  result = *(unsigned __int8 *)(a2 + 32);
  *(_BYTE *)(a1 + 24) = result;
  return result;
}
