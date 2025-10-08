__int64 __fastcall uu_od::prn_float::format_item_flo64(__int64 a1)
{
  _QWORD v2[2]; // [rsp+0h] [rbp-68h] BYREF
  _QWORD v3[6]; // [rsp+10h] [rbp-58h] BYREF
  _BYTE v4[40]; // [rsp+40h] [rbp-28h] BYREF

  uu_od::prn_float::format_flo64(v4);
  v2[0] = v4;
  v2[1] = <alloc::string::String as core::fmt::Display>::fmt;
  v3[0] = &off_103838;
  v3[1] = 1LL;
  v3[4] = 0LL;
  v3[2] = v2;
  v3[3] = 1LL;
  core::option::Option<T>::map_or_else(a1, v3);
  core::ptr::drop_in_place<alloc::string::String>(v4);
  return a1;
}