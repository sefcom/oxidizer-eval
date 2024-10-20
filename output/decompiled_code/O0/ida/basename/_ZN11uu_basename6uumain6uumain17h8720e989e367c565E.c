__int64 __fastcall uu_basename::uumain::uumain(__int64 a1, __int64 a2)
{
  int v2; // ecx
  int v3; // r8d
  int v4; // r9d
  __int64 v5; // rax
  __int64 v6; // rdx
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  int *v15; // rsi
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // rax
  int v21; // edx
  int v22; // r8d
  int v23; // r9d
  __int64 v24; // rcx
  __int64 v25; // [rsp+0h] [rbp-878h]
  int v26; // [rsp+0h] [rbp-878h]
  struct _Unwind_Exception *v27; // [rsp+0h] [rbp-878h]
  int v28; // [rsp+8h] [rbp-870h]
  char v29; // [rsp+8h] [rbp-870h]
  int v30; // [rsp+8h] [rbp-870h]
  struct _Unwind_Exception *v31; // [rsp+10h] [rbp-868h]
  int v32; // [rsp+10h] [rbp-868h]
  int v33; // [rsp+18h] [rbp-860h]
  int v34; // [rsp+18h] [rbp-860h]
  __int64 v35; // [rsp+18h] [rbp-860h]
  int v36; // [rsp+20h] [rbp-858h]
  __int64 v37; // [rsp+20h] [rbp-858h]
  int v38; // [rsp+28h] [rbp-850h]
  int v39; // [rsp+30h] [rbp-848h]
  int v40; // [rsp+38h] [rbp-840h]
  struct _Unwind_Exception *v41; // [rsp+40h] [rbp-838h]
  int v42; // [rsp+48h] [rbp-830h]
  __int64 v43; // [rsp+78h] [rbp-800h]
  _QWORD *v44; // [rsp+80h] [rbp-7F8h]
  __int64 v45; // [rsp+88h] [rbp-7F0h]
  __int64 v46; // [rsp+90h] [rbp-7E8h]
  char is_some; // [rsp+9Fh] [rbp-7D9h]
  char is_empty; // [rsp+AEh] [rbp-7CAh]
  char flag; // [rsp+C7h] [rbp-7B1h]
  __int64 v50; // [rsp+C8h] [rbp-7B0h]
  __int128 v51; // [rsp+D8h] [rbp-7A0h] BYREF
  __int64 v52; // [rsp+E8h] [rbp-790h]
  _OWORD v53[6]; // [rsp+F0h] [rbp-788h] BYREF
  __int64 v54; // [rsp+150h] [rbp-728h]
  __int128 v55; // [rsp+158h] [rbp-720h] BYREF
  __int128 v56; // [rsp+168h] [rbp-710h]
  __int128 v57; // [rsp+178h] [rbp-700h]
  __int128 v58; // [rsp+188h] [rbp-6F0h]
  __int128 v59; // [rsp+198h] [rbp-6E0h]
  __int128 v60; // [rsp+1A8h] [rbp-6D0h]
  __int64 v61; // [rsp+1B8h] [rbp-6C0h]
  int v62[26]; // [rsp+1C0h] [rbp-6B8h] BYREF
  int dest[178]; // [rsp+228h] [rbp-650h] BYREF
  int v64[4]; // [rsp+4F0h] [rbp-388h] BYREF
  __int64 v65; // [rsp+500h] [rbp-378h]
  __int128 v66; // [rsp+510h] [rbp-368h]
  __int128 v67; // [rsp+520h] [rbp-358h]
  __int128 v68; // [rsp+530h] [rbp-348h]
  __int128 v69; // [rsp+540h] [rbp-338h]
  __int128 v70; // [rsp+550h] [rbp-328h]
  __int128 v71; // [rsp+560h] [rbp-318h]
  __int64 v72; // [rsp+570h] [rbp-308h]
  char v73; // [rsp+57Fh] [rbp-2F9h] BYREF
  int v74[4]; // [rsp+580h] [rbp-2F8h] BYREF
  __int64 v75; // [rsp+590h] [rbp-2E8h]
  _BYTE v76[64]; // [rsp+598h] [rbp-2E0h] BYREF
  _BYTE v77[64]; // [rsp+5D8h] [rbp-2A0h] BYREF
  int v78[7]; // [rsp+618h] [rbp-260h] BYREF
  char v79; // [rsp+637h] [rbp-241h]
  __int64 one; // [rsp+638h] [rbp-240h] BYREF
  _BYTE v81[24]; // [rsp+640h] [rbp-238h] BYREF
  _BYTE v82[24]; // [rsp+658h] [rbp-220h] BYREF
  _BYTE v83[48]; // [rsp+670h] [rbp-208h] BYREF
  int v84[2]; // [rsp+6A0h] [rbp-1D8h] BYREF
  __int64 v85; // [rsp+6A8h] [rbp-1D0h]
  __int64 v86; // [rsp+6B0h] [rbp-1C8h]
  _QWORD v87[3]; // [rsp+6B8h] [rbp-1C0h] BYREF
  _BYTE v88[48]; // [rsp+6D0h] [rbp-1A8h] BYREF
  __int128 v89; // [rsp+700h] [rbp-178h] BYREF
  __int128 v90; // [rsp+710h] [rbp-168h]
  _BYTE v91[32]; // [rsp+720h] [rbp-158h] BYREF
  _QWORD v92[4]; // [rsp+740h] [rbp-138h] BYREF
  __int128 v93; // [rsp+760h] [rbp-118h] BYREF
  __int64 v94; // [rsp+770h] [rbp-108h]
  _QWORD v95[4]; // [rsp+778h] [rbp-100h] BYREF
  __int64 v96; // [rsp+798h] [rbp-E0h]
  _BYTE v97[48]; // [rsp+7A0h] [rbp-D8h] BYREF
  _OWORD v98[2]; // [rsp+7D0h] [rbp-A8h] BYREF
  __int128 v99; // [rsp+7F0h] [rbp-88h]
  _BYTE v100[24]; // [rsp+800h] [rbp-78h] BYREF
  __int128 v101; // [rsp+818h] [rbp-60h]
  char v102; // [rsp+82Eh] [rbp-4Ah]
  char v103; // [rsp+82Fh] [rbp-49h]
  _BYTE *v104; // [rsp+840h] [rbp-38h]
  __int64 (__fastcall *v105)(); // [rsp+848h] [rbp-30h]
  char *v106; // [rsp+850h] [rbp-28h]
  __int64 (__fastcall *v107)(); // [rsp+858h] [rbp-20h]
  _BYTE *v108; // [rsp+860h] [rbp-18h]
  __int64 (__fastcall *v109)(); // [rsp+868h] [rbp-10h]
  __int64 v110; // [rsp+870h] [rbp-8h]

  v103 = 0;
  v102 = 0;
  uucore::Args::collect_lossy(&v51, a1, a2);
  v103 = 1;
  uu_basename::uu_app(dest);
  v103 = 0;
  v65 = v52;
  *(_OWORD *)v64 = v51;
  clap_builder::builder::command::Command::try_get_matches_from(
    (int)v62,
    (int)dest,
    (int)v64,
    v2,
    v3,
    v4,
    v25,
    v28,
    v31,
    v33);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v55, v62);
  if ( (_QWORD)v55 == 0x8000000000000000LL )
  {
    v50 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
            *((_QWORD *)&v55 + 1),
            &off_FF810);
LABEL_29:
    v103 = 0;
    return v50;
  }
  v72 = v61;
  v71 = v60;
  v70 = v59;
  v69 = v58;
  v68 = v57;
  v67 = v56;
  v66 = v55;
  v54 = v61;
  v53[5] = v60;
  v53[4] = v59;
  v53[3] = v58;
  v53[2] = v57;
  v53[1] = v56;
  v53[0] = v55;
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
           v53,
           aZero_0,
           *(&uu_basename::options::ZERO + 1),
           &off_FF730);
  v73 = uucore::mods::line_ending::LineEnding::from_zero_flag(flag & 1);
  clap_builder::parser::matches::arg_matches::ArgMatches::get_many(
    v77,
    v53,
    aName,
    *(&uu_basename::options::NAME + 1),
    &off_FF748);
  core::option::Option<T>::unwrap_or_default(v76, v77);
  core::iter::traits::iterator::Iterator::collect(v74, v76);
  v102 = 1;
  is_empty = alloc::vec::Vec<T,A>::is_empty(v74);
  if ( (is_empty & 1) != 0 )
  {
    <str as alloc::string::ToString>::to_string(v78, aMissingOperand, 15LL);
    v15 = v78;
    v20 = uucore::mods::error::UUsageError::new(
            1,
            (int)v78,
            v16,
            v17,
            v18,
            v19,
            v26,
            v29,
            v32,
            v34,
            v36,
            v38,
            v39,
            v40,
            v41,
            v42);
    v30 = v21;
    LODWORD(v24) = v20;
    v50 = v20;
LABEL_24:
    core::ptr::drop_in_place<alloc::vec::Vec<&alloc::string::String>>((int)v74, (int)v15, v21, v24, v22, v23, v27, v30);
    v102 = 0;
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v53);
    goto LABEL_29;
  }
  one = clap_builder::parser::matches::arg_matches::ArgMatches::get_one(
          v53,
          aSuffix,
          *(&uu_basename::options::SUFFIX + 1),
          &off_FF760);
  is_some = core::option::Option<T>::is_some(&one);
  if ( (is_some & 1) != 0 )
    v79 = 1;
  else
    v79 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
            v53,
            aMultiple,
            *(&uu_basename::options::MULTIPLE + 1),
            &off_FF778) & 1;
  if ( (v79 & 1) != 0 )
  {
    v45 = clap_builder::parser::matches::arg_matches::ArgMatches::get_one(
            v53,
            aSuffix,
            *(&uu_basename::options::SUFFIX + 1),
            &off_FF7F8);
    core::option::Option<&T>::cloned(v82, v45);
    core::option::Option<T>::unwrap_or_default(v81, v82);
  }
  else
  {
    v46 = alloc::vec::Vec<T,A>::len(v74);
    switch ( v46 )
    {
      case 0LL:
        core::fmt::Arguments::new_const(v83, &off_FF790);
        core::panicking::panic_fmt(v83, &off_FF7A0);
      case 1LL:
        <alloc::string::String as core::default::Default>::default(v81);
        break;
      case 2LL:
        v43 = alloc::vec::Vec<T,A>::pop(v74);
        v110 = v43;
        if ( !v43 )
          core::option::unwrap_failed(&off_FF7B8);
        <alloc::string::String as core::clone::Clone>::clone(v81, v110);
        break;
      default:
        v44 = (_QWORD *)<alloc::vec::Vec<T,A> as core::ops::index::Index<I>>::index(v74, 2LL, &off_FF7E0);
        v5 = <alloc::string::String as core::ops::deref::Deref>::deref(*v44);
        <str as os_display::native::Quotable>::quote(v91, v5, v6);
        v104 = v91;
        v105 = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)&v90 = v91;
        *((_QWORD *)&v90 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
        v89 = v90;
        core::fmt::Arguments::new_v1(v88, &off_FF7D0, &v89);
        alloc::fmt::format(v87, v88);
        *(_QWORD *)v84 = v87[0];
        v85 = v87[1];
        v86 = v87[2];
        v15 = v84;
        v24 = uucore::mods::error::UUsageError::new(
                1,
                (int)v84,
                v7,
                v8,
                v9,
                v10,
                v26,
                v29,
                v32,
                v34,
                v36,
                v38,
                v39,
                v40,
                v41,
                v42);
        v50 = v24;
        goto LABEL_24;
    }
  }
  v102 = 0;
  v94 = v75;
  v93 = *(_OWORD *)v74;
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v92, &v93);
  v95[0] = v92[0];
  v95[1] = v92[1];
  v95[2] = v92[2];
  v95[3] = v92[3];
  while ( 1 )
  {
    v96 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v95);
    if ( !v96 )
      break;
    v35 = <alloc::string::String as core::ops::deref::Deref>::deref(v96);
    v37 = v12;
    v13 = <alloc::string::String as core::ops::deref::Deref>::deref(v81);
    uu_basename::basename(v100, v35, v37, v13, v14);
    v108 = v100;
    v109 = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v99 = v100;
    *((_QWORD *)&v99 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    v106 = &v73;
    v107 = <uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt;
    *(_QWORD *)&v101 = &v73;
    *((_QWORD *)&v101 + 1) = <uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt;
    v98[0] = v99;
    v98[1] = v101;
    core::fmt::Arguments::new_v1(v97, &unk_15268, v98);
    std::io::stdio::_print(v97);
    core::ptr::drop_in_place<alloc::string::String>(v100);
  }
  core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&alloc::string::String>>(v95);
  v50 = 0LL;
  core::ptr::drop_in_place<alloc::string::String>(v81);
  v102 = 0;
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v53);
  v103 = 0;
  return v50;
}
