__int64 __fastcall uu_dd::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 (__fastcall **v3)(); // rdx
  __int64 (__fastcall **v4)(); // r14
  __int64 v5; // rdx
  __int64 v6; // rdx
  unsigned int v7; // ebx
  void (__fastcall __noreturn *v8)(); // r14
  __int64 (__fastcall **v9)(); // r15
  __int64 (__fastcall *v10)(); // rsi
  const char *v11; // rsi
  void (__fastcall __noreturn *v12)(); // rax
  const char *v13; // rcx
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int64 v16; // rdx
  _OWORD *v17; // rax
  __int128 v18; // xmm0
  __int64 v19; // r15
  __int64 v21; // rax
  __int64 (__fastcall **v22)(); // rdx
  void (__fastcall __noreturn *v23)(); // [rsp+8h] [rbp-550h] BYREF
  __int64 (__fastcall **v24)(); // [rsp+10h] [rbp-548h]
  __int128 v25; // [rsp+18h] [rbp-540h]
  __int128 v26; // [rsp+28h] [rbp-530h]
  const char *v27; // [rsp+38h] [rbp-520h]
  __int64 v28; // [rsp+40h] [rbp-518h]
  char v29[8]; // [rsp+48h] [rbp-510h] BYREF
  __int64 v30; // [rsp+50h] [rbp-508h]
  __int64 v31; // [rsp+58h] [rbp-500h]
  _BYTE *v32; // [rsp+60h] [rbp-4F8h] BYREF
  __int128 v33; // [rsp+68h] [rbp-4F0h]
  __int128 v34; // [rsp+78h] [rbp-4E0h]
  __int128 v35; // [rsp+88h] [rbp-4D0h]
  __int128 v36; // [rsp+98h] [rbp-4C0h]
  __int128 v37; // [rsp+A8h] [rbp-4B0h]
  __int128 v38; // [rsp+B8h] [rbp-4A0h]
  __int128 v39; // [rsp+C8h] [rbp-490h]
  __int128 v40; // [rsp+D8h] [rbp-480h]
  __int128 v41; // [rsp+E8h] [rbp-470h]
  __int128 v42; // [rsp+F8h] [rbp-460h]
  void (__fastcall __noreturn *v43)(); // [rsp+108h] [rbp-450h] BYREF
  __int64 (__fastcall *v44)(); // [rsp+110h] [rbp-448h]
  __int128 v45; // [rsp+118h] [rbp-440h]
  __int128 v46; // [rsp+128h] [rbp-430h]
  const char *v47; // [rsp+138h] [rbp-420h]
  __int64 v48; // [rsp+140h] [rbp-418h]
  __int128 v49; // [rsp+150h] [rbp-408h]
  __int128 v50; // [rsp+160h] [rbp-3F8h]
  _BYTE v51[56]; // [rsp+170h] [rbp-3E8h] BYREF
  __int128 v52; // [rsp+1A8h] [rbp-3B0h]
  __int128 v53; // [rsp+1B8h] [rbp-3A0h]
  __int128 v54; // [rsp+1C8h] [rbp-390h]
  __int128 v55; // [rsp+1D8h] [rbp-380h]
  __int128 v56; // [rsp+1E8h] [rbp-370h]
  __int128 v57; // [rsp+1F8h] [rbp-360h]
  __int128 v58; // [rsp+208h] [rbp-350h]
  _OWORD v59[3]; // [rsp+218h] [rbp-340h] BYREF
  __int64 v60; // [rsp+248h] [rbp-310h]
  __int128 v61; // [rsp+250h] [rbp-308h] BYREF
  __int128 v62; // [rsp+260h] [rbp-2F8h]
  __int64 v63; // [rsp+270h] [rbp-2E8h]
  __int64 v64; // [rsp+280h] [rbp-2D8h]
  __int128 v65; // [rsp+290h] [rbp-2C8h]
  __int128 v66; // [rsp+2A0h] [rbp-2B8h]
  __int64 v67; // [rsp+2B0h] [rbp-2A8h]
  unsigned __int64 v68; // [rsp+2C0h] [rbp-298h]
  unsigned __int64 v69; // [rsp+2D8h] [rbp-280h]
  __int128 v70; // [rsp+2F0h] [rbp-268h]
  __int128 v71; // [rsp+300h] [rbp-258h]
  __int128 v72; // [rsp+310h] [rbp-248h]
  char v73; // [rsp+320h] [rbp-238h]
  __int128 v74; // [rsp+518h] [rbp-40h] BYREF
  __int64 v75; // [rsp+528h] [rbp-30h]

  uu_dd::uu_app(&v61);
  clap_builder::builder::command::Command::try_get_matches_from(v51, &v61, a1, a2);
  if ( *(_QWORD *)v51 != 0x8000000000000000LL )
  {
    v60 = *(_QWORD *)&v51[48];
    v59[2] = *(_OWORD *)&v51[32];
    v59[1] = *(_OWORD *)&v51[16];
    v59[0] = *(_OWORD *)v51;
    v68 = 0x8000000000000000LL;
    v69 = 0x8000000000000000LL;
    *(_QWORD *)&v61 = 0LL;
    *(_QWORD *)&v62 = 0LL;
    v63 = 0LL;
    v64 = 0LL;
    v65 = 0LL;
    v66 = 0LL;
    v67 = 2LL;
    v70 = 0LL;
    v71 = 0LL;
    v72 = 0LL;
    v73 = 3;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v43, v59, "operandsNotFoundTimedOut", 8LL);
    v11 = "operandsNotFoundTimedOut";
    clap_builder::parser::error::MatchesError::unwrap(&v23, "operandsNotFoundTimedOut", 8LL, &v43);
    v12 = v23;
    if ( v23 )
    {
      v13 = (const char *)v24;
      v14 = v25;
      v15 = v26;
      v11 = v27;
      v16 = v28;
    }
    else
    {
      v15 = 0LL;
      v14 = (unsigned __int64)"&";
      v13 = "&";
      v12 = core::ops::function::FnOnce::call_once;
      v16 = 0LL;
    }
    v43 = v12;
    v44 = (__int64 (__fastcall *)())v13;
    v45 = v14;
    v46 = v15;
    v47 = v11;
    v48 = v16;
    <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v29, &v43);
    uu_dd::parseargs::Parser::parse(v51, &v61, v30, v31);
    v49 = *(_OWORD *)&v51[8];
    v50 = *(_OWORD *)&v51[24];
    if ( *(_QWORD *)v51 == 3LL )
    {
      v62 = v50;
      v61 = v49;
      v17 = (_OWORD *)_rust_alloc(32LL, 8LL);
      if ( !v17 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      v2 = (__int64)v17;
      v18 = v61;
      v17[1] = v62;
      *v17 = v18;
      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v29);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v29);
      v4 = &off_112858;
LABEL_33:
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v59);
      if ( v2 )
        goto LABEL_3;
      return (unsigned int)uucore::mods::error::get_exit_code();
    }
    v42 = v58;
    v41 = v57;
    v40 = v56;
    v39 = v55;
    v38 = v54;
    v37 = v53;
    v36 = v52;
    v35 = *(_OWORD *)&v51[40];
    v33 = v49;
    v34 = v50;
    v32 = *(_BYTE **)v51;
    <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v29);
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v29);
    if ( *((_QWORD *)&v33 + 1) == 0x8000000000000000LL )
    {
      uu_dd::Input::new_stdin(&v61, &v32);
    }
    else if ( (unsigned __int8)uu_dd::is_fifo(v34, *((_QWORD *)&v34 + 1)) )
    {
      uu_dd::Input::new_fifo(&v61, v34, *((_QWORD *)&v34 + 1), &v32);
    }
    else
    {
      uu_dd::Input::new_file(&v61, v34, *((_QWORD *)&v34 + 1), &v32);
    }
    v19 = *((_QWORD *)&v61 + 1);
    v4 = (__int64 (__fastcall **)())v62;
    v2 = *((_QWORD *)&v61 + 1);
    if ( !(_QWORD)v61 )
    {
      if ( (_QWORD)v35 == 0x8000000000000000LL )
      {
        if ( (unsigned __int8)uu_dd::is_stdout_redirected_to_seekable_file() )
          uu_dd::Output::new_file_from_stdout(&v61, &v32);
        else
          uu_dd::Output::new_stdout(&v61, &v32);
      }
      else if ( (unsigned __int8)uu_dd::is_fifo(*((_QWORD *)&v35 + 1), v36) )
      {
        uu_dd::Output::new_fifo(&v61, *((_QWORD *)&v35 + 1), v36, &v32);
      }
      else
      {
        uu_dd::Output::new_file(&v61, *((_QWORD *)&v35 + 1), v36, &v32);
      }
      if ( (_BYTE)v61 != 4 )
      {
        *(_DWORD *)((char *)&v23 + 3) = DWORD1(v61);
        LODWORD(v23) = *(_DWORD *)((char *)&v61 + 1);
        *(_QWORD *)v51 = v19;
        *(_QWORD *)&v51[8] = v4;
        DWORD1(v61) = *(_DWORD *)((char *)&v23 + 3);
        v21 = uu_dd::dd_copy(v51, &v61);
        v2 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v21);
        v4 = v22;
        core::ptr::drop_in_place<uu_dd::Settings>(&v32);
        goto LABEL_33;
      }
      v2 = *((_QWORD *)&v61 + 1);
      v4 = (__int64 (__fastcall **)())v62;
      close(SHIDWORD(v19));
    }
    core::ptr::drop_in_place<uu_dd::Settings>(&v32);
    goto LABEL_33;
  }
  v2 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*(_QWORD *)&v51[8]);
  v4 = v3;
  if ( !v2 )
    return (unsigned int)uucore::mods::error::get_exit_code();
LABEL_3:
  v23 = (void (__fastcall __noreturn *)())v2;
  v24 = v4;
  *(_QWORD *)v51 = &v23;
  *(_QWORD *)&v51[8] = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
  *(_QWORD *)&v61 = &anon_f941c7d894c550ecfedd045c68d8a012_33_llvm_4119223083302802398;
  *((_QWORD *)&v61 + 1) = 1LL;
  v63 = 0LL;
  *(_QWORD *)&v62 = v51;
  *((_QWORD *)&v62 + 1) = 1LL;
  alloc::fmt::format::format_inner(&v74, &v61);
  *(_OWORD *)v51 = v74;
  *(_QWORD *)&v51[16] = v75;
  if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((_QWORD *)&v74 + 1), v75, 1LL, 0LL) )
  {
    v32 = (_BYTE *)uucore::util_name();
    *(_QWORD *)&v33 = v5;
    v43 = (void (__fastcall __noreturn *)())&v32;
    v44 = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v61 = &unk_1127C0;
    *((_QWORD *)&v61 + 1) = 2LL;
    v63 = 0LL;
    *(_QWORD *)&v62 = &v43;
    *((_QWORD *)&v62 + 1) = 1LL;
    std::io::stdio::_eprint(&v61);
    v32 = v51;
    *(_QWORD *)&v33 = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v61 = &unk_1127E0;
    *((_QWORD *)&v61 + 1) = 2LL;
    v63 = 0LL;
    *(_QWORD *)&v62 = &v32;
    *((_QWORD *)&v62 + 1) = 1LL;
    std::io::stdio::_eprint(&v61);
  }
  if ( ((unsigned __int8 (__fastcall *)(void (__fastcall __noreturn *)()))v24[13])(v23) )
  {
    v32 = (_BYTE *)uucore::execution_phrase();
    *(_QWORD *)&v33 = v6;
    v43 = (void (__fastcall __noreturn *)())&v32;
    v44 = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v61 = &off_112800;
    *((_QWORD *)&v61 + 1) = 2LL;
    v63 = 0LL;
    *(_QWORD *)&v62 = &v43;
    *((_QWORD *)&v62 + 1) = 1LL;
    std::io::stdio::_eprint(&v61);
  }
  v7 = ((__int64 (__fastcall *)(void (__fastcall __noreturn *)()))v24[12])(v23);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v51);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v51);
  v8 = v23;
  v9 = v24;
  if ( *v24 )
    ((void (__fastcall *)(void (__fastcall __noreturn *)()))*v24)(v23);
  v10 = v9[1];
  if ( v10 )
    _rust_dealloc(v8, v10, v9[2]);
  return v7;
}
