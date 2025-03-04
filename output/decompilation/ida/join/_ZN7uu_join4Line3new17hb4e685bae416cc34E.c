__int64 __fastcall uu_join::Line::new(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int128 v5; // [rsp+0h] [rbp-28h] BYREF
  __int64 v6; // [rsp+10h] [rbp-18h]

  <uu_join::LineSep as uu_join::Separator>::field_ranges(&v5, a3, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16), a4);
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 16);
  *(_OWORD *)(a1 + 24) = *(_OWORD *)a2;
  *(_OWORD *)a1 = v5;
  result = v6;
  *(_QWORD *)(a1 + 16) = v6;
  return result;
}
