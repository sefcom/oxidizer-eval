__int64 __fastcall uu_df::Options::from(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  char v4; // r12
  char v5; // r13
  char v6; // bp
  __int64 v7; // rax
  __int128 v8; // xmm1
  char v10; // [rsp+Dh] [rbp-1BBh]
  char v11; // [rsp+Eh] [rbp-1BAh]
  char flag; // [rsp+Fh] [rbp-1B9h]
  __int128 v13; // [rsp+10h] [rbp-1B8h] BYREF
  __int64 v14; // [rsp+20h] [rbp-1A8h]
  __int128 v15; // [rsp+30h] [rbp-198h] BYREF
  __int64 v16; // [rsp+40h] [rbp-188h]
  __int64 v17; // [rsp+48h] [rbp-180h]
  __int128 v18; // [rsp+50h] [rbp-178h]
  __int64 v19; // [rsp+60h] [rbp-168h]
  __int128 v20; // [rsp+70h] [rbp-158h] BYREF
  __int64 v21; // [rsp+80h] [rbp-148h]
  __int128 v22; // [rsp+88h] [rbp-140h]
  __int64 v23; // [rsp+98h] [rbp-130h]
  __int128 v24; // [rsp+A0h] [rbp-128h]
  __int64 v25; // [rsp+B0h] [rbp-118h]
  __int64 v26; // [rsp+C0h] [rbp-108h] BYREF
  _BYTE v27[24]; // [rsp+C8h] [rbp-100h]
  int v28; // [rsp+E0h] [rbp-E8h] BYREF
  __int64 v29; // [rsp+E8h] [rbp-E0h]
  _QWORD v30[8]; // [rsp+100h] [rbp-C8h] BYREF
  _QWORD v31[17]; // [rsp+140h] [rbp-88h] BYREF

  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v20, a2, &unk_19A24, 4LL);
  clap_builder::parser::error::MatchesError::unwrap(v30, &unk_19A24, 4LL, &v20);
  if ( v30[0] )
    core::iter::traits::iterator::Iterator::collect(&v15, v30);
  else
    *(_QWORD *)&v15 = 0x8000000000000000LL;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v20, a2, aExcludeType, 12LL);
  clap_builder::parser::error::MatchesError::unwrap(v31, aExcludeType, 12LL, &v20);
  if ( v31[0] )
  {
    core::iter::traits::iterator::Iterator::collect(&v20, v31);
    v14 = v21;
    v13 = v20;
    if ( (_QWORD)v15 != 0x8000000000000000LL && (_QWORD)v13 != 0x8000000000000000LL )
    {
      uu_df::Options::get_intersected_types(&v20, *((_QWORD *)&v15 + 1), v16, *((_QWORD *)&v13 + 1), v14);
      if ( (_QWORD)v20 != 0x8000000000000000LL )
      {
        *(_QWORD *)(a1 + 32) = v21;
        *(_OWORD *)(a1 + 16) = v20;
        *(_QWORD *)(a1 + 8) = 4LL;
        goto LABEL_25;
      }
      core::ptr::drop_in_place<core::option::Option<alloc::vec::Vec<alloc::string::String>>>(&v20);
    }
  }
  else
  {
    *(_QWORD *)&v13 = 0x8000000000000000LL;
  }
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aLocal, 5LL);
  v11 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aAll, 3LL);
  v10 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aSync_0, 4LL);
  uu_df::blocks::read_block_size((__int64)&v28, a2);
  if ( v28 == 4 )
  {
    v17 = v29;
  }
  else
  {
    uu_df::Options::from::{{closure}}(&v26, a2, &v28);
    v2 = v26;
    v3 = *(_QWORD *)v27;
    v18 = *(_OWORD *)&v27[8];
    if ( v26 != 5 )
    {
      *(_OWORD *)(a1 + 24) = v18;
      *(_QWORD *)(a1 + 8) = v2;
      *(_QWORD *)(a1 + 16) = v3;
      goto LABEL_25;
    }
    v17 = *(_QWORD *)v27;
  }
  v4 = 1;
  if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aHumanReadableB, 21LL)
    && !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aHumanReadableD, 22LL) )
  {
    v4 = 2;
    if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aPortability, 11LL) )
      v4 = 3
         * ((unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::value_source(a2, aOutput, 6LL) == 2);
  }
  v5 = 1;
  if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aHumanReadableB, 21LL) )
    v5 = 2 * (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aHumanReadableD, 22LL) ^ 1);
  v6 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, "total%", 5LL);
  uu_df::columns::Column::from_matches(&v26, a2);
  v18 = *(_OWORD *)v27;
  v19 = *(_QWORD *)&v27[16];
  if ( (_DWORD)v26 == 1 )
  {
    *(_QWORD *)(a1 + 32) = v19;
    *(_OWORD *)(a1 + 16) = v18;
    *(_QWORD *)(a1 + 8) = 3LL;
LABEL_25:
    *(_QWORD *)a1 = 0x8000000000000000LL;
    core::ptr::drop_in_place<core::option::Option<alloc::vec::Vec<alloc::string::String>>>(&v13);
    core::ptr::drop_in_place<core::option::Option<alloc::vec::Vec<alloc::string::String>>>(&v15);
    return a1;
  }
  v21 = v19;
  v20 = v18;
  v23 = v16;
  v22 = v15;
  v7 = v14;
  v25 = v14;
  v8 = v13;
  v24 = v13;
  *(_OWORD *)a1 = v18;
  *(_QWORD *)(a1 + 64) = v7;
  *(_OWORD *)(a1 + 48) = v8;
  *(_QWORD *)(a1 + 16) = v21;
  *(_OWORD *)(a1 + 24) = v22;
  *(_QWORD *)(a1 + 40) = v23;
  *(_QWORD *)(a1 + 72) = v17;
  *(_BYTE *)(a1 + 80) = flag;
  *(_BYTE *)(a1 + 81) = v11;
  *(_BYTE *)(a1 + 82) = v10;
  *(_BYTE *)(a1 + 83) = v6;
  *(_BYTE *)(a1 + 84) = v5;
  *(_BYTE *)(a1 + 85) = v4;
  return a1;
}