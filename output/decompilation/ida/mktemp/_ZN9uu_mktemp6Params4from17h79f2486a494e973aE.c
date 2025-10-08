__int64 __fastcall uu_mktemp::Params::from(__int64 a1, __int128 *a2)
{
  __int64 v3; // rbp
  __int64 v4; // rdx
  __int64 v5; // r14
  __int64 v6; // rax
  char v7; // al
  __int64 v8; // rdi
  __int64 v9; // r13
  __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r12
  __int64 v14; // r14
  unsigned __int64 v15; // rax
  char v16; // r14
  char v17; // bp
  __int64 v18; // r14
  __int64 v19; // r12
  __int64 v20; // rax
  char v21; // r13
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int128 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // r14
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rcx
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v38; // [rsp+0h] [rbp-1A8h] BYREF
  __int64 v39; // [rsp+10h] [rbp-198h]
  __int64 v40; // [rsp+20h] [rbp-188h]
  __int128 *v41; // [rsp+28h] [rbp-180h]
  _BYTE v42[40]; // [rsp+30h] [rbp-178h] BYREF
  __int64 v43; // [rsp+58h] [rbp-150h]
  __int128 v44; // [rsp+60h] [rbp-148h]
  __int64 v45; // [rsp+70h] [rbp-138h]
  __int64 v46; // [rsp+80h] [rbp-128h]
  __int64 v47; // [rsp+88h] [rbp-120h]
  __int64 v48; // [rsp+90h] [rbp-118h] BYREF
  __int128 v49; // [rsp+98h] [rbp-110h]
  __int64 v50; // [rsp+A8h] [rbp-100h]
  __int128 v51; // [rsp+B0h] [rbp-F8h] BYREF
  __int64 v52; // [rsp+C0h] [rbp-E8h]
  __int128 v53; // [rsp+D0h] [rbp-D8h]
  __int64 v54; // [rsp+E0h] [rbp-C8h]
  __int128 v55; // [rsp+F0h] [rbp-B8h] BYREF
  __int64 v56; // [rsp+100h] [rbp-A8h]
  __int128 v57; // [rsp+108h] [rbp-A0h] BYREF
  __int64 v58; // [rsp+118h] [rbp-90h]
  __int64 v59; // [rsp+120h] [rbp-88h] BYREF
  __int128 v60; // [rsp+128h] [rbp-80h]
  __int128 v61; // [rsp+138h] [rbp-70h] BYREF
  __int64 v62; // [rsp+148h] [rbp-60h]
  __int128 v63; // [rsp+150h] [rbp-58h] BYREF
  __int64 v64; // [rsp+160h] [rbp-48h]
  _QWORD v65[8]; // [rsp+168h] [rbp-40h] BYREF

  v41 = a2 + 3;
  v47 = *((_QWORD *)a2 + 6);
  v3 = *((_QWORD *)a2 + 1);
  v4 = *((_QWORD *)a2 + 2);
  if ( !__OFSUB__(-v47, 1LL) )
  {
    *(_DWORD *)v42 = 0;
    v5 = v4;
    v6 = core::char::methods::encode_utf8_raw(88LL, v42);
    v7 = core::slice::<impl [T]>::ends_with(v3, v5, v6);
    v4 = v5;
    if ( !v7 )
    {
      *(_QWORD *)(a1 + 8) = 0x8000000000000001LL;
      *(_OWORD *)(a1 + 16) = *a2;
      *(_QWORD *)(a1 + 32) = *((_QWORD *)a2 + 2);
      *(_QWORD *)a1 = 0x8000000000000000LL;
      core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>((char *)a2 + 24);
      core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(v41);
      return a1;
    }
  }
  v40 = v4;
  uu_mktemp::find_last_contiguous_block_of_xs((__int64 *)&v63, v3, v4);
  if ( (_DWORD)v63 != 1 )
  {
    if ( v47 == 0x8000000000000000LL )
    {
      v39 = *((_QWORD *)a2 + 2);
      v38 = *a2;
    }
    else
    {
      *(_QWORD *)v42 = v3;
      *(_QWORD *)&v42[8] = v40 + v3;
      *(_QWORD *)&v42[16] = v40;
      core::iter::traits::iterator::Iterator::collect(&v38, v42);
    }
    *(_QWORD *)(a1 + 32) = v39;
    *(_OWORD *)(a1 + 16) = v38;
    *(_QWORD *)(a1 + 8) = 0x8000000000000002LL;
    *(_QWORD *)a1 = 0x8000000000000000LL;
    core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>((char *)a2 + 24);
    core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(v41);
    if ( v47 == 0x8000000000000000LL )
      return a1;
LABEL_46:
    core::ptr::drop_in_place<alloc::string::String>(a2);
    return a1;
  }
  v8 = *((_QWORD *)&v63 + 1);
  v46 = v64;
  v52 = *((_QWORD *)a2 + 5);
  v51 = *(__int128 *)((char *)a2 + 24);
  v9 = v51;
  if ( (_QWORD)v51 == 0x8000000000000000LL
    || (v10 = *((_QWORD *)&v63 + 1),
        <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v42, *((_QWORD *)&v51 + 1), v52),
        v38 = *(_OWORD *)&v42[8],
        v8 = v10,
        *(_QWORD *)v42 == 0x8000000000000000LL) )
  {
    v48 = 0LL;
    v49 = 1uLL;
  }
  else
  {
    v49 = v38;
    v48 = *(_QWORD *)v42;
  }
  v50 = v8;
  v11 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(
          v8,
          v3,
          v40);
  if ( !v11 )
    core::str::slice_error_fail(v3, v40, 0LL, v50, &off_F8FD0);
  v13 = v11;
  v14 = v12;
  std::path::Path::join(v42, v49, *((_QWORD *)&v49 + 1), v11, v12);
  v38 = *(_OWORD *)&v42[8];
  <T as alloc::string::SpecToString>::spec_to_string(&v57, &v38);
  core::ptr::drop_in_place<std::path::PathBuf>(v42);
  if ( *((_BYTE *)a2 + 75) && (unsigned __int8)<char as core::str::pattern::Pattern>::is_contained_in(v13, v14) )
  {
    v15 = 0x8000000000000003LL;
LABEL_21:
    *(_QWORD *)(a1 + 8) = v15;
    *(_OWORD *)(a1 + 16) = *a2;
    *(_QWORD *)(a1 + 32) = *((_QWORD *)a2 + 2);
    *(_QWORD *)a1 = 0x8000000000000000LL;
    v16 = 1;
    v17 = 0;
LABEL_38:
    core::ptr::drop_in_place<alloc::string::String>(&v57);
    goto LABEL_39;
  }
  if ( v9 != 0x8000000000000000LL && (unsigned __int8)std::path::Path::is_absolute(v13, v14) )
  {
    v15 = 0x8000000000000005LL;
    goto LABEL_21;
  }
  v18 = *((_QWORD *)&v57 + 1);
  v19 = v58;
  *(_DWORD *)v42 = 0;
  v20 = core::char::methods::encode_utf8_raw(47LL, v42);
  v21 = core::slice::<impl [T]>::ends_with(v18, v19, v20);
  if ( v21 )
  {
    v56 = v58;
    v55 = v57;
    v22 = 1LL;
    v23 = 0LL;
    v24 = 0LL;
  }
  else
  {
    *(_QWORD *)&v25 = std::path::Path::parent(v18, v19);
    if ( (_QWORD)v25 )
    {
      *(_OWORD *)v42 = v25;
      <T as alloc::string::SpecToString>::spec_to_string(&v38, v42);
    }
    else
    {
      *(_QWORD *)&v38 = 0LL;
      *((_QWORD *)&v38 + 1) = 1LL;
      v39 = 0LL;
    }
    v26 = std::path::Path::file_name(v18, v19);
    if ( v26 )
    {
      core::str::converts::from_utf8(v42, v26);
      if ( (v42[0] & 1) != 0 )
        core::option::unwrap_failed(&off_F8FE8);
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v42, *(_QWORD *)&v42[8], *(_QWORD *)&v42[16]);
      v22 = *(_QWORD *)&v42[8];
      v23 = *(_QWORD *)v42;
      v24 = *(_QWORD *)&v42[16];
    }
    else
    {
      v22 = 1LL;
      v23 = 0LL;
      v24 = 0LL;
    }
    v56 = v39;
    v55 = v38;
  }
  *(_QWORD *)&v61 = v23;
  *((_QWORD *)&v61 + 1) = v22;
  v62 = v24;
  if ( v47 == 0x8000000000000000LL )
  {
    v60 = 1uLL;
    v27 = 0LL;
  }
  else
  {
    v27 = v47;
    v60 = *(__int128 *)((char *)a2 + 56);
  }
  v59 = v27;
  v28 = v40;
  v29 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
          v46,
          v3,
          v40);
  if ( !v29 )
    core::str::slice_error_fail(v3, v28, v46, v28, &off_F9000);
  v65[0] = v29;
  v65[1] = v30;
  *(_QWORD *)v42 = &unk_1B210;
  *(_QWORD *)&v42[8] = 2LL;
  *(_QWORD *)&v42[16] = &v38;
  *(_OWORD *)&v42[24] = 2uLL;
  core::option::Option<T>::map_or_else(
    &v63,
    v42,
    v30,
    v31,
    v32,
    v33,
    v65,
    <&T as core::fmt::Display>::fmt,
    &v59,
    <alloc::string::String as core::fmt::Display>::fmt);
  v53 = v63;
  v54 = v64;
  if ( !(unsigned __int8)<char as core::str::pattern::Pattern>::is_contained_in(*((_QWORD *)&v63 + 1), v64) )
  {
    v34 = v46 - v50;
    *(_QWORD *)&v42[16] = v56;
    v35 = v55;
    *(_OWORD *)v42 = v55;
    v43 = v62;
    *(_OWORD *)&v42[24] = v61;
    v45 = v54;
    v36 = v53;
    v44 = v53;
    *(_QWORD *)(a1 + 64) = v54;
    *(_OWORD *)(a1 + 48) = v36;
    *(_OWORD *)a1 = v35;
    *(_QWORD *)(a1 + 32) = *(_QWORD *)&v42[32];
    *(_QWORD *)(a1 + 40) = v43;
    *(_OWORD *)(a1 + 16) = *(_OWORD *)&v42[16];
    *(_QWORD *)(a1 + 72) = v34;
    core::ptr::drop_in_place<alloc::string::String>(&v59);
    if ( !v21 )
      core::ptr::drop_in_place<alloc::string::String>(&v57);
    core::ptr::drop_in_place<std::path::PathBuf>(&v48);
    core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&v51);
    goto LABEL_46;
  }
  *(_QWORD *)(a1 + 32) = v54;
  *(_OWORD *)(a1 + 16) = v53;
  *(_QWORD *)(a1 + 8) = 0x8000000000000004LL;
  *(_QWORD *)a1 = 0x8000000000000000LL;
  core::ptr::drop_in_place<alloc::string::String>(&v59);
  core::ptr::drop_in_place<alloc::string::String>(&v61);
  core::ptr::drop_in_place<alloc::string::String>(&v55);
  v17 = 1;
  v16 = 0;
  if ( !v21 )
    goto LABEL_38;
LABEL_39:
  core::ptr::drop_in_place<std::path::PathBuf>(&v48);
  core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&v51);
  if ( v16 )
    core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(v41);
  if ( v17 )
    goto LABEL_46;
  return a1;
}