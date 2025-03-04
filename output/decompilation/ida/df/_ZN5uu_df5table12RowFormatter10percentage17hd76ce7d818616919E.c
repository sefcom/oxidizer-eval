__int64 __fastcall uu_df::table::RowFormatter::percentage(__int64 a1, __int64 a2, double a3)
{
  double v4; // [rsp+0h] [rbp-90h] BYREF
  _QWORD v5[2]; // [rsp+8h] [rbp-88h] BYREF
  _QWORD v6[6]; // [rsp+18h] [rbp-78h] BYREF
  __int128 v7; // [rsp+48h] [rbp-48h] BYREF
  __int64 v8; // [rsp+58h] [rbp-38h]
  __int64 v9; // [rsp+68h] [rbp-28h]
  __int64 v10; // [rsp+70h] [rbp-20h]
  char v11; // [rsp+78h] [rbp-18h]

  if ( !a2 )
    return <T as alloc::slice::hack::ConvertVec>::to_vec(a1, asc_15B87, 1LL);
  v4 = ceil(a3 * 100.0);
  v5[0] = &v4;
  v5[1] = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
  v7 = 0LL;
  v8 = 2LL;
  v9 = 0LL;
  v10 = 32LL;
  v11 = 3;
  v6[0] = &unk_141B30;
  v6[1] = 2LL;
  v6[4] = &v7;
  v6[5] = 1LL;
  v6[2] = v5;
  v6[3] = 1LL;
  return core::option::Option<T>::map_or_else(a1, v6);
}
