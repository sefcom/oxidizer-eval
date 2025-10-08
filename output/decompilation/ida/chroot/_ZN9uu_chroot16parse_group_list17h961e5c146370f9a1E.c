__int64 __fastcall uu_chroot::parse_group_list(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // r14
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r15
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // r12
  __int128 v11; // xmm0
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r13
  __int64 v16; // rbp
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // r15
  __int64 v21; // r12
  __int64 result; // rax
  __int64 v23; // rax
  __int128 v24; // kr00_16
  char v25; // [rsp+4h] [rbp-164h]
  __m256i v26; // [rsp+8h] [rbp-160h] BYREF
  __int64 v27; // [rsp+28h] [rbp-140h]
  __int16 v28; // [rsp+48h] [rbp-120h]
  _BYTE v29[24]; // [rsp+50h] [rbp-118h] BYREF
  __int64 v30; // [rsp+68h] [rbp-100h]
  _QWORD v31[2]; // [rsp+80h] [rbp-E8h] BYREF
  __int64 v32; // [rsp+90h] [rbp-D8h] BYREF
  _QWORD *v33; // [rsp+98h] [rbp-D0h]
  __int64 v34; // [rsp+A0h] [rbp-C8h]
  __int128 v35; // [rsp+A8h] [rbp-C0h] BYREF
  __int64 v36; // [rsp+B8h] [rbp-B0h]
  _QWORD v37[4]; // [rsp+C0h] [rbp-A8h] BYREF
  _BYTE v38[136]; // [rsp+E0h] [rbp-88h] BYREF

  <char as core::str::pattern::Pattern>::into_searcher(&v26.m256i_u64[2], 44LL, a2, a3);
  v26.m256i_i64[0] = 0LL;
  v26.m256i_i64[1] = a3;
  v28 = 1;
  core::iter::traits::iterator::Iterator::collect(&v32, &v26);
  if ( v34 == 1 )
  {
    v4 = v33;
    v5 = core::str::<impl str>::trim_matches(*v33, v33[1]);
    v7 = v5;
    if ( v6 )
    {
      v8 = v6;
      v9 = alloc::alloc::Global::alloc_impl(8LL, 24LL);
      if ( !v9 )
        alloc::alloc::handle_alloc_error(8LL, 24LL);
      v10 = v9;
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v26, v7, v8);
      *(_QWORD *)&v29[16] = v26.m256i_i64[2];
      v11 = *(_OWORD *)v26.m256i_i8;
      *(_OWORD *)v29 = *(_OWORD *)v26.m256i_i8;
      *(_QWORD *)(v10 + 16) = v26.m256i_i64[2];
      *(_OWORD *)v10 = v11;
      *(_QWORD *)(a1 + 8) = 1LL;
      *(_QWORD *)(a1 + 16) = v10;
      *(_QWORD *)(a1 + 24) = 1LL;
      *(_DWORD *)a1 = 14;
      v4 = v33;
      return core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v32, v4);
    }
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v26, v5, 0LL);
    v23 = v26.m256i_i64[2];
    *(_OWORD *)((char *)v26.m256i_i64 + 4) = *(_OWORD *)v26.m256i_i8;
    *(__int64 *)((char *)&v26.m256i_i64[2] + 4) = v23;
    *(_DWORD *)a1 = 4;
LABEL_19:
    v24 = *(_OWORD *)((char *)&v26.m256i_u64[1] + 4);
    *(_OWORD *)(a1 + 4) = *(_OWORD *)v26.m256i_i8;
    *(_OWORD *)(a1 + 16) = v24;
    return core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v32, v4);
  }
  v4 = v33;
  v26.m256i_i64[0] = (__int64)v33;
  v26.m256i_i64[1] = (__int64)&v33[2 * v34];
  if ( (unsigned __int8)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::all(&v26) )
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v26, a2, a3);
    v12 = v26.m256i_i64[2];
    *(_OWORD *)((char *)v26.m256i_i64 + 4) = *(_OWORD *)v26.m256i_i8;
    *(__int64 *)((char *)&v26.m256i_i64[2] + 4) = v12;
    *(_DWORD *)a1 = 5;
    goto LABEL_19;
  }
  *(_QWORD *)&v35 = 0LL;
  *((_QWORD *)&v35 + 1) = 8LL;
  v36 = 0LL;
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v38, &v32);
  v25 = 0;
  while ( 1 )
  {
    v13 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v38);
    if ( !v13 )
      break;
    v15 = v13;
    v16 = v14;
    v17 = core::str::<impl str>::trim_matches(v13, v14);
    if ( v18 )
    {
      v20 = v17;
      v21 = v18;
      if ( (unsigned __int8)core::str::pattern::Pattern::is_prefix_of(v17, v18)
        && (unsigned __int8)core::str::pattern::Pattern::is_suffix_of(v20, v21) )
      {
LABEL_11:
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v26, v15, v16);
        v30 = v26.m256i_i64[2];
        *(_OWORD *)&v29[8] = *(_OWORD *)v26.m256i_i8;
        *(_DWORD *)v29 = 4;
        uucore::mods::error::set_exit_code(125LL);
        v31[0] = uucore::util_name();
        v31[1] = v19;
        v37[0] = v31;
        v37[1] = <&T as core::fmt::Display>::fmt;
        v37[2] = v29;
        v37[3] = <uu_chroot::error::ChrootError as core::fmt::Display>::fmt;
        v26.m256i_i64[0] = (__int64)&unk_FAB48;
        v26.m256i_i64[1] = 3LL;
        v27 = 0LL;
        v26.m256i_i64[2] = (__int64)v37;
        v26.m256i_i64[3] = 2LL;
        std::io::stdio::_eprint(&v26);
        core::ptr::drop_in_place<uu_chroot::error::ChrootError>(v29);
        v25 = 1;
      }
      else
      {
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v26, v20, v21);
        *(_QWORD *)&v29[16] = v26.m256i_i64[2];
        *(_OWORD *)v29 = *(_OWORD *)v26.m256i_i8;
        alloc::vec::Vec<T,A>::push(&v35, v29);
      }
    }
    else if ( v16 )
    {
      goto LABEL_11;
    }
  }
  core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&str>>(v38);
  if ( (v25 & 1) != 0 )
  {
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v35);
    result = 3LL;
  }
  else
  {
    *(_QWORD *)(a1 + 24) = v36;
    *(_OWORD *)(a1 + 8) = v35;
    result = 14LL;
  }
  *(_DWORD *)a1 = result;
  return result;
}