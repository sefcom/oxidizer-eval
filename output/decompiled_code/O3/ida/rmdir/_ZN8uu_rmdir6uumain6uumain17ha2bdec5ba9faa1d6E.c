__int64 __fastcall uu_rmdir::uumain::uumain(__int64 a1, __int64 a2)
{
  unsigned __int8 v3; // bp
  unsigned __int8 v4; // r14
  __int64 v5; // r15
  const char *v6; // rsi
  void (__fastcall __noreturn *v7)(); // rax
  const char *v8; // rcx
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int64 v11; // rdx
  unsigned int v12; // ebp
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r15
  __int64 v17; // r12
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // r14
  __int64 v21; // rdx
  __int64 v22; // rdx
  unsigned __int8 flag; // [rsp+Fh] [rbp-3E9h]
  __int64 v24; // [rsp+10h] [rbp-3E8h] BYREF
  char **v25; // [rsp+18h] [rbp-3E0h] BYREF
  __int64 v26; // [rsp+20h] [rbp-3D8h]
  __int128 v27; // [rsp+28h] [rbp-3D0h]
  __int128 v28; // [rsp+38h] [rbp-3C0h]
  const char *v29; // [rsp+48h] [rbp-3B0h]
  __int64 v30; // [rsp+50h] [rbp-3A8h]
  __int64 v31; // [rsp+58h] [rbp-3A0h] BYREF
  __int64 v32; // [rsp+60h] [rbp-398h]
  __int64 v33; // [rsp+68h] [rbp-390h]
  char v34; // [rsp+70h] [rbp-388h]
  __int64 *v35; // [rsp+78h] [rbp-380h] BYREF
  __int64 (__fastcall *v36)(); // [rsp+80h] [rbp-378h]
  _BYTE *v37; // [rsp+88h] [rbp-370h]
  __int64 (__fastcall *v38)(); // [rsp+90h] [rbp-368h]
  _QWORD v39[2]; // [rsp+98h] [rbp-360h] BYREF
  __int128 v40; // [rsp+A8h] [rbp-350h]
  __int128 v41; // [rsp+B8h] [rbp-340h]
  const char *v42; // [rsp+C8h] [rbp-330h]
  __int64 v43; // [rsp+D0h] [rbp-328h] BYREF
  __int64 v44; // [rsp+D8h] [rbp-320h]
  __int64 v45; // [rsp+E0h] [rbp-318h]
  _BYTE v46[24]; // [rsp+E8h] [rbp-310h] BYREF
  _QWORD dest[2]; // [rsp+100h] [rbp-2F8h] BYREF
  __int128 v48; // [rsp+110h] [rbp-2E8h]
  __int128 v49; // [rsp+120h] [rbp-2D8h]
  const char *v50; // [rsp+130h] [rbp-2C8h]
  __int64 v51; // [rsp+138h] [rbp-2C0h]
  char v52[696]; // [rsp+140h] [rbp-2B8h] BYREF

  uu_rmdir::uu_app(dest);
  clap_builder::builder::command::Command::try_get_matches_from(&v25, dest, a1, a2);
  if ( v25 == (char **)0x8000000000000000LL )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v26);
  v42 = v29;
  v41 = v28;
  v40 = v27;
  v39[0] = v25;
  v39[1] = v26;
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
           v39,
           aIgnoreFailOnNo,
           *(&uu_rmdir::OPT_IGNORE_FAIL_NON_EMPTY + 1));
  v3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v39, aParents, *(&uu_rmdir::OPT_PARENTS + 1));
  v4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v39, aVerbose, *(&uu_rmdir::OPT_VERBOSE + 1));
  v5 = (__int64)*(&uu_rmdir::ARG_DIRS + 1);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(dest, v39, aDirs, v5);
  v6 = aDirs;
  clap_builder::parser::error::MatchesError::unwrap(&v25, aDirs, v5, dest);
  v7 = (void (__fastcall __noreturn *)())v25;
  if ( v25 )
  {
    v8 = (const char *)v26;
    v9 = v27;
    v10 = v28;
    v6 = v29;
    v11 = v30;
  }
  else
  {
    v10 = 0LL;
    v9 = (unsigned __int64)<clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::default::Default>::default::EMPTY;
    v8 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::default::Default>::default::EMPTY;
    v7 = core::ops::function::FnOnce::call_once;
    v11 = 0LL;
  }
  dest[0] = v7;
  dest[1] = v8;
  v48 = v9;
  v49 = v10;
  v50 = v6;
  v51 = v11;
  v12 = flag | (v3 << 8) | (v4 << 16);
  while ( 1 )
  {
    v13 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(dest);
    if ( !v13 )
      break;
    v14 = core::ops::function::impls::<impl core::ops::function::FnOnce<A> for &mut F>::call_once(v52, v13);
    if ( !v14 )
      break;
    uu_rmdir::remove(&v43, v14, v15, v12);
    if ( v43 )
    {
      v16 = v44;
      v17 = v45;
      v24 = v43;
      if ( flag && (unsigned __int8)uu_rmdir::dir_not_empty(&v24, v44, v45) )
      {
LABEL_7:
        core::ptr::drop_in_place<std::io::error::Error>(v24);
      }
      else
      {
        uucore::mods::error::set_exit_code(1LL);
        std::io::error::repr_bitpacked::decode_repr(&v25, v24);
        if ( !(_BYTE)v25 && HIDWORD(v25) == 20 )
        {
          if ( (unsigned __int8)core::slice::<impl [T]>::ends_with(v16, v17, asc_13A03, 1LL) )
          {
            v18 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v17 - 1, v16, v17);
            v20 = v19;
            if ( (unsigned __int8)std::path::Path::is_symlink(v18, v19) )
            {
              uu_rmdir::uumain::uumain::points_to_directory(&v25, v18, v20);
              if ( (_BYTE)v25 )
              {
                core::ptr::drop_in_place<core::result::Result<bool,std::io::error::Error>>((unsigned __int8)v25, v26);
LABEL_20:
                v31 = uucore::util_name();
                v32 = v21;
                v35 = &v31;
                v36 = <&T as core::fmt::Display>::fmt;
                v25 = (char **)&unk_10B238;
                v26 = 2LL;
                *(_QWORD *)&v28 = 0LL;
                *(_QWORD *)&v27 = &v35;
                *((_QWORD *)&v27 + 1) = 1LL;
                std::io::stdio::_eprint(&v25);
                v31 = 1LL;
                v32 = v16;
                v33 = v17;
                v34 = 1;
                v35 = &v31;
                v36 = <os_display::Quoted as core::fmt::Display>::fmt;
                v25 = &off_10B2B0;
                v26 = 2LL;
                *(_QWORD *)&v28 = 0LL;
                *(_QWORD *)&v27 = &v35;
                *((_QWORD *)&v27 + 1) = 1LL;
                std::io::stdio::_eprint(&v25);
                goto LABEL_7;
              }
              if ( BYTE1(v25) )
                goto LABEL_20;
            }
          }
        }
        v31 = uucore::util_name();
        v32 = v22;
        v35 = &v31;
        v36 = <&T as core::fmt::Display>::fmt;
        v25 = (char **)&unk_10B238;
        v26 = 2LL;
        *(_QWORD *)&v28 = 0LL;
        *(_QWORD *)&v27 = &v35;
        *((_QWORD *)&v27 + 1) = 1LL;
        std::io::stdio::_eprint(&v25);
        v31 = 1LL;
        v32 = v16;
        v33 = v17;
        v34 = 1;
        uucore::mods::error::strip_errno(v46, &v24);
        v35 = &v31;
        v36 = <os_display::Quoted as core::fmt::Display>::fmt;
        v37 = v46;
        v38 = <alloc::string::String as core::fmt::Display>::fmt;
        v25 = &off_10B2D0;
        v26 = 3LL;
        *(_QWORD *)&v28 = 0LL;
        *(_QWORD *)&v27 = &v35;
        *((_QWORD *)&v27 + 1) = 2LL;
        std::io::stdio::_eprint(&v25);
        core::ptr::drop_in_place<alloc::string::String>(v46);
        core::ptr::drop_in_place<std::io::error::Error>(v24);
      }
    }
  }
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v39);
  return 0LL;
}
