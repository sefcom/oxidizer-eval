void *__fastcall uu_tail::args::parse_args(void *a1)
{
  int v1; // ecx
  int v2; // r8d
  int v3; // r9d
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  void *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v14; // [rsp+0h] [rbp-708h]
  __int64 v15; // [rsp+0h] [rbp-708h]
  int v16; // [rsp+8h] [rbp-700h]
  struct _Unwind_Exception *v17; // [rsp+10h] [rbp-6F8h]
  int s2; // [rsp+18h] [rbp-6F0h]
  char is_ok; // [rsp+47h] [rbp-6C1h]
  __int64 v20; // [rsp+50h] [rbp-6B8h]
  _BYTE v21[24]; // [rsp+80h] [rbp-688h] BYREF
  int v22[4]; // [rsp+98h] [rbp-670h] BYREF
  __int128 v23; // [rsp+A8h] [rbp-660h]
  __int128 v24; // [rsp+B8h] [rbp-650h]
  __int128 v25; // [rsp+C8h] [rbp-640h]
  __int128 v26; // [rsp+D8h] [rbp-630h]
  __int128 v27; // [rsp+E8h] [rbp-620h]
  __int64 v28; // [rsp+F8h] [rbp-610h]
  int v29[178]; // [rsp+100h] [rbp-608h] BYREF
  int v30[6]; // [rsp+3C8h] [rbp-340h] BYREF
  __int128 src; // [rsp+3E0h] [rbp-328h] BYREF
  __int128 v32; // [rsp+3F0h] [rbp-318h]
  __int128 v33; // [rsp+400h] [rbp-308h]
  __int128 v34; // [rsp+410h] [rbp-2F8h]
  __int128 v35; // [rsp+420h] [rbp-2E8h]
  _OWORD v36[6]; // [rsp+430h] [rbp-2D8h] BYREF
  __int64 v37; // [rsp+490h] [rbp-278h]
  __int128 v38; // [rsp+4A0h] [rbp-268h] BYREF
  __int128 v39; // [rsp+4B0h] [rbp-258h]
  __int128 v40; // [rsp+4C0h] [rbp-248h]
  __int128 v41; // [rsp+4D0h] [rbp-238h]
  __int128 v42; // [rsp+4E0h] [rbp-228h]
  _BYTE v43[80]; // [rsp+4F0h] [rbp-218h] BYREF
  __int128 v44; // [rsp+540h] [rbp-1C8h]
  __int128 v45; // [rsp+550h] [rbp-1B8h]
  __int128 v46; // [rsp+560h] [rbp-1A8h]
  __int128 v47; // [rsp+570h] [rbp-198h]
  __int128 v48; // [rsp+580h] [rbp-188h]
  _BYTE v49[24]; // [rsp+598h] [rbp-170h] BYREF
  _QWORD v50[10]; // [rsp+5B0h] [rbp-158h] BYREF
  _BYTE v51[80]; // [rsp+600h] [rbp-108h] BYREF
  _QWORD v52[10]; // [rsp+650h] [rbp-B8h] BYREF
  _BYTE v53[86]; // [rsp+6A0h] [rbp-68h] BYREF
  char v54; // [rsp+6F6h] [rbp-12h]
  char v55; // [rsp+6F7h] [rbp-11h]

  v55 = 0;
  v54 = 0;
  core::iter::traits::iterator::Iterator::collect(v21);
  uu_tail::args::uu_app(v29);
  v55 = 1;
  <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v30, v21);
  v55 = 0;
  clap_builder::builder::command::Command::try_get_matches_from(
    (int)v22,
    (int)v29,
    (int)v30,
    v1,
    v2,
    v3,
    v14,
    v16,
    v17,
    s2);
  v55 = 0;
  if ( *(_QWORD *)v22 == 0x8000000000000000LL )
  {
    v4 = <T as core::convert::Into<U>>::into(*(_QWORD *)&v22[2], &off_186938);
    v54 = 1;
    *((_QWORD *)&src + 1) = v4;
    *(_QWORD *)&v32 = v5;
    *(_QWORD *)&src = 5LL;
  }
  else
  {
    v37 = v28;
    v36[5] = v27;
    v36[4] = v26;
    v36[3] = v25;
    v36[2] = v24;
    v36[1] = v23;
    v36[0] = *(_OWORD *)v22;
    uu_tail::args::Settings::from(v43, v36);
    <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v38, v43);
    if ( (_QWORD)v38 == 5LL )
    {
      <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
        a1,
        *((_QWORD *)&v38 + 1),
        v39,
        &off_186920);
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v36);
LABEL_23:
      v54 = 0;
      core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(v21);
      return a1;
    }
    v48 = v42;
    v47 = v41;
    v46 = v40;
    v45 = v39;
    v44 = v38;
    v54 = 1;
    v35 = v42;
    v34 = v41;
    v33 = v40;
    v32 = v39;
    src = v38;
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v36);
  }
  if ( alloc::vec::Vec<T,A>::len(v21) != 2 && alloc::vec::Vec<T,A>::len(v21) != 3 )
  {
    v54 = 0;
    memcpy(a1, &src, 0x50uLL);
    goto LABEL_23;
  }
  v20 = <alloc::vec::Vec<T,A> as core::ops::index::Index<I>>::index(v21, 1LL, &off_186950);
  is_ok = core::result::Result<T,E>::is_ok(&src);
  if ( (is_ok & 1) != 0 )
  {
    v7 = <std::ffi::os_str::OsString as core::ops::deref::Deref>::deref(v20);
    std::ffi::os_str::OsStr::to_string_lossy(v49, v7, v8);
    v9 = (void *)<alloc::borrow::Cow<B> as core::ops::deref::Deref>::deref(v49);
    v11 = v10;
    if ( (core::str::<impl str>::starts_with(v9) & 1) == 0 )
    {
      core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v49, v11);
      v54 = 0;
      memcpy(a1, &src, 0x50uLL);
      goto LABEL_23;
    }
    core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v49, v11);
  }
  v6 = <alloc::vec::Vec<T,A> as core::ops::deref::Deref>::deref(v21);
  v15 = core::slice::<impl [T]>::get(v6, v12, 2LL);
  uu_tail::args::parse_obsolete(v51, v20, v15);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v50, v51);
  if ( v50[0] != 6LL )
  {
    memcpy(v52, v50, sizeof(v52));
    if ( v52[0] == 5LL )
    {
      v54 = 0;
      memcpy(a1, &src, 0x50uLL);
    }
    else
    {
      memcpy(v53, v52, 0x50uLL);
      memcpy(a1, v53, 0x50uLL);
    }
    if ( (v54 & 1) != 0 )
      core::ptr::drop_in_place<core::result::Result<uu_tail::args::Settings,alloc::boxed::Box<dyn uucore::mods::error::UError>>>(&src);
    goto LABEL_23;
  }
  <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
    a1,
    v50[1],
    v50[2],
    &off_186968);
  core::ptr::drop_in_place<core::result::Result<uu_tail::args::Settings,alloc::boxed::Box<dyn uucore::mods::error::UError>>>(&src);
  v54 = 0;
  core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(v21);
  return a1;
}
