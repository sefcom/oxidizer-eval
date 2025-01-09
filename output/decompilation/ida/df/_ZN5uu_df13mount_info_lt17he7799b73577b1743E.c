char __fastcall uu_df::mount_info_lt(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v3; // r15
  __int64 v4; // r12
  __int64 v5; // rax
  __int64 v6; // r13
  __int64 v7; // rbp
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // rcx
  char result; // al
  char v14; // cl
  _QWORD v15[7]; // [rsp+0h] [rbp-38h] BYREF

  v15[0] = v2;
  v3 = a1[4];
  v4 = a1[5];
  LODWORD(v15[0]) = 0;
  v5 = core::char::methods::encode_utf8_raw(v15);
  if ( (unsigned __int8)core::slice::<impl [T]>::starts_with(v3, v4, v5, 1LL) )
  {
    v6 = a2[4];
    v7 = a2[5];
    HIDWORD(v15[0]) = 0;
    v8 = core::char::methods::encode_utf8_raw((char *)v15 + 4);
    if ( !(unsigned __int8)core::slice::<impl [T]>::starts_with(v6, v7, v8, 1LL) )
      return 0;
  }
  v9 = a1[11];
  v10 = a1[14];
  v11 = a2[14];
  if ( v9 && (v12 = a2[11]) != 0 )
  {
    if ( v10 < v11 && v9 <= v12 )
      return 0;
  }
  else if ( v10 < v11 )
  {
    return 0;
  }
  v14 = alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(
          v3,
          v4,
          a2[4],
          a2[5]);
  result = 1;
  if ( !v14 )
    return alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(
             a1[13],
             v10,
             a2[13],
             v11) ^ 1;
  return result;
}
