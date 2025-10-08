__int64 __fastcall uu_base32::base_common::Config::from(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  unsigned __int64 v3; // r15
  __int64 v4; // rax
  __int64 v5; // r12
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 (__fastcall **v10)(); // rcx
  __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // r12
  char flag; // bp
  char v15; // al
  char **v17; // r15
  __int64 v18; // [rsp+0h] [rbp-1C8h]
  __int64 *v19; // [rsp+8h] [rbp-1C0h] BYREF
  __int64 (__fastcall *v20)(); // [rsp+10h] [rbp-1B8h]
  __int64 v21; // [rsp+18h] [rbp-1B0h] BYREF
  __int64 v22; // [rsp+20h] [rbp-1A8h]
  __int64 v23; // [rsp+28h] [rbp-1A0h]
  char v24; // [rsp+30h] [rbp-198h]
  __int64 **v25; // [rsp+38h] [rbp-190h]
  char **dest; // [rsp+40h] [rbp-188h] BYREF
  __int64 v27; // [rsp+48h] [rbp-180h]
  __int64 **v28; // [rsp+50h] [rbp-178h]
  __int64 v29; // [rsp+58h] [rbp-170h]
  __int64 v30; // [rsp+60h] [rbp-168h]
  _BYTE v31[24]; // [rsp+F0h] [rbp-D8h] BYREF
  int v32; // [rsp+108h] [rbp-C0h]
  _OWORD v33[4]; // [rsp+110h] [rbp-B8h] BYREF
  _OWORD v34[7]; // [rsp+158h] [rbp-70h] BYREF

  v3 = 0x8000000000000000LL;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&dest);
  clap_builder::parser::error::MatchesError::unwrap(v34, &dest);
  if ( !*(_QWORD *)&v34[0] )
    goto LABEL_7;
  v33[3] = v34[3];
  v33[2] = v34[2];
  v33[1] = v34[1];
  v33[0] = v34[0];
  v4 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(v33);
  if ( !v4 )
    core::option::unwrap_failed(&off_10DD48);
  v5 = v4;
  v6 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(v33);
  if ( !v6 )
  {
    v2 = *(_QWORD *)(v5 + 8);
    v11 = *(_QWORD *)(v5 + 16);
    if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, v11, asc_1B2E0, 1LL) )
    {
      std::fs::metadata(&dest);
      v17 = dest;
      core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(dest, v27);
      if ( v17 == (char **)((char *)&dword_0 + 2) )
      {
        v21 = 1LL;
        v22 = v2;
        v23 = v11;
        v24 = 0;
        v19 = &v21;
        v20 = <os_display::Quoted as core::fmt::Display>::fmt;
        dest = (char **)&unk_10DD28;
        v27 = 2LL;
        v30 = 0LL;
        v28 = &v19;
        v29 = 1LL;
        core::option::Option<T>::map_or_else(v31, &dest);
        v32 = 1;
        v9 = alloc::boxed::Box<T>::new(v31);
        v10 = &off_10DE08;
        goto LABEL_5;
      }
      std::path::Path::to_path_buf(&dest, v2, v11);
      v3 = (unsigned __int64)dest;
      v18 = v27;
      v25 = v28;
    }
LABEL_7:
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&dest, a2);
    v12 = clap_builder::parser::error::MatchesError::unwrap(&dest);
    if ( v12 )
    {
      uu_base32::base_common::Config::from::{{closure}}(&dest, *(_QWORD *)(v12 + 8), *(_QWORD *)(v12 + 16));
      v2 = v27;
      if ( dest )
      {
        *(_QWORD *)(a1 + 8) = dest;
        *(_QWORD *)(a1 + 16) = v2;
        *(_QWORD *)a1 = 2LL;
        core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(v3, v18);
        return a1;
      }
      v13 = 1LL;
    }
    else
    {
      v13 = 0LL;
    }
    flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aDecode, 6LL);
    v15 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aIgnoreGarbage, 14LL);
    *(_QWORD *)a1 = v13;
    *(_QWORD *)(a1 + 8) = v2;
    *(_QWORD *)(a1 + 16) = v3;
    *(_QWORD *)(a1 + 24) = v18;
    *(_QWORD *)(a1 + 32) = v25;
    *(_BYTE *)(a1 + 40) = flag;
    *(_BYTE *)(a1 + 41) = v15;
    return a1;
  }
  v7 = *(_QWORD *)(v6 + 8);
  v8 = *(_QWORD *)(v6 + 16);
  v21 = 0LL;
  v22 = v7;
  v23 = v8;
  v24 = 1;
  v19 = &v21;
  v20 = <os_display::Quoted as core::fmt::Display>::fmt;
  dest = &off_10DD18;
  v27 = 1LL;
  v30 = 0LL;
  v28 = &v19;
  v29 = 1LL;
  core::option::Option<T>::map_or_else(v31, &dest);
  v32 = 1;
  v9 = alloc::boxed::Box<T>::new(v31);
  v10 = &off_10DD80;
LABEL_5:
  *(_QWORD *)(a1 + 8) = v9;
  *(_QWORD *)(a1 + 16) = v10;
  *(_QWORD *)a1 = 2LL;
  return a1;
}