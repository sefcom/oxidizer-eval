__int64 __fastcall flea::updater::start_new_process(__int64 a1, __int64 a2)
{
  __int128 v3; // [rsp+0h] [rbp-188h] BYREF
  __int64 v4; // [rsp+10h] [rbp-178h]
  __int128 v5; // [rsp+20h] [rbp-168h] BYREF
  __int64 v6; // [rsp+30h] [rbp-158h]
  __int128 v7; // [rsp+40h] [rbp-148h] BYREF
  __int64 v8; // [rsp+50h] [rbp-138h]
  _QWORD v9[4]; // [rsp+68h] [rbp-120h] BYREF
  __int128 v10; // [rsp+88h] [rbp-100h] BYREF
  __int64 v11; // [rsp+98h] [rbp-F0h]
  _BYTE dest[24]; // [rsp+A0h] [rbp-E8h] BYREF
  __int64 v13; // [rsp+B8h] [rbp-D0h]
  __int64 v14; // [rsp+C0h] [rbp-C8h]

  std::sys::os_str::bytes::Slice::to_owned(dest);
  v4 = *(_QWORD *)&dest[16];
  v3 = *(_OWORD *)dest;
  *(_QWORD *)&dest[16] = *(_QWORD *)(a2 + 16);
  *(_OWORD *)dest = *(_OWORD *)a2;
  std::path::PathBuf::push(&v3, dest);
  std::sys::os_str::bytes::Slice::to_str(dest, *((_QWORD *)&v3 + 1), v4);
  if ( (dest[0] & 1) != 0 )
    core::option::unwrap_failed(&off_6F62B8);
  v7 = *(_OWORD *)&dest[8];
  *(_QWORD *)&v5 = &v7;
  v9[0] = &v5;
  v9[1] = <&T as core::fmt::Display>::fmt;
  *(_QWORD *)dest = &off_6F6280;
  *(_QWORD *)&dest[8] = 2LL;
  v14 = 0LL;
  *(_QWORD *)&dest[16] = v9;
  v13 = 1LL;
  core::option::Option<T>::map_or_else(&v10, dest);
  v5 = v10;
  v6 = v11;
  v8 = v4;
  v7 = v3;
  std::process::Command::new(dest);
  std::process::Command::spawn(&v7, dest);
  core::result::Result<T,E>::expect(v9, &v7, *((_QWORD *)&v5 + 1), v6);
  core::ptr::drop_in_place<std::process::Child>(v9);
  core::ptr::drop_in_place<std::process::Command>(dest);
  return core::ptr::drop_in_place<alloc::string::String>(&v5);
}