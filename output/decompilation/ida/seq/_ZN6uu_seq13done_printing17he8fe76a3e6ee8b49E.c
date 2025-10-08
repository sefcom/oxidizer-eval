__int64 __fastcall uu_seq::done_printing(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // bp
  _QWORD v6[10]; // [rsp+8h] [rbp-50h] BYREF

  <uucore::features::extendedbigdecimal::ExtendedBigDecimal as num_traits::identities::Zero>::zero(v6);
  v4 = core::cmp::PartialOrd::ge(a2, v6);
  core::ptr::drop_in_place<uucore::features::extendedbigdecimal::ExtendedBigDecimal>(v6[0], v6[1]);
  if ( v4 )
    return core::cmp::PartialOrd::gt(a1, a3);
  else
    return core::cmp::PartialOrd::lt(a1, a3);
}