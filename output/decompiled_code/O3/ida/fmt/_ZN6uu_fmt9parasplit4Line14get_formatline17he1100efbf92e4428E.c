__int64 __fastcall uu_fmt::parasplit::Line::get_formatline(__int64 a1, __int128 *a2)
{
  __int64 result; // rax
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  _QWORD v5[3]; // [rsp+8h] [rbp-40h] BYREF
  __int128 v6; // [rsp+20h] [rbp-28h]

  if ( *(_QWORD *)a2 == 0x8000000000000000LL )
  {
    v5[0] = &off_1278C0;
    v5[1] = 1LL;
    v5[2] = 8LL;
    v6 = 0LL;
    core::panicking::panic_fmt(v5, &off_1278D0);
  }
  result = *((_QWORD *)a2 + 6);
  *(_QWORD *)(a1 + 48) = result;
  v3 = *a2;
  v4 = a2[1];
  *(_OWORD *)(a1 + 32) = a2[2];
  *(_OWORD *)(a1 + 16) = v4;
  *(_OWORD *)a1 = v3;
  return result;
}
