__int64 __fastcall uu_od::prn_char::format_item_a(__int64 a1, char a2)
{
  char **v3; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v4[2]; // [rsp+10h] [rbp-48h] BYREF
  _QWORD v5[7]; // [rsp+20h] [rbp-38h] BYREF

  v3 = &(&uu_od::prn_char::A_CHARS)[2 * (a2 & 0x7Fu)];
  v4[0] = &v3;
  v4[1] = <&T as core::fmt::Display>::fmt;
  v5[0] = &unk_1A940;
  v5[1] = 1LL;
  v5[4] = &unk_1D150;
  v5[5] = 1LL;
  v5[2] = v4;
  v5[3] = 1LL;
  core::option::Option<T>::map_or_else(a1, v5);
  return a1;
}