__int64 __fastcall uu_df::table::RowFormatter::percentage(__int64 a1, char a2, double a3)
{
  double v4; // [rsp+0h] [rbp-50h] BYREF
  _QWORD v5[2]; // [rsp+8h] [rbp-48h] BYREF
  _QWORD v6[7]; // [rsp+18h] [rbp-38h] BYREF

  if ( (a2 & 1) == 0 )
    return <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1, "-total%", 1LL);
  v4 = ceil(a3 * 100.0);
  v5[0] = &v4;
  v5[1] = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
  v6[0] = &unk_102E98;
  v6[1] = 2LL;
  v6[4] = "";
  v6[5] = 1LL;
  v6[2] = v5;
  v6[3] = 1LL;
  return core::option::Option<T>::map_or_else(a1, v6);
}