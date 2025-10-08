__int64 __fastcall check_docs::check_validity_of_anchor_pair(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+8h] [rbp-60h] BYREF
  __int64 v4; // [rsp+10h] [rbp-58h] BYREF
  _QWORD v5[4]; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v6[6]; // [rsp+38h] [rbp-30h] BYREF

  v3 = a1;
  v4 = a2;
  if ( *(_QWORD *)(a1 + 48) <= *(_QWORD *)(a2 + 48) )
    return 0LL;
  v5[0] = &v4;
  v5[1] = <&T as core::fmt::Debug>::fmt;
  v5[2] = &v3;
  v5[3] = <&T as core::fmt::Debug>::fmt;
  v6[0] = &off_1D3568;
  v6[1] = 2LL;
  v6[4] = 0LL;
  v6[2] = v5;
  v6[3] = 2LL;
  return anyhow::__private::format_err(v6);
}