__int64 __fastcall uu_od::prn_int::format_item_hex64(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+8h] [rbp-60h] BYREF
  _QWORD v4[3]; // [rsp+10h] [rbp-58h] BYREF
  __int16 v5; // [rsp+28h] [rbp-40h]
  _QWORD v6[7]; // [rsp+30h] [rbp-38h] BYREF

  v3 = a2;
  v4[0] = &v3;
  v4[1] = core::fmt::num::<impl core::fmt::LowerHex for usize>::fmt;
  v4[2] = 0LL;
  v5 = 16;
  v6[0] = &off_103838;
  v6[1] = 1LL;
  v6[4] = &unk_1DFB8;
  v6[5] = 1LL;
  v6[2] = v4;
  v6[3] = 2LL;
  core::option::Option<T>::map_or_else(a1, v6);
  return a1;
}