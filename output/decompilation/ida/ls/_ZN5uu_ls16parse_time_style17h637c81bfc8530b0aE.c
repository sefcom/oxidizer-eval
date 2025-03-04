__int64 __fastcall uu_ls::parse_time_style(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r15
  __int64 v4; // r15
  __int64 v5; // r13
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r12
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // r12
  __int64 v11; // r14
  unsigned __int64 v12; // rax
  __int64 result; // rax
  bool v14; // zf
  int v15; // edx
  void *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  char **v20; // rdi
  _OWORD v21[2]; // [rsp+8h] [rbp-F0h] BYREF
  __int128 v22; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v23; // [rsp+40h] [rbp-B8h]
  __int128 v24; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v25; // [rsp+60h] [rbp-98h]
  __int128 v26; // [rsp+70h] [rbp-88h] BYREF
  __int64 v27; // [rsp+80h] [rbp-78h]
  __int128 v28; // [rsp+90h] [rbp-68h]
  __int64 v29; // [rsp+A0h] [rbp-58h]
  __int128 v30; // [rsp+B0h] [rbp-48h]
  __int64 v31; // [rsp+C0h] [rbp-38h]

  v2 = alloc::alloc::Global::alloc_impl(120LL);
  if ( !v2 )
    alloc::alloc::handle_alloc_error(8LL, 120LL);
  v3 = v2;
  <T as alloc::slice::hack::ConvertVec>::to_vec(v21, aFullIso, 8LL);
  v29 = *(_QWORD *)&v21[1];
  v28 = v21[0];
  <T as alloc::slice::hack::ConvertVec>::to_vec(v21, aLongIso, 8LL);
  v31 = *(_QWORD *)&v21[1];
  v30 = v21[0];
  <T as alloc::slice::hack::ConvertVec>::to_vec(v21, aIso, 3LL);
  v27 = *(_QWORD *)&v21[1];
  v26 = v21[0];
  <T as alloc::slice::hack::ConvertVec>::to_vec(v21, aLocale, 6LL);
  v25 = *(_QWORD *)&v21[1];
  v24 = v21[0];
  <T as alloc::slice::hack::ConvertVec>::to_vec(v21, aFormatEGHMForA, 48LL);
  v23 = *(_QWORD *)&v21[1];
  v22 = v21[0];
  *(_QWORD *)(v3 + 16) = v29;
  *(_OWORD *)v3 = v28;
  *(_QWORD *)(v3 + 40) = v31;
  *(_OWORD *)(v3 + 24) = v30;
  *(_QWORD *)(v3 + 64) = v27;
  *(_OWORD *)(v3 + 48) = v26;
  *(_OWORD *)(v3 + 72) = v24;
  *(_QWORD *)(v3 + 88) = v25;
  *(_OWORD *)(v3 + 96) = v22;
  *(_QWORD *)(v3 + 112) = v23;
  alloc::slice::hack::into_vec(&v24, v3, 5LL);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
    v21,
    a2,
    anon_3f7e092f2ea554bdd060175bd8ea63d9_31_llvm_16502254941234113161,
    10LL);
  v4 = clap_builder::parser::error::MatchesError::unwrap(
         anon_3f7e092f2ea554bdd060175bd8ea63d9_31_llvm_16502254941234113161,
         10LL,
         v21);
  if ( !v4 )
  {
    if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                             a2,
                             anon_3f7e092f2ea554bdd060175bd8ea63d9_32_llvm_16502254941234113161,
                             9LL) )
      goto LABEL_17;
    goto LABEL_13;
  }
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                          a2,
                          anon_3f7e092f2ea554bdd060175bd8ea63d9_32_llvm_16502254941234113161,
                          9LL) )
  {
    clap_builder::parser::matches::arg_matches::ArgMatches::indices_of(
      v21,
      a2,
      anon_3f7e092f2ea554bdd060175bd8ea63d9_32_llvm_16502254941234113161,
      9LL);
    if ( !*(_QWORD *)&v21[0] )
    {
      v20 = &off_2121F0;
      goto LABEL_30;
    }
    v23 = *(_QWORD *)&v21[1];
    v22 = v21[0];
    v5 = core::iter::traits::iterator::Iterator::fold(&v22);
    v7 = v6;
    clap_builder::parser::matches::arg_matches::ArgMatches::indices_of(
      v21,
      a2,
      anon_3f7e092f2ea554bdd060175bd8ea63d9_31_llvm_16502254941234113161,
      10LL);
    if ( !*(_QWORD *)&v21[0] )
    {
      v20 = &off_212208;
      goto LABEL_30;
    }
    v23 = *(_QWORD *)&v21[1];
    v22 = v21[0];
    v8 = core::iter::traits::iterator::Iterator::fold(&v22);
    if ( v5 )
    {
      if ( !v8 || v7 > v9 )
        goto LABEL_13;
    }
  }
  v10 = *(_QWORD *)(v4 + 8);
  v11 = *(_QWORD *)(v4 + 16);
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v10, v11, aFullIso, 8LL) )
  {
LABEL_13:
    v12 = 0x8000000000000000LL;
    goto LABEL_18;
  }
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v10, v11, aLongIso, 8LL) )
  {
    v12 = 0x8000000000000001LL;
LABEL_18:
    *(_QWORD *)(a1 + 8) = v12;
LABEL_19:
    *(_BYTE *)a1 = 7;
    return core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v24);
  }
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v10, v11, aIso, 3LL) )
  {
    v12 = 0x8000000000000002LL;
    goto LABEL_18;
  }
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v10, v11, aLocale, 6LL) )
  {
LABEL_17:
    v12 = 0x8000000000000003LL;
    goto LABEL_18;
  }
  *(_QWORD *)&v26 = v10;
  *((_QWORD *)&v26 + 1) = v10 + v11;
  v14 = (unsigned int)core::str::validations::next_code_point(&v26) == 0;
  v16 = &loc_110000;
  if ( !v14 )
    LODWORD(v16) = v15;
  if ( (_DWORD)v16 == 43 )
  {
    v18 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
            1LL,
            v10,
            v11);
    if ( !v18 )
      core::str::slice_error_fail(v10, v11, 1LL, v11, &off_212238);
    <T as alloc::slice::hack::ConvertVec>::to_vec(v21, v18, v19);
    *(_QWORD *)(a1 + 24) = *(_QWORD *)&v21[1];
    *(_OWORD *)(a1 + 8) = v21[0];
    goto LABEL_19;
  }
  if ( (_DWORD)v16 == (_DWORD)&loc_110000 )
  {
    v20 = &off_212220;
LABEL_30:
    core::option::unwrap_failed(v20);
  }
  <alloc::string::String as core::clone::Clone>::clone(&v22, v4);
  *(_QWORD *)(a1 + 48) = v25;
  *(_OWORD *)(a1 + 32) = v24;
  *(_OWORD *)((char *)v21 + 7) = v22;
  *(_QWORD *)((char *)&v21[1] + 7) = v23;
  *(_BYTE *)a1 = 6;
  result = *(_QWORD *)((char *)v21 + 15);
  v17 = *(_QWORD *)((char *)&v21[1] + 7);
  *(_OWORD *)(a1 + 1) = v21[0];
  *(_QWORD *)(a1 + 16) = result;
  *(_QWORD *)(a1 + 24) = v17;
  return result;
}
