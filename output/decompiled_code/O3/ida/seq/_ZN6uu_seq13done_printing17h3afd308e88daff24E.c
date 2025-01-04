__int64 __fastcall uu_seq::done_printing(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // bp
  _BYTE v6[80]; // [rsp+8h] [rbp-50h] BYREF

  <uu_seq::extendedbigdecimal::ExtendedBigDecimal as num_traits::identities::Zero>::zero(v6);
  v4 = core::cmp::PartialOrd::ge(a2, v6);
  core::ptr::drop_in_place<uu_seq::extendedbigdecimal::ExtendedBigDecimal>(v6);
  if ( v4 )
    return core::cmp::PartialOrd::gt(a1, a3);
  else
    return core::cmp::PartialOrd::lt(a1, a3);
}
