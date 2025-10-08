__int64 __fastcall rg::flags::config::parse(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // rdx
  __int64 v4; // r15
  __int64 v5; // rdx
  __int64 v7; // [rsp+0h] [rbp-B8h] BYREF
  _BYTE v8[4]; // [rsp+8h] [rbp-B0h] BYREF
  unsigned int v9; // [rsp+Ch] [rbp-ACh]
  __int64 v10; // [rsp+10h] [rbp-A8h]
  _QWORD v11[2]; // [rsp+18h] [rbp-A0h] BYREF
  _QWORD v12[2]; // [rsp+28h] [rbp-90h] BYREF
  _QWORD v13[4]; // [rsp+38h] [rbp-80h] BYREF
  _QWORD v14[6]; // [rsp+58h] [rbp-60h] BYREF
  _BYTE v15[48]; // [rsp+88h] [rbp-30h] BYREF

  v2 = <&T as core::convert::AsRef<U>>::as_ref(a2);
  v4 = v3;
  v11[0] = v2;
  v11[1] = v3;
  std::fs::File::open(v8, v11);
  if ( (v8[0] & 1) == 0 )
    return rg::flags::config::parse_reader(a1, v9);
  v7 = v10;
  v12[0] = v2;
  v12[1] = v4;
  v13[0] = v12;
  v13[1] = <std::path::Display as core::fmt::Display>::fmt;
  v13[2] = &v7;
  v13[3] = <std::io::error::Error as core::fmt::Display>::fmt;
  v14[0] = &unk_3E5D10;
  v14[1] = 2LL;
  v14[4] = 0LL;
  v14[2] = v13;
  v14[3] = 2LL;
  core::option::Option<T>::map_or_else(v15, 0LL, v5, v14);
  a1[1] = anyhow::kind::Adhoc::new(v15);
  *a1 = 0x8000000000000000LL;
  return core::ptr::drop_in_place<std::io::error::Error>(&v7);
}