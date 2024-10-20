__int64 __fastcall uu_comm::uumain::uumain(int a1, int a2)
{
  int v2; // r8d
  int v3; // r9d
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v13; // [rsp+0h] [rbp-908h]
  int v14; // [rsp+8h] [rbp-900h]
  struct _Unwind_Exception *v15; // [rsp+10h] [rbp-8F8h]
  int v16; // [rsp+18h] [rbp-8F0h]
  char v17; // [rsp+1Fh] [rbp-8E9h]
  __int64 v18; // [rsp+20h] [rbp-8E8h]
  __int64 v19; // [rsp+28h] [rbp-8E0h]
  char v20; // [rsp+37h] [rbp-8D1h]
  __int64 v21; // [rsp+50h] [rbp-8B8h]
  __int64 v22; // [rsp+C0h] [rbp-848h]
  __int64 v23; // [rsp+D0h] [rbp-838h]
  __int64 one; // [rsp+D8h] [rbp-830h]
  unsigned __int8 v25; // [rsp+E7h] [rbp-821h]
  char flag; // [rsp+FFh] [rbp-809h]
  __int64 v27; // [rsp+110h] [rbp-7F8h]
  _OWORD v28[6]; // [rsp+120h] [rbp-7E8h] BYREF
  __int64 v29; // [rsp+180h] [rbp-788h]
  __int128 v30; // [rsp+188h] [rbp-780h] BYREF
  __int128 v31; // [rsp+198h] [rbp-770h]
  __int128 v32; // [rsp+1A8h] [rbp-760h]
  __int128 v33; // [rsp+1B8h] [rbp-750h]
  __int128 v34; // [rsp+1C8h] [rbp-740h]
  __int128 v35; // [rsp+1D8h] [rbp-730h]
  __int64 v36; // [rsp+1E8h] [rbp-720h]
  int v37[26]; // [rsp+1F0h] [rbp-718h] BYREF
  int v38[178]; // [rsp+258h] [rbp-6B0h] BYREF
  __int128 v39; // [rsp+520h] [rbp-3E8h]
  __int128 v40; // [rsp+530h] [rbp-3D8h]
  __int128 v41; // [rsp+540h] [rbp-3C8h]
  __int128 v42; // [rsp+550h] [rbp-3B8h]
  __int128 v43; // [rsp+560h] [rbp-3A8h]
  __int128 v44; // [rsp+570h] [rbp-398h]
  __int64 v45; // [rsp+580h] [rbp-388h]
  _OWORD v46[3]; // [rsp+590h] [rbp-378h] BYREF
  __int64 v47; // [rsp+5C0h] [rbp-348h]
  __int128 v48; // [rsp+5C8h] [rbp-340h] BYREF
  __int128 v49; // [rsp+5D8h] [rbp-330h]
  __int128 v50; // [rsp+5E8h] [rbp-320h]
  __int64 v51; // [rsp+5F8h] [rbp-310h]
  _BYTE v52[56]; // [rsp+600h] [rbp-308h] BYREF
  _BYTE v53[56]; // [rsp+638h] [rbp-2D0h] BYREF
  __int128 v54; // [rsp+670h] [rbp-298h]
  __int128 v55; // [rsp+680h] [rbp-288h]
  __int128 v56; // [rsp+690h] [rbp-278h]
  __int64 v57; // [rsp+6A0h] [rbp-268h]
  _OWORD v58[3]; // [rsp+6B0h] [rbp-258h] BYREF
  __int64 v59; // [rsp+6E0h] [rbp-228h]
  __int128 v60; // [rsp+6E8h] [rbp-220h] BYREF
  __int128 v61; // [rsp+6F8h] [rbp-210h]
  __int128 v62; // [rsp+708h] [rbp-200h]
  __int64 v63; // [rsp+718h] [rbp-1F0h]
  _BYTE v64[56]; // [rsp+720h] [rbp-1E8h] BYREF
  _BYTE v65[56]; // [rsp+758h] [rbp-1B0h] BYREF
  __int128 v66; // [rsp+790h] [rbp-178h]
  __int128 v67; // [rsp+7A0h] [rbp-168h]
  __int128 v68; // [rsp+7B0h] [rbp-158h]
  __int64 v69; // [rsp+7C0h] [rbp-148h]
  _BYTE v70[24]; // [rsp+7D0h] [rbp-138h] BYREF
  _BYTE v71[64]; // [rsp+7E8h] [rbp-120h] BYREF
  _BYTE dest[64]; // [rsp+828h] [rbp-E0h] BYREF
  _QWORD src[8]; // [rsp+868h] [rbp-A0h] BYREF
  _QWORD v74[2]; // [rsp+8A8h] [rbp-60h] BYREF
  __int64 v75; // [rsp+8B8h] [rbp-50h]
  __int64 v76; // [rsp+8C0h] [rbp-48h] BYREF
  __int64 v77; // [rsp+8C8h] [rbp-40h] BYREF
  const char *v78; // [rsp+8D0h] [rbp-38h]
  __int64 v79; // [rsp+8D8h] [rbp-30h]
  char v80; // [rsp+8E7h] [rbp-21h]
  __int64 v81; // [rsp+8F8h] [rbp-10h]
  __int64 v82; // [rsp+900h] [rbp-8h]

  v80 = 1;
  uu_comm::uu_app(v38);
  v80 = 0;
  clap_builder::builder::command::Command::try_get_matches_from((int)v37, (int)v38, a1, a2, v2, v3, v13, v14, v15, v16);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v30, v37);
  if ( (_QWORD)v30 == 0x8000000000000000LL )
    return <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
             *((_QWORD *)&v30 + 1),
             &off_FFF00);
  v45 = v36;
  v44 = v35;
  v43 = v34;
  v42 = v33;
  v41 = v32;
  v40 = v31;
  v39 = v30;
  v29 = v36;
  v28[5] = v35;
  v28[4] = v34;
  v28[3] = v33;
  v28[2] = v32;
  v28[1] = v31;
  v28[0] = v30;
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
           v28,
           "zero-terminated/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/comm/src/comm.rsFILE1FILE2",
           15LL,
           &off_FFDE0);
  v25 = uucore::mods::line_ending::LineEnding::from_zero_flag(flag & 1);
  one = clap_builder::parser::matches::arg_matches::ArgMatches::get_one(v28, "FILE1FILE2", 5LL, &off_FFDF8);
  v82 = one;
  if ( !one )
    core::option::unwrap_failed(&off_FFE10);
  v23 = v82;
  v81 = clap_builder::parser::matches::arg_matches::ArgMatches::get_one(v28, "FILE2", 5LL, &off_FFE28);
  if ( !v81 )
    core::option::unwrap_failed(&off_FFE40);
  v22 = v81;
  v4 = <alloc::string::String as core::ops::deref::Deref>::deref(v23);
  uu_comm::open_file(v53, v4, v5, v25);
  <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
    v52,
    v53,
    v23);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v48, v52);
  if ( (_BYTE)v51 == 11 )
  {
    v27 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
            v48,
            *((_QWORD *)&v48 + 1),
            &off_FFEE8);
LABEL_28:
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v28);
    return v27;
  }
  v57 = v51;
  v56 = v50;
  v55 = v49;
  v54 = v48;
  v47 = v51;
  v46[2] = v50;
  v46[1] = v49;
  v46[0] = v48;
  v6 = <alloc::string::String as core::ops::deref::Deref>::deref(v22);
  uu_comm::open_file(v65, v6, v7, v25);
  <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
    v64,
    v65,
    v22);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v60, v64);
  if ( (_BYTE)v63 == 11 )
  {
    v27 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
            v60,
            *((_QWORD *)&v60 + 1),
            &off_FFED0);
LABEL_27:
    core::ptr::drop_in_place<uu_comm::LineReader>(v46);
    goto LABEL_28;
  }
  v69 = v63;
  v68 = v62;
  v67 = v61;
  v66 = v60;
  v59 = v63;
  v58[2] = v62;
  v58[1] = v61;
  v58[0] = v60;
  clap_builder::parser::matches::arg_matches::ArgMatches::get_many(src, v28, aOutputDelimite, 16LL, &off_FFE58);
  if ( !src[0] )
    core::option::unwrap_failed(&off_FFE70);
  memcpy(dest, src, sizeof(dest));
  core::iter::traits::iterator::Iterator::map(v71, dest);
  core::iter::traits::iterator::Iterator::collect(v70, v71);
  v8 = <alloc::vec::Vec<T,A> as core::ops::index::Index<I>>::index(v70, 1LL, &off_FFE88);
  v74[0] = core::slice::iter::<impl core::iter::traits::collect::IntoIterator for &[T]>::into_iter(v8, v9);
  v74[1] = v10;
  while ( 1 )
  {
    v75 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v74);
    if ( !v75 )
      break;
    v76 = v75;
    v77 = <alloc::vec::Vec<T,A> as core::ops::index::Index<I>>::index(v70, 0LL, &off_FFEB8);
    v17 = core::cmp::impls::<impl core::cmp::PartialEq<&B> for &A>::ne(&v76, &v77);
    if ( (v17 & 1) != 0 )
    {
      v27 = uucore::mods::error::USimpleError::new(1LL, aMultipleConfli, 48LL);
      core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v70);
      core::ptr::drop_in_place<uu_comm::LineReader>(v58);
      goto LABEL_27;
    }
  }
  v21 = <alloc::vec::Vec<T,A> as core::ops::index::Index<I>>::index(v70, 0LL, &off_FFEA0);
  v18 = <alloc::string::String as core::ops::deref::Deref>::deref(v21);
  v19 = v11;
  v20 = core::str::traits::<impl core::cmp::PartialEq for str>::eq(v18, v11, 1LL, 0LL);
  if ( (v20 & 1) != 0 )
  {
    v78 = "";
    v79 = 1LL;
  }
  else
  {
    v78 = (const char *)v18;
    v79 = v19;
  }
  uu_comm::comm(v46, v58, v78, v79, v28);
  v27 = 0LL;
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v70);
  core::ptr::drop_in_place<uu_comm::LineReader>(v58);
  core::ptr::drop_in_place<uu_comm::LineReader>(v46);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v28);
  return v27;
}
