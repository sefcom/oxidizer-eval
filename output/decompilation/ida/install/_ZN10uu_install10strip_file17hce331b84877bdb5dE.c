__int64 __fastcall uu_install::strip_file(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // r13
  __int64 v6; // rax
  __int64 v7; // r14
  __int16 v8; // bx
  __int64 v10; // [rsp+8h] [rbp-1C0h] BYREF
  __int128 v11; // [rsp+10h] [rbp-1B8h] BYREF
  __int64 v12; // [rsp+20h] [rbp-1A8h]
  _BYTE v13[24]; // [rsp+30h] [rbp-198h] BYREF
  __int64 v14; // [rsp+48h] [rbp-180h]
  __int64 v15; // [rsp+50h] [rbp-178h]
  __int128 v16; // [rsp+78h] [rbp-150h] BYREF
  __int64 v17; // [rsp+88h] [rbp-140h]
  int v18; // [rsp+90h] [rbp-138h] BYREF
  int v19; // [rsp+94h] [rbp-134h]
  __int64 v20; // [rsp+98h] [rbp-130h]
  __int128 v21; // [rsp+A0h] [rbp-128h] BYREF
  __int64 v22; // [rsp+B0h] [rbp-118h]
  __int128 v23; // [rsp+B8h] [rbp-110h] BYREF
  __int64 v24; // [rsp+C8h] [rbp-100h]

  core::str::converts::from_utf8(&v23, a1, a2);
  v4 = 0LL;
  if ( !(_BYTE)v23 )
    v4 = v24;
  v5 = 1LL;
  if ( !(_BYTE)v23 )
    v5 = *((_QWORD *)&v23 + 1);
  LODWORD(v23) = 0;
  v6 = core::char::methods::encode_utf8_raw(45LL, &v23);
  if ( (unsigned __int8)core::slice::<impl [T]>::starts_with(v5, v4, v6) )
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v23, asc_1C10B, 1LL);
    *(_QWORD *)&v13[16] = v24;
    *(_OWORD *)v13 = v23;
    std::path::PathBuf::push(v13, a1);
    v12 = *(_QWORD *)&v13[16];
    v11 = *(_OWORD *)v13;
  }
  else
  {
    std::path::Path::to_path_buf(&v11, a1, a2);
  }
  std::process::Command::new(&v23, a3 + 24);
  std::process::Command::arg(&v23, &v11);
  std::process::Command::status(&v18, &v23);
  if ( v18 == 1 )
  {
    v10 = v20;
    *(_QWORD *)&v13[16] = v12;
    *(_OWORD *)v13 = v11;
    *(_QWORD *)&v16 = std::fs::remove_file(v13);
    core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v16);
    <T as alloc::string::SpecToString>::spec_to_string(&v16, &v10);
    v14 = v17;
    *(_OWORD *)&v13[8] = v16;
    *(_QWORD *)v13 = 9LL;
    v7 = alloc::boxed::Box<T>::new(v13);
    core::ptr::drop_in_place<std::io::error::Error>(&v10);
  }
  else
  {
    v8 = v19;
    if ( !v19 )
    {
      core::ptr::drop_in_place<std::process::Command>(&v23);
      core::ptr::drop_in_place<std::path::PathBuf>(&v11);
      return 0LL;
    }
    *(_QWORD *)&v13[16] = v12;
    *(_OWORD *)v13 = v11;
    *(_QWORD *)&v16 = std::fs::remove_file(v13);
    core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v16);
    if ( (v8 & 0x7F) != 0 )
      core::option::unwrap_failed(&off_1024F8);
    LODWORD(v10) = HIBYTE(v8);
    *(_QWORD *)&v16 = &v10;
    *((_QWORD *)&v16 + 1) = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
    *(_QWORD *)v13 = &off_1024E8;
    *(_QWORD *)&v13[8] = 1LL;
    v15 = 0LL;
    *(_QWORD *)&v13[16] = &v16;
    v14 = 1LL;
    core::option::Option<T>::map_or_else(&v21, v13);
    *(_OWORD *)&v13[8] = v21;
    v14 = v22;
    *(_QWORD *)v13 = 9LL;
    v7 = alloc::boxed::Box<T>::new(v13);
  }
  core::ptr::drop_in_place<std::process::Command>(&v23);
  return v7;
}