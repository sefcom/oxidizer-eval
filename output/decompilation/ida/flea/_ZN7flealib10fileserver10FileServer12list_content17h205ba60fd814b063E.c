__int64 __fastcall flealib::fileserver::FileServer::list_content(__int64 a1, __int64 a2)
{
  char v2; // bl
  __int128 *v3; // r14
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r14
  __int64 v10; // r13
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int128 v18; // [rsp+0h] [rbp-1A8h] BYREF
  __int128 **v19; // [rsp+10h] [rbp-198h]
  __int64 v20; // [rsp+18h] [rbp-190h]
  __int64 v21; // [rsp+20h] [rbp-188h]
  __int128 *v22; // [rsp+30h] [rbp-178h] BYREF
  __int128 v23; // [rsp+38h] [rbp-170h]
  __int64 (__fastcall *v24)(); // [rsp+48h] [rbp-160h]
  __int64 v25; // [rsp+50h] [rbp-158h]
  __int128 v26; // [rsp+60h] [rbp-148h] BYREF
  __int64 v27; // [rsp+70h] [rbp-138h]
  __int128 *v28; // [rsp+78h] [rbp-130h] BYREF
  char v29; // [rsp+80h] [rbp-128h]
  __int128 v30; // [rsp+88h] [rbp-120h] BYREF
  __int128 **v31; // [rsp+98h] [rbp-110h]
  _BYTE v32[24]; // [rsp+A0h] [rbp-108h] BYREF
  __int64 (__fastcall *v33)(); // [rsp+B8h] [rbp-F0h]
  __int128 v34; // [rsp+C0h] [rbp-E8h] BYREF
  __int128 **v35; // [rsp+D0h] [rbp-D8h]
  __int64 v36; // [rsp+E0h] [rbp-C8h]
  _QWORD v37[2]; // [rsp+E8h] [rbp-C0h] BYREF
  char v38; // [rsp+F8h] [rbp-B0h]
  __int128 *v39; // [rsp+100h] [rbp-A8h] BYREF
  char v40[40]; // [rsp+108h] [rbp-A0h] BYREF
  __int128 v41; // [rsp+130h] [rbp-78h] BYREF
  __int64 v42; // [rsp+140h] [rbp-68h]
  _BYTE v43[24]; // [rsp+148h] [rbp-60h] BYREF
  _BYTE v44[72]; // [rsp+160h] [rbp-48h] BYREF

  *(_QWORD *)&v26 = 0LL;
  *((_QWORD *)&v26 + 1) = 8LL;
  v27 = 0LL;
  v36 = a2;
  std::fs::read_dir(&v22);
  v2 = v23;
  if ( (_BYTE)v23 != 2 )
  {
    v3 = v22;
    v37[1] = v22;
    v38 = v23;
    LODWORD(v22) = 0;
    v4 = core::char::methods::encode_utf8_raw(47LL, &v22);
    <T as alloc::slice::hack::ConvertVec>::to_vec(&v18, v4, v5);
    v35 = v19;
    v34 = v18;
    v28 = v3;
    v29 = v2;
    while ( 1 )
    {
      <std::fs::ReadDir as core::iter::traits::iterator::Iterator>::next(&v39, &v28);
      if ( ((unsigned __int8)v39 & 1) == 0 )
      {
        core::ptr::drop_in_place<std::fs::ReadDir>(&v28);
        *(_QWORD *)(a1 + 24) = v27;
        *(_OWORD *)(a1 + 8) = v26;
        *(_QWORD *)a1 = 0LL;
        core::ptr::drop_in_place<alloc::string::String>(&v34);
        return a1;
      }
      core::result::Result<T,E>::unwrap(&v18, v40);
      std::fs::DirEntry::file_name(v44, &v18);
      std::sys::os_str::bytes::Buf::into_string(&v22, v44);
      v33 = v24;
      *(_OWORD *)&v32[8] = v23;
      *(_QWORD *)v32 = v22;
      core::result::Result<T,E>::unwrap(&v30, v32);
      core::ptr::drop_in_place<std::fs::DirEntry>(&v18);
      v37[0] = v36;
      v22 = (__int128 *)&unk_6B258;
      *(_QWORD *)&v23 = 3LL;
      v25 = 0LL;
      *((_QWORD *)&v23 + 1) = &v18;
      v24 = (__int64 (__fastcall *)())(&dword_0 + 3);
      core::option::Option<T>::map_or_else(
        &v41,
        &v22,
        v6,
        <alloc::string::String as core::fmt::Display>::fmt,
        v7,
        v8,
        v37,
        <&T as core::fmt::Display>::fmt,
        &v34,
        <alloc::string::String as core::fmt::Display>::fmt,
        &v30,
        <alloc::string::String as core::fmt::Display>::fmt);
      *(_OWORD *)v32 = v41;
      v9 = v42;
      *(_QWORD *)&v32[16] = v42;
      v10 = *((_QWORD *)&v41 + 1);
      if ( (unsigned __int8)std::path::Path::is_dir(*((_QWORD *)&v41 + 1), v42) )
        break;
      if ( (unsigned __int8)std::path::Path::is_file(v10, v9) )
      {
        v19 = v31;
        v18 = v30;
        ((void (__fastcall *)(__int128 *, __int128 *, char **))alloc::vec::Vec<T,A>::push)(&v26, &v18, &off_7098E0);
        core::ptr::drop_in_place<alloc::string::String>(v32);
      }
      else
      {
LABEL_9:
        core::ptr::drop_in_place<alloc::string::String>(v32);
        core::ptr::drop_in_place<alloc::string::String>(&v30);
      }
    }
    v22 = &v34;
    *(_QWORD *)&v23 = <alloc::string::String as core::fmt::Display>::fmt;
    *((_QWORD *)&v23 + 1) = &v30;
    v24 = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v18 = "\x01";
    *((_QWORD *)&v18 + 1) = 2LL;
    v21 = 0LL;
    v19 = &v22;
    v20 = 2LL;
    ((void (__fastcall *)(_BYTE *, __int128 *, __int64, __int64 (__fastcall *)(), __int64, __int64))core::option::Option<T>::map_or_else)(
      v43,
      &v18,
      v11,
      <alloc::string::String as core::fmt::Display>::fmt,
      v12,
      v13);
    alloc::vec::Vec<T,A>::push(&v26, v43, &off_7098F8, v14, v15, v16, v18, *((_QWORD *)&v18 + 1), v19);
    goto LABEL_9;
  }
  v39 = v22;
  <T as alloc::string::SpecToString>::spec_to_string(&v18, &v39);
  *(_QWORD *)(a1 + 24) = v19;
  *(_OWORD *)(a1 + 8) = v18;
  *(_QWORD *)a1 = 1LL;
  core::ptr::drop_in_place<std::io::error::Error>(&v39);
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v26);
  return a1;
}