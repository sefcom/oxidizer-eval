__int64 __fastcall uu_mkdir::uumain(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // bp
  __int64 v3; // r12
  __int64 (__fastcall **v4)(); // rdx
  __int64 (__fastcall **v5)(); // r13
  __int64 (__fastcall *v6)(); // rdx
  __int64 (__fastcall *v7)(); // rdx
  unsigned int v8; // ebx
  __int128 v9; // kr00_16
  __int64 v10; // rsi
  void (__fastcall __noreturn *v11)(); // r14
  __int64 v12; // r15
  unsigned __int8 flag; // r12
  unsigned __int8 v14; // r13
  __int64 (__fastcall **v15)(); // rdx
  _OWORD *v16; // rax
  __int128 v17; // xmm0
  __int128 v19; // [rsp+8h] [rbp-6A0h] BYREF
  __int64 v20; // [rsp+18h] [rbp-690h]
  const char *v21; // [rsp+20h] [rbp-688h]
  _OWORD **p_p_dest; // [rsp+28h] [rbp-680h] BYREF
  __int64 (__fastcall *v23)(); // [rsp+30h] [rbp-678h]
  __int128 v24; // [rsp+38h] [rbp-670h]
  __int128 v25; // [rsp+48h] [rbp-660h]
  __int64 v26; // [rsp+58h] [rbp-650h]
  __int128 *p_dest; // [rsp+60h] [rbp-648h] BYREF
  __int64 (__fastcall *v28)(); // [rsp+68h] [rbp-640h]
  __int128 v29; // [rsp+70h] [rbp-638h]
  __int128 v30; // [rsp+80h] [rbp-628h]
  __int64 v31; // [rsp+90h] [rbp-618h]
  __int64 v32; // [rsp+98h] [rbp-610h]
  __int128 v33; // [rsp+A0h] [rbp-608h]
  __int128 v34; // [rsp+B0h] [rbp-5F8h]
  __int128 v35; // [rsp+C8h] [rbp-5E0h] BYREF
  __int64 v36; // [rsp+D8h] [rbp-5D0h]
  __int128 src; // [rsp+E0h] [rbp-5C8h] BYREF
  __int128 v38; // [rsp+F0h] [rbp-5B8h]
  __int128 v39; // [rsp+100h] [rbp-5A8h]
  __int64 v40; // [rsp+110h] [rbp-598h]
  __int64 v41; // [rsp+118h] [rbp-590h]
  __int128 dest; // [rsp+3B0h] [rbp-2F8h] BYREF
  __int128 v43; // [rsp+3C0h] [rbp-2E8h]
  __int128 v44; // [rsp+3D0h] [rbp-2D8h]
  __int64 v45; // [rsp+3E0h] [rbp-2C8h]
  __int64 v46; // [rsp+3E8h] [rbp-2C0h]

  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v19, a1, a2);
  v2 = uu_mkdir::strip_minus_from_mode(&v19);
  uu_mkdir::uu_app(&src);
  clap_builder::builder::command::Command::after_help(&dest, &src);
  *(_QWORD *)&v38 = v20;
  src = v19;
  clap_builder::builder::command::Command::try_get_matches_from(&p_dest, &dest, &src);
  if ( p_dest != (__int128 *)0x8000000000000000LL )
  {
    v26 = v31;
    v25 = v30;
    v24 = v29;
    p_p_dest = (_OWORD **)p_dest;
    v23 = v28;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&src, &p_p_dest, aDirs, 4LL);
    clap_builder::parser::error::MatchesError::unwrap(&dest, aDirs, 4LL, &src);
    v11 = (void (__fastcall __noreturn *)())dest;
    if ( (_QWORD)dest )
    {
      v21 = (const char *)*((_QWORD *)&dest + 1);
      v33 = v43;
      v34 = v44;
      v32 = v45;
      v12 = v46;
    }
    else
    {
      v34 = 0LL;
      v33 = (unsigned __int64)"&";
      v21 = "&";
      v11 = core::ops::function::FnOnce::call_once;
      v12 = 0LL;
    }
    flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&p_p_dest, aVerbose, 7LL);
    v14 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&p_p_dest, aParents, 7LL);
    uu_mkdir::get_mode(&dest, &p_p_dest, v2);
    if ( (_QWORD)dest == 0x8000000000000000LL )
    {
      *(_QWORD *)&src = v11;
      *((_QWORD *)&src + 1) = v21;
      v38 = v33;
      v39 = v34;
      v40 = v32;
      v41 = v12;
      v3 = uu_mkdir::exec(&src, v14, DWORD2(dest), flag);
      v5 = v15;
    }
    else
    {
      *(_QWORD *)&v38 = v43;
      src = dest;
      DWORD2(v38) = 1;
      v16 = (_OWORD *)_rust_alloc(32LL, 8LL);
      if ( !v16 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      v3 = (__int64)v16;
      v17 = src;
      v16[1] = v38;
      *v16 = v17;
      v5 = &off_E27C8;
    }
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&p_p_dest);
    if ( v3 )
      goto LABEL_3;
    return (unsigned int)uucore::mods::error::get_exit_code();
  }
  v3 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v28);
  v5 = v4;
  if ( !v3 )
    return (unsigned int)uucore::mods::error::get_exit_code();
LABEL_3:
  *(_QWORD *)&v19 = v3;
  *((_QWORD *)&v19 + 1) = v5;
  *(_QWORD *)&dest = &v19;
  *((_QWORD *)&dest + 1) = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
  *(_QWORD *)&src = &anon_a15cc2d3895659decb08e547ee58be7a_73_llvm_5555830998822834654;
  *((_QWORD *)&src + 1) = 1LL;
  *(_QWORD *)&v39 = 0LL;
  *(_QWORD *)&v38 = &dest;
  *((_QWORD *)&v38 + 1) = 1LL;
  alloc::fmt::format::format_inner(&v35, &src);
  dest = v35;
  *(_QWORD *)&v43 = v36;
  if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((_QWORD *)&v35 + 1), v36, 1LL, 0LL) )
  {
    p_dest = (__int128 *)uucore::util_name();
    v28 = v6;
    p_p_dest = &p_dest;
    v23 = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&src = &unk_E2730;
    *((_QWORD *)&src + 1) = 2LL;
    *(_QWORD *)&v39 = 0LL;
    *(_QWORD *)&v38 = &p_p_dest;
    *((_QWORD *)&v38 + 1) = 1LL;
    std::io::stdio::_eprint(&src);
    p_dest = &dest;
    v28 = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&src = &unk_E2750;
    *((_QWORD *)&src + 1) = 2LL;
    *(_QWORD *)&v39 = 0LL;
    *(_QWORD *)&v38 = &p_dest;
    *((_QWORD *)&v38 + 1) = 1LL;
    std::io::stdio::_eprint(&src);
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*((_QWORD *)&v19 + 1) + 104LL))(v19) )
  {
    p_dest = (__int128 *)uucore::execution_phrase();
    v28 = v7;
    p_p_dest = &p_dest;
    v23 = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&src = &off_E2770;
    *((_QWORD *)&src + 1) = 2LL;
    *(_QWORD *)&v39 = 0LL;
    *(_QWORD *)&v38 = &p_p_dest;
    *((_QWORD *)&v38 + 1) = 1LL;
    std::io::stdio::_eprint(&src);
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD))(*((_QWORD *)&v19 + 1) + 96LL))(v19);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&dest);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&dest);
  v9 = v19;
  if ( **((_QWORD **)&v19 + 1) )
    (**((void (__fastcall ***)(_QWORD))&v19 + 1))(v19);
  v10 = *(_QWORD *)(*((_QWORD *)&v9 + 1) + 8LL);
  if ( v10 )
    _rust_dealloc(v9, v10, *(_QWORD *)(*((_QWORD *)&v9 + 1) + 16LL));
  return v8;
}
