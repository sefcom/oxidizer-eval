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
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int128 v21; // [rsp+0h] [rbp-1A8h] BYREF
  __int128 *v22; // [rsp+10h] [rbp-198h]
  __int64 (__fastcall *v23)(); // [rsp+18h] [rbp-190h]
  __int128 *v24; // [rsp+20h] [rbp-188h]
  __int64 (__fastcall *v25)(); // [rsp+28h] [rbp-180h]
  __int128 *v26; // [rsp+30h] [rbp-178h] BYREF
  __int128 v27; // [rsp+38h] [rbp-170h]
  __int64 (__fastcall *v28)(); // [rsp+48h] [rbp-160h]
  __int64 v29; // [rsp+50h] [rbp-158h]
  __int128 v30; // [rsp+60h] [rbp-148h] BYREF
  __int64 v31; // [rsp+70h] [rbp-138h]
  __int128 *v32; // [rsp+78h] [rbp-130h] BYREF
  char v33; // [rsp+80h] [rbp-128h]
  __int128 v34; // [rsp+88h] [rbp-120h] BYREF
  __int128 *v35; // [rsp+98h] [rbp-110h]
  _BYTE v36[24]; // [rsp+A0h] [rbp-108h] BYREF
  __int64 (__fastcall *v37)(); // [rsp+B8h] [rbp-F0h]
  __int128 v38; // [rsp+C0h] [rbp-E8h] BYREF
  __int128 *v39; // [rsp+D0h] [rbp-D8h]
  __int64 v40; // [rsp+E0h] [rbp-C8h]
  _QWORD v41[2]; // [rsp+E8h] [rbp-C0h] BYREF
  char v42; // [rsp+F8h] [rbp-B0h]
  __int128 *v43; // [rsp+100h] [rbp-A8h] BYREF
  char v44[40]; // [rsp+108h] [rbp-A0h] BYREF
  __int128 v45; // [rsp+130h] [rbp-78h] BYREF
  __int64 v46; // [rsp+140h] [rbp-68h]
  _BYTE v47[24]; // [rsp+148h] [rbp-60h] BYREF
  _BYTE v48[72]; // [rsp+160h] [rbp-48h] BYREF

  *(_QWORD *)&v30 = 0LL;
  *((_QWORD *)&v30 + 1) = 8LL;
  v31 = 0LL;
  v40 = a2;
  std::fs::read_dir(&v26);
  v2 = v27;
  if ( (_BYTE)v27 != 2 )
  {
    v3 = v26;
    v41[1] = v26;
    v42 = v27;
    LODWORD(v26) = 0;
    v4 = core::char::methods::encode_utf8_raw(47LL, &v26);
    <T as alloc::slice::hack::ConvertVec>::to_vec(&v21, v4, v5);
    v39 = v22;
    v38 = v21;
    v32 = v3;
    v33 = v2;
    while ( 1 )
    {
      <std::fs::ReadDir as core::iter::traits::iterator::Iterator>::next(&v43, &v32);
      if ( ((unsigned __int8)v43 & 1) == 0 )
      {
        core::ptr::drop_in_place<std::fs::ReadDir>(&v32);
        *(_QWORD *)(a1 + 24) = v31;
        *(_OWORD *)(a1 + 8) = v30;
        *(_QWORD *)a1 = 0LL;
        core::ptr::drop_in_place<alloc::string::String>(&v38);
        return a1;
      }
      core::result::Result<T,E>::unwrap(&v21, v44);
      std::fs::DirEntry::file_name(v48, &v21);
      std::sys::os_str::bytes::Buf::into_string(&v26, v48);
      v37 = v28;
      *(_OWORD *)&v36[8] = v27;
      *(_QWORD *)v36 = v26;
      core::result::Result<T,E>::unwrap(&v34, v36);
      core::ptr::drop_in_place<std::fs::DirEntry>(&v21);
      v41[0] = v40;
      *(_QWORD *)&v21 = v41;
      *((_QWORD *)&v21 + 1) = <&T as core::fmt::Display>::fmt;
      v22 = &v38;
      v23 = <alloc::string::String as core::fmt::Display>::fmt;
      v24 = &v34;
      v25 = <alloc::string::String as core::fmt::Display>::fmt;
      v26 = (__int128 *)&unk_6B258;
      *(_QWORD *)&v27 = 3LL;
      v29 = 0LL;
      *((_QWORD *)&v27 + 1) = &v21;
      v28 = (__int64 (__fastcall *)())(&dword_0 + 3);
      core::option::Option<T>::map_or_else(&v45, &v26, v6, <alloc::string::String as core::fmt::Display>::fmt, v7, v8);
      *(_OWORD *)v36 = v45;
      v9 = v46;
      *(_QWORD *)&v36[16] = v46;
      v10 = *((_QWORD *)&v45 + 1);
      if ( (unsigned __int8)std::path::Path::is_dir(*((_QWORD *)&v45 + 1), v46) )
        break;
      if ( (unsigned __int8)std::path::Path::is_file(v10, v9) )
      {
        v22 = v35;
        v21 = v34;
        ((void (__fastcall *)(__int128 *, __int128 *, char **, __int64, __int64, __int64))alloc::vec::Vec<T,A>::push)(
          &v30,
          &v21,
          &off_7098E0,
          v17,
          v18,
          v19);
        core::ptr::drop_in_place<alloc::string::String>(v36);
      }
      else
      {
LABEL_9:
        core::ptr::drop_in_place<alloc::string::String>(v36);
        core::ptr::drop_in_place<alloc::string::String>(&v34);
      }
    }
    v26 = &v38;
    *(_QWORD *)&v27 = <alloc::string::String as core::fmt::Display>::fmt;
    *((_QWORD *)&v27 + 1) = &v34;
    v28 = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v21 = "\x01";
    *((_QWORD *)&v21 + 1) = 2LL;
    v24 = 0LL;
    v22 = (__int128 *)&v26;
    v23 = (__int64 (__fastcall *)())(&dword_0 + 2);
    core::option::Option<T>::map_or_else(v47, &v21, v11, <alloc::string::String as core::fmt::Display>::fmt, v12, v13);
    alloc::vec::Vec<T,A>::push(&v30, v47, &off_7098F8, v14, v15, v16, v21, *((_QWORD *)&v21 + 1), v22);
    goto LABEL_9;
  }
  v43 = v26;
  <T as alloc::string::SpecToString>::spec_to_string(&v21, &v43);
  *(_QWORD *)(a1 + 24) = v22;
  *(_OWORD *)(a1 + 8) = v21;
  *(_QWORD *)a1 = 1LL;
  core::ptr::drop_in_place<std::io::error::Error>(&v43);
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v30);
  return a1;
}