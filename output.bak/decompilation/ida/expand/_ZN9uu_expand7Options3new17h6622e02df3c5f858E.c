__int64 __fastcall uu_expand::Options::new(__int64 a1, __int64 a2)
{
  char v2; // r12
  _QWORD *v3; // rax
  char flag; // bp
  char v5; // r15
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // r14
  __int128 v9; // xmm0
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v13; // [rsp+0h] [rbp-1C8h] BYREF
  __int64 v14; // [rsp+10h] [rbp-1B8h]
  _BYTE v15[31]; // [rsp+20h] [rbp-1A8h] BYREF
  __int128 v16; // [rsp+40h] [rbp-188h] BYREF
  __int64 v17; // [rsp+50h] [rbp-178h]
  _BYTE v18[40]; // [rsp+60h] [rbp-168h] BYREF
  _BYTE v19[24]; // [rsp+88h] [rbp-140h]
  __int64 v20; // [rsp+A0h] [rbp-128h]
  __int128 v21; // [rsp+B0h] [rbp-118h] BYREF
  __int64 v22; // [rsp+C0h] [rbp-108h]
  _BYTE v23[8]; // [rsp+C8h] [rbp-100h] BYREF
  __int64 v24; // [rsp+D0h] [rbp-F8h]
  __int64 v25; // [rsp+D8h] [rbp-F0h]
  __int128 v26; // [rsp+E0h] [rbp-E8h] BYREF
  __int128 v27; // [rsp+F0h] [rbp-D8h]
  __int128 v28; // [rsp+100h] [rbp-C8h]
  __int128 v29; // [rsp+110h] [rbp-B8h]
  _OWORD v30[4]; // [rsp+120h] [rbp-A8h] BYREF
  _OWORD v31[6]; // [rsp+160h] [rbp-68h] BYREF

  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(
    v18,
    a2,
    anon_b3080d5aab7317ae3a539a511968743d_32_llvm_17726817573235010998,
    4LL);
  clap_builder::parser::error::MatchesError::unwrap(
    &v26,
    anon_b3080d5aab7317ae3a539a511968743d_32_llvm_17726817573235010998,
    4LL,
    v18);
  if ( (_QWORD)v26 )
  {
    v30[3] = v29;
    v30[2] = v28;
    v30[1] = v27;
    v30[0] = v26;
    <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v23, v30);
    alloc::str::join_generic_copy(&v13, v24, v25, asc_1D0A9, 1LL);
    v22 = v14;
    v21 = v13;
    uu_expand::tabstops_parse((__int64)v18, *((__int64 *)&v13 + 1), v14);
    v2 = v18[8];
    *(_OWORD *)v15 = *(_OWORD *)&v18[9];
    *(_OWORD *)&v15[15] = *(_OWORD *)&v18[24];
    if ( *(_QWORD *)v18 )
    {
      *(_OWORD *)(a1 + 40) = *(_OWORD *)v19;
      *(_OWORD *)(a1 + 24) = *(_OWORD *)&v15[15];
      *(_OWORD *)(a1 + 9) = *(_OWORD *)v15;
      *(_BYTE *)(a1 + 8) = v2;
      *(_QWORD *)a1 = 0x8000000000000000LL;
      core::ptr::drop_in_place<alloc::string::String>(&v21);
      core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v23);
      return a1;
    }
    v16 = *(_OWORD *)&v15[7];
    v17 = *(_QWORD *)&v15[23];
    core::ptr::drop_in_place<alloc::string::String>(&v21);
    core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v23);
  }
  else
  {
    v3 = (_QWORD *)alloc::alloc::Global::alloc_impl(8LL, 8LL);
    if ( !v3 )
      alloc::alloc::handle_alloc_error(8LL, 8LL);
    *v3 = 8LL;
    alloc::slice::hack::into_vec(&v16, v3, 1LL);
    v2 = 0;
  }
  v14 = v17;
  v13 = v16;
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
           a2,
           anon_b3080d5aab7317ae3a539a511968743d_33_llvm_17726817573235010998,
           7LL);
  v5 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
         a2,
         anon_b3080d5aab7317ae3a539a511968743d_34_llvm_17726817573235010998,
         7LL);
  *(_QWORD *)v18 = *((_QWORD *)&v13 + 1);
  *(_QWORD *)&v18[8] = *((_QWORD *)&v13 + 1) + 8 * v14;
  *(_QWORD *)&v18[16] = 0LL;
  if ( !core::iter::traits::iterator::Iterator::reduce(v18) )
    core::option::unwrap_failed(&off_11CD80);
  alloc::str::<impl str>::repeat(&v16, asc_1D0AB, 1LL, v6);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(
    v18,
    a2,
    anon_b3080d5aab7317ae3a539a511968743d_35_llvm_17726817573235010998,
    5LL);
  clap_builder::parser::error::MatchesError::unwrap(
    &v26,
    anon_b3080d5aab7317ae3a539a511968743d_35_llvm_17726817573235010998,
    5LL,
    v18);
  if ( (_QWORD)v26 )
  {
    v31[3] = v29;
    v31[2] = v28;
    v31[1] = v27;
    v31[0] = v26;
    <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v15, v31);
  }
  else
  {
    v7 = alloc::alloc::Global::alloc_impl(8LL, 24LL);
    if ( !v7 )
      alloc::alloc::handle_alloc_error(8LL, 24LL);
    v8 = v7;
    <T as alloc::slice::hack::ConvertVec>::to_vec(v18, asc_1D0AA, 1LL);
    *(_QWORD *)&v15[16] = *(_QWORD *)&v18[16];
    v9 = *(_OWORD *)v18;
    *(_OWORD *)v15 = *(_OWORD *)v18;
    *(_QWORD *)(v8 + 16) = *(_QWORD *)&v18[16];
    *(_OWORD *)v8 = v9;
    alloc::slice::hack::into_vec(v15, v8, 1LL);
  }
  *(_QWORD *)&v18[16] = *(_QWORD *)&v15[16];
  v10 = *(_OWORD *)v15;
  *(_OWORD *)v18 = *(_OWORD *)v15;
  *(_QWORD *)v19 = v14;
  *(_OWORD *)&v18[24] = v13;
  v20 = v17;
  v11 = v16;
  *(_OWORD *)&v19[8] = v16;
  *(_QWORD *)(a1 + 64) = v17;
  *(_OWORD *)(a1 + 48) = v11;
  *(_OWORD *)a1 = v10;
  *(_QWORD *)(a1 + 32) = *(_QWORD *)&v18[32];
  *(_QWORD *)(a1 + 40) = *(_QWORD *)v19;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)&v18[16];
  *(_BYTE *)(a1 + 72) = flag;
  *(_BYTE *)(a1 + 73) = v5 ^ 1;
  *(_BYTE *)(a1 + 74) = v2;
  return a1;
}
