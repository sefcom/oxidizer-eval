__int64 __fastcall uu_ls::create_hyperlink(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r12
  __int64 v6; // r15
  __int64 v7; // r15
  __int64 v8; // r12
  __int128 v10; // [rsp+0h] [rbp-188h] BYREF
  _QWORD *v11; // [rsp+10h] [rbp-178h]
  __int64 v12; // [rsp+18h] [rbp-170h]
  __int64 v13; // [rsp+20h] [rbp-168h]
  __int128 v14; // [rsp+30h] [rbp-158h] BYREF
  __int64 v15; // [rsp+40h] [rbp-148h] BYREF
  __int128 v16; // [rsp+50h] [rbp-138h] BYREF
  __int64 v17; // [rsp+60h] [rbp-128h] BYREF
  __int64 v18; // [rsp+68h] [rbp-120h]
  __int64 v19; // [rsp+70h] [rbp-118h] BYREF
  __int64 v20; // [rsp+78h] [rbp-110h]
  __int64 v21; // [rsp+80h] [rbp-108h] BYREF
  __int128 v22; // [rsp+88h] [rbp-100h] BYREF
  __int64 v23; // [rsp+98h] [rbp-F0h]
  _QWORD v24[2]; // [rsp+A0h] [rbp-E8h] BYREF
  _BYTE v25[8]; // [rsp+B0h] [rbp-D8h] BYREF
  __int128 v26; // [rsp+B8h] [rbp-D0h] BYREF
  __int64 v27; // [rsp+C8h] [rbp-C0h]
  _QWORD v28[2]; // [rsp+D0h] [rbp-B8h] BYREF
  _BYTE v29[16]; // [rsp+E0h] [rbp-A8h] BYREF
  _BYTE v30[8]; // [rsp+F0h] [rbp-98h] BYREF
  _QWORD v31[4]; // [rsp+F8h] [rbp-90h] BYREF
  _QWORD v32[6]; // [rsp+118h] [rbp-70h] BYREF
  __int128 v33; // [rsp+148h] [rbp-40h] BYREF
  __int64 v34; // [rsp+158h] [rbp-30h]

  v28[0] = a2;
  v28[1] = a3;
  hostname::nix::get(&v22);
  if ( (_QWORD)v22 == 0x8000000000000000LL )
  {
    v18 = *((_QWORD *)&v22 + 1);
    std::sys::os_str::bytes::Slice::to_owned(&v10, 1LL, 0LL);
    v17 = (__int64)v11;
    v16 = v10;
    std::io::error::repr_bitpacked::decode_repr(&v10, v18);
    if ( (unsigned __int8)v10 >= 3u )
      core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>((char *)&v10 + 8);
  }
  else
  {
    v17 = v23;
    v16 = v22;
  }
  if ( !*((_QWORD *)&v16 + 1) || v17 < 0 )
    goto LABEL_28;
  std::sys::os_str::bytes::Slice::to_string_lossy(v24);
  v5 = *(_QWORD *)(a4 + 32);
  v6 = *(_QWORD *)(a4 + 40);
  core::slice::raw::from_raw_parts::precondition_check(v5, 1LL, 1LL, v6);
  std::sys::pal::unix::fs::canonicalize(&v26, v5, v6);
  if ( (_QWORD)v26 == 0x8000000000000000LL )
  {
    *(_QWORD *)&v14 = 0LL;
    *((_QWORD *)&v14 + 1) = 1LL;
    v15 = 0LL;
    std::io::error::repr_bitpacked::decode_repr(&v10, *((_QWORD *)&v26 + 1));
    if ( (unsigned __int8)v10 >= 3u )
      core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>((char *)&v10 + 8);
  }
  else
  {
    v15 = v27;
    v14 = v26;
  }
  if ( !*((_QWORD *)&v14 + 1) || v15 < 0 )
LABEL_28:
    core::panicking::panic_nounwind(anon_d13c0a923ac77d86b5cd3d5212361a5f_28_llvm_13257680528908953851, 162LL);
  std::sys::os_str::bytes::Slice::to_string_lossy(&v19);
  v7 = v20;
  v8 = v21;
  if ( v19 != 0x8000000000000000LL )
    core::slice::raw::from_raw_parts::precondition_check(v20, 1LL, 1LL, v21);
  v31[0] = v7;
  v31[1] = v7 + v8;
  v31[2] = asc_3AC26;
  v31[3] = 6LL;
  <alloc::string::String as core::iter::traits::collect::FromIterator<alloc::string::String>>::from_iter(v29, v31);
  v32[0] = v24;
  v32[1] = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
  v32[2] = v29;
  v32[3] = <alloc::string::String as core::fmt::Display>::fmt;
  v32[4] = v28;
  v32[5] = <&T as core::fmt::Display>::fmt;
  *(_QWORD *)&v10 = &off_1FF848;
  *((_QWORD *)&v10 + 1) = 4LL;
  v11 = v32;
  v12 = 3LL;
  v13 = 0LL;
  alloc::fmt::format::format_inner(&v33, &v10);
  *(_QWORD *)(a1 + 16) = v34;
  *(_OWORD *)a1 = v33;
  alloc::raw_vec::RawVec<T,A>::current_memory(&v10, v29);
  if ( *((_QWORD *)&v10 + 1) )
    <alloc::alloc::Global as core::alloc::Allocator>::deallocate(v30, v10, *((_QWORD *)&v10 + 1), v11);
  if ( v19 != 0x8000000000000000LL )
  {
    alloc::raw_vec::RawVec<T,A>::current_memory(&v10, &v19);
    if ( *((_QWORD *)&v10 + 1) )
      <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v21, v10, *((_QWORD *)&v10 + 1), v11);
  }
  alloc::raw_vec::RawVec<T,A>::current_memory(&v10, &v14);
  if ( *((_QWORD *)&v10 + 1) )
    <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v15, v10, *((_QWORD *)&v10 + 1), v11);
  if ( v24[0] != 0x8000000000000000LL )
  {
    alloc::raw_vec::RawVec<T,A>::current_memory(&v10, v24);
    if ( *((_QWORD *)&v10 + 1) )
      <alloc::alloc::Global as core::alloc::Allocator>::deallocate(v25, v10, *((_QWORD *)&v10 + 1), v11);
  }
  alloc::raw_vec::RawVec<T,A>::current_memory(&v10, &v16);
  if ( *((_QWORD *)&v10 + 1) )
    <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v17, v10, *((_QWORD *)&v10 + 1), v11);
  return a1;
}
