__int64 __fastcall uu_link::uumain::uumain(int a1, int a2)
{
  int v2; // r8d
  int v3; // r9d
  int v4; // edx
  int v5; // eax
  int v6; // edx
  int v7; // r8d
  int v8; // r9d
  int v9; // edx
  int v10; // r8d
  int v11; // r9d
  __int64 v13; // [rsp+0h] [rbp-5D8h]
  int v14; // [rsp+0h] [rbp-5D8h]
  struct _Unwind_Exception *v15; // [rsp+0h] [rbp-5D8h]
  int v16; // [rsp+8h] [rbp-5D0h]
  int v17; // [rsp+8h] [rbp-5D0h]
  struct _Unwind_Exception *v18; // [rsp+10h] [rbp-5C8h]
  int v19; // [rsp+10h] [rbp-5C8h]
  int v20; // [rsp+18h] [rbp-5C0h]
  int v21[2]; // [rsp+18h] [rbp-5C0h]
  int v22[2]; // [rsp+20h] [rbp-5B8h]
  int v23; // [rsp+28h] [rbp-5B0h]
  __int64 v24; // [rsp+28h] [rbp-5B0h]
  int v25; // [rsp+40h] [rbp-598h]
  int v26[2]; // [rsp+40h] [rbp-598h]
  int v27; // [rsp+48h] [rbp-590h]
  int v28[2]; // [rsp+48h] [rbp-590h]
  struct _Unwind_Exception *v29; // [rsp+50h] [rbp-588h]
  _QWORD *v30; // [rsp+68h] [rbp-570h]
  __int64 v31; // [rsp+90h] [rbp-548h]
  _OWORD v32[6]; // [rsp+A0h] [rbp-538h] BYREF
  __int64 v33; // [rsp+100h] [rbp-4D8h]
  __int128 v34; // [rsp+108h] [rbp-4D0h] BYREF
  __int128 v35; // [rsp+118h] [rbp-4C0h]
  __int128 v36; // [rsp+128h] [rbp-4B0h]
  __int128 v37; // [rsp+138h] [rbp-4A0h]
  __int128 v38; // [rsp+148h] [rbp-490h]
  __int128 v39; // [rsp+158h] [rbp-480h]
  __int64 v40; // [rsp+168h] [rbp-470h]
  int v41[26]; // [rsp+170h] [rbp-468h] BYREF
  int dest[178]; // [rsp+1D8h] [rbp-400h] BYREF
  __int128 v43; // [rsp+4A0h] [rbp-138h]
  __int128 v44; // [rsp+4B0h] [rbp-128h]
  __int128 v45; // [rsp+4C0h] [rbp-118h]
  __int128 v46; // [rsp+4D0h] [rbp-108h]
  __int128 v47; // [rsp+4E0h] [rbp-F8h]
  __int128 v48; // [rsp+4F0h] [rbp-E8h]
  __int64 v49; // [rsp+500h] [rbp-D8h]
  int v50[6]; // [rsp+508h] [rbp-D0h] BYREF
  _BYTE v51[64]; // [rsp+520h] [rbp-B8h] BYREF
  _BYTE v52[64]; // [rsp+560h] [rbp-78h] BYREF
  _QWORD v53[4]; // [rsp+5A0h] [rbp-38h] BYREF
  char v54; // [rsp+5C7h] [rbp-11h]

  v54 = 1;
  uu_link::uu_app(dest);
  v54 = 0;
  clap_builder::builder::command::Command::try_get_matches_from((int)v41, (int)dest, a1, a2, v2, v3, v13, v16, v18, v20);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v34, v41);
  if ( (_QWORD)v34 == 0x8000000000000000LL )
    return <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
             *((_QWORD *)&v34 + 1),
             &off_FDC60);
  v49 = v40;
  v48 = v39;
  v47 = v38;
  v46 = v37;
  v45 = v36;
  v44 = v35;
  v43 = v34;
  v33 = v40;
  v32[5] = v39;
  v32[4] = v38;
  v32[3] = v37;
  v32[2] = v36;
  v32[1] = v35;
  v32[0] = v34;
  clap_builder::parser::matches::arg_matches::ArgMatches::get_many(
    v52,
    v32,
    aFiles,
    *(&uu_link::options::FILES + 1),
    &off_FDC18);
  core::option::Option<T>::unwrap_or_default(v51, v52);
  core::iter::traits::iterator::Iterator::collect(v50, v51);
  v30 = (_QWORD *)<alloc::vec::Vec<T,A> as core::ops::index::Index<I>>::index(v50, 0LL, &off_FDC30);
  v25 = std::path::Path::new(*v30);
  v27 = v4;
  v29 = (struct _Unwind_Exception *)<alloc::vec::Vec<T,A> as core::ops::index::Index<I>>::index(v50, 1LL, &off_FDC48);
  v5 = std::path::Path::new(*(_QWORD *)&v29->exception_class);
  v24 = std::fs::hard_link(v25, v27, v5, v6, v7, v8, v14, v17, v19, v5, v6, v23, v6, v5, v25, v27, v29, v27);
  v53[0] = *(_QWORD *)v21;
  v53[1] = *(_QWORD *)v22;
  v53[2] = *(_QWORD *)v26;
  v53[3] = *(_QWORD *)v28;
  v31 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
          v24,
          v53);
  core::ptr::drop_in_place<alloc::vec::Vec<&std::ffi::os_str::OsString>>((int)v50, (int)v53, v9, v31, v10, v11, v15, v9);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v32);
  return v31;
}
