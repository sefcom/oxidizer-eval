__int64 __fastcall uu_df::Options::from(__int64 a1, __int64 a2)
{
  char flag; // bp
  char v4; // r15
  char v5; // r12
  __int128 v6; // kr00_16
  char v7; // r13
  char v8; // r12
  char v9; // r15
  char v10; // bp
  __int64 v11; // rax
  __int128 v12; // xmm0
  __int128 *v13; // rdi
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  char v17; // [rsp+Bh] [rbp-18Dh]
  char v18; // [rsp+Ch] [rbp-18Ch]
  __int128 v19; // [rsp+10h] [rbp-188h] BYREF
  __int64 v20; // [rsp+20h] [rbp-178h]
  __int128 v21; // [rsp+28h] [rbp-170h] BYREF
  __int64 v22; // [rsp+38h] [rbp-160h]
  __int128 v23; // [rsp+40h] [rbp-158h] BYREF
  __int128 v24; // [rsp+50h] [rbp-148h]
  __int128 v25; // [rsp+60h] [rbp-138h] BYREF
  __m256i v26; // [rsp+70h] [rbp-128h]
  __int128 v27; // [rsp+90h] [rbp-108h]
  __int64 v28; // [rsp+A0h] [rbp-F8h]
  __int64 v29; // [rsp+A8h] [rbp-F0h]
  __m256i v30; // [rsp+B0h] [rbp-E8h] BYREF
  _BYTE v31[48]; // [rsp+D0h] [rbp-C8h] BYREF
  __int128 v32; // [rsp+100h] [rbp-98h]
  __int128 v33; // [rsp+110h] [rbp-88h] BYREF
  __int64 v34; // [rsp+120h] [rbp-78h]
  __int128 v35; // [rsp+130h] [rbp-68h] BYREF
  __int64 v36; // [rsp+140h] [rbp-58h]
  __int128 v37; // [rsp+150h] [rbp-48h]
  __int64 v38; // [rsp+160h] [rbp-38h]

  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v25, a2, aType, 4LL);
  clap_builder::parser::error::MatchesError::unwrap(v31, aType, 4LL, &v25);
  if ( *(_QWORD *)v31 )
  {
    v27 = v32;
    v26 = *(__m256i *)&v31[16];
    v25 = *(_OWORD *)v31;
    <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v21, &v25);
  }
  else
  {
    *(_QWORD *)&v21 = 0x8000000000000000LL;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v25, a2, aExcludeType, 12LL);
  clap_builder::parser::error::MatchesError::unwrap(v31, aExcludeType, 12LL, &v25);
  if ( *(_QWORD *)v31 )
  {
    v27 = v32;
    v26 = *(__m256i *)&v31[16];
    v25 = *(_OWORD *)v31;
    <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v30, &v25);
    v19 = *(_OWORD *)v30.m256i_i8;
    v20 = v30.m256i_i64[2];
    if ( (_QWORD)v21 != 0x8000000000000000LL && (_QWORD)v19 != 0x8000000000000000LL )
    {
      uu_df::Options::get_intersected_types(&v25, *((__int64 *)&v21 + 1), v22, *((__int64 *)&v19 + 1), v20);
      if ( (_QWORD)v25 != 0x8000000000000000LL )
      {
        *(_QWORD *)(a1 + 32) = v26.m256i_i64[0];
        *(_OWORD *)(a1 + 16) = v25;
        *(_QWORD *)(a1 + 8) = 4LL;
        *(_QWORD *)a1 = 0x8000000000000000LL;
        core::ptr::drop_in_place<core::option::Option<alloc::vec::Vec<alloc::string::String>>>(&v19);
        goto LABEL_27;
      }
      core::ptr::drop_in_place<core::option::Option<alloc::vec::Vec<alloc::string::String>>>(&v25);
    }
  }
  else
  {
    *(_QWORD *)&v19 = 0x8000000000000000LL;
  }
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aLocal, 5LL);
  v4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aAll, 3LL);
  v5 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aSync_0, 4LL);
  uu_df::blocks::read_block_size((__int64)&v23, a2);
  if ( (_DWORD)v23 != 3 )
  {
    *(_OWORD *)&v31[16] = v24;
    *(_OWORD *)v31 = v23;
    uu_df::Options::from::{{closure}}(&v30, a2, v31);
    v6 = *(_OWORD *)v30.m256i_i8;
    v37 = *(_OWORD *)&v30.m256i_u64[2];
    if ( v30.m256i_i64[0] == 5 )
    {
      v29 = v30.m256i_i64[1];
      goto LABEL_14;
    }
    *(_OWORD *)(a1 + 24) = v37;
    *(_OWORD *)(a1 + 8) = v6;
    *(_QWORD *)a1 = 0x8000000000000000LL;
    core::ptr::drop_in_place<core::option::Option<alloc::vec::Vec<alloc::string::String>>>(&v19);
LABEL_27:
    v13 = &v21;
    goto LABEL_28;
  }
  v29 = *((_QWORD *)&v23 + 1);
LABEL_14:
  v18 = 1;
  if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aHumanReadableB, 21LL)
    && !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aHumanReadableD, 22LL) )
  {
    v18 = 2;
    if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                             a2,
                             anon_85076f12318d60a2ab8851d375b85267_14_llvm_15128465655211971851,
                             11LL) )
      v18 = 3
          * ((unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::value_source(
                                a2,
                                anon_85076f12318d60a2ab8851d375b85267_12_llvm_15128465655211971851,
                                6LL) == 2);
  }
  v7 = 1;
  if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aHumanReadableB, 21LL) )
    v7 = 2 * (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aHumanReadableD, 22LL) ^ 1);
  v17 = v5;
  v8 = v4;
  v9 = flag;
  v34 = v22;
  v33 = v21;
  v36 = v20;
  v35 = v19;
  v10 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aTotal, 5LL);
  uu_df::columns::Column::from_matches((__int64)&v30, a2);
  if ( v30.m256i_i64[0] )
  {
    core::ops::function::FnOnce::call_once(v31, &v30.m256i_u64[1]);
    v11 = *(_QWORD *)v31;
    v23 = *(_OWORD *)&v31[8];
    *(_QWORD *)&v24 = *(_QWORD *)&v31[24];
    if ( *(_QWORD *)v31 != 5LL )
    {
      v38 = v24;
      v12 = v23;
      v37 = v23;
      *(_QWORD *)(a1 + 32) = v24;
      *(_OWORD *)(a1 + 16) = v12;
      *(_QWORD *)(a1 + 8) = v11;
      *(_QWORD *)a1 = 0x8000000000000000LL;
      core::ptr::drop_in_place<core::option::Option<alloc::vec::Vec<alloc::string::String>>>(&v35);
      v13 = &v33;
LABEL_28:
      core::ptr::drop_in_place<core::option::Option<alloc::vec::Vec<alloc::string::String>>>(v13);
      return a1;
    }
  }
  else
  {
    *(_QWORD *)&v24 = v30.m256i_i64[3];
    v23 = *(_OWORD *)&v30.m256i_u64[1];
  }
  v38 = v24;
  v14 = v23;
  v37 = v23;
  v25 = v23;
  v26.m256i_i64[0] = v24;
  *(_OWORD *)&v26.m256i_u64[1] = v33;
  v26.m256i_i64[3] = v34;
  v15 = v35;
  v27 = v35;
  v28 = v36;
  *(_QWORD *)(a1 + 64) = v36;
  *(_OWORD *)(a1 + 48) = v15;
  *(__m256i *)(a1 + 16) = v26;
  *(_OWORD *)a1 = v14;
  *(_QWORD *)(a1 + 72) = v29;
  *(_BYTE *)(a1 + 80) = v9;
  *(_BYTE *)(a1 + 81) = v8;
  *(_BYTE *)(a1 + 82) = v17;
  *(_BYTE *)(a1 + 83) = v10;
  *(_BYTE *)(a1 + 84) = v7;
  *(_BYTE *)(a1 + 85) = v18;
  return a1;
}
