__int64 __fastcall uu_df::table::RowFormatter::scaled_inodes(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v4; // al
  _QWORD v6[3]; // [rsp+0h] [rbp-18h] BYREF

  v6[1] = a4;
  v6[0] = a3;
  v4 = *(_BYTE *)(a2 + 84);
  if ( v4 == 2 )
    return <T as alloc::string::ToString>::to_string(a1, v6);
  else
    return uu_df::blocks::to_magnitude_and_suffix(a1, a3, a4, v4);
}
