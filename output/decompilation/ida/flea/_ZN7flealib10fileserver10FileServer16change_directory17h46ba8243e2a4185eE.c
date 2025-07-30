__int64 __fastcall flealib::fileserver::FileServer::change_directory(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r12
  __int128 *v5; // r13
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r13
  __int64 v15; // rbp
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r13
  __int128 *v21; // rbp
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // r15
  __int64 v30; // r12
  __int128 v32; // [rsp+0h] [rbp-188h] BYREF
  __int128 *v33; // [rsp+10h] [rbp-178h]
  __int64 (__fastcall *v34)(); // [rsp+18h] [rbp-170h]
  __int128 v35; // [rsp+20h] [rbp-168h] BYREF
  __int128 *v36; // [rsp+30h] [rbp-158h]
  __int128 v37; // [rsp+40h] [rbp-148h] BYREF
  __int128 *v38; // [rsp+50h] [rbp-138h]
  __int128 v39; // [rsp+60h] [rbp-128h] BYREF
  __int64 v40; // [rsp+70h] [rbp-118h]
  __int128 v41; // [rsp+78h] [rbp-110h] BYREF
  __int128 *v42; // [rsp+88h] [rbp-100h]
  __int128 v43; // [rsp+90h] [rbp-F8h] BYREF
  __int128 *v44; // [rsp+A0h] [rbp-E8h]
  __int64 v45; // [rsp+A8h] [rbp-E0h]
  __int64 v46; // [rsp+B0h] [rbp-D8h]
  int v47; // [rsp+C8h] [rbp-C0h]
  __int128 v48; // [rsp+140h] [rbp-48h] BYREF
  __int64 v49; // [rsp+150h] [rbp-38h]

  <T as alloc::slice::hack::ConvertVec>::to_vec(&v35, a3, a4);
  v4 = *((_QWORD *)&v35 + 1);
  v5 = v36;
  LODWORD(v37) = 0;
  v6 = core::char::methods::encode_utf8_raw(47LL, &v37);
  <T as alloc::slice::hack::ConvertVec>::to_vec(&v43, v6, v7);
  if ( (unsigned __int8)<&str as core::str::pattern::Pattern>::is_contained_in(
                          *((_QWORD *)&v43 + 1),
                          v44,
                          v4,
                          v5,
                          v8,
                          v9,
                          v43,
                          *((_QWORD *)&v43 + 1),
                          v44) )
  {
    core::ptr::drop_in_place<alloc::string::String>(&v32);
  }
  else
  {
    core::ptr::drop_in_place<alloc::string::String>(&v32);
    *(_QWORD *)&v32 = &unk_5177C;
    *((_QWORD *)&v32 + 1) = <char as core::fmt::Display>::fmt;
    v33 = &v35;
    v34 = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v43 = "\x01";
    *((_QWORD *)&v43 + 1) = 2LL;
    v46 = 0LL;
    v44 = &v32;
    v45 = 2LL;
    core::option::Option<T>::map_or_else(&v41, &v43, v10, v11, v12, v13);
    core::ptr::drop_in_place<alloc::string::String>(&v35);
    v36 = v42;
    v35 = v41;
  }
  v14 = *(_QWORD *)(a2 + 8);
  v15 = *(_QWORD *)(a2 + 16);
  LODWORD(v37) = 0;
  v16 = core::char::methods::encode_utf8_raw(47LL, &v37);
  <T as alloc::slice::hack::ConvertVec>::to_vec(&v43, v16, v17);
  v33 = v44;
  v32 = v43;
  if ( (unsigned __int8)core::slice::<impl [T]>::ends_with(v14, v15, *((_QWORD *)&v43 + 1), v44, v18, v19) )
  {
    core::ptr::drop_in_place<alloc::string::String>(&v32);
    v20 = *((_QWORD *)&v35 + 1);
    v21 = v36;
    LODWORD(v37) = 0;
    v22 = core::char::methods::encode_utf8_raw(47LL, &v37);
    <T as alloc::slice::hack::ConvertVec>::to_vec(&v43, v22, v23);
    alloc::str::<impl str>::replace(&v43, v20, v21, *((_QWORD *)&v43 + 1), v44, v24, v43, *((_QWORD *)&v43 + 1), v44);
    core::ptr::drop_in_place<alloc::string::String>(&v35);
    v36 = v44;
    v35 = v43;
  }
  core::ptr::drop_in_place<alloc::string::String>(&v32);
  *(_QWORD *)&v37 = a2;
  *(_QWORD *)&v32 = &v37;
  *((_QWORD *)&v32 + 1) = <&T as core::fmt::Display>::fmt;
  v33 = &v35;
  v34 = <alloc::string::String as core::fmt::Display>::fmt;
  *(_QWORD *)&v43 = "\x01";
  *((_QWORD *)&v43 + 1) = 2LL;
  v46 = 0LL;
  v44 = &v32;
  v45 = 2LL;
  core::option::Option<T>::map_or_else(&v48, &v43, v25, v26, v27, v28);
  v39 = v48;
  v29 = v49;
  v40 = v49;
  v30 = *((_QWORD *)&v48 + 1);
  std::fs::metadata(&v43, *((_QWORD *)&v48 + 1), v49);
  if ( (_DWORD)v43 == 2 )
  {
    *(_QWORD *)&v37 = *((_QWORD *)&v43 + 1);
    <T as alloc::string::SpecToString>::spec_to_string(&v32, &v37);
    *(_QWORD *)(a1 + 16) = v33;
    *(_OWORD *)a1 = v32;
    core::ptr::drop_in_place<std::io::error::Error>(&v37);
  }
  else if ( (v47 & 0xF000) == 0x4000 )
  {
    std::sys::os_str::bytes::Slice::to_str(&v32, v30, v29);
    if ( (_DWORD)v32 == 1 )
      core::option::unwrap_failed(&off_709928);
    <T as alloc::slice::hack::ConvertVec>::to_vec(&v32, *((_QWORD *)&v32 + 1), v33);
    v38 = v33;
    v37 = v32;
    core::ptr::drop_in_place<alloc::string::String>(a2);
    *(_QWORD *)(a2 + 16) = v38;
    *(_OWORD *)a2 = v37;
    *(_QWORD *)a1 = 0x8000000000000000LL;
  }
  else
  {
    <T as alloc::slice::hack::ConvertVec>::to_vec(&v32, aNotADirectory, 15LL);
    *(_QWORD *)(a1 + 16) = v33;
    *(_OWORD *)a1 = v32;
  }
  core::ptr::drop_in_place<alloc::string::String>(&v39);
  core::ptr::drop_in_place<alloc::string::String>(&v35);
  return a1;
}