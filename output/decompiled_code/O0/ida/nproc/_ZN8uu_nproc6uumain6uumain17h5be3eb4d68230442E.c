__int64 __fastcall uu_nproc::uumain::uumain(int a1, int a2)
{
  int v2; // r8d
  int v3; // r9d
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v15; // rdx
  __int64 v16; // [rsp+0h] [rbp-7E8h]
  int v17; // [rsp+8h] [rbp-7E0h]
  struct _Unwind_Exception *v18; // [rsp+10h] [rbp-7D8h]
  int v19; // [rsp+18h] [rbp-7D0h]
  _QWORD *v20; // [rsp+40h] [rbp-7A8h]
  __int64 v21; // [rsp+A0h] [rbp-748h]
  __int64 one; // [rsp+C8h] [rbp-720h]
  __int64 v23; // [rsp+E0h] [rbp-708h]
  _OWORD v24[6]; // [rsp+F0h] [rbp-6F8h] BYREF
  __int64 v25; // [rsp+150h] [rbp-698h]
  __int128 v26; // [rsp+158h] [rbp-690h] BYREF
  __int128 v27; // [rsp+168h] [rbp-680h]
  __int128 v28; // [rsp+178h] [rbp-670h]
  __int128 v29; // [rsp+188h] [rbp-660h]
  __int128 v30; // [rsp+198h] [rbp-650h]
  __int128 v31; // [rsp+1A8h] [rbp-640h]
  __int64 v32; // [rsp+1B8h] [rbp-630h]
  int v33[26]; // [rsp+1C0h] [rbp-628h] BYREF
  int dest[178]; // [rsp+228h] [rbp-5C0h] BYREF
  __int128 v35; // [rsp+4F0h] [rbp-2F8h]
  __int128 v36; // [rsp+500h] [rbp-2E8h]
  __int128 v37; // [rsp+510h] [rbp-2D8h]
  __int128 v38; // [rsp+520h] [rbp-2C8h]
  __int128 v39; // [rsp+530h] [rbp-2B8h]
  __int128 v40; // [rsp+540h] [rbp-2A8h]
  __int64 v41; // [rsp+550h] [rbp-298h]
  unsigned __int64 v42; // [rsp+558h] [rbp-290h]
  __int64 v43; // [rsp+560h] [rbp-288h]
  _BYTE v44[8]; // [rsp+568h] [rbp-280h] BYREF
  unsigned __int64 v45; // [rsp+570h] [rbp-278h]
  char v46; // [rsp+57Fh] [rbp-269h] BYREF
  _QWORD v47[3]; // [rsp+580h] [rbp-268h] BYREF
  _QWORD v48[3]; // [rsp+598h] [rbp-250h] BYREF
  _BYTE v49[48]; // [rsp+5B0h] [rbp-238h] BYREF
  _OWORD v50[2]; // [rsp+5E0h] [rbp-208h] BYREF
  __int128 v51; // [rsp+608h] [rbp-1E0h]
  _BYTE v52[32]; // [rsp+618h] [rbp-1D0h] BYREF
  __int128 v53; // [rsp+638h] [rbp-1B0h]
  __int64 v54; // [rsp+648h] [rbp-1A0h]
  __int64 v55; // [rsp+650h] [rbp-198h] BYREF
  __int128 v56; // [rsp+658h] [rbp-190h]
  __int64 v57; // [rsp+668h] [rbp-180h]
  __int128 v58; // [rsp+670h] [rbp-178h] BYREF
  __int64 v59; // [rsp+680h] [rbp-168h]
  char v60[8]; // [rsp+688h] [rbp-160h] BYREF
  __int64 v61; // [rsp+690h] [rbp-158h]
  unsigned __int64 v62; // [rsp+698h] [rbp-150h] BYREF
  __int64 v63; // [rsp+6A0h] [rbp-148h] BYREF
  __int128 v64; // [rsp+6A8h] [rbp-140h]
  __int64 v65; // [rsp+6B8h] [rbp-130h]
  __int128 v66; // [rsp+6C0h] [rbp-128h] BYREF
  __int64 v67; // [rsp+6D0h] [rbp-118h]
  _BYTE v68[24]; // [rsp+6E0h] [rbp-108h] BYREF
  _BYTE v69[72]; // [rsp+6F8h] [rbp-F0h] BYREF
  char v70[8]; // [rsp+740h] [rbp-A8h] BYREF
  unsigned __int64 v71; // [rsp+748h] [rbp-A0h]
  _BYTE v72[48]; // [rsp+750h] [rbp-98h] BYREF
  __int128 v73; // [rsp+780h] [rbp-68h] BYREF
  __int128 v74; // [rsp+790h] [rbp-58h]
  char v75; // [rsp+7A7h] [rbp-41h]
  char *v76; // [rsp+7B8h] [rbp-30h]
  __int64 (__fastcall *v77)(); // [rsp+7C0h] [rbp-28h]
  unsigned __int64 *v78; // [rsp+7C8h] [rbp-20h]
  __int64 (__fastcall *v79)(); // [rsp+7D0h] [rbp-18h]
  _BYTE *v80; // [rsp+7D8h] [rbp-10h]
  __int64 (__fastcall *v81)(); // [rsp+7E0h] [rbp-8h]

  v75 = 1;
  uu_nproc::uu_app(dest);
  v75 = 0;
  clap_builder::builder::command::Command::try_get_matches_from((int)v33, (int)dest, a1, a2, v2, v3, v16, v17, v18, v19);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v26, v33);
  if ( (_QWORD)v26 == 0x8000000000000000LL )
    return <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
             *((_QWORD *)&v26 + 1),
             &off_FF150);
  v41 = v32;
  v40 = v31;
  v39 = v30;
  v38 = v29;
  v37 = v28;
  v36 = v27;
  v35 = v26;
  v25 = v32;
  v24[5] = v31;
  v24[4] = v30;
  v24[3] = v29;
  v24[2] = v28;
  v24[1] = v27;
  v24[0] = v26;
  one = clap_builder::parser::matches::arg_matches::ArgMatches::get_one(
          v24,
          aIgnore,
          *(&uu_nproc::OPT_IGNORE + 1),
          &off_FF0D0);
  v43 = one;
  if ( one )
  {
    v21 = v43;
    v4 = ((__int64 (*)(void))<alloc::string::String as core::ops::deref::Deref>::deref)();
    v6 = core::str::<impl str>::trim(v4, v5);
    core::str::<impl str>::parse(v44, v6, v7);
    if ( (v44[0] & 1) != 0 )
    {
      v46 = v44[1];
      v8 = <alloc::string::String as core::ops::deref::Deref>::deref(v21);
      <str as os_display::native::Quotable>::quote(v52, v8, v15);
      v80 = v52;
      v81 = <os_display::Quoted as core::fmt::Display>::fmt;
      *(_QWORD *)&v51 = v52;
      *((_QWORD *)&v51 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
      v76 = &v46;
      v77 = <core::num::error::ParseIntError as core::fmt::Display>::fmt;
      *(_QWORD *)&v53 = &v46;
      *((_QWORD *)&v53 + 1) = <core::num::error::ParseIntError as core::fmt::Display>::fmt;
      v50[0] = v51;
      v50[1] = v53;
      core::fmt::Arguments::new_v1(v49, &unk_FF130, v50);
      alloc::fmt::format(v48, v49);
      v47[0] = v48[0];
      v47[1] = v48[1];
      v47[2] = v48[2];
      v23 = uucore::mods::error::USimpleError::new(1LL, v47);
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v24);
      return v23;
    }
    v42 = v45;
  }
  else
  {
    v42 = 0LL;
  }
  std::env::var(&v55, aOmpThreadLimit, 16LL);
  if ( v55 )
  {
    v54 = -1LL;
  }
  else
  {
    v59 = v57;
    v58 = v56;
    v9 = <alloc::string::String as core::ops::deref::Deref>::deref(&v58);
    core::str::<impl str>::parse(v60, v9, v10);
    if ( (v60[0] & 1) == 0 && v61 )
      v54 = v61;
    else
      v54 = -1LL;
    core::ptr::drop_in_place<alloc::string::String>(&v58);
  }
  if ( v55 )
    core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v55);
  if ( (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
          v24,
          aAll,
          *(&uu_nproc::OPT_ALL + 1),
          &off_FF0E8) & 1) != 0 )
  {
    v62 = uu_nproc::num_cpus_all();
  }
  else
  {
    std::env::var(&v63, aOmpNumThreads, 15LL);
    if ( v63 )
    {
      v62 = uu_nproc::available_parallelism();
    }
    else
    {
      v67 = v65;
      v66 = v64;
      v11 = <alloc::string::String as core::ops::deref::Deref>::deref(&v66);
      core::str::<impl str>::split_terminator(v69, v11, v12, 44LL);
      core::iter::traits::iterator::Iterator::collect(v68, v69);
      v20 = (_QWORD *)<alloc::vec::Vec<T,A> as core::ops::index::Index<I>>::index(v68, &off_FF100);
      if ( v13 && (core::str::<impl str>::parse(v70, *v20, v20[1]), (v70[0] & 1) == 0 && v71) )
        v62 = v71;
      else
        v62 = uu_nproc::available_parallelism();
      core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v68);
      core::ptr::drop_in_place<alloc::string::String>(&v66);
    }
    if ( v63 )
      core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v63);
  }
  v62 = core::cmp::min(v54, v62);
  if ( v62 <= v42 )
  {
    v62 = 1LL;
  }
  else
  {
    if ( v62 < v42 )
      core::panicking::panic_const::panic_const_sub_overflow(&off_FF118);
    v62 -= v42;
  }
  v78 = &v62;
  v79 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
  *(_QWORD *)&v74 = &v62;
  *((_QWORD *)&v74 + 1) = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
  v73 = v74;
  core::fmt::Arguments::new_v1(v72, &unk_FF090, &v73);
  std::io::stdio::_print(v72);
  v23 = 0LL;
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v24);
  return v23;
}
