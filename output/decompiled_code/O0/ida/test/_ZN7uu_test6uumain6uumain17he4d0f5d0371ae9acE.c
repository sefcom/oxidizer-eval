__int64 __fastcall uu_test::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  int v3; // ecx
  int v4; // r8d
  int v5; // r9d
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rdx
  int v13; // [rsp+0h] [rbp-658h]
  int v14; // [rsp+8h] [rbp-650h]
  int v15; // [rsp+10h] [rbp-648h]
  char v16; // [rsp+18h] [rbp-640h]
  int v17; // [rsp+20h] [rbp-638h]
  int v18; // [rsp+28h] [rbp-630h]
  int v19; // [rsp+30h] [rbp-628h]
  int v20; // [rsp+38h] [rbp-620h]
  int v21; // [rsp+40h] [rbp-618h]
  char v22; // [rsp+47h] [rbp-611h]
  int v23; // [rsp+48h] [rbp-610h]
  int v24; // [rsp+50h] [rbp-608h]
  int v25; // [rsp+58h] [rbp-600h]
  int v26; // [rsp+60h] [rbp-5F8h]
  int v27; // [rsp+68h] [rbp-5F0h]
  char v28; // [rsp+6Fh] [rbp-5E9h]
  __int64 v29; // [rsp+70h] [rbp-5E8h]
  int v30; // [rsp+78h] [rbp-5E0h]
  char v31; // [rsp+7Fh] [rbp-5D9h]
  int v32[2]; // [rsp+80h] [rbp-5D8h]
  struct _Unwind_Exception *v33; // [rsp+90h] [rbp-5C8h]
  int v34[2]; // [rsp+98h] [rbp-5C0h]
  int v35[2]; // [rsp+A0h] [rbp-5B8h]
  int v36[2]; // [rsp+B8h] [rbp-5A0h] BYREF
  int v37[2]; // [rsp+C0h] [rbp-598h]
  __int64 v38; // [rsp+C8h] [rbp-590h]
  __int64 v39; // [rsp+D0h] [rbp-588h]
  __int128 v40; // [rsp+D8h] [rbp-580h] BYREF
  __int64 v41; // [rsp+E8h] [rbp-570h]
  _BYTE v42[24]; // [rsp+F0h] [rbp-568h] BYREF
  __int128 v43; // [rsp+108h] [rbp-550h] BYREF
  __int64 v44; // [rsp+118h] [rbp-540h]
  int v45[26]; // [rsp+120h] [rbp-538h] BYREF
  int v46[178]; // [rsp+188h] [rbp-4D0h] BYREF
  int v47[14]; // [rsp+450h] [rbp-208h] BYREF
  int v48[6]; // [rsp+488h] [rbp-1D0h] BYREF
  __int128 v49; // [rsp+4A0h] [rbp-1B8h] BYREF
  __int64 v50; // [rsp+4B0h] [rbp-1A8h]
  int v51[8]; // [rsp+4C0h] [rbp-198h] BYREF
  __int128 v52; // [rsp+4E0h] [rbp-178h] BYREF
  __int64 v53; // [rsp+4F0h] [rbp-168h]
  _BYTE v54[24]; // [rsp+4F8h] [rbp-160h] BYREF
  _QWORD v55[2]; // [rsp+510h] [rbp-148h] BYREF
  _QWORD v56[2]; // [rsp+520h] [rbp-138h] BYREF
  _OWORD v57[2]; // [rsp+530h] [rbp-128h] BYREF
  __int64 v58; // [rsp+550h] [rbp-108h] BYREF
  __int128 v59; // [rsp+558h] [rbp-100h]
  __int128 v60; // [rsp+568h] [rbp-F0h]
  _BYTE v61[40]; // [rsp+578h] [rbp-E0h] BYREF
  _BYTE v62[32]; // [rsp+5A0h] [rbp-B8h] BYREF
  __int128 v63; // [rsp+5C0h] [rbp-98h] BYREF
  __int64 v64; // [rsp+5D0h] [rbp-88h]
  _OWORD v65[2]; // [rsp+5E0h] [rbp-78h] BYREF
  _OWORD v66[2]; // [rsp+600h] [rbp-58h] BYREF
  _OWORD v67[2]; // [rsp+620h] [rbp-38h] BYREF
  char v68; // [rsp+643h] [rbp-15h]
  char v69; // [rsp+644h] [rbp-14h]
  char v70; // [rsp+645h] [rbp-13h]
  char v71; // [rsp+646h] [rbp-12h]
  char v72; // [rsp+647h] [rbp-11h]

  *(_QWORD *)v36 = a1;
  *(_QWORD *)v37 = a2;
  v69 = 0;
  v68 = 0;
  v71 = 0;
  v70 = 0;
  v72 = 1;
  <core::iter::adapters::cloned::Cloned<I> as core::iter::traits::iterator::Iterator>::next(v42, v36);
  core::option::Option<T>::unwrap_or_else(&v40, v42, &off_103F98);
  v69 = 1;
  *(_QWORD *)v34 = uucore::util_name();
  *(_QWORD *)v35 = v2;
  v72 = 0;
  core::iter::traits::iterator::Iterator::collect(&v43, *(_QWORD *)v36, *(_QWORD *)v37);
  v68 = 1;
  HIBYTE(v33) = core::str::<impl str>::ends_with(*(_QWORD *)v34, *(_QWORD *)v35, 91LL);
  if ( (HIBYTE(v33) & 1) != 0 )
  {
    if ( alloc::vec::Vec<T,A>::len(&v43) == 1 )
    {
      *(_QWORD *)v32 = <alloc::vec::Vec<T,A> as core::ops::index::Index<I>>::index(&v43, 0LL, &off_103FB0);
      v31 = <std::ffi::os_str::OsString as core::cmp::PartialEq<&str>>::eq(*(_QWORD *)v32, &off_103FC8);
      if ( (v31 & 1) != 0
        || (v29 = <alloc::vec::Vec<T,A> as core::ops::index::Index<I>>::index(&v43, 0LL, &off_103FD8),
            v28 = <std::ffi::os_str::OsString as core::cmp::PartialEq<&str>>::eq(v29, &off_103FF0),
            (v28 & 1) != 0) )
      {
        uu_test::uu_app(v46);
        v71 = 1;
        v69 = 0;
        v50 = v41;
        v49 = v40;
        core::iter::sources::once::once(v48, &v49);
        v70 = 1;
        v68 = 0;
        v53 = v44;
        v52 = v43;
        <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v51, &v52);
        v70 = 0;
        core::iter::traits::iterator::Iterator::chain(
          (int)v47,
          (int)v48,
          (int)v51,
          v3,
          v4,
          v5,
          v13,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19,
          v20,
          v21,
          v23,
          v24,
          v25,
          v26,
          v27,
          v29,
          v30,
          v32[0],
          1,
          v33,
          v34[0]);
        v70 = 0;
        v71 = 0;
        clap_builder::builder::command::Command::get_matches_from(v45, v46, v47);
        v71 = 0;
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v45);
        v38 = 0LL;
        goto LABEL_11;
      }
    }
    alloc::vec::Vec<T,A>::pop(v54, &v43);
    v55[0] = core::option::Option<T>::as_deref(v54);
    v55[1] = v6;
    v56[0] = std::ffi::os_str::OsStr::new(asc_158E8, 1LL);
    v56[1] = v7;
    v22 = core::cmp::PartialEq::ne(v55, v56);
    if ( (v22 & 1) != 0 )
    {
      v38 = uucore::mods::error::USimpleError::new(2LL, aMissing, 11LL);
      v39 = v12;
      core::ptr::drop_in_place<core::option::Option<std::ffi::os_str::OsString>>(v54);
      goto LABEL_11;
    }
    core::ptr::drop_in_place<core::option::Option<std::ffi::os_str::OsString>>(v54);
  }
  v68 = 0;
  v64 = v44;
  v63 = v43;
  uu_test::parser::parse(v62, &v63);
  core::result::Result<T,E>::map((unsigned int)v61, (__int64)v62);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v58, v61);
  if ( v58 )
  {
    v65[1] = v60;
    v65[0] = v59;
    v38 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
            v65,
            &off_104018);
    v39 = v11;
  }
  else
  {
    v66[1] = v60;
    v66[0] = v59;
    <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v57, v66);
    if ( *(_QWORD *)&v57[0] == 7LL )
    {
      if ( (BYTE8(v57[0]) & 1) != 0 )
      {
        v38 = 0LL;
      }
      else
      {
        v38 = <T as core::convert::Into<U>>::into(1LL, &off_104000);
        v39 = v8;
      }
      v68 = 0;
      core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v40);
      v69 = 0;
      return v38;
    }
    v67[1] = v57[1];
    v67[0] = v57[0];
    v38 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
            v67,
            &off_104018);
    v39 = v10;
  }
LABEL_11:
  if ( (v68 & 1) != 0 )
    core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&v43);
  v68 = 0;
  if ( (v69 & 1) != 0 )
    core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v40);
  v69 = 0;
  return v38;
}
