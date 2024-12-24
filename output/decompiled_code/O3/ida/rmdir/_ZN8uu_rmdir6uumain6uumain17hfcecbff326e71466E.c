__int64 __fastcall uu_rmdir::uumain::uumain(__int64 a1, __int64 a2)
{
  unsigned __int8 v3; // bl
  unsigned __int8 v4; // bp
  __int64 v5; // r15
  const char *v6; // rsi
  void (__fastcall __noreturn *v7)(); // rax
  const char *v8; // rcx
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int64 v11; // rdx
  int v12; // ebp
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 v17; // r12
  __int64 v18; // r15
  __int64 v19; // rdx
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
  _BYTE *v36; // [rsp+88h] [rbp-370h]
  __int64 (__fastcall *v37)(); // [rsp+90h] [rbp-368h]
  _QWORD v38[2]; // [rsp+98h] [rbp-360h] BYREF
  __int128 v39; // [rsp+A8h] [rbp-350h]
  __int128 v40; // [rsp+B8h] [rbp-340h]
  const char *v41; // [rsp+C8h] [rbp-330h]
  __int64 v42; // [rsp+D0h] [rbp-328h] BYREF
  __int64 v43; // [rsp+D8h] [rbp-320h]
  __int64 v44; // [rsp+E0h] [rbp-318h]
  _BYTE v45[24]; // [rsp+E8h] [rbp-310h] BYREF
  _QWORD dest[2]; // [rsp+100h] [rbp-2F8h] BYREF
  __int128 v47; // [rsp+110h] [rbp-2E8h]
  __int128 v48; // [rsp+120h] [rbp-2D8h]
  const char *v49; // [rsp+130h] [rbp-2C8h]
  __int64 v50; // [rsp+138h] [rbp-2C0h]
  char v51[696]; // [rsp+140h] [rbp-2B8h] BYREF

  uu_rmdir::uu_app(dest);
  clap_builder::builder::command::Command::try_get_matches_from(&v24, dest, a1, a2);
  if ( v24 == (char **)0x8000000000000000LL )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v25);
  v41 = v28;
  v40 = v27;
  v39 = v26;
  v38[0] = v24;
  v38[1] = v25;
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
           v38,
           aIgnoreFailOnNo,
           *(&uu_rmdir::OPT_IGNORE_FAIL_NON_EMPTY + 1));
  v3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v38, aParents, *(&uu_rmdir::OPT_PARENTS + 1));
  v4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v38, aVerbose, *(&uu_rmdir::OPT_VERBOSE + 1));
  v5 = (__int64)*(&uu_rmdir::ARG_DIRS + 1);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(dest, v38, aDirs, v5);
  v6 = aDirs;
  clap_builder::parser::error::MatchesError::unwrap(&v24, aDirs, v5, dest);
  v7 = (void (__fastcall __noreturn *)())v24;
  if ( v24 )
  {
    v8 = (const char *)v25;
    v9 = v26;
    v10 = v27;
    v6 = v28;
    v11 = v29;
  }
  else
  {
    v10 = 0LL;
    v9 = (unsigned __int64)"&";
    v8 = "&";
    v7 = core::ops::function::FnOnce::call_once;
    v11 = 0LL;
  }
  dest[0] = v7;
  dest[1] = v8;
  v47 = v9;
  v48 = v10;
  v49 = v6;
  v50 = v11;
  v12 = flag | (v3 << 8) | (v4 << 16);
  while ( 1 )
  {
    v13 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(dest);
    if ( !v13 )
      break;
    v14 = core::ops::function::impls::<impl core::ops::function::FnOnce<A> for &mut F>::call_once(v51, v13);
    uu_rmdir::remove(&v42, v14, v15, v12);
    if ( v42 )
    {
      v16 = v43;
      v17 = v44;
      v23 = v42;
      if ( flag && uu_rmdir::dir_not_empty(&v23, v43, v44) )
      {
LABEL_7:
        core::ptr::drop_in_place<std::io::error::Error>(v23);
      }
      else
      {
        uucore::mods::error::set_exit_code(1LL);
        std::io::error::repr_bitpacked::decode_repr(&v24, v23);
        if ( !(_BYTE)v24 && HIDWORD(v24) == 20 )
        {
          if ( (unsigned __int8)core::slice::<impl [T]>::ends_with(v16, v17, asc_13AD7, 1LL) )
          {
            v18 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v17 - 1, v16, v17);
            if ( (unsigned __int8)std::path::Path::is_symlink(v18, v19) )
            {
              uu_rmdir::uumain::uumain::points_to_directory((__int64)&v24);
              if ( (_BYTE)v24 )
              {
                core::ptr::drop_in_place<core::result::Result<bool,std::io::error::Error>>((unsigned __int8)v24, v25);
LABEL_19:
                v30 = uucore::util_name();
                v31 = v20;
                v34 = &v30;
                v35 = <&T as core::fmt::Display>::fmt;
                v24 = (char **)&unk_10C680;
                v25 = 2LL;
                *(_QWORD *)&v27 = 0LL;
                *(_QWORD *)&v26 = &v34;
                *((_QWORD *)&v26 + 1) = 1LL;
                std::io::stdio::_eprint(&v24);
                v30 = 1LL;
                v31 = v16;
                v32 = v17;
                v33 = 1;
                v34 = &v30;
                v35 = <os_display::Quoted as core::fmt::Display>::fmt;
                v24 = &off_10C728;
                v25 = 2LL;
                *(_QWORD *)&v27 = 0LL;
                *(_QWORD *)&v26 = &v34;
                *((_QWORD *)&v26 + 1) = 1LL;
                std::io::stdio::_eprint(&v24);
                goto LABEL_7;
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
        v24 = (char **)&unk_10C680;
        v25 = 2LL;
        *(_QWORD *)&v27 = 0LL;
        *(_QWORD *)&v26 = &v34;
        *((_QWORD *)&v26 + 1) = 1LL;
        std::io::stdio::_eprint(&v24);
        v30 = 1LL;
        v31 = v16;
        v32 = v17;
        v33 = 1;
        uucore::mods::error::strip_errno(v45, &v23);
        v34 = &v30;
        v35 = <os_display::Quoted as core::fmt::Display>::fmt;
        v36 = v45;
        v37 = <alloc::string::String as core::fmt::Display>::fmt;
        v24 = &off_10C6F8;
        v25 = 3LL;
        *(_QWORD *)&v27 = 0LL;
        *(_QWORD *)&v26 = &v34;
        *((_QWORD *)&v26 + 1) = 2LL;
        std::io::stdio::_eprint(&v24);
        core::ptr::drop_in_place<alloc::string::String>(v45);
        core::ptr::drop_in_place<std::io::error::Error>(v23);
      }
    }
  }
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v38);
  return 0LL;
}
