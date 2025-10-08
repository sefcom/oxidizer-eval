__int64 __fastcall uu_sum::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v4; // r12
  __int64 v5; // rax
  __int64 v6; // r15
  __int128 v7; // xmm0
  unsigned __int64 v8; // r12
  char v9; // r15
  __int64 v10; // r13
  unsigned __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rsi
  unsigned int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // r14
  unsigned __int8 flag; // [rsp+Fh] [rbp-409h]
  __int64 v21; // [rsp+10h] [rbp-408h] BYREF
  __int64 v22; // [rsp+18h] [rbp-400h]
  __int128 v23; // [rsp+20h] [rbp-3F8h] BYREF
  __int128 v24; // [rsp+30h] [rbp-3E8h]
  __int128 v25; // [rsp+40h] [rbp-3D8h]
  __int64 v26; // [rsp+50h] [rbp-3C8h]
  __int64 v27; // [rsp+60h] [rbp-3B8h] BYREF
  __int64 v28; // [rsp+68h] [rbp-3B0h]
  unsigned __int64 v29; // [rsp+70h] [rbp-3A8h]
  _QWORD v30[2]; // [rsp+78h] [rbp-3A0h] BYREF
  __int64 v31; // [rsp+88h] [rbp-390h] BYREF
  __int64 v32; // [rsp+90h] [rbp-388h]
  __int64 v33; // [rsp+98h] [rbp-380h]
  __int64 v34; // [rsp+A0h] [rbp-378h] BYREF
  _OWORD v35[3]; // [rsp+A8h] [rbp-370h] BYREF
  __int64 v36; // [rsp+D8h] [rbp-340h]
  _QWORD v37[8]; // [rsp+E0h] [rbp-338h] BYREF
  __int128 dest; // [rsp+120h] [rbp-2F8h] BYREF
  __int128 *v39; // [rsp+130h] [rbp-2E8h]
  __int64 (__fastcall *v40)(); // [rsp+138h] [rbp-2E0h]
  __int64 *v41; // [rsp+140h] [rbp-2D8h]
  __int64 (__fastcall *v42)(); // [rsp+148h] [rbp-2D0h]
  __int64 v43; // [rsp+150h] [rbp-2C8h]
  __int16 v44; // [rsp+158h] [rbp-2C0h]

  uu_sum::uu_app(&dest);
  clap_builder::builder::command::Command::try_get_matches_from(&v23, &dest, a1, a2);
  if ( __OFSUB__(-(__int64)v23, 1LL) )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(
             *((_QWORD *)&v23 + 1),
             &dest,
             v2,
             -(__int64)v23);
  v36 = v26;
  v35[2] = v25;
  v35[1] = v24;
  v35[0] = v23;
  v4 = (__int64)*(&uu_sum::options::FILE + 1);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&dest, v35, aFile, v4);
  clap_builder::parser::error::MatchesError::unwrap(v37, aFile, v4, &dest);
  if ( v37[0] )
  {
    core::iter::traits::iterator::Iterator::collect(&v27, v37);
  }
  else
  {
    v5 = alloc::alloc::Global::alloc_impl(8LL, 24LL);
    if ( !v5 )
      alloc::alloc::handle_alloc_error(8LL, 24LL);
    v6 = v5;
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&dest, asc_18381, 1LL);
    *(_QWORD *)&v24 = v39;
    v7 = dest;
    v23 = dest;
    *(_QWORD *)(v6 + 16) = v39;
    *(_OWORD *)v6 = v7;
    v27 = 1LL;
    v28 = v6;
    v29 = 1LL;
  }
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
           v35,
           aSysv,
           *(&uu_sum::options::SYSTEM_V_COMPATIBLE + 1));
  v8 = v29;
  if ( v29 < 2 )
  {
    if ( v29 != 1 )
      core::panicking::panic_bounds_check(0LL, 0LL, &off_E10C8);
    v10 = v28;
    v9 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
           *(_QWORD *)(v28 + 8),
           *(_QWORD *)(v28 + 16),
           asc_18381,
           1LL) ^ 1;
  }
  else
  {
    v9 = 1;
    v10 = v28;
  }
  v11 = v10 + 24 * v8;
  v12 = v10 + 24;
  while ( 1 )
  {
    v34 = v10;
    v13 = *(_QWORD *)(v10 + 8);
    v14 = *(_QWORD *)(v10 + 16);
    v10 = v12;
    uu_sum::open(&v31, v13, v14);
    v15 = v32;
    if ( (_DWORD)v31 == 1 )
    {
      v21 = v32;
      v22 = v33;
      v16 = (*(__int64 (__fastcall **)(__int64))(v33 + 88))(v32);
      uucore::mods::error::set_exit_code(v16, v15);
      v30[0] = uucore::util_name();
      v30[1] = v17;
      *(_QWORD *)&v23 = v30;
      *((_QWORD *)&v23 + 1) = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v24 = &v21;
      *((_QWORD *)&v24 + 1) = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
      *(_QWORD *)&dest = &unk_E1098;
      *((_QWORD *)&dest + 1) = 3LL;
      v41 = 0LL;
      v39 = &v23;
      v40 = (__int64 (__fastcall *)())(&dword_0 + 2);
      std::io::stdio::_eprint(&dest);
      core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v21, v22);
      goto LABEL_23;
    }
    if ( flag )
      uu_sum::sysv_sum(&dest, v32, v33);
    else
      uu_sum::bsd_sum(&dest, v32, v33);
    if ( (_DWORD)dest == 1 )
    {
      v19 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((_QWORD *)&dest + 1));
      goto LABEL_28;
    }
    v30[0] = *((_QWORD *)&dest + 1);
    LOWORD(v21) = (_WORD)v39;
    *(_QWORD *)&dest = std::io::stdio::stdout();
    v31 = std::io::stdio::Stdout::lock(&dest);
    if ( v9 )
    {
      *(_QWORD *)&dest = &v21;
      *((_QWORD *)&dest + 1) = core::fmt::num::imp::<impl core::fmt::Display for u16>::fmt;
      v39 = (__int128 *)v30;
      v40 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
      v41 = &v34;
      v42 = <&T as core::fmt::Display>::fmt;
      v43 = 0LL;
      v44 = 4 * (flag ^ 1) + 1;
      *(_QWORD *)&v23 = &unk_E1110;
      *((_QWORD *)&v23 + 1) = 4LL;
      *(_QWORD *)&v25 = &unk_183E8;
      *((_QWORD *)&v25 + 1) = 3LL;
      *(_QWORD *)&v24 = &dest;
      *((_QWORD *)&v24 + 1) = 4LL;
      v18 = std::io::Write::write_fmt(&v31, &v23);
      if ( v18 )
        break;
      goto LABEL_22;
    }
    *(_QWORD *)&dest = &v21;
    *((_QWORD *)&dest + 1) = core::fmt::num::imp::<impl core::fmt::Display for u16>::fmt;
    v39 = (__int128 *)v30;
    v40 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    v41 = 0LL;
    LOWORD(v42) = 4 * (flag ^ 1) + 1;
    *(_QWORD *)&v23 = &unk_E10E0;
    *((_QWORD *)&v23 + 1) = 3LL;
    *(_QWORD *)&v25 = &unk_18388;
    *((_QWORD *)&v25 + 1) = 2LL;
    *(_QWORD *)&v24 = &dest;
    *((_QWORD *)&v24 + 1) = 3LL;
    v18 = std::io::Write::write_fmt(&v31, &v23);
    if ( v18 )
      break;
LABEL_22:
    core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v31);
LABEL_23:
    v12 = v10 + 24;
    if ( v10 == v11 || !v10 )
    {
      core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v27);
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v35);
      return 0LL;
    }
  }
  v19 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v18);
  core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v31);
LABEL_28:
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v27);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v35);
  return v19;
}