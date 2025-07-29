_QWORD *__fastcall flealib::fileserver::FileServer::read_binary_file(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v13; // rdx
  unsigned int v14; // [rsp+Ch] [rbp-16Ch] BYREF
  __int128 v15; // [rsp+10h] [rbp-168h] BYREF
  __int128 *v16; // [rsp+20h] [rbp-158h]
  __int128 v17; // [rsp+30h] [rbp-148h] BYREF
  __int128 *v18; // [rsp+40h] [rbp-138h]
  __int64 v19; // [rsp+48h] [rbp-130h]
  __int64 v20; // [rsp+50h] [rbp-128h]
  __int128 v21; // [rsp+60h] [rbp-118h] BYREF
  __int128 *v22; // [rsp+70h] [rbp-108h]
  _QWORD v23[2]; // [rsp+80h] [rbp-F8h] BYREF
  __int128 v24; // [rsp+90h] [rbp-E8h] BYREF
  __int128 *v25; // [rsp+A0h] [rbp-D8h]
  __int64 (__fastcall *v26)(); // [rsp+A8h] [rbp-D0h]
  _QWORD *v27; // [rsp+B0h] [rbp-C8h]
  __int64 (__fastcall *v28)(); // [rsp+B8h] [rbp-C0h]
  unsigned __int64 v29; // [rsp+E0h] [rbp-98h]
  __int128 v30; // [rsp+148h] [rbp-30h] BYREF
  __int128 *v31; // [rsp+158h] [rbp-20h]

  v23[0] = a3;
  v23[1] = a4;
  LODWORD(v17) = 0;
  v4 = core::char::methods::encode_utf8_raw(47LL, &v17);
  <T as alloc::slice::hack::ConvertVec>::to_vec(&v24, v4, v5);
  v16 = v25;
  v15 = v24;
  if ( (unsigned __int8)core::slice::<impl [T]>::ends_with(
                          *(_QWORD *)(a2 + 8),
                          *(_QWORD *)(a2 + 16),
                          *((_QWORD *)&v24 + 1),
                          v25,
                          v6,
                          v7) )
  {
    <T as alloc::slice::hack::ConvertVec>::to_vec(&v24, 1LL, 0LL);
    v18 = v25;
    v17 = v24;
    core::ptr::drop_in_place<alloc::string::String>(&v15);
    v16 = v18;
    v15 = v17;
  }
  *(_QWORD *)&v24 = a2;
  *((_QWORD *)&v24 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
  v25 = &v15;
  v26 = <alloc::string::String as core::fmt::Display>::fmt;
  v27 = v23;
  v28 = <&T as core::fmt::Display>::fmt;
  *(_QWORD *)&v17 = &unk_6B258;
  *((_QWORD *)&v17 + 1) = 3LL;
  v20 = 0LL;
  v18 = &v24;
  v19 = 3LL;
  core::option::Option<T>::map_or_else(&v30, &v17, v8, &v15, v9, v10);
  v21 = v30;
  v22 = v31;
  <alloc::string::String as core::clone::Clone>::clone(&v17, &v21);
  std::fs::metadata(&v24, &v17);
  if ( (_DWORD)v24 == 2 )
  {
    v11 = *((_QWORD *)&v24 + 1);
LABEL_7:
    a1[1] = v11;
    *a1 = 0x8000000000000000LL;
    core::ptr::drop_in_place<alloc::string::String>(&v21);
    goto LABEL_8;
  }
  if ( v29 > 0x1F400000 )
  {
    v11 = std::io::error::Error::new(40LL, aFileTooLarge, 14LL);
    goto LABEL_7;
  }
  v25 = v22;
  v24 = v21;
  std::fs::File::open(&v17, &v24);
  if ( (v17 & 1) != 0 )
  {
    a1[1] = *((_QWORD *)&v17 + 1);
    *a1 = 0x8000000000000000LL;
  }
  else
  {
    v14 = DWORD1(v17);
    *(_QWORD *)&v24 = 0LL;
    *((_QWORD *)&v24 + 1) = 1LL;
    v25 = 0LL;
    if ( <std::fs::File as std::io::Read>::read_to_end(&v14, &v24) )
    {
      a1[1] = v13;
      *a1 = 0x8000000000000000LL;
      core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v24);
    }
    else
    {
      a1[2] = v25;
      *(_OWORD *)a1 = v24;
    }
    core::ptr::drop_in_place<std::fs::File>(v14);
  }
LABEL_8:
  core::ptr::drop_in_place<alloc::string::String>(&v15);
  return a1;
}