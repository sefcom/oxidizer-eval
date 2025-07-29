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
  __int64 v33; // [rsp+10h] [rbp-178h]
  __int128 v34; // [rsp+20h] [rbp-168h] BYREF
  __int128 *v35; // [rsp+30h] [rbp-158h]
  __int128 v36; // [rsp+40h] [rbp-148h] BYREF
  __int64 v37; // [rsp+50h] [rbp-138h]
  __int128 v38; // [rsp+60h] [rbp-128h] BYREF
  __int64 v39; // [rsp+70h] [rbp-118h]
  __int128 v40; // [rsp+78h] [rbp-110h] BYREF
  __int128 *v41; // [rsp+88h] [rbp-100h]
  __int128 v42; // [rsp+90h] [rbp-F8h] BYREF
  __int128 *v43; // [rsp+A0h] [rbp-E8h]
  __int64 v44; // [rsp+A8h] [rbp-E0h]
  __int64 v45; // [rsp+B0h] [rbp-D8h]
  int v46; // [rsp+C8h] [rbp-C0h]
  __int128 v47; // [rsp+140h] [rbp-48h] BYREF
  __int64 v48; // [rsp+150h] [rbp-38h]

  <T as alloc::slice::hack::ConvertVec>::to_vec(&v34, a3, a4);
  v4 = *((_QWORD *)&v34 + 1);
  v5 = v35;
  LODWORD(v36) = 0;
  v6 = core::char::methods::encode_utf8_raw(47LL, &v36);
  <T as alloc::slice::hack::ConvertVec>::to_vec(&v42, v6, v7);
  if ( (unsigned __int8)<&str as core::str::pattern::Pattern>::is_contained_in(
                          *((_QWORD *)&v42 + 1),
                          v43,
                          v4,
                          v5,
                          v8,
                          v9,
                          v42,
                          *((_QWORD *)&v42 + 1),
                          v43) )
  {
    core::ptr::drop_in_place<alloc::string::String>(&v32);
  }
  else
  {
    core::ptr::drop_in_place<alloc::string::String>(&v32);
    *(_QWORD *)&v42 = "\x01";
    *((_QWORD *)&v42 + 1) = 2LL;
    v45 = 0LL;
    v43 = &v32;
    v44 = 2LL;
    ((void (__fastcall *)(__int128 *, __int128 *, __int64, __int64, __int64, __int64, void *, __int64 (__fastcall *)(), __int128 *, __int64 (__fastcall *)()))core::option::Option<T>::map_or_else)(
      &v40,
      &v42,
      v10,
      v11,
      v12,
      v13,
      &unk_5177C,
      <char as core::fmt::Display>::fmt,
      &v34,
      <alloc::string::String as core::fmt::Display>::fmt);
    core::ptr::drop_in_place<alloc::string::String>(&v34);
    v35 = v41;
    v34 = v40;
  }
  v14 = *(_QWORD *)(a2 + 8);
  v15 = *(_QWORD *)(a2 + 16);
  LODWORD(v36) = 0;
  v16 = core::char::methods::encode_utf8_raw(47LL, &v36);
  <T as alloc::slice::hack::ConvertVec>::to_vec(&v42, v16, v17);
  if ( (unsigned __int8)core::slice::<impl [T]>::ends_with(
                          v14,
                          v15,
                          *((_QWORD *)&v42 + 1),
                          v43,
                          v18,
                          v19,
                          v42,
                          *((_QWORD *)&v42 + 1),
                          v43) )
  {
    core::ptr::drop_in_place<alloc::string::String>(&v32);
    v20 = *((_QWORD *)&v34 + 1);
    v21 = v35;
    LODWORD(v36) = 0;
    v22 = core::char::methods::encode_utf8_raw(47LL, &v36);
    <T as alloc::slice::hack::ConvertVec>::to_vec(&v42, v22, v23);
    alloc::str::<impl str>::replace(&v42, v20, v21, *((_QWORD *)&v42 + 1), v43, v24, v42, *((_QWORD *)&v42 + 1), v43);
    core::ptr::drop_in_place<alloc::string::String>(&v34);
    v35 = v43;
    v34 = v42;
  }
  core::ptr::drop_in_place<alloc::string::String>(&v32);
  *(_QWORD *)&v36 = a2;
  *(_QWORD *)&v42 = "\x01";
  *((_QWORD *)&v42 + 1) = 2LL;
  v45 = 0LL;
  v43 = &v32;
  v44 = 2LL;
  ((void (__fastcall *)(__int128 *, __int128 *, __int64, __int64, __int64, __int64, __int128 *, __int64 (__fastcall *)(), __int128 *, __int64 (__fastcall *)()))core::option::Option<T>::map_or_else)(
    &v47,
    &v42,
    v25,
    v26,
    v27,
    v28,
    &v36,
    <&T as core::fmt::Display>::fmt,
    &v34,
    <alloc::string::String as core::fmt::Display>::fmt);
  v38 = v47;
  v29 = v48;
  v39 = v48;
  v30 = *((_QWORD *)&v47 + 1);
  std::fs::metadata(&v42, *((_QWORD *)&v47 + 1), v48);
  if ( (_DWORD)v42 == 2 )
  {
    *(_QWORD *)&v36 = *((_QWORD *)&v42 + 1);
    <T as alloc::string::SpecToString>::spec_to_string(&v32, &v36);
    *(_QWORD *)(a1 + 16) = v33;
    *(_OWORD *)a1 = v32;
    core::ptr::drop_in_place<std::io::error::Error>(&v36);
  }
  else if ( (v46 & 0xF000) == 0x4000 )
  {
    std::sys::os_str::bytes::Slice::to_str(&v32, v30, v29);
    if ( (_DWORD)v32 == 1 )
      core::option::unwrap_failed(&off_709928);
    <T as alloc::slice::hack::ConvertVec>::to_vec(&v32, *((_QWORD *)&v32 + 1), v33);
    v37 = v33;
    v36 = v32;
    core::ptr::drop_in_place<alloc::string::String>(a2);
    *(_QWORD *)(a2 + 16) = v37;
    *(_OWORD *)a2 = v36;
    *(_QWORD *)a1 = 0x8000000000000000LL;
  }
  else
  {
    <T as alloc::slice::hack::ConvertVec>::to_vec(&v32, aNotADirectory, 15LL);
    *(_QWORD *)(a1 + 16) = v33;
    *(_OWORD *)a1 = v32;
  }
  core::ptr::drop_in_place<alloc::string::String>(&v38);
  core::ptr::drop_in_place<alloc::string::String>(&v34);
  return a1;
}