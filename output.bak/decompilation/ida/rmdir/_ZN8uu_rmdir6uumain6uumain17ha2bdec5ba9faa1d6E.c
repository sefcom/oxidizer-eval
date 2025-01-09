__int64 __fastcall uu_rmdir::uumain::uumain(__int64 a1, __int64 a2)
{
  unsigned __int8 v3; // bp
  __int64 v4; // r15
  const char *v5; // rsi
  void (__fastcall __noreturn *v6)(); // rax
  const char *v7; // rcx
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int64 v10; // rdx
  __int16 v11; // bp
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r15
  __int64 v16; // r12
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rdx
  unsigned __int8 flag; // [rsp+Fh] [rbp-3E9h]
  __int64 v22; // [rsp+10h] [rbp-3E8h] BYREF
  char **v23; // [rsp+18h] [rbp-3E0h] BYREF
  __int64 v24; // [rsp+20h] [rbp-3D8h]
  __int128 v25; // [rsp+28h] [rbp-3D0h]
  __int128 v26; // [rsp+38h] [rbp-3C0h]
  const char *v27; // [rsp+48h] [rbp-3B0h]
  __int64 v28; // [rsp+50h] [rbp-3A8h]
  __int64 v29; // [rsp+58h] [rbp-3A0h] BYREF
  __int64 v30; // [rsp+60h] [rbp-398h]
  __int64 v31; // [rsp+68h] [rbp-390h]
  char v32; // [rsp+70h] [rbp-388h]
  __int64 *v33; // [rsp+78h] [rbp-380h] BYREF
  __int64 (__fastcall *v34)(); // [rsp+80h] [rbp-378h]
  _BYTE *v35; // [rsp+88h] [rbp-370h]
  __int64 (__fastcall *v36)(); // [rsp+90h] [rbp-368h]
  _QWORD v37[2]; // [rsp+98h] [rbp-360h] BYREF
  __int128 v38; // [rsp+A8h] [rbp-350h]
  __int128 v39; // [rsp+B8h] [rbp-340h]
  const char *v40; // [rsp+C8h] [rbp-330h]
  __int64 v41; // [rsp+D0h] [rbp-328h] BYREF
  __int64 v42; // [rsp+D8h] [rbp-320h]
  __int64 v43; // [rsp+E0h] [rbp-318h]
  _BYTE v44[24]; // [rsp+E8h] [rbp-310h] BYREF
  _QWORD dest[2]; // [rsp+100h] [rbp-2F8h] BYREF
  __int128 v46; // [rsp+110h] [rbp-2E8h]
  __int128 v47; // [rsp+120h] [rbp-2D8h]
  const char *v48; // [rsp+130h] [rbp-2C8h]
  __int64 v49; // [rsp+138h] [rbp-2C0h]
  char v50[696]; // [rsp+140h] [rbp-2B8h] BYREF

  uu_rmdir::uu_app(dest);
  clap_builder::builder::command::Command::try_get_matches_from(&v23, dest, a1, a2);
  if ( v23 == (char **)0x8000000000000000LL )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v24);
  v40 = v27;
  v39 = v26;
  v38 = v25;
  v37[0] = v23;
  v37[1] = v24;
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
           v37,
           aIgnoreFailOnNo,
           *(&uu_rmdir::OPT_IGNORE_FAIL_NON_EMPTY + 1));
  v3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v37, aParents, *(&uu_rmdir::OPT_PARENTS + 1));
  clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v37, aVerbose, *(&uu_rmdir::OPT_VERBOSE + 1));
  v4 = (__int64)*(&uu_rmdir::ARG_DIRS + 1);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(dest, v37, aDirs, v4);
  v5 = aDirs;
  clap_builder::parser::error::MatchesError::unwrap(&v23, aDirs, v4, dest);
  v6 = (void (__fastcall __noreturn *)())v23;
  if ( v23 )
  {
    v7 = (const char *)v24;
    v8 = v25;
    v9 = v26;
    v5 = v27;
    v10 = v28;
  }
  else
  {
    v9 = 0LL;
    v8 = (unsigned __int64)<clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::default::Default>::default::EMPTY;
    v7 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::default::Default>::default::EMPTY;
    v6 = core::ops::function::FnOnce::call_once;
    v10 = 0LL;
  }
  dest[0] = v6;
  dest[1] = v7;
  v46 = v8;
  v47 = v9;
  v48 = v5;
  v49 = v10;
  v11 = flag | (v3 << 8);
  while ( 1 )
  {
    v12 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(dest);
    if ( !v12 )
      break;
    v13 = core::ops::function::impls::<impl core::ops::function::FnOnce<A> for &mut F>::call_once(v50, v12);
    if ( !v13 )
      break;
    uu_rmdir::remove(&v41, v13, v14, v11);
    if ( v41 )
    {
      v15 = v42;
      v16 = v43;
      v22 = v41;
      if ( flag && uu_rmdir::dir_not_empty(&v22, v42, v43) )
      {
LABEL_7:
        core::ptr::drop_in_place<std::io::error::Error>(v22);
      }
      else
      {
        uucore::mods::error::set_exit_code(1LL);
        std::io::error::repr_bitpacked::decode_repr(&v23, v22);
        if ( !(_BYTE)v23 && HIDWORD(v23) == 20 )
        {
          if ( (unsigned __int8)core::slice::<impl [T]>::ends_with(v15, v16, asc_13A03, 1LL) )
          {
            v17 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v16 - 1, v15, v16);
            if ( (unsigned __int8)std::path::Path::is_symlink(v17, v18) )
            {
              uu_rmdir::uumain::uumain::points_to_directory((__int64)&v23);
              if ( (_BYTE)v23 )
              {
                core::ptr::drop_in_place<core::result::Result<bool,std::io::error::Error>>((unsigned __int8)v23, v24);
LABEL_20:
                v29 = uucore::util_name();
                v30 = v19;
                v33 = &v29;
                v34 = <&T as core::fmt::Display>::fmt;
                v23 = (char **)&unk_10B238;
                v24 = 2LL;
                *(_QWORD *)&v26 = 0LL;
                *(_QWORD *)&v25 = &v33;
                *((_QWORD *)&v25 + 1) = 1LL;
                std::io::stdio::_eprint(&v23);
                v29 = 1LL;
                v30 = v15;
                v31 = v16;
                v32 = 1;
                v33 = &v29;
                v34 = <os_display::Quoted as core::fmt::Display>::fmt;
                v23 = &off_10B2B0;
                v24 = 2LL;
                *(_QWORD *)&v26 = 0LL;
                *(_QWORD *)&v25 = &v33;
                *((_QWORD *)&v25 + 1) = 1LL;
                std::io::stdio::_eprint(&v23);
                goto LABEL_7;
              }
              if ( BYTE1(v23) )
                goto LABEL_20;
            }
          }
        }
        v29 = uucore::util_name();
        v30 = v20;
        v33 = &v29;
        v34 = <&T as core::fmt::Display>::fmt;
        v23 = (char **)&unk_10B238;
        v24 = 2LL;
        *(_QWORD *)&v26 = 0LL;
        *(_QWORD *)&v25 = &v33;
        *((_QWORD *)&v25 + 1) = 1LL;
        std::io::stdio::_eprint(&v23);
        v29 = 1LL;
        v30 = v15;
        v31 = v16;
        v32 = 1;
        uucore::mods::error::strip_errno(v44, &v22);
        v33 = &v29;
        v34 = <os_display::Quoted as core::fmt::Display>::fmt;
        v35 = v44;
        v36 = <alloc::string::String as core::fmt::Display>::fmt;
        v23 = &off_10B2D0;
        v24 = 3LL;
        *(_QWORD *)&v26 = 0LL;
        *(_QWORD *)&v25 = &v33;
        *((_QWORD *)&v25 + 1) = 2LL;
        std::io::stdio::_eprint(&v23);
        core::ptr::drop_in_place<alloc::string::String>(v44);
        core::ptr::drop_in_place<std::io::error::Error>(v22);
      }
    }
  }
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v37);
  return 0LL;
}
