__int64 __fastcall uu_rmdir::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 (__fastcall *v3)(); // rdx
  __int128 v4; // rax
  __int128 v5; // rax
  unsigned int v6; // ebx
  __m256i *v7; // r14
  __int64 (__fastcall *v8)(); // r15
  __int64 v9; // rsi
  unsigned __int8 v10; // bp
  unsigned __int8 v11; // r14
  __int64 v12; // r15
  void (__fastcall __noreturn *v13)(); // rdx
  const char *v14; // rsi
  __int128 v15; // xmm0
  __int64 v16; // r8
  __int64 v17; // rdi
  unsigned int v18; // ebp
  __int64 v19; // rax
  __int64 v20; // r15
  __int64 v21; // r13
  unsigned __int64 v22; // rcx
  __int128 v23; // rax
  __int128 v24; // rax
  unsigned __int8 flag; // [rsp+7h] [rbp-411h]
  __m256i *v27; // [rsp+8h] [rbp-410h] BYREF
  __int64 (__fastcall *v28)(); // [rsp+10h] [rbp-408h]
  __m256i *v29; // [rsp+18h] [rbp-400h]
  __int64 (__fastcall *v30)(); // [rsp+20h] [rbp-3F8h]
  __int64 v31; // [rsp+28h] [rbp-3F0h] BYREF
  __int128 v32; // [rsp+30h] [rbp-3E8h] BYREF
  __int128 v33; // [rsp+40h] [rbp-3D8h]
  __int128 v34; // [rsp+50h] [rbp-3C8h]
  __int64 v35; // [rsp+60h] [rbp-3B8h]
  __m256i v36; // [rsp+70h] [rbp-3A8h] BYREF
  __int64 v37; // [rsp+90h] [rbp-388h]
  _OWORD v38[3]; // [rsp+A0h] [rbp-378h] BYREF
  __int64 v39; // [rsp+D0h] [rbp-348h]
  _QWORD v40[3]; // [rsp+D8h] [rbp-340h] BYREF
  __int64 v41; // [rsp+F0h] [rbp-328h] BYREF
  __int64 v42; // [rsp+F8h] [rbp-320h]
  __int64 v43; // [rsp+100h] [rbp-318h]
  __int128 v44; // [rsp+108h] [rbp-310h] BYREF
  __int64 v45; // [rsp+118h] [rbp-300h]
  char **v46; // [rsp+120h] [rbp-2F8h] BYREF
  __m256i v47; // [rsp+128h] [rbp-2F0h]
  __int64 v48; // [rsp+148h] [rbp-2D0h]
  __int64 v49; // [rsp+150h] [rbp-2C8h]
  __int64 v50; // [rsp+158h] [rbp-2C0h]
  __int64 v51; // [rsp+160h] [rbp-2B8h]

  uu_rmdir::uu_app(&v46);
  clap_builder::builder::command::Command::try_get_matches_from(&v32, &v46, a1, a2);
  if ( (_QWORD)v32 == 0x8000000000000000LL )
  {
    v2 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((_QWORD *)&v32 + 1));
    if ( !v2 )
      return (unsigned int)uucore::mods::error::get_exit_code();
    v27 = (__m256i *)v2;
    v28 = v3;
    *(_QWORD *)&v32 = &v27;
    *((_QWORD *)&v32 + 1) = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
    v46 = (char **)&anon_a15cc2d3895659decb08e547ee58be7a_73_llvm_5555830998822834654;
    v47.m256i_i64[0] = 1LL;
    v47.m256i_i64[1] = (__int64)&v32;
    *(_OWORD *)&v47.m256i_u64[2] = 1uLL;
    alloc::fmt::format::format_inner(&v44, &v46);
    v32 = v44;
    *(_QWORD *)&v33 = v45;
    if ( v45 )
    {
      *(_QWORD *)&v4 = uucore::util_name();
      v38[0] = v4;
      v36.m256i_i64[0] = (__int64)v38;
      v36.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
      v46 = (char **)&unk_D9850;
      v47.m256i_i64[0] = 2LL;
      v47.m256i_i64[1] = (__int64)&v36;
      *(_OWORD *)&v47.m256i_u64[2] = 1uLL;
      std::io::stdio::_eprint(&v46);
      *(_QWORD *)&v38[0] = &v32;
      *((_QWORD *)&v38[0] + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      v46 = (char **)&unk_D9870;
      v47.m256i_i64[0] = 2LL;
      v47.m256i_i64[1] = (__int64)v38;
      *(_OWORD *)&v47.m256i_u64[2] = 1uLL;
      std::io::stdio::_eprint(&v46);
    }
    if ( (*((unsigned __int8 (__fastcall **)(__m256i *))v28 + 13))(v27) )
    {
      *(_QWORD *)&v5 = uucore::execution_phrase();
      v38[0] = v5;
      v36.m256i_i64[0] = (__int64)v38;
      v36.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
      v46 = &off_D9890;
      v47.m256i_i64[0] = 2LL;
      v47.m256i_i64[1] = (__int64)&v36;
      *(_OWORD *)&v47.m256i_u64[2] = 1uLL;
      std::io::stdio::_eprint(&v46);
    }
    v6 = (*((__int64 (__fastcall **)(__m256i *))v28 + 12))(v27);
    <core::array::iter::IntoIter<T,_> as core::ops::drop::Drop>::drop(&v32);
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v32);
    v7 = v27;
    v8 = v28;
    if ( *(_QWORD *)v28 )
      (*(void (__fastcall **)(__m256i *))v28)(v27);
    v9 = *((_QWORD *)v8 + 1);
    if ( v9 )
      _rust_dealloc(v7, v9, *((_QWORD *)v8 + 2));
    return v6;
  }
  v39 = v35;
  v38[2] = v34;
  v38[1] = v33;
  v38[0] = v32;
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
           v38,
           aIgnoreFailOnNo,
           *(&uu_rmdir::OPT_IGNORE_FAIL_NON_EMPTY + 1));
  v10 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v38, aParents, *(&uu_rmdir::OPT_PARENTS + 1));
  v11 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v38, aVerbose, *(&uu_rmdir::OPT_VERBOSE + 1));
  v12 = (__int64)*(&uu_rmdir::ARG_DIRS + 1);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v46, v38, aDirs, v12);
  v40[0] = aDirs;
  v40[1] = v12;
  if ( v46 )
  {
    v37 = v48;
    v36 = v47;
    v27 = (__m256i *)v40;
    v28 = <&T as core::fmt::Display>::fmt;
    v29 = &v36;
    v30 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    *(_QWORD *)&v32 = &off_D97E8;
    *((_QWORD *)&v32 + 1) = 2LL;
    *(_QWORD *)&v34 = 0LL;
    *(_QWORD *)&v33 = &v27;
    *((_QWORD *)&v33 + 1) = 2LL;
    core::panicking::panic_fmt(&v32, &off_D9808);
  }
  v13 = (void (__fastcall __noreturn *)())v47.m256i_i64[0];
  if ( v47.m256i_i64[0] )
  {
    v14 = (const char *)v47.m256i_i64[1];
    v15 = *(_OWORD *)&v47.m256i_u64[2];
    v16 = v49;
    v17 = v51;
  }
  else
  {
    v15 = (unsigned __int64)"&";
    v14 = "&";
    v13 = core::ops::function::FnOnce::call_once;
    v17 = 0LL;
    v16 = 0LL;
  }
  v46 = (char **)v13;
  v47.m256i_i64[0] = (__int64)v14;
  *(_OWORD *)&v47.m256i_u64[1] = v15;
  v47.m256i_i64[3] = v48;
  v48 = v16;
  v49 = v50;
  v50 = v17;
  v18 = flag | (v10 << 8) | (v11 << 16);
  while ( 1 )
  {
    v19 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v46);
    if ( !v19 )
      break;
    uu_rmdir::remove(&v41, *(_QWORD *)(v19 + 8), *(_QWORD *)(v19 + 16), v18);
    if ( v41 )
    {
      v20 = v42;
      v21 = v43;
      v31 = v41;
      if ( flag && (unsigned __int8)uu_rmdir::dir_not_empty(&v31, v42, v43) )
      {
LABEL_16:
        core::ptr::drop_in_place<std::io::error::Error>(v31);
      }
      else
      {
        uucore::mods::error::set_exit_code(1LL);
        v22 = v31 & 3;
        if ( v22 >= 2
          && (_DWORD)v22 == 2
          && HIDWORD(v31) == 20
          && (unsigned __int8)core::slice::<impl [T]>::ends_with(v20, v21, asc_10047, 1LL) )
        {
          if ( !v21 )
            core::slice::index::slice_end_index_len_fail(-1LL, 0LL, &off_D98B0);
          if ( (unsigned __int8)std::path::Path::is_symlink(v20, v21 - 1) )
          {
            uu_rmdir::uumain::uumain::points_to_directory(&v32, v20, v21 - 1);
            if ( (_BYTE)v32 )
            {
              core::ptr::drop_in_place<std::io::error::Error>(*((_QWORD *)&v32 + 1));
LABEL_30:
              *(_QWORD *)&v23 = uucore::util_name();
              *(_OWORD *)v36.m256i_i8 = v23;
              v27 = &v36;
              v28 = <&T as core::fmt::Display>::fmt;
              *(_QWORD *)&v32 = &unk_D9850;
              *((_QWORD *)&v32 + 1) = 2LL;
              *(_QWORD *)&v34 = 0LL;
              *(_QWORD *)&v33 = &v27;
              *((_QWORD *)&v33 + 1) = 1LL;
              std::io::stdio::_eprint(&v32);
              v36.m256i_i64[0] = 1LL;
              v36.m256i_i64[1] = v20;
              v36.m256i_i64[2] = v21;
              v36.m256i_i8[24] = 1;
              v27 = &v36;
              v28 = <os_display::Quoted as core::fmt::Display>::fmt;
              *(_QWORD *)&v32 = &off_D98F8;
              *((_QWORD *)&v32 + 1) = 2LL;
              *(_QWORD *)&v34 = 0LL;
              *(_QWORD *)&v33 = &v27;
              *((_QWORD *)&v33 + 1) = 1LL;
              std::io::stdio::_eprint(&v32);
              goto LABEL_16;
            }
            if ( BYTE1(v32) )
              goto LABEL_30;
          }
        }
        *(_QWORD *)&v24 = uucore::util_name();
        *(_OWORD *)v36.m256i_i8 = v24;
        v27 = &v36;
        v28 = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v32 = &unk_D9850;
        *((_QWORD *)&v32 + 1) = 2LL;
        *(_QWORD *)&v34 = 0LL;
        *(_QWORD *)&v33 = &v27;
        *((_QWORD *)&v33 + 1) = 1LL;
        std::io::stdio::_eprint(&v32);
        v36.m256i_i64[0] = 1LL;
        v36.m256i_i64[1] = v20;
        v36.m256i_i64[2] = v21;
        v36.m256i_i8[24] = 1;
        uucore::mods::error::strip_errno(v40, &v31);
        v27 = &v36;
        v28 = <os_display::Quoted as core::fmt::Display>::fmt;
        v29 = (__m256i *)v40;
        v30 = <alloc::string::String as core::fmt::Display>::fmt;
        *(_QWORD *)&v32 = &off_D98C8;
        *((_QWORD *)&v32 + 1) = 3LL;
        *(_QWORD *)&v34 = 0LL;
        *(_QWORD *)&v33 = &v27;
        *((_QWORD *)&v33 + 1) = 2LL;
        std::io::stdio::_eprint(&v32);
        <core::array::iter::IntoIter<T,_> as core::ops::drop::Drop>::drop(v40);
        <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v40);
        core::ptr::drop_in_place<std::io::error::Error>(v31);
      }
    }
  }
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v38);
  return (unsigned int)uucore::mods::error::get_exit_code();
}
