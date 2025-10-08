__int64 __fastcall uu_od::prn_float::format_item_flo32(__int64 a1, double a2)
{
  float v2; // xmm0_4
  _QWORD v4[2]; // [rsp+0h] [rbp-68h] BYREF
  _QWORD v5[6]; // [rsp+10h] [rbp-58h] BYREF
  _BYTE v6[40]; // [rsp+40h] [rbp-28h] BYREF

  v2 = a2;
  uu_od::prn_float::format_flo32(v6, v2);
  v4[0] = v6;
  v4[1] = <alloc::string::String as core::fmt::Display>::fmt;
  v5[0] = &off_103838;
  v5[1] = 1LL;
  v5[4] = 0LL;
  v5[2] = v4;
  v5[3] = 1LL;
  core::option::Option<T>::map_or_else(a1, v5);
  core::ptr::drop_in_place<alloc::string::String>(v6);
  return a1;
}