__int64 __fastcall uu_link::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 (__fastcall *v3)(); // rdx
  __int64 (__fastcall *v4)(); // r15
  __int64 v5; // r8
  __int64 v6; // r9
  __int128 v7; // rax
  __int128 v8; // rax
  unsigned int v9; // ebx
  _QWORD *v10; // r14
  __int64 (__fastcall *v11)(); // r15
  __int64 v12; // rsi
  __int64 v13; // r15
  void (__fastcall __noreturn *v14)(); // rdx
  const char *v15; // rsi
  __int128 v16; // xmm0
  __int64 v17; // rdi
  __int64 v18; // r8
  void *v19; // r14
  size_t v20; // r15
  __int64 v21; // rax
  void *v22; // r12
  size_t v23; // r13
  __int64 v24; // rax
  __int64 (__fastcall *v25)(); // rdx
  char **v27; // rdx
  __int64 v28; // rdi
  __int128 v29; // [rsp+0h] [rbp-3D8h] BYREF
  __int128 v30; // [rsp+10h] [rbp-3C8h]
  __int128 v31; // [rsp+20h] [rbp-3B8h]
  __int64 v32; // [rsp+30h] [rbp-3A8h]
  _QWORD *v33; // [rsp+38h] [rbp-3A0h] BYREF
  __int64 (__fastcall *v34)(); // [rsp+40h] [rbp-398h]
  __m256i *v35; // [rsp+48h] [rbp-390h]
  __int64 (__fastcall *v36)(); // [rsp+50h] [rbp-388h]
  _OWORD v37[3]; // [rsp+58h] [rbp-380h] BYREF
  __int64 v38; // [rsp+88h] [rbp-350h]
  __m256i v39; // [rsp+90h] [rbp-348h] BYREF
  __int64 v40; // [rsp+B0h] [rbp-328h]
  _QWORD v41[2]; // [rsp+C0h] [rbp-318h] BYREF
  __int64 v42; // [rsp+D0h] [rbp-308h] BYREF
  __int64 v43; // [rsp+D8h] [rbp-300h]
  __int64 v44; // [rsp+E0h] [rbp-2F8h]
  char **dest; // [rsp+E8h] [rbp-2F0h] BYREF
  __m256i v46; // [rsp+F0h] [rbp-2E8h]
  __int64 v47; // [rsp+110h] [rbp-2C8h]
  __int64 v48; // [rsp+118h] [rbp-2C0h]
  __int64 v49; // [rsp+120h] [rbp-2B8h]
  __int64 v50; // [rsp+128h] [rbp-2B0h]

  uu_link::uu_app(&dest);
  clap_builder::builder::command::Command::try_get_matches_from(&v29, &dest, a1, a2);
  if ( (_QWORD)v29 != 0x8000000000000000LL )
  {
    v38 = v32;
    v37[2] = v31;
    v37[1] = v30;
    v37[0] = v29;
    v13 = (__int64)*(&uu_link::options::FILES + 1);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&dest, v37, aFiles, v13);
    v41[0] = aFiles;
    v41[1] = v13;
    if ( dest )
    {
      v40 = v47;
      v39 = v46;
      v33 = v41;
      v34 = <&T as core::fmt::Display>::fmt;
      v35 = &v39;
      v36 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
      *(_QWORD *)&v29 = &off_D78C0;
      *((_QWORD *)&v29 + 1) = 2LL;
      *(_QWORD *)&v31 = 0LL;
      *(_QWORD *)&v30 = &v33;
      *((_QWORD *)&v30 + 1) = 2LL;
      ((void (__fastcall __noreturn *)(__int128 *, char **))core::panicking::panic_fmt)(&v29, &off_D78E0);
    }
    v14 = (void (__fastcall __noreturn *)())v46.m256i_i64[0];
    if ( v46.m256i_i64[0] )
    {
      v15 = (const char *)v46.m256i_i64[1];
      v16 = *(_OWORD *)&v46.m256i_u64[2];
      v17 = v48;
      v18 = v50;
    }
    else
    {
      v16 = (unsigned __int64)"&";
      v15 = "&";
      v14 = core::ops::function::FnOnce::call_once;
      v17 = 0LL;
      v18 = 0LL;
    }
    dest = (char **)v14;
    v46.m256i_i64[0] = (__int64)v15;
    *(_OWORD *)&v46.m256i_u64[1] = v16;
    v46.m256i_i64[3] = v47;
    v47 = v17;
    v48 = v49;
    v49 = v18;
    <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v29, &dest);
    if ( (_QWORD)v30 )
    {
      if ( (_QWORD)v30 != 1LL )
      {
        v19 = *(void **)(**((_QWORD **)&v29 + 1) + 8LL);
        v20 = *(_QWORD *)(**((_QWORD **)&v29 + 1) + 16LL);
        v21 = *(_QWORD *)(*((_QWORD *)&v29 + 1) + 8LL);
        v22 = *(void **)(v21 + 8);
        v23 = *(_QWORD *)(v21 + 16);
        v24 = std::sys::pal::unix::fs::link(v19, v20, v22, v23);
        dest = (char **)v22;
        v46.m256i_i64[0] = v23;
        v46.m256i_i64[1] = (__int64)v19;
        v46.m256i_i64[2] = v20;
        v2 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
               v24,
               &dest);
        v4 = v25;
        <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v29);
        <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v29);
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v37);
        if ( v2 )
          goto LABEL_3;
        return (unsigned int)uucore::mods::error::get_exit_code();
      }
      v27 = &off_D7970;
      v28 = 1LL;
    }
    else
    {
      v27 = &off_D7958;
      v28 = 0LL;
    }
    core::panicking::panic_bounds_check(v28, v28, v27);
  }
  v2 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((_QWORD *)&v29 + 1));
  v4 = v3;
  if ( !v2 )
    return (unsigned int)uucore::mods::error::get_exit_code();
LABEL_3:
  v33 = (_QWORD *)v2;
  v34 = v4;
  *(_QWORD *)&v29 = &v33;
  *((_QWORD *)&v29 + 1) = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
  dest = (char **)&anon_a15cc2d3895659decb08e547ee58be7a_73_llvm_5555830998822834654;
  v46.m256i_i64[0] = 1LL;
  v46.m256i_i64[1] = (__int64)&v29;
  *(_OWORD *)&v46.m256i_u64[2] = 1uLL;
  alloc::fmt::format::format_inner(&v42, &dest);
  if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v43, v44, 1LL, 0LL, v5, v6, v42, v43, v44) )
  {
    *(_QWORD *)&v7 = uucore::util_name();
    v37[0] = v7;
    v39.m256i_i64[0] = (__int64)v37;
    v39.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
    dest = (char **)&unk_D78F8;
    v46.m256i_i64[0] = 2LL;
    v46.m256i_i64[1] = (__int64)&v39;
    *(_OWORD *)&v46.m256i_u64[2] = 1uLL;
    std::io::stdio::_eprint(&dest);
    *(_QWORD *)&v37[0] = &v29;
    *((_QWORD *)&v37[0] + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    dest = (char **)&unk_D7918;
    v46.m256i_i64[0] = 2LL;
    v46.m256i_i64[1] = (__int64)v37;
    *(_OWORD *)&v46.m256i_u64[2] = 1uLL;
    std::io::stdio::_eprint(&dest);
  }
  if ( (*((unsigned __int8 (__fastcall **)(_QWORD *))v34 + 13))(v33) )
  {
    *(_QWORD *)&v8 = uucore::execution_phrase();
    v37[0] = v8;
    v39.m256i_i64[0] = (__int64)v37;
    v39.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
    dest = &off_D7938;
    v46.m256i_i64[0] = 2LL;
    v46.m256i_i64[1] = (__int64)&v39;
    *(_OWORD *)&v46.m256i_u64[2] = 1uLL;
    std::io::stdio::_eprint(&dest);
  }
  v9 = (*((__int64 (__fastcall **)(_QWORD *))v34 + 12))(v33);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v29);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v29);
  v10 = v33;
  v11 = v34;
  if ( *(_QWORD *)v34 )
    (*(void (__fastcall **)(_QWORD *))v34)(v33);
  v12 = *((_QWORD *)v11 + 1);
  if ( v12 )
    _rust_dealloc(v10, v12, *((_QWORD *)v11 + 2));
  return v9;
}
