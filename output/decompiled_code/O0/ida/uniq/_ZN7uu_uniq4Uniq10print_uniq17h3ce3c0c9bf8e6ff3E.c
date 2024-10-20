__int64 __fastcall uu_uniq::Uniq::print_uniq(_BYTE *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rdx
  int v44; // [rsp+0h] [rbp-3B8h]
  int v45; // [rsp+0h] [rbp-3B8h]
  int v46; // [rsp+8h] [rbp-3B0h]
  int v47; // [rsp+8h] [rbp-3B0h]
  int v48; // [rsp+10h] [rbp-3A8h]
  int v49; // [rsp+10h] [rbp-3A8h]
  int v50; // [rsp+18h] [rbp-3A0h]
  int v51; // [rsp+18h] [rbp-3A0h]
  int v52; // [rsp+20h] [rbp-398h]
  int v53; // [rsp+20h] [rbp-398h]
  int v54; // [rsp+28h] [rbp-390h]
  int v55; // [rsp+28h] [rbp-390h]
  int v56; // [rsp+30h] [rbp-388h]
  int v57; // [rsp+30h] [rbp-388h]
  int v58; // [rsp+38h] [rbp-380h]
  int v59; // [rsp+38h] [rbp-380h]
  char v60; // [rsp+40h] [rbp-378h]
  char v61; // [rsp+40h] [rbp-378h]
  int v62; // [rsp+48h] [rbp-370h]
  int v63; // [rsp+48h] [rbp-370h]
  int v64; // [rsp+50h] [rbp-368h]
  int v65; // [rsp+50h] [rbp-368h]
  int v66; // [rsp+58h] [rbp-360h]
  int v67; // [rsp+58h] [rbp-360h]
  int v68; // [rsp+60h] [rbp-358h]
  int v69; // [rsp+60h] [rbp-358h]
  int v70; // [rsp+68h] [rbp-350h]
  int v71; // [rsp+68h] [rbp-350h]
  int v72; // [rsp+70h] [rbp-348h]
  int v73; // [rsp+70h] [rbp-348h]
  int v74; // [rsp+78h] [rbp-340h]
  int v75; // [rsp+78h] [rbp-340h]
  int v76; // [rsp+80h] [rbp-338h]
  int v77; // [rsp+80h] [rbp-338h]
  int v78; // [rsp+88h] [rbp-330h]
  int v79; // [rsp+88h] [rbp-330h]
  char v80; // [rsp+8Fh] [rbp-329h]
  int v81; // [rsp+90h] [rbp-328h]
  int v82[2]; // [rsp+90h] [rbp-328h]
  int v83; // [rsp+98h] [rbp-320h]
  int v84[2]; // [rsp+98h] [rbp-320h]
  int v85; // [rsp+A0h] [rbp-318h]
  int v86; // [rsp+A0h] [rbp-318h]
  int v87; // [rsp+A8h] [rbp-310h]
  int v88; // [rsp+A8h] [rbp-310h]
  struct _Unwind_Exception *v89; // [rsp+B0h] [rbp-308h]
  struct _Unwind_Exception *v90; // [rsp+B0h] [rbp-308h]
  int v91; // [rsp+B8h] [rbp-300h]
  int v92; // [rsp+B8h] [rbp-300h]
  __int64 v93; // [rsp+100h] [rbp-2B8h]
  char v94; // [rsp+10Fh] [rbp-2A9h]
  char v95; // [rsp+147h] [rbp-271h]
  unsigned __int8 line_terminator; // [rsp+177h] [rbp-241h]
  int v98[2]; // [rsp+188h] [rbp-230h] BYREF
  int v99[2]; // [rsp+190h] [rbp-228h]
  __int64 v100; // [rsp+198h] [rbp-220h]
  __int64 v101; // [rsp+1A0h] [rbp-218h]
  char v102; // [rsp+1AFh] [rbp-209h]
  int v103[2]; // [rsp+1B0h] [rbp-208h]
  int v104[4]; // [rsp+1B8h] [rbp-200h] BYREF
  __int64 v105; // [rsp+1C8h] [rbp-1F0h]
  int v106[4]; // [rsp+1D0h] [rbp-1E8h] BYREF
  int v107[2]; // [rsp+1E0h] [rbp-1D8h]
  int v108[4]; // [rsp+1E8h] [rbp-1D0h] BYREF
  int v109[2]; // [rsp+1F8h] [rbp-1C0h]
  int v110[4]; // [rsp+200h] [rbp-1B8h] BYREF
  int v111[2]; // [rsp+210h] [rbp-1A8h]
  int v112[4]; // [rsp+218h] [rbp-1A0h] BYREF
  int v113[2]; // [rsp+228h] [rbp-190h]
  int v114[4]; // [rsp+230h] [rbp-188h]
  int v115[2]; // [rsp+240h] [rbp-178h]
  _QWORD v116[3]; // [rsp+248h] [rbp-170h] BYREF
  __int128 v117; // [rsp+260h] [rbp-158h] BYREF
  __int64 v118; // [rsp+270h] [rbp-148h]
  int v119[2]; // [rsp+280h] [rbp-138h] BYREF
  __int64 v120; // [rsp+288h] [rbp-130h]
  __int64 v121; // [rsp+290h] [rbp-128h]
  int v122[4]; // [rsp+298h] [rbp-120h] BYREF
  __int64 v123; // [rsp+2A8h] [rbp-110h]
  __int128 v124; // [rsp+2B0h] [rbp-108h] BYREF
  __int64 v125; // [rsp+2C0h] [rbp-F8h]
  __int128 v126; // [rsp+2D0h] [rbp-E8h] BYREF
  __int64 v127; // [rsp+2E0h] [rbp-D8h]
  __int128 v128; // [rsp+2E8h] [rbp-D0h] BYREF
  __int64 v129; // [rsp+2F8h] [rbp-C0h]
  __int128 v130; // [rsp+300h] [rbp-B8h]
  __int64 v131; // [rsp+310h] [rbp-A8h]
  __int64 v132; // [rsp+320h] [rbp-98h]
  __int64 v133; // [rsp+328h] [rbp-90h]
  __int128 v134; // [rsp+330h] [rbp-88h]
  __int64 v135; // [rsp+340h] [rbp-78h]
  __int64 v136; // [rsp+350h] [rbp-68h]
  __int64 v137; // [rsp+358h] [rbp-60h]
  __int128 v138; // [rsp+360h] [rbp-58h]
  __int64 v139; // [rsp+370h] [rbp-48h]
  __int64 v140; // [rsp+380h] [rbp-38h]
  __int64 v141; // [rsp+388h] [rbp-30h]
  __int64 v142; // [rsp+390h] [rbp-28h]
  __int64 v143; // [rsp+398h] [rbp-20h]
  unsigned __int8 v144; // [rsp+3A4h] [rbp-14h] BYREF
  char v145; // [rsp+3A5h] [rbp-13h]
  char v146; // [rsp+3A6h] [rbp-12h]
  char v147; // [rsp+3A7h] [rbp-11h]

  *(_QWORD *)v98 = a4;
  *(_QWORD *)v99 = a5;
  v146 = 0;
  v145 = 0;
  v102 = 0;
  *(_QWORD *)v103 = 1LL;
  line_terminator = uu_uniq::Uniq::get_line_terminator();
  v147 = 0;
  std::io::BufRead::split(v104, a2, a3, line_terminator);
  v146 = 1;
  <std::io::Split<B> as core::iter::traits::iterator::Iterator>::next(
    (int)v108,
    (int)v104,
    v5,
    v6,
    v7,
    v8,
    v44,
    v46,
    v48,
    v50,
    v52,
    v54,
    v56,
    v58,
    v60,
    v62,
    v64,
    v66,
    v68,
    v70,
    v72,
    v74,
    v76,
    v78,
    v81,
    v83,
    v85,
    v87,
    v89,
    v91);
  if ( *(_QWORD *)v108 == 0x8000000000000001LL )
  {
    v100 = 0LL;
LABEL_4:
    if ( (v146 & 1) != 0 )
      core::ptr::drop_in_place<std::io::Split<alloc::boxed::Box<dyn std::io::BufRead>>>(v104);
    v146 = 0;
    core::ptr::drop_in_place<alloc::boxed::Box<dyn std::io::Write>>(v98);
    return v100;
  }
  *(_QWORD *)v111 = *(_QWORD *)v109;
  *(_OWORD *)v110 = *(_OWORD *)v108;
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v112, v110);
  if ( *(_QWORD *)v112 == 0x8000000000000000LL )
  {
    v100 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
             *(_QWORD *)&v112[2],
             &off_11A0B0);
    v101 = v43;
    goto LABEL_4;
  }
  *(_QWORD *)v115 = *(_QWORD *)v113;
  *(_OWORD *)v114 = *(_OWORD *)v112;
  *(_QWORD *)v107 = *(_QWORD *)v113;
  *(_OWORD *)v106 = *(_OWORD *)v112;
  v146 = 0;
  v118 = v105;
  v117 = *(_OWORD *)v104;
  <I as core::iter::traits::collect::IntoIterator>::into_iter(v116, &v117);
  *(_QWORD *)v119 = v116[0];
  v120 = v116[1];
  v121 = v116[2];
  while ( 1 )
  {
    <std::io::Split<B> as core::iter::traits::iterator::Iterator>::next(
      (int)v122,
      (int)v119,
      v9,
      v10,
      v11,
      v12,
      v45,
      v47,
      v49,
      v51,
      v53,
      v55,
      v57,
      v59,
      v61,
      v63,
      v65,
      v67,
      v69,
      v71,
      v73,
      v75,
      v77,
      v79,
      v82[0],
      v84[0],
      v86,
      v88,
      v90,
      v92);
    if ( *(_QWORD *)v122 == 0x8000000000000001LL )
      break;
    v125 = v123;
    v124 = *(_OWORD *)v122;
    <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v128, &v124);
    if ( (_QWORD)v128 == 0x8000000000000000LL )
    {
      v100 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
               *((_QWORD *)&v128 + 1),
               &off_11A098);
      v101 = v42;
      goto LABEL_60;
    }
    v131 = v129;
    v130 = v128;
    v145 = 1;
    v127 = v129;
    v126 = v128;
    *(_QWORD *)v82 = <alloc::vec::Vec<T,A> as core::ops::deref::Deref>::deref(v106);
    *(_QWORD *)v84 = v25;
    v26 = <alloc::vec::Vec<T,A> as core::ops::deref::Deref>::deref(&v126);
    v86 = v27;
    v88 = v26;
    v80 = uu_uniq::Uniq::cmp_keys(a1, *(_QWORD *)v82, *(_QWORD *)v84, v26, v27);
    if ( (v80 & 1) != 0 )
    {
      if ( *(_QWORD *)v103 == 1LL && (a1[48] & 1) == 0 || *(_QWORD *)v103 > 1uLL && (a1[49] & 1) == 0 )
      {
        v35 = <alloc::vec::Vec<T,A> as core::ops::deref::Deref>::deref(v106);
        v57 = v36;
        v59 = v35;
        v37 = uu_uniq::Uniq::print_line((__int64)a1, (__int64)v98, v35, v36, *(__int64 *)v103, v102 & 1);
        v53 = v38;
        v55 = v37;
        v39 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v37, v38);
        v49 = v40;
        v51 = v39;
        v132 = v39;
        v133 = v40;
        if ( v39 )
        {
          v100 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                   v132,
                   v133,
                   &off_11A080);
          v101 = v41;
          goto LABEL_49;
        }
        v102 = 1;
      }
      v145 = 0;
      v135 = v127;
      v134 = v126;
      core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v106);
      *(_OWORD *)v106 = v134;
      *(_QWORD *)v107 = v135;
      *(_QWORD *)v103 = 1LL;
    }
    else
    {
      if ( (a1[50] & 1) != 0 )
      {
        v28 = <alloc::vec::Vec<T,A> as core::ops::deref::Deref>::deref(v106);
        v73 = v29;
        v75 = v28;
        v30 = uu_uniq::Uniq::print_line((__int64)a1, (__int64)v98, v28, v29, *(__int64 *)v103, v102 & 1);
        v69 = v31;
        v71 = v30;
        v32 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v30, v31);
        v65 = v33;
        v67 = v32;
        v136 = v32;
        v137 = v33;
        if ( v32 )
        {
          v100 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                   v136,
                   v137,
                   &off_11A068);
          v101 = v34;
LABEL_49:
          core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v126);
LABEL_60:
          v145 = 0;
          core::ptr::drop_in_place<std::io::Split<alloc::boxed::Box<dyn std::io::BufRead>>>(v119);
LABEL_23:
          core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v106);
          goto LABEL_4;
        }
        v102 = 1;
        v145 = 0;
        v139 = v127;
        v138 = v126;
        core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v106);
        *(_OWORD *)v106 = v138;
        *(_QWORD *)v107 = v139;
      }
      v77 = v103[0] + 1;
      if ( *(_QWORD *)v103 == -1LL )
        core::panicking::panic_const::panic_const_add_overflow(&off_11A050);
      ++*(_QWORD *)v103;
    }
    if ( (v145 & 1) != 0 )
      core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v126);
    v145 = 0;
  }
  core::ptr::drop_in_place<std::io::Split<alloc::boxed::Box<dyn std::io::BufRead>>>(v119);
  if ( *(_QWORD *)v103 == 1LL && (a1[48] & 1) == 0 || *(_QWORD *)v103 > 1uLL && (a1[49] & 1) == 0 )
  {
    v13 = <alloc::vec::Vec<T,A> as core::ops::deref::Deref>::deref(v106);
    v15 = uu_uniq::Uniq::print_line((__int64)a1, (__int64)v98, v13, v14, *(__int64 *)v103, v102 & 1);
    v17 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v15, v16);
    v140 = v17;
    v141 = v18;
    if ( v17 )
    {
      v100 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
               v140,
               v141,
               &off_11A020);
      v101 = v19;
      goto LABEL_23;
    }
    v102 = 1;
  }
  v95 = <uu_uniq::Delimiters as core::cmp::PartialEq>::eq(a1 + 54, &byte_1838F);
  if ( (v95 & 1) != 0 || (v94 = <uu_uniq::Delimiters as core::cmp::PartialEq>::eq(a1 + 54, &unk_18390), (v94 & 1) != 0) )
  {
    if ( (v102 & 1) != 0 )
    {
      v144 = line_terminator;
      v93 = std::io::impls::<impl std::io::Write for alloc::boxed::Box<W>>::write_all(v98, &v144, 1LL);
      v20 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v93);
      v142 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v20, v21);
      v143 = v22;
      if ( v142 )
      {
        v100 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                 v142,
                 v143,
                 &off_11A038);
        v101 = v24;
        goto LABEL_23;
      }
    }
  }
  v100 = 0LL;
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v106);
  v146 = 0;
  core::ptr::drop_in_place<alloc::boxed::Box<dyn std::io::Write>>(v98);
  return v100;
}
