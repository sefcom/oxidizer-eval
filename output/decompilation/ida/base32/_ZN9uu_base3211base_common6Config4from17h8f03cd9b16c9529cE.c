__int64 __fastcall uu_base32::base_common::Config::from(__int64 a1, __int64 a2)
{
  const char *v2; // r15
  __int64 v3; // rax
  __int64 v4; // r15
  __int64 v5; // rax
  __int128 v6; // xmm0
  __int64 v7; // rax
  __int64 (__fastcall **v8)(); // rcx
  __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // r12
  char flag; // bp
  char v13; // al
  __int64 *v15; // [rsp+8h] [rbp-1C0h] BYREF
  __int64 (__fastcall *v16)(); // [rsp+10h] [rbp-1B8h]
  __int128 v17; // [rsp+18h] [rbp-1B0h] BYREF
  __int64 v18; // [rsp+28h] [rbp-1A0h]
  __int64 v19; // [rsp+30h] [rbp-198h] BYREF
  __int128 v20; // [rsp+38h] [rbp-190h]
  char v21; // [rsp+48h] [rbp-180h]
  _BYTE v22[24]; // [rsp+50h] [rbp-178h] BYREF
  int v23; // [rsp+68h] [rbp-160h]
  char **v24; // [rsp+70h] [rbp-158h] BYREF
  __int64 v25; // [rsp+78h] [rbp-150h]
  __int64 **v26; // [rsp+80h] [rbp-148h]
  __int64 v27; // [rsp+88h] [rbp-140h]
  __int64 v28; // [rsp+90h] [rbp-138h]
  _OWORD v29[4]; // [rsp+120h] [rbp-A8h] BYREF
  _OWORD v30[6]; // [rsp+160h] [rbp-68h] BYREF

  v2 = anon_c1c055de090567b5a95d92af4d90b7c9_26_llvm_10347091732497712345;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(
    &v24,
    a2,
    anon_c1c055de090567b5a95d92af4d90b7c9_26_llvm_10347091732497712345,
    4LL);
  clap_builder::parser::error::MatchesError::unwrap(
    v30,
    anon_c1c055de090567b5a95d92af4d90b7c9_26_llvm_10347091732497712345,
    4LL,
    &v24);
  if ( !*(_QWORD *)&v30[0] )
    goto LABEL_7;
  v29[3] = v30[3];
  v29[2] = v30[2];
  v29[1] = v30[1];
  v29[0] = v30[0];
  v3 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(v29);
  if ( !v3 )
    core::option::unwrap_failed(&off_1495A0);
  v4 = v3;
  v5 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(v29);
  if ( !v5 )
  {
    v9 = *(_QWORD *)(v4 + 8);
    v2 = *(const char **)(v4 + 16);
    if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v9, v2, asc_18B77, 1LL) )
    {
      std::fs::metadata(&v24, v9, v2);
      if ( v24 == (char **)((char *)&dword_0 + 2) )
      {
        core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(2LL, v25);
        v19 = 1LL;
        *(_QWORD *)&v20 = v9;
        *((_QWORD *)&v20 + 1) = v2;
        v21 = 0;
        v15 = &v19;
        v16 = <os_display::Quoted as core::fmt::Display>::fmt;
        v24 = (char **)&unk_149580;
        v25 = 2LL;
        v28 = 0LL;
        v26 = &v15;
        v27 = 1LL;
        core::option::Option<T>::map_or_else(v22, &v24);
        v23 = 1;
        v7 = alloc::boxed::Box<T>::new(v22);
        v8 = &off_149698;
        goto LABEL_5;
      }
      core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v24, v25);
      std::path::Path::to_path_buf(&v17, v9, v2);
LABEL_8:
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
        &v24,
        a2,
        anon_c1c055de090567b5a95d92af4d90b7c9_24_llvm_10347091732497712345,
        4LL);
      v10 = clap_builder::parser::error::MatchesError::unwrap(
              anon_c1c055de090567b5a95d92af4d90b7c9_24_llvm_10347091732497712345,
              4LL,
              &v24);
      if ( v10 )
      {
        uu_base32::base_common::Config::from::{{closure}}(&v24, *(_QWORD *)(v10 + 8), *(_QWORD *)(v10 + 16));
        v2 = (const char *)v25;
        if ( v24 )
        {
          *(_QWORD *)(a1 + 8) = v24;
          *(_QWORD *)(a1 + 16) = v2;
          *(_QWORD *)a1 = 2LL;
          core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&v17);
          return a1;
        }
        v11 = 1LL;
      }
      else
      {
        v11 = 0LL;
      }
      flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
               a2,
               anon_c1c055de090567b5a95d92af4d90b7c9_23_llvm_10347091732497712345,
               6LL);
      v13 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
              a2,
              anon_c1c055de090567b5a95d92af4d90b7c9_25_llvm_10347091732497712345,
              14LL);
      *(_QWORD *)(a1 + 32) = v18;
      *(_OWORD *)(a1 + 16) = v17;
      *(_QWORD *)a1 = v11;
      *(_QWORD *)(a1 + 8) = v2;
      *(_BYTE *)(a1 + 40) = flag;
      *(_BYTE *)(a1 + 41) = v13;
      return a1;
    }
LABEL_7:
    *(_QWORD *)&v17 = 0x8000000000000000LL;
    goto LABEL_8;
  }
  v6 = *(_OWORD *)(v5 + 8);
  v19 = 0LL;
  v20 = v6;
  v21 = 1;
  v15 = &v19;
  v16 = <os_display::Quoted as core::fmt::Display>::fmt;
  v24 = &off_149570;
  v25 = 1LL;
  v28 = 0LL;
  v26 = &v15;
  v27 = 1LL;
  core::option::Option<T>::map_or_else(v22, &v24);
  v23 = 1;
  v7 = alloc::boxed::Box<T>::new(v22);
  v8 = &off_1495F0;
LABEL_5:
  *(_QWORD *)(a1 + 8) = v7;
  *(_QWORD *)(a1 + 16) = v8;
  *(_QWORD *)a1 = 2LL;
  return a1;
}
