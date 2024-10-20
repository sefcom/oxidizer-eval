__int64 __fastcall uu_readlink::uumain::uumain(int a1, int a2)
{
  int v2; // r8d
  int v3; // r9d
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  int v22; // r9d
  __int64 v23; // [rsp+0h] [rbp-748h]
  __int64 v24; // [rsp+0h] [rbp-748h]
  int v25; // [rsp+0h] [rbp-748h]
  int v26; // [rsp+8h] [rbp-740h]
  int v27; // [rsp+8h] [rbp-740h]
  int v28; // [rsp+8h] [rbp-740h]
  struct _Unwind_Exception *v29; // [rsp+10h] [rbp-738h]
  int v30; // [rsp+10h] [rbp-738h]
  int v31; // [rsp+18h] [rbp-730h]
  int v32; // [rsp+18h] [rbp-730h]
  char v33; // [rsp+18h] [rbp-730h]
  int v34; // [rsp+20h] [rbp-728h]
  int v35; // [rsp+20h] [rbp-728h]
  int v36; // [rsp+28h] [rbp-720h]
  int v37; // [rsp+28h] [rbp-720h]
  int v38; // [rsp+30h] [rbp-718h]
  int v39; // [rsp+30h] [rbp-718h]
  int v40; // [rsp+38h] [rbp-710h]
  int v41; // [rsp+38h] [rbp-710h]
  struct _Unwind_Exception *v42; // [rsp+40h] [rbp-708h]
  int v43; // [rsp+40h] [rbp-708h]
  int v44; // [rsp+48h] [rbp-700h]
  int v45; // [rsp+48h] [rbp-700h]
  int v46; // [rsp+50h] [rbp-6F8h]
  int v47; // [rsp+50h] [rbp-6F8h]
  __int64 v48; // [rsp+58h] [rbp-6F0h]
  int v49; // [rsp+58h] [rbp-6F0h]
  int v50; // [rsp+60h] [rbp-6E8h]
  int v51; // [rsp+60h] [rbp-6E8h]
  int v52; // [rsp+68h] [rbp-6E0h]
  int v53; // [rsp+68h] [rbp-6E0h]
  struct _Unwind_Exception *v54; // [rsp+70h] [rbp-6D8h]
  int v55; // [rsp+70h] [rbp-6D8h]
  int v56; // [rsp+78h] [rbp-6D0h]
  int v57; // [rsp+78h] [rbp-6D0h]
  __int64 v58; // [rsp+80h] [rbp-6C8h]
  int v59; // [rsp+80h] [rbp-6C8h]
  int v60; // [rsp+88h] [rbp-6C0h]
  int v61; // [rsp+88h] [rbp-6C0h]
  struct _Unwind_Exception *v62; // [rsp+90h] [rbp-6B8h]
  int v63; // [rsp+98h] [rbp-6B0h]
  char v64; // [rsp+CFh] [rbp-679h]
  char v65; // [rsp+D2h] [rbp-676h]
  char v66; // [rsp+D4h] [rbp-674h]
  char v67; // [rsp+D6h] [rbp-672h]
  char flag; // [rsp+D7h] [rbp-671h]
  __int64 v69; // [rsp+100h] [rbp-648h]
  _OWORD v70[6]; // [rsp+110h] [rbp-638h] BYREF
  __int64 v71; // [rsp+170h] [rbp-5D8h]
  __int128 v72; // [rsp+178h] [rbp-5D0h] BYREF
  __int128 v73; // [rsp+188h] [rbp-5C0h]
  __int128 v74; // [rsp+198h] [rbp-5B0h]
  __int128 v75; // [rsp+1A8h] [rbp-5A0h]
  __int128 v76; // [rsp+1B8h] [rbp-590h]
  __int128 v77; // [rsp+1C8h] [rbp-580h]
  __int64 v78; // [rsp+1D8h] [rbp-570h]
  int v79[26]; // [rsp+1E0h] [rbp-568h] BYREF
  int dest[178]; // [rsp+248h] [rbp-500h] BYREF
  __int128 v81; // [rsp+510h] [rbp-238h]
  __int128 v82; // [rsp+520h] [rbp-228h]
  __int128 v83; // [rsp+530h] [rbp-218h]
  __int128 v84; // [rsp+540h] [rbp-208h]
  __int128 v85; // [rsp+550h] [rbp-1F8h]
  __int128 v86; // [rsp+560h] [rbp-1E8h]
  __int64 v87; // [rsp+570h] [rbp-1D8h]
  char v88; // [rsp+57Ch] [rbp-1CCh]
  char v89; // [rsp+57Dh] [rbp-1CBh]
  unsigned __int8 v90; // [rsp+57Eh] [rbp-1CAh] BYREF
  unsigned __int8 v91; // [rsp+57Fh] [rbp-1C9h]
  _BYTE v92[24]; // [rsp+580h] [rbp-1C8h] BYREF
  _BYTE v93[24]; // [rsp+598h] [rbp-1B0h] BYREF
  _BYTE v94[64]; // [rsp+5B0h] [rbp-198h] BYREF
  _BYTE v95[48]; // [rsp+5F0h] [rbp-158h] BYREF
  __int128 v96; // [rsp+620h] [rbp-128h] BYREF
  __int128 v97; // [rsp+630h] [rbp-118h]
  _QWORD v98[2]; // [rsp+640h] [rbp-108h] BYREF
  _BYTE v99[55]; // [rsp+650h] [rbp-F8h] BYREF
  unsigned __int8 v100; // [rsp+687h] [rbp-C1h]
  _QWORD v101[2]; // [rsp+688h] [rbp-C0h] BYREF
  int v102[2]; // [rsp+698h] [rbp-B0h]
  _BYTE v103[24]; // [rsp+6A0h] [rbp-A8h] BYREF
  int v104[4]; // [rsp+6B8h] [rbp-90h] BYREF
  __int64 v105; // [rsp+6C8h] [rbp-80h]
  __int128 v106; // [rsp+6D0h] [rbp-78h] BYREF
  __int64 v107; // [rsp+6E0h] [rbp-68h]
  __int64 v108; // [rsp+6E8h] [rbp-60h]
  __int64 v109; // [rsp+6F0h] [rbp-58h]
  int v110[2]; // [rsp+6F8h] [rbp-50h] BYREF
  int v111[6]; // [rsp+700h] [rbp-48h] BYREF
  int v112[3]; // [rsp+718h] [rbp-30h] BYREF
  char v113; // [rsp+726h] [rbp-22h]
  char v114; // [rsp+727h] [rbp-21h]
  _QWORD *v115; // [rsp+738h] [rbp-10h]
  __int64 (__fastcall *v116)(); // [rsp+740h] [rbp-8h]

  v113 = 0;
  v114 = 1;
  uu_readlink::uu_app(dest);
  v114 = 0;
  clap_builder::builder::command::Command::try_get_matches_from((int)v79, (int)dest, a1, a2, v2, v3, v23, v26, v29, v31);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v72, v79);
  if ( (_QWORD)v72 == 0x8000000000000000LL )
    return <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
             *((_QWORD *)&v72 + 1),
             &off_110F30);
  v87 = v78;
  v86 = v77;
  v85 = v76;
  v84 = v75;
  v83 = v74;
  v82 = v73;
  v81 = v72;
  v71 = v78;
  v70[5] = v77;
  v70[4] = v76;
  v70[3] = v75;
  v70[2] = v74;
  v70[1] = v73;
  v70[0] = v72;
  v88 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v70, aNoNewline, 10LL, &off_110DE8) & 1;
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v70, aZero_0, 4LL, &off_110E00);
  v67 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v70, aSilent, 6LL, &off_110E18);
  if ( (v67 & 1) != 0 )
    v89 = 1;
  else
    v89 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v70, aQuiet, 5LL, &off_110E30) & 1;
  v66 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v70, aVerbose, 7LL, &off_110E48);
  if ( (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v70, aCanonicalize, 12LL, &off_110E60) & 1) != 0
    || (v65 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v70, aCanonicalizeEx, 21LL, &off_110E78),
        (v65 & 1) != 0
     || (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v70, aCanonicalizeMi, 20LL, &off_110E90) & 1) != 0) )
  {
    v90 = 2;
  }
  else
  {
    v90 = 0;
  }
  if ( (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v70, aCanonicalizeEx, 21LL, &off_110EA8) & 1) != 0 )
  {
    v91 = 1;
  }
  else
  {
    v64 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v70, aCanonicalizeMi, 20LL, &off_110EC0);
    if ( (v64 & 1) != 0 )
      v91 = 2;
    else
      v91 = 0;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::get_many(v94, v70, aFiles, 5LL, &off_110ED8);
  core::option::Option<T>::map(v93, v94);
  core::option::Option<T>::unwrap_or_default(v92, v93);
  if ( (alloc::vec::Vec<T,A>::is_empty(v92) & 1) != 0 )
  {
    v69 = uucore::mods::error::UUsageError::new(
            1,
            (int)aMissingOperand,
            15,
            v4,
            v5,
            v6,
            v24,
            v27,
            v30,
            v32,
            v34,
            v36,
            v38,
            v40,
            v42,
            v44);
  }
  else
  {
    if ( (v88 & 1) != 0 && (unsigned __int64)alloc::vec::Vec<T,A>::len(v92) > 1 && (v89 & 1) == 0 )
    {
      v98[0] = uucore::util_name();
      v98[1] = v7;
      v115 = v98;
      v116 = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v97 = v98;
      *((_QWORD *)&v97 + 1) = <&T as core::fmt::Display>::fmt;
      v96 = v97;
      core::fmt::Arguments::new_v1(v95, &unk_110D88, &v96);
      std::io::stdio::_eprint(v95);
      core::fmt::Arguments::new_const(v99, &off_110EF0);
      std::io::stdio::_eprint(v99);
      v88 = 0;
    }
    if ( (v88 & 1) != 0 )
      v100 = 11;
    else
      v100 = uucore::mods::line_ending::LineEnding::from_zero_flag(flag & 1);
    v8 = <&alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v92);
    v60 = v9;
    v62 = (struct _Unwind_Exception *)v8;
    v101[0] = v8;
    v101[1] = v9;
    while ( 1 )
    {
      v58 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v101);
      *(_QWORD *)v102 = v58;
      if ( !v58 )
      {
        v69 = 0LL;
        core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v92);
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v70);
        return v69;
      }
      v56 = v102[0];
      <std::path::PathBuf as core::convert::From<&T>>::from(v103);
      HIBYTE(v54) = <uucore::features::fs::ResolveMode as core::cmp::PartialEq>::eq(&v90, &unk_173B6);
      if ( (HIBYTE(v54) & 1) != 0 )
        std::fs::read_link(v104, v103);
      else
        uucore::features::fs::canonicalize(v104, v103, v91, v90);
      if ( *(_QWORD *)v104 == 0x8000000000000000LL )
        break;
      v107 = v105;
      v106 = *(_OWORD *)v104;
      v13 = <std::path::PathBuf as core::ops::deref::Deref>::deref(&v106);
      v50 = v14;
      v52 = v13;
      v48 = uu_readlink::show(v13, v14, v100);
      v15 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v48);
      v44 = v16;
      v46 = v15;
      v17 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v15, v16);
      v40 = v18;
      LODWORD(v42) = v17;
      v108 = v17;
      v109 = v18;
      if ( v17 )
      {
        v69 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                v108,
                v109,
                &off_110F00);
        core::ptr::drop_in_place<std::path::PathBuf>(&v106);
        goto LABEL_44;
      }
      core::ptr::drop_in_place<std::path::PathBuf>(&v106);
      core::ptr::drop_in_place<std::path::PathBuf>(v103);
    }
    v113 = 1;
    *(_QWORD *)v110 = *(_QWORD *)&v104[2];
    if ( (v66 & 1) != 0 )
    {
      v113 = 0;
      *(_QWORD *)v112 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
                          v110[0],
                          v56,
                          0,
                          v104[2],
                          v11,
                          v12,
                          v24,
                          v27,
                          v30,
                          v32,
                          v34,
                          v36,
                          v38,
                          v40,
                          (int)v42,
                          v44,
                          v46,
                          v48,
                          v50,
                          v52,
                          v54,
                          v56,
                          v58,
                          v60);
      <T as alloc::string::ToString>::to_string(
        (int)v111,
        (int)v112,
        v19,
        v20,
        v21,
        v22,
        v25,
        v28,
        v112[0],
        v33,
        v35,
        v37,
        v39,
        v41,
        v43,
        v45,
        v47,
        v49,
        v51,
        v53,
        v55,
        v57,
        v59,
        v61,
        v62,
        v63);
      v69 = uucore::mods::error::USimpleError::new(1LL, v111);
      core::ptr::drop_in_place<alloc::boxed::Box<uucore::mods::error::UIoError>>(v112);
    }
    else
    {
      v69 = <T as core::convert::Into<U>>::into(1LL, &off_110F18);
    }
    if ( (v113 & 1) != 0 )
      core::ptr::drop_in_place<std::io::error::Error>(v110);
    v113 = 0;
LABEL_44:
    core::ptr::drop_in_place<std::path::PathBuf>(v103);
  }
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v92);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v70);
  return v69;
}
