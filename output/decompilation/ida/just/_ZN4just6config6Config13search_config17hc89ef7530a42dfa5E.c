__int64 __fastcall just::config::Config::search_config(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int128 v7; // [rsp+8h] [rbp-F0h] BYREF
  __int64 v8; // [rsp+18h] [rbp-E0h]
  __int128 v9; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v10; // [rsp+30h] [rbp-C8h]
  __int128 v11; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v12; // [rsp+50h] [rbp-A8h]
  __int128 v13; // [rsp+58h] [rbp-A0h]
  __int64 v14; // [rsp+68h] [rbp-90h]
  __int128 v15; // [rsp+70h] [rbp-88h] BYREF
  __int64 v16; // [rsp+80h] [rbp-78h]
  __int128 v17; // [rsp+90h] [rbp-68h]
  __int64 v18; // [rsp+A0h] [rbp-58h]
  __int128 v19; // [rsp+A8h] [rbp-50h] BYREF
  __int64 v20; // [rsp+B8h] [rbp-40h]

  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aGlobalJustfile, 15LL) )
  {
    result = 0x8000000000000002LL;
LABEL_3:
    *(_QWORD *)(a1 + 8) = result;
LABEL_4:
    *(_QWORD *)a1 = 0x8000000000000007LL;
    return result;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v11, a2, aJustfile, 8LL);
  v5 = clap_builder::parser::error::MatchesError::unwrap(aJustfile, 8LL, &v11);
  if ( v5 )
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v7, *(_QWORD *)(v5 + 8));
  else
    *(_QWORD *)&v7 = 0x8000000000000000LL;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v11, a2, aWorkingDirecto, 17LL);
  v6 = clap_builder::parser::error::MatchesError::unwrap(aWorkingDirecto, 17LL, &v11);
  if ( v6 )
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v11, *(_QWORD *)(v6 + 8));
    v10 = v12;
    v9 = v11;
    if ( *(_QWORD *)(a3 + 48) == 0x8000000000000000LL )
      goto LABEL_13;
  }
  else
  {
    *(_QWORD *)&v9 = 0x8000000000000000LL;
    if ( *(_QWORD *)(a3 + 48) == 0x8000000000000000LL )
      goto LABEL_13;
  }
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v11, *(_QWORD *)(a3 + 56));
  v16 = v12;
  v15 = v11;
  if ( (_QWORD)v11 != 0x8000000000000000LL )
  {
    if ( (_QWORD)v7 == 0x8000000000000000LL && (_QWORD)v9 == 0x8000000000000000LL )
    {
      *(_QWORD *)(a1 + 32) = v16;
      *(_OWORD *)(a1 + 16) = v15;
      *(_QWORD *)(a1 + 8) = 0x8000000000000001LL;
      *(_QWORD *)a1 = 0x8000000000000007LL;
    }
    else
    {
      *(_QWORD *)a1 = 0x8000000000000004LL;
      core::ptr::drop_in_place<std::path::PathBuf>(&v15);
    }
    core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&v9);
    return core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&v7);
  }
LABEL_13:
  v17 = v7;
  v18 = v8;
  v19 = v9;
  v20 = v10;
  result = v9;
  if ( (_QWORD)v7 != 0x8000000000000000LL )
  {
    if ( (_QWORD)v9 != 0x8000000000000000LL )
    {
      result = a1 + 8;
      v12 = v8;
      v11 = v7;
      v14 = v10;
      v13 = v9;
      *(_OWORD *)(a1 + 8) = v7;
      *(_QWORD *)(a1 + 40) = *((_QWORD *)&v13 + 1);
      *(_QWORD *)(a1 + 48) = v14;
      *(_QWORD *)(a1 + 24) = v12;
      *(_QWORD *)(a1 + 32) = v13;
      goto LABEL_4;
    }
    *(_QWORD *)(a1 + 32) = v8;
    *(_OWORD *)(a1 + 16) = v7;
    result = 0x8000000000000003LL;
    goto LABEL_3;
  }
  if ( (_QWORD)v9 == 0x8000000000000000LL )
  {
    *(_QWORD *)(a1 + 8) = 0x8000000000000000LL;
    goto LABEL_4;
  }
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v11, aWorkingDirecto_1);
  *(_QWORD *)(a1 + 24) = v12;
  *(_OWORD *)(a1 + 8) = v11;
  *(_QWORD *)a1 = 0x8000000000000001LL;
  return core::ptr::drop_in_place<std::path::PathBuf>(&v19);
}