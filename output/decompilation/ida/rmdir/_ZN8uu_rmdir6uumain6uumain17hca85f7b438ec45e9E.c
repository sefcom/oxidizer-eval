__int64 __fastcall uu_rmdir::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  unsigned __int8 v4; // bl
  unsigned __int8 v5; // bp
  __int64 v6; // r15
  const char *v7; // rsi
  void (__fastcall __noreturn *v8)(); // rax
  const char *v9; // rcx
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int64 v12; // rdx
  unsigned int v13; // ebp
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // r12
  __int64 v17; // r15
  __int64 v18; // rdx
  __int64 v19; // r14
  __int64 v20; // rdx
  __int64 v21; // rdx
  unsigned __int8 flag; // [rsp+Fh] [rbp-3E9h]
  __int64 v23; // [rsp+10h] [rbp-3E8h] BYREF
  char **v24; // [rsp+18h] [rbp-3E0h] BYREF
  __int64 v25; // [rsp+20h] [rbp-3D8h]
  __int128 v26; // [rsp+28h] [rbp-3D0h]
  __int128 v27; // [rsp+38h] [rbp-3C0h]
  const char *v28; // [rsp+48h] [rbp-3B0h]
  __int64 v29; // [rsp+50h] [rbp-3A8h]
  __int64 v30; // [rsp+58h] [rbp-3A0h] BYREF
  __int64 v31; // [rsp+60h] [rbp-398h]
  __int64 v32; // [rsp+68h] [rbp-390h]
  char v33; // [rsp+70h] [rbp-388h]
  __int64 *v34; // [rsp+78h] [rbp-380h] BYREF
  __int64 (__fastcall *v35)(); // [rsp+80h] [rbp-378h]
  _QWORD *v36; // [rsp+88h] [rbp-370h]
  __int64 (__fastcall *v37)(); // [rsp+90h] [rbp-368h]
  _QWORD v38[3]; // [rsp+98h] [rbp-360h] BYREF
  _QWORD v39[2]; // [rsp+B0h] [rbp-348h] BYREF
  __int128 v40; // [rsp+C0h] [rbp-338h]
  __int128 v41; // [rsp+D0h] [rbp-328h]
  const char *v42; // [rsp+E0h] [rbp-318h]
  __int64 v43; // [rsp+E8h] [rbp-310h] BYREF
  __int64 v44; // [rsp+F0h] [rbp-308h]
  __int64 v45; // [rsp+F8h] [rbp-300h]
  _QWORD dest[2]; // [rsp+100h] [rbp-2F8h] BYREF
  __int128 v47; // [rsp+110h] [rbp-2E8h]
  __int128 v48; // [rsp+120h] [rbp-2D8h]
  const char *v49; // [rsp+130h] [rbp-2C8h]
  __int64 v50; // [rsp+138h] [rbp-2C0h]

  uu_rmdir::uu_app(dest);
  clap_builder::builder::command::Command::try_get_matches_from(&v24, dest, a1, a2);
  if ( __OFSUB__(-(__int64)v24, 1LL) )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(
             v25,
             dest,
             v2,
             -(__int64)v24);
  v42 = v28;
  v41 = v27;
  v40 = v26;
  v39[0] = v24;
  v39[1] = v25;
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
           v39,
           aIgnoreFailOnNo,
           *(&uu_rmdir::OPT_IGNORE_FAIL_NON_EMPTY + 1));
  v4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v39, aParents, *(&uu_rmdir::OPT_PARENTS + 1));
  v5 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v39, aVerbose, *(&uu_rmdir::OPT_VERBOSE + 1));
  v6 = (__int64)*(&uu_rmdir::ARG_DIRS + 1);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(dest, v39, aDirs, v6);
  v7 = aDirs;
  clap_builder::parser::error::MatchesError::unwrap(&v24, aDirs, v6, dest);
  v8 = (void (__fastcall __noreturn *)())v24;
  if ( v24 )
  {
    v9 = (const char *)v25;
    v10 = v26;
    v11 = v27;
    v7 = v28;
    v12 = v29;
  }
  else
  {
    v11 = 0LL;
    v10 = (unsigned __int64)<clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::default::Default>::default::EMPTY;
    v9 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::default::Default>::default::EMPTY;
    v8 = core::ops::function::FnOnce::call_once;
    v12 = 0LL;
  }
  dest[0] = v8;
  dest[1] = v9;
  v47 = v10;
  v48 = v11;
  v49 = v7;
  v50 = v12;
  v13 = flag | (v4 << 8) | (v5 << 16);
  while ( 1 )
  {
    v14 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(dest);
    if ( !v14 )
      break;
    uu_rmdir::remove(&v43, *(_QWORD *)(v14 + 8), *(_QWORD *)(v14 + 16), v13);
    if ( v43 )
    {
      v15 = v44;
      v16 = v45;
      v23 = v43;
      if ( !flag || !(unsigned __int8)uu_rmdir::dir_not_empty(&v23, v44, v45) )
      {
        uucore::mods::error::set_exit_code(1LL);
        std::io::error::repr_bitpacked::decode_repr(&v24, v23);
        if ( !(_BYTE)v24 && HIDWORD(v24) == 20 )
        {
          if ( (unsigned __int8)core::slice::<impl [T]>::ends_with(v15, v16) )
          {
            v17 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v16 - 1, v15, v16);
            v19 = v18;
            if ( (unsigned __int8)std::path::Path::is_symlink(v17, v18) )
            {
              uu_rmdir::uumain::uumain::points_to_directory(&v24, v17, v19);
              if ( (_BYTE)v24 )
              {
                core::ptr::drop_in_place<core::result::Result<bool,std::io::error::Error>>((unsigned __int8)v24, v25);
LABEL_19:
                v30 = uucore::util_name();
                v31 = v20;
                v34 = &v30;
                v35 = <&T as core::fmt::Display>::fmt;
                v24 = (char **)&unk_DDD80;
                v25 = 2LL;
                *(_QWORD *)&v27 = 0LL;
                *(_QWORD *)&v26 = &v34;
                *((_QWORD *)&v26 + 1) = 1LL;
                std::io::stdio::_eprint(&v24);
                v30 = 1LL;
                v31 = v15;
                v32 = v16;
                v33 = 1;
                v34 = &v30;
                v35 = <os_display::Quoted as core::fmt::Display>::fmt;
                v24 = &off_DDDF8;
                v25 = 2LL;
                *(_QWORD *)&v27 = 0LL;
                *(_QWORD *)&v26 = &v34;
                *((_QWORD *)&v26 + 1) = 1LL;
                std::io::stdio::_eprint(&v24);
                goto LABEL_21;
              }
              if ( BYTE1(v24) )
                goto LABEL_19;
            }
          }
        }
        v30 = uucore::util_name();
        v31 = v21;
        v34 = &v30;
        v35 = <&T as core::fmt::Display>::fmt;
        v24 = (char **)&unk_DDD80;
        v25 = 2LL;
        *(_QWORD *)&v27 = 0LL;
        *(_QWORD *)&v26 = &v34;
        *((_QWORD *)&v26 + 1) = 1LL;
        std::io::stdio::_eprint(&v24);
        v30 = 1LL;
        v31 = v15;
        v32 = v16;
        v33 = 1;
        uucore::mods::error::strip_errno(v38, &v23);
        v34 = &v30;
        v35 = <os_display::Quoted as core::fmt::Display>::fmt;
        v36 = v38;
        v37 = <alloc::string::String as core::fmt::Display>::fmt;
        v24 = &off_DDE18;
        v25 = 3LL;
        *(_QWORD *)&v27 = 0LL;
        *(_QWORD *)&v26 = &v34;
        *((_QWORD *)&v26 + 1) = 2LL;
        std::io::stdio::_eprint(&v24);
        core::ptr::drop_in_place<alloc::string::String>(v38[0], v38[1]);
      }
LABEL_21:
      core::ptr::drop_in_place<std::io::error::Error>(v23);
    }
    else
    {
      core::ptr::drop_in_place<core::result::Result<(),uu_rmdir::Error>>(0LL);
    }
  }
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v39);
  return 0LL;
}