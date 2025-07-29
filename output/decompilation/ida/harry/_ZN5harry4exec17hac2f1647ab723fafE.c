__int64 __fastcall harry::exec(__int64 a1, __int64 *a2)
{
  _QWORD *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v7; // [rsp+0h] [rbp-1F8h] BYREF
  _QWORD v8[2]; // [rsp+8h] [rbp-1F0h] BYREF
  _OWORD v9[3]; // [rsp+18h] [rbp-1E0h] BYREF
  __int64 v10; // [rsp+48h] [rbp-1B0h]
  _QWORD v11[4]; // [rsp+50h] [rbp-1A8h] BYREF
  __int128 v12; // [rsp+70h] [rbp-188h] BYREF
  __int64 v13; // [rsp+80h] [rbp-178h]
  _BYTE v14[48]; // [rsp+90h] [rbp-168h] BYREF
  __int128 v15; // [rsp+C0h] [rbp-138h] BYREF
  __int128 v16; // [rsp+D0h] [rbp-128h]
  __int128 v17; // [rsp+E0h] [rbp-118h]
  __int64 v18; // [rsp+F0h] [rbp-108h]
  __int128 v19; // [rsp+100h] [rbp-F8h] BYREF
  __int64 v20; // [rsp+110h] [rbp-E8h]
  __int128 dest; // [rsp+118h] [rbp-E0h] BYREF
  __int64 v22; // [rsp+128h] [rbp-D0h]

  v2 = (_QWORD *)alloc::alloc::exchange_malloc();
  v3 = *a2;
  v4 = a2[2];
  *v2 = aC;
  v2[1] = 2LL;
  v2[2] = v3;
  v2[3] = v4;
  alloc::slice::hack::into_vec(&dest, v2, 2LL);
  v13 = v22;
  v12 = dest;
  v8[0] = aSh;
  v8[1] = 2LL;
  *(_QWORD *)&v9[0] = v8;
  *((_QWORD *)&v9[0] + 1) = <&T as core::fmt::Display>::fmt;
  core::fmt::Arguments::new_v1(&dest, &off_74108, 2LL, v9, 1LL);
  std::io::stdio::_print(&dest);
  std::process::Command::new(&dest);
  v5 = std::process::Command::args(&dest, &v12);
  std::process::Command::output(v9, v5);
  if ( *(_QWORD *)&v9[0] )
  {
    v18 = v10;
    v17 = v9[2];
    v16 = v9[1];
    v15 = v9[0];
    core::ptr::drop_in_place<std::process::Command>(&dest);
    *(_QWORD *)v14 = 1LL;
    *(_OWORD *)&v14[8] = 0LL;
    std::io::buffered::bufreader::BufReader<R>::with_capacity(v9, 0x2000LL, v15, v16);
    std::io::buffered::bufreader::BufReader<R>::with_capacity(
      &dest,
      0x2000LL,
      *((_QWORD *)&v16 + 1),
      *((_QWORD *)&v17 + 1));
    <std::io::buffered::bufreader::BufReader<R> as std::io::Read>::read_to_string(v11, v9, v14);
    core::result::Result<T,E>::unwrap(v11, &off_74128);
    <std::io::buffered::bufreader::BufReader<R> as std::io::Read>::read_to_string(v11, &dest, v14);
    core::result::Result<T,E>::unwrap(v11, &off_74140);
    *(_QWORD *)(a1 + 16) = *(_QWORD *)&v14[16];
    *(_OWORD *)a1 = *(_OWORD *)v14;
    core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<&[u8]>>(dest, *((_QWORD *)&dest + 1));
    core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<&[u8]>>(*(_QWORD *)&v9[0], *((_QWORD *)&v9[0] + 1));
    core::ptr::drop_in_place<std::process::Output>(&v15);
    core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&v12);
  }
  else
  {
    v7 = *((_QWORD *)&v9[0] + 1);
    v11[0] = a2;
    v11[1] = <alloc::string::String as core::fmt::Display>::fmt;
    v11[2] = &v7;
    v11[3] = <std::io::error::Error as core::fmt::Display>::fmt;
    core::fmt::Arguments::new_v1(v14, &off_74158, 2LL, v11, 2LL);
    alloc::fmt::format(&v19, v14);
    *(_QWORD *)(a1 + 16) = v20;
    *(_OWORD *)a1 = v19;
    core::ptr::drop_in_place<std::io::error::Error>(&v7);
    core::ptr::drop_in_place<std::process::Command>(&dest);
    core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&v12);
  }
  return core::ptr::drop_in_place<alloc::string::String>(a2);
}