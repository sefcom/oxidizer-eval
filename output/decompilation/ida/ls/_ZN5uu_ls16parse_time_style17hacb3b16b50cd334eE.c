__int64 __fastcall uu_ls::parse_time_style(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r15
  __int64 v4; // r15
  char v5; // r12
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r13
  unsigned __int8 v8; // al
  unsigned __int64 v9; // rdx
  __int64 v10; // r12
  __int64 v11; // r14
  unsigned __int64 v12; // rcx
  __int64 result; // rax
  bool v14; // zf
  int v15; // edx
  void *v16; // rax
  __int128 v17; // xmm0
  __int64 v18; // rax
  __int64 v19; // rdx
  char **v20; // rdi
  __int128 v21; // [rsp+0h] [rbp-F8h] BYREF
  __int64 v22; // [rsp+10h] [rbp-E8h]
  __int128 v23; // [rsp+18h] [rbp-E0h]
  __int64 v24; // [rsp+28h] [rbp-D0h]
  __int128 v25; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v26; // [rsp+40h] [rbp-B8h]
  __int128 v27; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+60h] [rbp-98h]
  __int128 v29; // [rsp+70h] [rbp-88h] BYREF
  __int64 v30; // [rsp+80h] [rbp-78h]
  __int128 v31; // [rsp+90h] [rbp-68h]
  __int64 v32; // [rsp+A0h] [rbp-58h]
  __int128 v33; // [rsp+B0h] [rbp-48h]
  __int64 v34; // [rsp+C0h] [rbp-38h]

  v2 = alloc::alloc::Global::alloc_impl(8LL, 120LL, 0LL);
  if ( !v2 )
    alloc::alloc::handle_alloc_error(8LL, 120LL);
  v3 = v2;
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v21, aFullIso, 8LL);
  v32 = v22;
  v31 = v21;
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v21, aLongIso, 8LL);
  v34 = v22;
  v33 = v21;
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v21, aIso, 3LL);
  v26 = v22;
  v25 = v21;
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v21, aLocale, 6LL);
  v28 = v22;
  v27 = v21;
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v21, aFormatEGHMForA, 48LL);
  v30 = v22;
  v29 = v21;
  *(_QWORD *)(v3 + 16) = v32;
  *(_OWORD *)v3 = v31;
  *(_QWORD *)(v3 + 40) = v34;
  *(_OWORD *)(v3 + 24) = v33;
  *(_QWORD *)(v3 + 64) = v26;
  *(_OWORD *)(v3 + 48) = v25;
  *(_OWORD *)(v3 + 72) = v27;
  *(_QWORD *)(v3 + 88) = v28;
  *(_OWORD *)(v3 + 96) = v29;
  *(_QWORD *)(v3 + 112) = v30;
  *(_QWORD *)&v25 = 5LL;
  *((_QWORD *)&v25 + 1) = v3;
  v26 = 5LL;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v21, a2, aTimeStyle, 10LL);
  v4 = clap_builder::parser::error::MatchesError::unwrap(aTimeStyle, 10LL, &v21);
  if ( !v4 )
  {
    if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aFullTime, 9LL) )
      goto LABEL_16;
    goto LABEL_12;
  }
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aFullTime, 9LL) )
  {
    clap_builder::parser::matches::arg_matches::ArgMatches::indices_of(&v21, a2, aFullTime, 9LL);
    if ( !(_QWORD)v21 )
    {
      v20 = &off_286770;
      goto LABEL_29;
    }
    v28 = v22;
    v27 = v21;
    v5 = <clap_builder::parser::matches::arg_matches::Indices as core::iter::traits::double_ended::DoubleEndedIterator>::next_back(&v27);
    v7 = v6;
    clap_builder::parser::matches::arg_matches::ArgMatches::indices_of(&v21, a2, aTimeStyle, 10LL);
    if ( !(_QWORD)v21 )
    {
      v20 = &off_286788;
      goto LABEL_29;
    }
    v30 = v22;
    v29 = v21;
    v8 = <clap_builder::parser::matches::arg_matches::Indices as core::iter::traits::double_ended::DoubleEndedIterator>::next_back(&v29);
    if ( (v5 & 1) != 0 && ((v7 <= v9) & v8) == 0 )
      goto LABEL_12;
  }
  v10 = *(_QWORD *)(v4 + 8);
  v11 = *(_QWORD *)(v4 + 16);
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v10, v11, aFullIso, 8LL) )
  {
LABEL_12:
    v12 = 0x8000000000000000LL;
    goto LABEL_17;
  }
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v10, v11, aLongIso, 8LL) )
  {
    v12 = 0x8000000000000001LL;
LABEL_17:
    a1[1] = v12;
LABEL_18:
    *a1 = 0x8000000000000006LL;
    return core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v25);
  }
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v10, v11, aIso, 3LL) )
  {
    v12 = 0x8000000000000002LL;
    goto LABEL_17;
  }
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v10, v11, aLocale, 6LL) )
  {
LABEL_16:
    v12 = 0x8000000000000003LL;
    goto LABEL_17;
  }
  *(_QWORD *)&v27 = v10;
  *((_QWORD *)&v27 + 1) = v10 + v11;
  v14 = (core::str::validations::next_code_point(&v27) & 1) == 0;
  v16 = &unk_110000;
  if ( !v14 )
    LODWORD(v16) = v15;
  if ( (_DWORD)v16 == 43 )
  {
    v18 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
            1LL,
            v10,
            v11);
    if ( !v18 )
      core::str::slice_error_fail(v10, v11, 1LL, v11, &off_2867B8);
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v21, v18, v19);
    a1[3] = v22;
    *(_OWORD *)(a1 + 1) = v21;
    goto LABEL_18;
  }
  if ( (_DWORD)v16 == (_DWORD)&unk_110000 )
  {
    v20 = &off_2867A0;
LABEL_29:
    core::option::unwrap_failed(v20);
  }
  <alloc::string::String as core::clone::Clone>::clone(&v29, v4);
  v24 = v26;
  v23 = v25;
  v22 = v30;
  v17 = v29;
  v21 = v29;
  a1[4] = *((_QWORD *)&v25 + 1);
  a1[5] = v24;
  a1[2] = v22;
  result = v23;
  a1[3] = v23;
  *(_OWORD *)a1 = v17;
  return result;
}