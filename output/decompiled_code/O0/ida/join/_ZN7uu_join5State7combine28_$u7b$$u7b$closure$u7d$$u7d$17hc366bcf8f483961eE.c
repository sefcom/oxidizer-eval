__int64 __fastcall uu_join::State::combine::{{closure}}(_QWORD *a1, __int64 a2)
{
  char v3; // al
  __int64 v4; // [rsp+8h] [rbp-30h]
  char v6; // [rsp+37h] [rbp-1h] BYREF

  if ( (*(_BYTE *)a2 & 1) == 0 )
    return *(_QWORD *)*a1;
  v6 = *(_BYTE *)(a2 + 1) & 1;
  v4 = *(_QWORD *)(a2 + 8);
  if ( (<uu_join::FileNum as core::cmp::PartialEq>::eq(&v6, a1[1] + 88LL) & 1) != 0 )
    return uu_join::Line::get_field(a1[2], v4);
  v3 = <uu_join::FileNum as core::cmp::PartialEq>::eq(&v6, a1[3] + 88LL);
  if ( (v3 & 1) != 0 )
    return uu_join::Line::get_field(a1[4], v4);
  else
    return 0LL;
}
