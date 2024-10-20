__int64 __fastcall uu_sum::uumain::uumain(int a1, int a2)
{
  int v2; // r8d
  int v3; // r9d
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v7; // rdx
  __int16 v8; // dx
  __int64 v9; // rdx
  __int64 v10; // [rsp+0h] [rbp-C58h]
  int v11; // [rsp+8h] [rbp-C50h]
  struct _Unwind_Exception *v12; // [rsp+10h] [rbp-C48h]
  int v13; // [rsp+18h] [rbp-C40h]
  unsigned int v14; // [rsp+44h] [rbp-C14h]
  __int64 v15; // [rsp+78h] [rbp-BE0h]
  char flag; // [rsp+8Fh] [rbp-BC9h]
  _OWORD *v17; // [rsp+90h] [rbp-BC8h]
  __int64 v18; // [rsp+C0h] [rbp-B98h]
  _OWORD v19[6]; // [rsp+D0h] [rbp-B88h] BYREF
  __int64 v20; // [rsp+130h] [rbp-B28h]
  __int128 v21; // [rsp+138h] [rbp-B20h] BYREF
  __int128 v22; // [rsp+148h] [rbp-B10h]
  __int128 v23; // [rsp+158h] [rbp-B00h]
  __int128 v24; // [rsp+168h] [rbp-AF0h]
  __int128 v25; // [rsp+178h] [rbp-AE0h]
  __int128 v26; // [rsp+188h] [rbp-AD0h]
  __int64 v27; // [rsp+198h] [rbp-AC0h]
  int v28[26]; // [rsp+1A0h] [rbp-AB8h] BYREF
  int v29[178]; // [rsp+208h] [rbp-A50h] BYREF
  __int128 v30; // [rsp+4D0h] [rbp-788h]
  __int128 v31; // [rsp+4E0h] [rbp-778h]
  __int128 v32; // [rsp+4F0h] [rbp-768h]
  __int128 v33; // [rsp+500h] [rbp-758h]
  __int128 v34; // [rsp+510h] [rbp-748h]
  __int128 v35; // [rsp+520h] [rbp-738h]
  __int64 v36; // [rsp+530h] [rbp-728h]
  _BYTE v37[24]; // [rsp+538h] [rbp-720h] BYREF
  _OWORD v38[4]; // [rsp+550h] [rbp-708h] BYREF
  _OWORD v39[4]; // [rsp+590h] [rbp-6C8h] BYREF
  _BYTE v40[64]; // [rsp+5D8h] [rbp-680h] BYREF
  __int64 v41; // [rsp+618h] [rbp-640h]
  __int128 v42; // [rsp+620h] [rbp-638h] BYREF
  __int64 v43; // [rsp+630h] [rbp-628h]
  char v44; // [rsp+63Fh] [rbp-619h]
  __int64 v45; // [rsp+640h] [rbp-618h] BYREF
  _QWORD v46[2]; // [rsp+648h] [rbp-610h] BYREF
  __int64 v47; // [rsp+658h] [rbp-600h]
  __int64 v48; // [rsp+660h] [rbp-5F8h] BYREF
  __int64 v49; // [rsp+668h] [rbp-5F0h]
  __int64 v50; // [rsp+670h] [rbp-5E8h]
  __int64 v51; // [rsp+678h] [rbp-5E0h] BYREF
  __int64 v52; // [rsp+680h] [rbp-5D8h]
  __int64 v53; // [rsp+688h] [rbp-5D0h]
  _QWORD v54[2]; // [rsp+690h] [rbp-5C8h] BYREF
  _BYTE v55[48]; // [rsp+6A0h] [rbp-5B8h] BYREF
  _OWORD v56[2]; // [rsp+6D0h] [rbp-588h] BYREF
  __int128 v57; // [rsp+6F0h] [rbp-568h]
  _QWORD v58[2]; // [rsp+700h] [rbp-558h] BYREF
  __int128 v59; // [rsp+710h] [rbp-548h]
  __int64 v60; // [rsp+720h] [rbp-538h] BYREF
  __int16 v61; // [rsp+72Eh] [rbp-52Ah] BYREF
  __int64 v62; // [rsp+730h] [rbp-528h]
  __int16 v63; // [rsp+738h] [rbp-520h]
  _BYTE v64[48]; // [rsp+740h] [rbp-518h] BYREF
  _QWORD v65[20]; // [rsp+770h] [rbp-4E8h] BYREF
  _BYTE v66[56]; // [rsp+810h] [rbp-448h] BYREF
  __int64 v67; // [rsp+848h] [rbp-410h] BYREF
  __int64 v68; // [rsp+880h] [rbp-3D8h] BYREF
  _QWORD v69[5]; // [rsp+8B8h] [rbp-3A0h] BYREF
  int v70; // [rsp+8E0h] [rbp-378h]
  int v71; // [rsp+8E4h] [rbp-374h]
  char v72; // [rsp+8E8h] [rbp-370h]
  char v73; // [rsp+8F7h] [rbp-361h]
  __int64 v74; // [rsp+8F8h] [rbp-360h]
  __int64 v75; // [rsp+900h] [rbp-358h]
  __int64 v76; // [rsp+908h] [rbp-350h]
  __int64 v77; // [rsp+910h] [rbp-348h]
  _QWORD v78[5]; // [rsp+918h] [rbp-340h] BYREF
  int v79; // [rsp+940h] [rbp-318h]
  int v80; // [rsp+944h] [rbp-314h]
  char v81; // [rsp+948h] [rbp-310h]
  char v82; // [rsp+957h] [rbp-301h]
  __int64 v83; // [rsp+958h] [rbp-300h]
  __int64 v84; // [rsp+960h] [rbp-2F8h]
  __int64 v85; // [rsp+968h] [rbp-2F0h]
  __int64 v86; // [rsp+970h] [rbp-2E8h]
  _QWORD v87[5]; // [rsp+978h] [rbp-2E0h] BYREF
  int v88; // [rsp+9A0h] [rbp-2B8h]
  int v89; // [rsp+9A4h] [rbp-2B4h]
  char v90; // [rsp+9A8h] [rbp-2B0h]
  char v91; // [rsp+9B7h] [rbp-2A1h]
  __int64 v92; // [rsp+9B8h] [rbp-2A0h]
  __int64 v93; // [rsp+9C0h] [rbp-298h]
  __int64 v94; // [rsp+9C8h] [rbp-290h]
  __int64 v95; // [rsp+9D0h] [rbp-288h]
  _BYTE v96[48]; // [rsp+9D8h] [rbp-280h] BYREF
  _QWORD v97[15]; // [rsp+A08h] [rbp-250h] BYREF
  _BYTE dest[56]; // [rsp+A80h] [rbp-1D8h] BYREF
  __int64 v99; // [rsp+AB8h] [rbp-1A0h] BYREF
  _QWORD src[5]; // [rsp+AF0h] [rbp-168h] BYREF
  int v101; // [rsp+B18h] [rbp-140h]
  int v102; // [rsp+B1Ch] [rbp-13Ch]
  char v103; // [rsp+B20h] [rbp-138h]
  char v104; // [rsp+B2Fh] [rbp-129h]
  __int64 v105; // [rsp+B30h] [rbp-128h]
  __int64 v106; // [rsp+B38h] [rbp-120h]
  __int64 v107; // [rsp+B40h] [rbp-118h]
  __int64 v108; // [rsp+B48h] [rbp-110h]
  _QWORD v109[5]; // [rsp+B50h] [rbp-108h] BYREF
  int v110; // [rsp+B78h] [rbp-E0h]
  int v111; // [rsp+B7Ch] [rbp-DCh]
  char v112; // [rsp+B80h] [rbp-D8h]
  char v113; // [rsp+B8Fh] [rbp-C9h]
  __int64 v114; // [rsp+B90h] [rbp-C8h]
  __int64 v115; // [rsp+B98h] [rbp-C0h]
  __int64 v116; // [rsp+BA0h] [rbp-B8h]
  __int64 v117; // [rsp+BA8h] [rbp-B0h]
  char v118; // [rsp+BB6h] [rbp-A2h]
  char v119; // [rsp+BB7h] [rbp-A1h]
  __int64 v120; // [rsp+BC8h] [rbp-90h]
  __int64 v121; // [rsp+BD0h] [rbp-88h]
  __int64 v122; // [rsp+BD8h] [rbp-80h]
  __int64 v123; // [rsp+BE0h] [rbp-78h]
  _QWORD *v124; // [rsp+BE8h] [rbp-70h]
  __int64 (__fastcall *v125)(); // [rsp+BF0h] [rbp-68h]
  __int64 *v126; // [rsp+BF8h] [rbp-60h]
  __int64 (__fastcall *v127)(); // [rsp+C00h] [rbp-58h]
  __int64 *v128; // [rsp+C08h] [rbp-50h]
  __int64 (__fastcall *v129)(); // [rsp+C10h] [rbp-48h]
  __int64 *v130; // [rsp+C18h] [rbp-40h]
  __int64 (__fastcall *v131)(); // [rsp+C20h] [rbp-38h]
  _QWORD *v132; // [rsp+C28h] [rbp-30h]
  __int64 (__fastcall *v133)(); // [rsp+C30h] [rbp-28h]
  __int16 *v134; // [rsp+C38h] [rbp-20h]
  __int64 (__fastcall *v135)(); // [rsp+C40h] [rbp-18h]
  __int16 *v136; // [rsp+C48h] [rbp-10h]
  __int64 (__fastcall *v137)(); // [rsp+C50h] [rbp-8h]

  v118 = 0;
  v119 = 1;
  uu_sum::uu_app(v29);
  v119 = 0;
  clap_builder::builder::command::Command::try_get_matches_from((int)v28, (int)v29, a1, a2, v2, v3, v10, v11, v12, v13);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v21, v28);
  if ( (_QWORD)v21 == 0x8000000000000000LL )
    return <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
             *((_QWORD *)&v21 + 1),
             &off_102B28);
  v36 = v27;
  v35 = v26;
  v34 = v25;
  v33 = v24;
  v32 = v23;
  v31 = v22;
  v30 = v21;
  v20 = v27;
  v19[5] = v26;
  v19[4] = v25;
  v19[3] = v24;
  v19[2] = v23;
  v19[1] = v22;
  v19[0] = v21;
  clap_builder::parser::matches::arg_matches::ArgMatches::get_many(
    v38,
    v19,
    aFile,
    *(&uu_sum::options::FILE + 1),
    &off_102A18);
  if ( *(_QWORD *)&v38[0] )
  {
    v39[3] = v38[3];
    v39[2] = v38[2];
    v39[1] = v38[1];
    v39[0] = v38[0];
    core::iter::traits::iterator::Iterator::cloned(v40, v39);
    core::iter::traits::iterator::Iterator::collect(v37, v40);
  }
  else
  {
    v41 = alloc::alloc::exchange_malloc(24LL, 8LL);
    alloc::str::<impl alloc::borrow::ToOwned for str>::to_owned(&v42, asc_15BFA, 1LL);
    v17 = (_OWORD *)v41;
    if ( (v41 & 7) != 0 )
      core::panicking::panic_misaligned_pointer_dereference(8LL, v41, &off_102A30);
    *(_QWORD *)(v41 + 16) = v43;
    *v17 = v42;
    alloc::slice::<impl [T]>::into_vec(v37, v41, 1LL);
  }
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
           v19,
           aSysv,
           *(&uu_sum::options::SYSTEM_V_COMPATIBLE + 1),
           &off_102A48);
  if ( (unsigned __int64)alloc::vec::Vec<T,A>::len(v37) > 1 )
  {
    v44 = 1;
  }
  else
  {
    v15 = <alloc::vec::Vec<T,A> as core::ops::index::Index<I>>::index(v37, 0LL, &off_102A60);
    v44 = <alloc::string::String as core::cmp::PartialEq<&str>>::ne(v15, &off_102A78) & 1;
  }
  if ( (flag & 1) != 0 )
    v45 = 1LL;
  else
    v45 = 5LL;
  v46[0] = <&alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v37);
  v46[1] = v4;
  while ( 1 )
  {
    v47 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v46);
    if ( !v47 )
      break;
    v48 = v47;
    v5 = <alloc::string::String as core::ops::deref::Deref>::deref(v47);
    uu_sum::open(&v51, v5, v7);
    if ( v51 )
    {
      v54[0] = v52;
      v54[1] = v53;
      v14 = (*(__int64 (__fastcall **)(__int64))(v53 + 96))(v52);
      uucore::mods::error::set_exit_code(v14);
      v58[0] = uucore::util_name();
      v58[1] = v9;
      v124 = v58;
      v125 = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v57 = v58;
      *((_QWORD *)&v57 + 1) = <&T as core::fmt::Display>::fmt;
      v132 = v54;
      v133 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
      *(_QWORD *)&v59 = v54;
      *((_QWORD *)&v59 + 1) = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
      v56[0] = v57;
      v56[1] = v59;
      core::fmt::Arguments::new_v1(v55, &unk_102AF8, v56);
      std::io::stdio::_eprint(v55);
      core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::mods::error::UError>>(v54);
      v118 = 0;
    }
    else
    {
      v49 = v52;
      v50 = v53;
      v118 = 0;
      if ( (flag & 1) != 0 )
        v62 = uu_sum::sysv_sum(v49, v50);
      else
        v62 = uu_sum::bsd_sum(v49, v50);
      v63 = v8;
      v60 = v62;
      v61 = v8;
      if ( (v44 & 1) != 0 )
      {
        v65[8] = &v61;
        v65[9] = &v45;
        v65[10] = &v60;
        v65[11] = &v48;
        v134 = &v61;
        v135 = core::fmt::num::imp::<impl core::fmt::Display for u16>::fmt;
        v65[12] = &v61;
        v65[13] = core::fmt::num::imp::<impl core::fmt::Display for u16>::fmt;
        v126 = &v60;
        v127 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
        v65[14] = &v60;
        v65[15] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
        v130 = &v48;
        v131 = <&T as core::fmt::Display>::fmt;
        v65[16] = &v48;
        v65[17] = <&T as core::fmt::Display>::fmt;
        v120 = v45;
        v121 = 0LL;
        v65[18] = v45;
        v65[19] = 0LL;
        v65[0] = &v61;
        v65[1] = core::fmt::num::imp::<impl core::fmt::Display for u16>::fmt;
        v65[2] = &v60;
        v65[3] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
        v65[4] = &v48;
        v65[5] = <&T as core::fmt::Display>::fmt;
        v65[6] = v45;
        v65[7] = 0LL;
        v73 = 3;
        v74 = 2LL;
        v77 = 3LL;
        v76 = 1LL;
        v69[4] = 0LL;
        v70 = 32;
        v72 = 3;
        v71 = 8;
        v69[0] = 2LL;
        v69[1] = v75;
        v69[2] = 1LL;
        v69[3] = 3LL;
        v82 = 3;
        v83 = 2LL;
        v86 = 3LL;
        v85 = 1LL;
        v78[4] = 1LL;
        v79 = 32;
        v81 = 3;
        v80 = 0;
        v78[0] = 2LL;
        v78[1] = v84;
        v78[2] = 1LL;
        v78[3] = 3LL;
        v91 = 3;
        v92 = 2LL;
        v94 = 2LL;
        v87[4] = 2LL;
        v88 = 32;
        v90 = 3;
        v89 = 0;
        v87[0] = 2LL;
        v87[1] = v93;
        v87[2] = 2LL;
        v87[3] = v95;
        memcpy(v66, v69, sizeof(v66));
        memcpy(&v67, v78, 0x38uLL);
        memcpy(&v68, v87, 0x38uLL);
        core::fmt::Arguments::new_v1_formatted(
          (unsigned int)v64,
          (unsigned int)&unk_102AB8,
          4,
          (unsigned int)v65,
          4,
          (unsigned int)v66,
          3LL);
        std::io::stdio::_print(v64);
      }
      else
      {
        v97[6] = &v61;
        v97[7] = &v45;
        v97[8] = &v60;
        v136 = &v61;
        v137 = core::fmt::num::imp::<impl core::fmt::Display for u16>::fmt;
        v97[9] = &v61;
        v97[10] = core::fmt::num::imp::<impl core::fmt::Display for u16>::fmt;
        v128 = &v60;
        v129 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
        v97[11] = &v60;
        v97[12] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
        v122 = v45;
        v123 = 0LL;
        v97[13] = v45;
        v97[14] = 0LL;
        v97[0] = &v61;
        v97[1] = core::fmt::num::imp::<impl core::fmt::Display for u16>::fmt;
        v97[2] = &v60;
        v97[3] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
        v97[4] = v45;
        v97[5] = 0LL;
        v104 = 3;
        v105 = 2LL;
        v108 = 2LL;
        v107 = 1LL;
        src[4] = 0LL;
        v101 = 32;
        v103 = 3;
        v102 = 8;
        src[0] = 2LL;
        src[1] = v106;
        src[2] = 1LL;
        src[3] = 2LL;
        v113 = 3;
        v114 = 2LL;
        v117 = 2LL;
        v116 = 1LL;
        v109[4] = 1LL;
        v110 = 32;
        v112 = 3;
        v111 = 0;
        v109[0] = 2LL;
        v109[1] = v115;
        v109[2] = 1LL;
        v109[3] = 2LL;
        memcpy(dest, src, sizeof(dest));
        memcpy(&v99, v109, 0x38uLL);
        core::fmt::Arguments::new_v1_formatted(
          (unsigned int)v96,
          (unsigned int)&unk_102A88,
          3,
          (unsigned int)v97,
          3,
          (unsigned int)dest,
          2LL);
        std::io::stdio::_print(v96);
      }
      v118 = 0;
    }
  }
  v18 = 0LL;
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v37);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v19);
  return v18;
}
