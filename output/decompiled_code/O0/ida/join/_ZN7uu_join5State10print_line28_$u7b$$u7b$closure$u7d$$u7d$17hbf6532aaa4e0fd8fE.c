__int64 __fastcall uu_join::State::print_line::{{closure}}(_QWORD *a1, __int64 a2)
{
  __int64 v3; // [rsp+8h] [rbp-30h]
  char v5; // [rsp+37h] [rbp-1h] BYREF

  if ( (*(_BYTE *)a2 & 1) == 0 )
    return uu_join::Line::get_field(*a1, *(_QWORD *)(a1[1] + 64LL));
  v5 = *(_BYTE *)(a2 + 1) & 1;
  v3 = *(_QWORD *)(a2 + 8);
  if ( (<uu_join::FileNum as core::cmp::PartialEq>::eq(&v5, a1[1] + 88LL) & 1) != 0 )
    return uu_join::Line::get_field(*a1, v3);
  else
    return 0LL;
}
