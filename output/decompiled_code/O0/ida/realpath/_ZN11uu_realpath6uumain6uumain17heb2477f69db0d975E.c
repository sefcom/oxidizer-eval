__int64 __fastcall uu_realpath::uumain::uumain(int a1, int a2)
{
  int v2; // r8d
  int v3; // r9d
  __int64 v4; // rdx
  int v6; // edx
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // [rsp+0h] [rbp-8A8h]
  int v14; // [rsp+8h] [rbp-8A0h]
  struct _Unwind_Exception *v15; // [rsp+10h] [rbp-898h]
  int v16; // [rsp+18h] [rbp-890h]
  unsigned int v17; // [rsp+34h] [rbp-874h]
  int v18; // [rsp+50h] [rbp-858h]
  __int64 v19; // [rsp+58h] [rbp-850h]
  int v20; // [rsp+70h] [rbp-838h]
  int v21; // [rsp+78h] [rbp-830h]
  unsigned __int8 v22; // [rsp+86h] [rbp-822h]
  unsigned __int8 v23; // [rsp+87h] [rbp-821h]
  __int64 v24; // [rsp+98h] [rbp-810h]
  char v25; // [rsp+D9h] [rbp-7CFh]
  char v26; // [rsp+DBh] [rbp-7CDh]
  char v27; // [rsp+DCh] [rbp-7CCh]
  unsigned __int8 v28; // [rsp+DDh] [rbp-7CBh]
  char v29; // [rsp+DEh] [rbp-7CAh]
  char flag; // [rsp+DFh] [rbp-7C9h]
  __int64 v31; // [rsp+100h] [rbp-7A8h]
  _OWORD v32[6]; // [rsp+110h] [rbp-798h] BYREF
  __int64 v33; // [rsp+170h] [rbp-738h]
  __int128 v34; // [rsp+180h] [rbp-728h] BYREF
  __int128 v35; // [rsp+190h] [rbp-718h]
  __int128 v36; // [rsp+1A0h] [rbp-708h]
  __int128 v37; // [rsp+1B0h] [rbp-6F8h]
  __int128 v38; // [rsp+1C0h] [rbp-6E8h]
  __int128 v39; // [rsp+1D0h] [rbp-6D8h]
  __int64 v40; // [rsp+1E0h] [rbp-6C8h]
  _BYTE v41[104]; // [rsp+1E8h] [rbp-6C0h] BYREF
  int v42[26]; // [rsp+250h] [rbp-658h] BYREF
  int v43[178]; // [rsp+2B8h] [rbp-5F0h] BYREF
  __int128 v44; // [rsp+580h] [rbp-328h]
  __int128 v45; // [rsp+590h] [rbp-318h]
  __int128 v46; // [rsp+5A0h] [rbp-308h]
  __int128 v47; // [rsp+5B0h] [rbp-2F8h]
  __int128 v48; // [rsp+5C0h] [rbp-2E8h]
  __int128 v49; // [rsp+5D0h] [rbp-2D8h]
  __int64 v50; // [rsp+5E0h] [rbp-2C8h]
  _BYTE v51[24]; // [rsp+5F0h] [rbp-2B8h] BYREF
  _BYTE v52[64]; // [rsp+608h] [rbp-2A0h] BYREF
  _BYTE dest[64]; // [rsp+648h] [rbp-260h] BYREF
  _QWORD src[8]; // [rsp+688h] [rbp-220h] BYREF
  unsigned __int8 v55; // [rsp+6CEh] [rbp-1DAh]
  unsigned __int8 v56; // [rsp+6CFh] [rbp-1D9h]
  __int128 v57; // [rsp+6D0h] [rbp-1D8h] BYREF
  __int64 v58; // [rsp+6E0h] [rbp-1C8h]
  __int128 v59; // [rsp+6F0h] [rbp-1B8h] BYREF
  __int64 v60; // [rsp+700h] [rbp-1A8h]
  __int128 v61; // [rsp+710h] [rbp-198h] BYREF
  __m256i v62; // [rsp+720h] [rbp-188h]
  _BYTE v63[48]; // [rsp+740h] [rbp-168h] BYREF
  __int128 v64; // [rsp+770h] [rbp-138h]
  __m256i v65; // [rsp+780h] [rbp-128h]
  _QWORD v66[2]; // [rsp+7A0h] [rbp-108h] BYREF
  __int64 v67; // [rsp+7B0h] [rbp-F8h]
  __int64 v68; // [rsp+7B8h] [rbp-F0h] BYREF
  __int64 v69; // [rsp+7C0h] [rbp-E8h] BYREF
  __int64 v70; // [rsp+7C8h] [rbp-E0h]
  _QWORD v71[2]; // [rsp+7D0h] [rbp-D8h] BYREF
  _BYTE v72[48]; // [rsp+7E0h] [rbp-C8h] BYREF
  _OWORD v73[2]; // [rsp+810h] [rbp-98h] BYREF
  __int128 v74; // [rsp+838h] [rbp-70h]
  _QWORD v75[2]; // [rsp+848h] [rbp-60h] BYREF
  __int128 v76; // [rsp+858h] [rbp-50h]
  char v77; // [rsp+86Dh] [rbp-3Bh]
  char v78; // [rsp+86Eh] [rbp-3Ah]
  char v79; // [rsp+86Fh] [rbp-39h]
  _QWORD *v80; // [rsp+880h] [rbp-28h]
  __int64 (__fastcall *v81)(); // [rsp+888h] [rbp-20h]
  _QWORD *v82; // [rsp+890h] [rbp-18h]
  __int64 (__fastcall *v83)(); // [rsp+898h] [rbp-10h]

  v78 = 0;
  v77 = 0;
  v79 = 1;
  uu_realpath::uu_app(v43);
  v79 = 0;
  clap_builder::builder::command::Command::try_get_matches_from((int)v42, (int)v43, a1, a2, v2, v3, v13, v14, v15, v16);
  <core::result::Result<clap_builder::parser::matches::arg_matches::ArgMatches,clap_builder::error::Error> as uucore::mods::error::UClapError<core::result::Result<clap_builder::parser::matches::arg_matches::ArgMatches,uucore::mods::error::ClapErrorWrapper>>>::with_exit_code(
    v41,
    v42,
    1LL);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v34, v41);
  if ( (_QWORD)v34 == 0x8000000000000000LL )
    return <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
             DWORD2(v34),
             (struct _Unwind_Exception *)(unsigned int)v35);
  v50 = v40;
  v49 = v39;
  v48 = v38;
  v47 = v37;
  v46 = v36;
  v45 = v35;
  v44 = v34;
  v33 = v40;
  v32[5] = v39;
  v32[4] = v38;
  v32[3] = v37;
  v32[2] = v36;
  v32[1] = v35;
  v32[0] = v34;
  clap_builder::parser::matches::arg_matches::ArgMatches::get_many(
    src,
    v32,
    aFiles,
    *(&uu_realpath::ARG_FILES + 1),
    &off_10B350);
  if ( !src[0] )
    core::option::unwrap_failed(&off_10B368);
  memcpy(dest, src, sizeof(dest));
  core::iter::traits::iterator::Iterator::map(v52, dest);
  core::iter::traits::iterator::Iterator::collect(v51, v52);
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
           v32,
           aStrip,
           *(&uu_realpath::OPT_STRIP + 1),
           &off_10B380);
  v29 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
          v32,
          aZero_0,
          *(&uu_realpath::OPT_ZERO + 1),
          &off_10B398);
  v28 = uucore::mods::line_ending::LineEnding::from_zero_flag(v29 & 1);
  v27 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
          v32,
          aQuiet,
          *(&uu_realpath::OPT_QUIET + 1),
          &off_10B3B0);
  v26 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
          v32,
          aLogical,
          *(&uu_realpath::OPT_LOGICAL + 1),
          &off_10B3C8);
  if ( (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v32, aCanonicalizeEx, 21LL, &off_10B3E0) & 1) != 0 )
  {
    v55 = 1;
  }
  else
  {
    v25 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v32, aCanonicalizeMi, 20LL, &off_10B3F8);
    if ( (v25 & 1) != 0 )
      v55 = 2;
    else
      v55 = 0;
  }
  if ( (flag & 1) != 0 )
  {
    v56 = 0;
  }
  else if ( (v26 & 1) != 0 )
  {
    v56 = 2;
  }
  else
  {
    v56 = 1;
  }
  uu_realpath::prepare_relative_options(v63, v32, v55, v56);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v61, v63);
  if ( (_QWORD)v61 == 0x8000000000000001LL )
  {
    v31 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
            *((_QWORD *)&v61 + 1),
            v62.m256i_i64[0],
            &off_10B440);
    core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(v51);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v32);
  }
  else
  {
    v65 = v62;
    v64 = v61;
    v58 = v62.m256i_i64[0];
    v57 = v61;
    v60 = v62.m256i_i64[3];
    v59 = *(_OWORD *)&v62.m256i_u64[1];
    v66[0] = <&alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v51);
    v66[1] = v4;
    while ( 1 )
    {
      v67 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v66);
      if ( !v67 )
        break;
      v24 = v67;
      v20 = <std::path::PathBuf as core::ops::deref::Deref>::deref();
      v21 = v6;
      v22 = v56;
      v23 = v55;
      v18 = core::option::Option<T>::as_deref(&v57);
      v19 = v7;
      v8 = core::option::Option<T>::as_deref(&v59);
      v68 = uu_realpath::resolve_path(v20, v21, v28, v22, v23, v18, v19, v8, v9);
      v78 = 1;
      if ( (v27 & 1) == 0 )
      {
        v78 = 0;
        v10 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
                v68,
                v24);
        v69 = v10;
        v70 = v11;
        v77 = 1;
        if ( v10 != 0 )
        {
          v77 = 0;
          v71[0] = v69;
          v71[1] = v70;
          v17 = (*(__int64 (__fastcall **)(__int64))(v70 + 96))(v69);
          uucore::mods::error::set_exit_code(v17);
          v75[0] = uucore::util_name();
          v75[1] = v12;
          v80 = v75;
          v81 = <&T as core::fmt::Display>::fmt;
          *(_QWORD *)&v74 = v75;
          *((_QWORD *)&v74 + 1) = <&T as core::fmt::Display>::fmt;
          v82 = v71;
          v83 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
          *(_QWORD *)&v76 = v71;
          *((_QWORD *)&v76 + 1) = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
          v73[0] = v74;
          v73[1] = v76;
          core::fmt::Arguments::new_v1(v72, &unk_10B410, v73);
          std::io::stdio::_eprint(v72);
          core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::mods::error::UError>>(v71);
        }
        if ( v69 != 0 && (v77 & 1) != 0 )
          core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::mods::error::UError>>(&v69);
        v77 = 0;
      }
      if ( (v78 & 1) != 0 )
        core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v68);
      v78 = 0;
    }
    v31 = 0LL;
    core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&v59);
    core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&v57);
    core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(v51);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v32);
  }
  return v31;
}
