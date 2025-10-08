__int64 forc_crypto::help()
{
  __int64 v0; // rdx
  __int64 v1; // rdx
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rdx
  _QWORD v7[2]; // [rsp+8h] [rbp-110h] BYREF
  _QWORD v8[2]; // [rsp+18h] [rbp-100h] BYREF
  _QWORD v9[2]; // [rsp+28h] [rbp-F0h] BYREF
  _QWORD v10[2]; // [rsp+38h] [rbp-E0h] BYREF
  _QWORD v11[2]; // [rsp+48h] [rbp-D0h] BYREF
  _QWORD v12[2]; // [rsp+58h] [rbp-C0h] BYREF
  _QWORD v13[12]; // [rsp+68h] [rbp-B0h] BYREF
  _QWORD v14[6]; // [rsp+C8h] [rbp-50h] BYREF
  _BYTE v15[32]; // [rsp+F8h] [rbp-20h] BYREF

  v7[0] = forc_crypto::args::examples();
  v7[1] = v0;
  v8[0] = forc_crypto::address::examples();
  v8[1] = v1;
  v9[0] = forc_crypto::keys::new_key::examples();
  v9[1] = v2;
  v10[0] = forc_crypto::keys::parse_secret::examples();
  v10[1] = v3;
  v11[0] = forc_crypto::keys::get_public_key::examples();
  v11[1] = v4;
  v12[0] = forc_crypto::keys::vanity::examples();
  v12[1] = v5;
  v13[0] = v7;
  v13[1] = <&T as core::fmt::Display>::fmt;
  v13[2] = v8;
  v13[3] = <&T as core::fmt::Display>::fmt;
  v13[4] = v9;
  v13[5] = <&T as core::fmt::Display>::fmt;
  v13[6] = v10;
  v13[7] = <&T as core::fmt::Display>::fmt;
  v13[8] = v11;
  v13[9] = <&T as core::fmt::Display>::fmt;
  v13[10] = v12;
  v13[11] = <&T as core::fmt::Display>::fmt;
  v14[0] = &off_62F1B0;
  v14[1] = 6LL;
  v14[4] = 0LL;
  v14[2] = v13;
  v14[3] = 6LL;
  core::option::Option<T>::map_or_else(v15, 0LL, v5, v14);
  return alloc::vec::Vec<T,A>::into_boxed_slice(v15);
}