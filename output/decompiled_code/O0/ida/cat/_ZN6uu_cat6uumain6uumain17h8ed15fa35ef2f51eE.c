__int64 __fastcall uu_cat::uumain::uumain(int a1, int a2)
{
  int v2; // r8d
  int v3; // r9d
  __int64 v4; // rdx
  int v5; // r8d
  int v6; // r9d
  __int64 v7; // rdx
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // rdx
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v16; // [rsp+0h] [rbp-858h]
  int v17; // [rsp+0h] [rbp-858h]
  int v18; // [rsp+0h] [rbp-858h]
  int v19; // [rsp+0h] [rbp-858h]
  int v20; // [rsp+8h] [rbp-850h]
  int v21; // [rsp+8h] [rbp-850h]
  int v22; // [rsp+8h] [rbp-850h]
  int v23; // [rsp+8h] [rbp-850h]
  struct _Unwind_Exception *v24; // [rsp+10h] [rbp-848h]
  int v25; // [rsp+10h] [rbp-848h]
  int v26; // [rsp+10h] [rbp-848h]
  int v27; // [rsp+10h] [rbp-848h]
  int v28; // [rsp+18h] [rbp-840h]
  int v29; // [rsp+18h] [rbp-840h]
  int v30; // [rsp+18h] [rbp-840h]
  int v31; // [rsp+18h] [rbp-840h]
  int v32; // [rsp+20h] [rbp-838h]
  int v33; // [rsp+20h] [rbp-838h]
  int v34; // [rsp+20h] [rbp-838h]
  int v35; // [rsp+28h] [rbp-830h]
  int v36; // [rsp+28h] [rbp-830h]
  int v37; // [rsp+28h] [rbp-830h]
  _OWORD *v38; // [rsp+28h] [rbp-830h]
  struct _Unwind_Exception *v39; // [rsp+30h] [rbp-828h]
  struct _Unwind_Exception *v40; // [rsp+30h] [rbp-828h]
  struct _Unwind_Exception *v41; // [rsp+30h] [rbp-828h]
  int v42; // [rsp+38h] [rbp-820h]
  int v43; // [rsp+38h] [rbp-820h]
  int v44; // [rsp+38h] [rbp-820h]
  char v45; // [rsp+3Eh] [rbp-81Ah]
  char v46; // [rsp+3Fh] [rbp-819h]
  char v47; // [rsp+57h] [rbp-801h]
  char v48; // [rsp+6Fh] [rbp-7E9h]
  char v49; // [rsp+87h] [rbp-7D1h]
  char flag; // [rsp+9Fh] [rbp-7B9h]
  __int64 v51; // [rsp+B0h] [rbp-7A8h]
  int v52[4]; // [rsp+C0h] [rbp-798h] BYREF
  __int128 v53; // [rsp+D0h] [rbp-788h]
  __int128 v54; // [rsp+E0h] [rbp-778h]
  __int128 v55; // [rsp+F0h] [rbp-768h]
  __int128 v56; // [rsp+100h] [rbp-758h]
  __int128 v57; // [rsp+110h] [rbp-748h]
  __int64 v58; // [rsp+120h] [rbp-738h]
  __int128 v59; // [rsp+128h] [rbp-730h] BYREF
  __int128 v60; // [rsp+138h] [rbp-720h]
  __int128 v61; // [rsp+148h] [rbp-710h]
  __int128 v62; // [rsp+158h] [rbp-700h]
  __int128 v63; // [rsp+168h] [rbp-6F0h]
  __int128 v64; // [rsp+178h] [rbp-6E0h]
  __int64 v65; // [rsp+188h] [rbp-6D0h]
  int v66[26]; // [rsp+190h] [rbp-6C8h] BYREF
  int dest[178]; // [rsp+1F8h] [rbp-660h] BYREF
  __int128 v68; // [rsp+4C0h] [rbp-398h]
  __int128 v69; // [rsp+4D0h] [rbp-388h]
  __int128 v70; // [rsp+4E0h] [rbp-378h]
  __int128 v71; // [rsp+4F0h] [rbp-368h]
  __int128 v72; // [rsp+500h] [rbp-358h]
  __int128 v73; // [rsp+510h] [rbp-348h]
  __int64 v74; // [rsp+520h] [rbp-338h]
  char v75; // [rsp+52Fh] [rbp-329h]
  int v76[2]; // [rsp+530h] [rbp-328h] BYREF
  __int64 v77; // [rsp+538h] [rbp-320h]
  __int128 v78; // [rsp+540h] [rbp-318h] BYREF
  __int64 v79; // [rsp+550h] [rbp-308h]
  __int128 v80; // [rsp+558h] [rbp-300h]
  __int64 v81; // [rsp+568h] [rbp-2F0h]
  __int128 v82; // [rsp+570h] [rbp-2E8h]
  __int64 v83; // [rsp+580h] [rbp-2D8h]
  __int128 v84; // [rsp+588h] [rbp-2D0h]
  __int64 v85; // [rsp+598h] [rbp-2C0h]
  __int128 v86; // [rsp+5A0h] [rbp-2B8h] BYREF
  __int64 v87; // [rsp+5B0h] [rbp-2A8h]
  __int128 v88; // [rsp+5B8h] [rbp-2A0h] BYREF
  __int64 v89; // [rsp+5C8h] [rbp-290h]
  __int128 v90; // [rsp+5D0h] [rbp-288h] BYREF
  __int64 v91; // [rsp+5E0h] [rbp-278h]
  __int128 v92; // [rsp+5E8h] [rbp-270h] BYREF
  __int64 v93; // [rsp+5F8h] [rbp-260h]
  int v94[2]; // [rsp+600h] [rbp-258h] BYREF
  __int64 v95; // [rsp+608h] [rbp-250h]
  __int128 v96; // [rsp+610h] [rbp-248h] BYREF
  __int64 v97; // [rsp+620h] [rbp-238h]
  __int128 v98; // [rsp+628h] [rbp-230h]
  __int64 v99; // [rsp+638h] [rbp-220h]
  __int128 v100; // [rsp+640h] [rbp-218h]
  __int64 v101; // [rsp+650h] [rbp-208h]
  __int128 v102; // [rsp+658h] [rbp-200h] BYREF
  __int64 v103; // [rsp+668h] [rbp-1F0h]
  __int128 v104; // [rsp+670h] [rbp-1E8h] BYREF
  __int64 v105; // [rsp+680h] [rbp-1D8h]
  __int128 v106; // [rsp+688h] [rbp-1D0h] BYREF
  __int64 v107; // [rsp+698h] [rbp-1C0h]
  int v108[2]; // [rsp+6A0h] [rbp-1B8h] BYREF
  __int64 v109; // [rsp+6A8h] [rbp-1B0h]
  __int128 v110; // [rsp+6B0h] [rbp-1A8h] BYREF
  __int64 v111; // [rsp+6C0h] [rbp-198h]
  __int128 v112; // [rsp+6C8h] [rbp-190h]
  __int64 v113; // [rsp+6D8h] [rbp-180h]
  __int128 v114; // [rsp+6E0h] [rbp-178h]
  __int64 v115; // [rsp+6F0h] [rbp-168h]
  __int128 v116; // [rsp+700h] [rbp-158h] BYREF
  __int64 v117; // [rsp+710h] [rbp-148h]
  __int128 v118; // [rsp+718h] [rbp-140h] BYREF
  __int64 v119; // [rsp+728h] [rbp-130h]
  __int128 v120; // [rsp+730h] [rbp-128h] BYREF
  __int64 v121; // [rsp+740h] [rbp-118h]
  _BYTE v122[24]; // [rsp+748h] [rbp-110h] BYREF
  _OWORD v123[4]; // [rsp+760h] [rbp-F8h] BYREF
  _OWORD v124[4]; // [rsp+7A0h] [rbp-B8h] BYREF
  _BYTE v125[64]; // [rsp+7E0h] [rbp-78h] BYREF
  __int64 v126; // [rsp+820h] [rbp-38h]
  __int128 v127; // [rsp+828h] [rbp-30h] BYREF
  __int64 v128; // [rsp+838h] [rbp-20h]
  _BYTE v129[5]; // [rsp+842h] [rbp-16h] BYREF
  char v130; // [rsp+847h] [rbp-11h]

  v130 = 1;
  uu_cat::uu_app(dest);
  v130 = 0;
  clap_builder::builder::command::Command::try_get_matches_from((int)v66, (int)dest, a1, a2, v2, v3, v16, v20, v24, v28);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v59, v66);
  if ( (_QWORD)v59 == 0x8000000000000000LL )
    return <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
             *((_QWORD *)&v59 + 1),
             &off_106070);
  v74 = v65;
  v73 = v64;
  v72 = v63;
  v71 = v62;
  v70 = v61;
  v69 = v60;
  v68 = v59;
  v58 = v65;
  v57 = v64;
  v56 = v63;
  v55 = v62;
  v54 = v61;
  v53 = v60;
  *(_OWORD *)v52 = v59;
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
           v52,
           aNumberNonblank,
           *(&uu_cat::options::NUMBER_NONBLANK + 1),
           &off_105FF8);
  if ( (flag & 1) != 0 )
  {
    v75 = 1;
  }
  else
  {
    v49 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
            v52,
            aNumber,
            *(&uu_cat::options::NUMBER + 1),
            &off_106010);
    if ( (v49 & 1) != 0 )
      v75 = 2;
    else
      v75 = 0;
  }
  alloc::str::<impl alloc::borrow::ToOwned for str>::to_owned(&v86, aShowAll, *(&uu_cat::options::SHOW_ALL + 1));
  alloc::str::<impl alloc::borrow::ToOwned for str>::to_owned(&v88, aE, uu_cat::options::SHOW_NONPRINTING_ENDS[1]);
  alloc::str::<impl alloc::borrow::ToOwned for str>::to_owned(&v90, aT, uu_cat::options::SHOW_NONPRINTING_TABS[1]);
  alloc::str::<impl alloc::borrow::ToOwned for str>::to_owned(
    &v92,
    aShowNonprintin,
    *(&uu_cat::options::SHOW_NONPRINTING + 1));
  v79 = v87;
  v78 = v86;
  v81 = v89;
  v80 = v88;
  v83 = v91;
  v82 = v90;
  v85 = v93;
  v84 = v92;
  *(_QWORD *)v76 = core::slice::<impl [T]>::iter(&v78, 4LL);
  v77 = v4;
  v48 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(
          (int)v76,
          (int)v52,
          v4,
          v76[0],
          v5,
          v6,
          v17,
          v21,
          v25,
          v29,
          v32,
          v35,
          v39,
          v42);
  core::ptr::drop_in_place<[alloc::string::String; 4]>(&v78);
  alloc::str::<impl alloc::borrow::ToOwned for str>::to_owned(&v102, aShowEnds, *(&uu_cat::options::SHOW_ENDS + 1));
  alloc::str::<impl alloc::borrow::ToOwned for str>::to_owned(&v104, aShowAll, *(&uu_cat::options::SHOW_ALL + 1));
  alloc::str::<impl alloc::borrow::ToOwned for str>::to_owned(&v106, aE, uu_cat::options::SHOW_NONPRINTING_ENDS[1]);
  v97 = v103;
  v96 = v102;
  v99 = v105;
  v98 = v104;
  v101 = v107;
  v100 = v106;
  *(_QWORD *)v94 = core::slice::<impl [T]>::iter(&v96, 3LL);
  v95 = v7;
  v47 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(
          (int)v94,
          (int)v52,
          v7,
          v94[0],
          v8,
          v9,
          v18,
          v22,
          v26,
          v30,
          v33,
          v36,
          v40,
          v43);
  core::ptr::drop_in_place<[alloc::string::String; 3]>(&v96);
  alloc::str::<impl alloc::borrow::ToOwned for str>::to_owned(&v116, aShowAll, *(&uu_cat::options::SHOW_ALL + 1));
  alloc::str::<impl alloc::borrow::ToOwned for str>::to_owned(&v118, aShowTabs, *(&uu_cat::options::SHOW_TABS + 1));
  alloc::str::<impl alloc::borrow::ToOwned for str>::to_owned(&v120, aT, uu_cat::options::SHOW_NONPRINTING_TABS[1]);
  v111 = v117;
  v110 = v116;
  v113 = v119;
  v112 = v118;
  v115 = v121;
  v114 = v120;
  *(_QWORD *)v108 = core::slice::<impl [T]>::iter(&v110, 3LL);
  v109 = v10;
  v46 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(
          (int)v108,
          (int)v52,
          v10,
          v108[0],
          v11,
          v12,
          v19,
          v23,
          v27,
          v31,
          v34,
          v37,
          v41,
          v44);
  core::ptr::drop_in_place<[alloc::string::String; 3]>(&v110);
  v45 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
          v52,
          aSqueezeBlank,
          *(&uu_cat::options::SQUEEZE_BLANK + 1),
          &off_106028);
  clap_builder::parser::matches::arg_matches::ArgMatches::get_many(
    v123,
    v52,
    aFile,
    *(&uu_cat::options::FILE + 1),
    &off_106040);
  if ( *(_QWORD *)&v123[0] )
  {
    v124[3] = v123[3];
    v124[2] = v123[2];
    v124[1] = v123[1];
    v124[0] = v123[0];
    core::iter::traits::iterator::Iterator::cloned(v125, v124);
    core::iter::traits::iterator::Iterator::collect(v122, v125);
  }
  else
  {
    v126 = alloc::alloc::exchange_malloc(24LL, 8LL);
    alloc::str::<impl alloc::borrow::ToOwned for str>::to_owned(&v127, asc_1625A, 1LL);
    v38 = (_OWORD *)v126;
    if ( (v126 & 7) != 0 )
      core::panicking::panic_misaligned_pointer_dereference(8LL, v126, &off_106058);
    *(_QWORD *)(v126 + 16) = v128;
    *v38 = v127;
    alloc::slice::<impl [T]>::into_vec(v122, v126, 1LL);
  }
  v129[4] = v75;
  v129[0] = v45 & 1;
  v129[1] = v46 & 1;
  v129[2] = v47 & 1;
  v129[3] = v48 & 1;
  v13 = <alloc::vec::Vec<T,A> as core::ops::deref::Deref>::deref(v122);
  v51 = uu_cat::cat_files(v13, v14, v129);
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v122);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v52);
  return v51;
}
