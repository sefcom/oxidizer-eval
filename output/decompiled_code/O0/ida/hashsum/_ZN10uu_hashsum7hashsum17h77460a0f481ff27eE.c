__int64 __fastcall uu_hashsum::hashsum(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  int v15; // r9d
  int v16; // esi
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // rax
  __int64 v21; // rdx
  char **v22; // rsi
  int v23; // edx
  int v24; // ecx
  int v25; // r8d
  int v26; // r9d
  int v27; // edx
  int v28; // r8d
  int v29; // r9d
  int v30; // [rsp+0h] [rbp-7C8h]
  struct _Unwind_Exception *v31; // [rsp+0h] [rbp-7C8h]
  int v32; // [rsp+8h] [rbp-7C0h]
  __int64 v33; // [rsp+8h] [rbp-7C0h]
  int v34; // [rsp+10h] [rbp-7B8h]
  int v35; // [rsp+18h] [rbp-7B0h]
  int v36; // [rsp+20h] [rbp-7A8h]
  char v37; // [rsp+27h] [rbp-7A1h]
  int v38; // [rsp+28h] [rbp-7A0h]
  int v39; // [rsp+30h] [rbp-798h]
  int v40; // [rsp+38h] [rbp-790h]
  __int64 *v41; // [rsp+38h] [rbp-790h]
  int v42; // [rsp+40h] [rbp-788h]
  int v43; // [rsp+48h] [rbp-780h]
  struct _Unwind_Exception *v44; // [rsp+50h] [rbp-778h]
  int v45; // [rsp+58h] [rbp-770h]
  __int64 v46; // [rsp+58h] [rbp-770h]
  int v47; // [rsp+60h] [rbp-768h]
  char v48; // [rsp+67h] [rbp-761h]
  int v49; // [rsp+68h] [rbp-760h]
  int v50; // [rsp+70h] [rbp-758h]
  int v51; // [rsp+78h] [rbp-750h]
  int v52; // [rsp+80h] [rbp-748h]
  int v53; // [rsp+88h] [rbp-740h]
  int v54; // [rsp+90h] [rbp-738h]
  int v55; // [rsp+98h] [rbp-730h]
  int v56; // [rsp+A0h] [rbp-728h]
  int v57; // [rsp+A8h] [rbp-720h]
  int v58; // [rsp+B0h] [rbp-718h]
  char v59; // [rsp+B8h] [rbp-710h]
  int v60; // [rsp+C0h] [rbp-708h]
  int v61[2]; // [rsp+C8h] [rbp-700h]
  int v62; // [rsp+D0h] [rbp-6F8h]
  int v63; // [rsp+D8h] [rbp-6F0h]
  int v64; // [rsp+E0h] [rbp-6E8h]
  __int64 v65; // [rsp+E0h] [rbp-6E8h]
  int v66; // [rsp+E8h] [rbp-6E0h]
  int v67[2]; // [rsp+F0h] [rbp-6D8h] BYREF
  int v68[2]; // [rsp+F8h] [rbp-6D0h]
  int v69[2]; // [rsp+100h] [rbp-6C8h] BYREF
  int v70[2]; // [rsp+108h] [rbp-6C0h]
  int v71[2]; // [rsp+110h] [rbp-6B8h]
  int v72[2]; // [rsp+118h] [rbp-6B0h]
  int v73[2]; // [rsp+120h] [rbp-6A8h] BYREF
  int v74[2]; // [rsp+128h] [rbp-6A0h]
  struct _Unwind_Exception *v75; // [rsp+130h] [rbp-698h]
  int v76[14]; // [rsp+138h] [rbp-690h] BYREF
  int v77[2]; // [rsp+170h] [rbp-658h]
  int v78[2]; // [rsp+178h] [rbp-650h]
  _QWORD v79[2]; // [rsp+180h] [rbp-648h] BYREF
  __int64 v80; // [rsp+190h] [rbp-638h] BYREF
  __int64 v81; // [rsp+198h] [rbp-630h]
  _BYTE v82[16]; // [rsp+1A0h] [rbp-628h] BYREF
  int v83[4]; // [rsp+1B0h] [rbp-618h] BYREF
  __int128 v84; // [rsp+1C0h] [rbp-608h] BYREF
  __int64 v85; // [rsp+1D0h] [rbp-5F8h]
  __int128 v86; // [rsp+1E0h] [rbp-5E8h] BYREF
  __int128 v87; // [rsp+1F0h] [rbp-5D8h]
  _BYTE v88[32]; // [rsp+200h] [rbp-5C8h] BYREF
  int v89[8]; // [rsp+220h] [rbp-5A8h] BYREF
  __int128 v90; // [rsp+240h] [rbp-588h]
  __int128 v91; // [rsp+250h] [rbp-578h]
  _QWORD v92[3]; // [rsp+260h] [rbp-568h] BYREF
  _QWORD v93[2]; // [rsp+278h] [rbp-550h] BYREF
  _QWORD v94[5]; // [rsp+288h] [rbp-540h] BYREF
  _BYTE v95[48]; // [rsp+2B0h] [rbp-518h] BYREF
  _OWORD v96[2]; // [rsp+2E0h] [rbp-4E8h] BYREF
  __int128 v97; // [rsp+300h] [rbp-4C8h]
  __int128 v98; // [rsp+310h] [rbp-4B8h]
  _BYTE v99[48]; // [rsp+320h] [rbp-4A8h] BYREF
  _OWORD v100[3]; // [rsp+350h] [rbp-478h] BYREF
  __int128 v101; // [rsp+388h] [rbp-440h]
  struct _Unwind_Exception *v102; // [rsp+398h] [rbp-430h] BYREF
  __int128 v103; // [rsp+3A0h] [rbp-428h]
  __int128 v104; // [rsp+3B0h] [rbp-418h]
  _BYTE v105[48]; // [rsp+3C0h] [rbp-408h] BYREF
  _OWORD v106[4]; // [rsp+3F0h] [rbp-3D8h] BYREF
  int *v107; // [rsp+438h] [rbp-390h]
  _QWORD *v108; // [rsp+440h] [rbp-388h]
  _QWORD *v109; // [rsp+448h] [rbp-380h]
  __int128 *v110; // [rsp+450h] [rbp-378h]
  int v111[6]; // [rsp+458h] [rbp-370h] BYREF
  __int128 v112; // [rsp+470h] [rbp-358h]
  __int128 v113; // [rsp+480h] [rbp-348h]
  __int128 v114; // [rsp+490h] [rbp-338h]
  __int128 v115; // [rsp+4A0h] [rbp-328h]
  _BYTE v116[48]; // [rsp+4B0h] [rbp-318h] BYREF
  __int128 v117; // [rsp+4E0h] [rbp-2E8h] BYREF
  __int128 v118; // [rsp+4F0h] [rbp-2D8h]
  _BYTE v119[48]; // [rsp+500h] [rbp-2C8h] BYREF
  _OWORD v120[3]; // [rsp+530h] [rbp-298h] BYREF
  _QWORD *v121; // [rsp+568h] [rbp-260h]
  __int128 *v122; // [rsp+570h] [rbp-258h]
  int *v123; // [rsp+578h] [rbp-250h]
  _QWORD v124[2]; // [rsp+580h] [rbp-248h] BYREF
  __int128 v125; // [rsp+590h] [rbp-238h]
  __int128 v126; // [rsp+5A0h] [rbp-228h]
  __int128 v127; // [rsp+5B0h] [rbp-218h]
  _BYTE v128[48]; // [rsp+5C0h] [rbp-208h] BYREF
  _OWORD v129[4]; // [rsp+5F0h] [rbp-1D8h] BYREF
  __int128 v130; // [rsp+638h] [rbp-190h]
  __int128 v131; // [rsp+648h] [rbp-180h]
  __int128 v132; // [rsp+658h] [rbp-170h]
  __int128 v133; // [rsp+668h] [rbp-160h]
  char v134; // [rsp+67Fh] [rbp-149h]
  __int128 *v135; // [rsp+690h] [rbp-138h]
  __int64 (__fastcall *v136)(); // [rsp+698h] [rbp-130h]
  _QWORD *v137; // [rsp+6A0h] [rbp-128h]
  __int64 (__fastcall *v138)(); // [rsp+6A8h] [rbp-120h]
  __int128 *v139; // [rsp+6B0h] [rbp-118h]
  __int64 (__fastcall *v140)(); // [rsp+6B8h] [rbp-110h]
  _QWORD *v141; // [rsp+6C0h] [rbp-108h]
  __int64 (__fastcall *v142)(); // [rsp+6C8h] [rbp-100h]
  __int128 *v143; // [rsp+6D0h] [rbp-F8h]
  __int64 (__fastcall *v144)(); // [rsp+6D8h] [rbp-F0h]
  _QWORD *v145; // [rsp+6E0h] [rbp-E8h]
  __int64 (__fastcall *v146)(); // [rsp+6E8h] [rbp-E0h]
  int *v147; // [rsp+6F0h] [rbp-D8h]
  __int64 (__fastcall *v148)(); // [rsp+6F8h] [rbp-D0h]
  __int128 *v149; // [rsp+700h] [rbp-C8h]
  __int64 (__fastcall *v150)(); // [rsp+708h] [rbp-C0h]
  __int128 *v151; // [rsp+710h] [rbp-B8h]
  __int64 (__fastcall *v152)(); // [rsp+718h] [rbp-B0h]
  _QWORD *v153; // [rsp+720h] [rbp-A8h]
  __int64 (__fastcall *v154)(); // [rsp+728h] [rbp-A0h]
  __int128 *v155; // [rsp+730h] [rbp-98h]
  __int64 (__fastcall *v156)(); // [rsp+738h] [rbp-90h]
  _QWORD *v157; // [rsp+740h] [rbp-88h]
  __int64 (__fastcall *v158)(); // [rsp+748h] [rbp-80h]
  int *v159; // [rsp+750h] [rbp-78h]
  __int64 (__fastcall *v160)(); // [rsp+758h] [rbp-70h]
  int *v161; // [rsp+760h] [rbp-68h]
  __int64 (__fastcall *v162)(); // [rsp+768h] [rbp-60h]
  _QWORD *v163; // [rsp+770h] [rbp-58h]
  __int64 (__fastcall *v164)(); // [rsp+778h] [rbp-50h]
  _QWORD *v165; // [rsp+780h] [rbp-48h]
  __int64 (__fastcall *v166)(); // [rsp+788h] [rbp-40h]
  struct _Unwind_Exception **v167; // [rsp+790h] [rbp-38h]
  __int64 (__fastcall *v168)(); // [rsp+798h] [rbp-30h]
  _Unwind_Exception_Class v169; // [rsp+7B4h] [rbp-14h]

  *(_QWORD *)v61 = a1;
  v62 = a2;
  v63 = a3;
  v134 = 0;
  if ( (*(_BYTE *)(a1 + 40) & 1) != 0 )
    *(_QWORD *)v67 = asc_59F0D;
  else
    *(_QWORD *)v67 = asc_59F0C;
  *(_QWORD *)v68 = 1LL;
  v3 = <I as core::iter::traits::collect::IntoIterator>::into_iter(a2, a3);
  v59 = v4;
  v60 = v3;
  *(_QWORD *)v69 = v3;
  *(_QWORD *)v70 = v4;
  while ( 1 )
  {
    v5 = <core::iter::sources::once::Once<T> as core::iter::traits::iterator::Iterator>::next(v69);
    v57 = v6;
    v58 = v5;
    *(_QWORD *)v71 = v5;
    *(_QWORD *)v72 = v6;
    if ( !v5 )
    {
      v65 = 0LL;
      core::ptr::drop_in_place<uu_hashsum::Options>(*(_QWORD *)v61);
      return v65;
    }
    v7 = std::path::Path::new(*(_QWORD *)v71, *(_QWORD *)v72);
    v55 = v8;
    v56 = v7;
    *(_QWORD *)v73 = v7;
    *(_QWORD *)v74 = v8;
    v10 = std::ffi::os_str::OsStr::new(asc_59F04, 1LL);
    v53 = v11;
    v54 = v10;
    v79[0] = v10;
    v79[1] = v11;
    v48 = core::cmp::impls::<impl core::cmp::PartialEq<&B> for &A>::eq(v73, v79);
    if ( (v48 & 1) != 0 )
    {
      v46 = std::io::stdio::stdin();
      v41 = (__int64 *)alloc::alloc::exchange_malloc(8LL);
      *v41 = v46;
      *(_QWORD *)v77 = v41;
      *(_QWORD *)v78 = &unk_2F92A0;
    }
    else
    {
      std::fs::File::open(
        (int)v83,
        v73[0],
        v74[0],
        v12,
        v13,
        v14,
        v30,
        v32,
        v34,
        v35,
        v36,
        v38,
        v39,
        v40,
        v42,
        v43,
        v44,
        v45);
      <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
        v82,
        v83);
      <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v80, v82);
      if ( v80 )
      {
        v65 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                v80,
                v81,
                &off_2F9288);
        goto LABEL_16;
      }
      HIDWORD(v75) = v81;
      v134 = 0;
      v169 = v81;
      v44 = (struct _Unwind_Exception *)alloc::alloc::exchange_malloc(4LL);
      v44->exception_class = v169;
      *(_QWORD *)v77 = v44;
      *(_QWORD *)v78 = &off_2F9230;
    }
    std::io::buffered::bufreader::BufReader<R>::new((int)v76, v77[0], v78[0]);
    uucore::features::checksum::digest_reader(
      (int)v89,
      v61[0] + 16,
      (int)v76,
      *(_BYTE *)(*(_QWORD *)v61 + 40LL) & 1,
      *(_QWORD *)(*(_QWORD *)v61 + 32LL),
      v15,
      v30,
      v32,
      v34,
      v35,
      v36,
      v38,
      v39,
      (int)v41,
      v42,
      v43,
      (int)v44,
      v46,
      v47,
      v49,
      v50,
      v51,
      v52,
      v53,
      v54,
      v55,
      v56,
      v57,
      v58,
      v59,
      v60,
      v61[0],
      v62,
      v63,
      v64,
      v66,
      v67[0],
      v68[0],
      v69[0],
      v70[0],
      v71[0],
      v72[0],
      v73[0],
      v74[0],
      v75,
      v76[0]);
    <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
      v88,
      v89);
    <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v86, v88);
    if ( (_QWORD)v86 == 0x8000000000000000LL )
      break;
    v91 = v87;
    v90 = v86;
    v85 = v87;
    v84 = v86;
    uucore::features::checksum::escape_filename(v94, *(_QWORD *)v73, *(_QWORD *)v74);
    v92[0] = v94[0];
    v92[1] = v94[1];
    v92[2] = v94[2];
    v93[0] = v94[3];
    v93[1] = v94[4];
    if ( (*(_BYTE *)(*(_QWORD *)v61 + 41LL) & 1) != 0 )
    {
      v37 = core::cmp::impls::<impl core::cmp::PartialEq<&B> for &A>::eq(*(_QWORD *)v61, &off_2F9388);
      if ( (v37 & 1) != 0 )
      {
        v33 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)v61 + 24LL) + 48LL))(*(_QWORD *)(*(_QWORD *)v61 + 16LL));
        if ( v33 == 512 )
        {
          v141 = v92;
          v142 = <alloc::string::String as core::fmt::Display>::fmt;
          *(_QWORD *)&v97 = v92;
          *((_QWORD *)&v97 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
          v139 = &v84;
          v140 = <alloc::string::String as core::fmt::Display>::fmt;
          *(_QWORD *)&v98 = &v84;
          *((_QWORD *)&v98 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
          v96[0] = v97;
          v96[1] = v98;
          v22 = &off_2F93E8;
          core::fmt::Arguments::new_v1(v95, &off_2F93E8, v96);
          std::io::stdio::_print(v95);
        }
        else
        {
          v31 = (struct _Unwind_Exception *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)v61 + 24LL) + 48LL))(*(_QWORD *)(*(_QWORD *)v61 + 16LL));
          v102 = v31;
          v167 = &v102;
          v168 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
          *(_QWORD *)&v101 = &v102;
          *((_QWORD *)&v101 + 1) = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
          v137 = v92;
          v138 = <alloc::string::String as core::fmt::Display>::fmt;
          *(_QWORD *)&v103 = v92;
          *((_QWORD *)&v103 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
          v135 = &v84;
          v136 = <alloc::string::String as core::fmt::Display>::fmt;
          *(_QWORD *)&v104 = &v84;
          *((_QWORD *)&v104 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
          v100[0] = v101;
          v100[1] = v103;
          v100[2] = v104;
          v22 = &off_2F9418;
          core::fmt::Arguments::new_v1(v99, &off_2F9418, v100);
          std::io::stdio::_print(v99);
        }
      }
      else
      {
        alloc::str::<impl str>::to_ascii_uppercase(
          (int)v111,
          **(_QWORD **)v61,
          *(_QWORD *)(*(_QWORD *)v61 + 8LL),
          v17,
          v18,
          v19,
          (int)v31,
          v33,
          v34,
          v35,
          v36,
          v38,
          v39,
          v40,
          v42,
          v43,
          v44,
          v45);
        v107 = v111;
        v108 = v93;
        v109 = v92;
        v110 = &v84;
        v157 = v93;
        v158 = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v112 = v93;
        *((_QWORD *)&v112 + 1) = <&T as core::fmt::Display>::fmt;
        v147 = v111;
        v148 = <alloc::string::String as core::fmt::Display>::fmt;
        *(_QWORD *)&v113 = v111;
        *((_QWORD *)&v113 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
        v145 = v92;
        v146 = <alloc::string::String as core::fmt::Display>::fmt;
        *(_QWORD *)&v114 = v92;
        *((_QWORD *)&v114 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
        v143 = &v84;
        v144 = <alloc::string::String as core::fmt::Display>::fmt;
        *(_QWORD *)&v115 = &v84;
        *((_QWORD *)&v115 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
        v106[0] = v112;
        v106[1] = v113;
        v106[2] = v114;
        v106[3] = v115;
        v22 = (char **)&unk_2F9398;
        core::fmt::Arguments::new_v1(v105, &unk_2F9398, v106);
        std::io::stdio::_print(v105);
        core::ptr::drop_in_place<alloc::string::String>(v111);
      }
    }
    else if ( (*(_BYTE *)(*(_QWORD *)v61 + 42LL) & 1) != 0 )
    {
      v149 = &v84;
      v150 = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v118 = &v84;
      *((_QWORD *)&v118 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      v117 = v118;
      v22 = (char **)&unk_2F8F88;
      core::fmt::Arguments::new_v1(v116, &unk_2F8F88, &v117);
      std::io::stdio::_print(v116);
    }
    else if ( (*(_BYTE *)(*(_QWORD *)v61 + 43LL) & 1) != 0 )
    {
      v20 = std::path::Path::display(*(_QWORD *)v73, *(_QWORD *)v74);
      v34 = v21;
      v35 = v20;
      v124[0] = v20;
      v124[1] = v21;
      v121 = v124;
      v122 = &v84;
      v123 = v67;
      v151 = &v84;
      v152 = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v125 = &v84;
      *((_QWORD *)&v125 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      v159 = v67;
      v160 = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v126 = v67;
      *((_QWORD *)&v126 + 1) = <&T as core::fmt::Display>::fmt;
      v165 = v124;
      v166 = <std::path::Display as core::fmt::Display>::fmt;
      *(_QWORD *)&v127 = v124;
      *((_QWORD *)&v127 + 1) = <std::path::Display as core::fmt::Display>::fmt;
      v120[0] = v125;
      v120[1] = v126;
      v120[2] = v127;
      v22 = (char **)&unk_2F9348;
      core::fmt::Arguments::new_v1(v119, &unk_2F9348, v120);
      std::io::stdio::_print(v119);
    }
    else
    {
      v163 = v93;
      v164 = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v130 = v93;
      *((_QWORD *)&v130 + 1) = <&T as core::fmt::Display>::fmt;
      v155 = &v84;
      v156 = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v131 = &v84;
      *((_QWORD *)&v131 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      v161 = v67;
      v162 = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v132 = v67;
      *((_QWORD *)&v132 + 1) = <&T as core::fmt::Display>::fmt;
      v153 = v92;
      v154 = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v133 = v92;
      *((_QWORD *)&v133 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      v129[0] = v130;
      v129[1] = v131;
      v129[2] = v132;
      v129[3] = v133;
      v22 = (char **)&unk_2F92F8;
      core::fmt::Arguments::new_v1(v128, &unk_2F92F8, v129);
      std::io::stdio::_print(v128);
    }
    core::ptr::drop_in_place<alloc::string::String>(v92);
    core::ptr::drop_in_place<alloc::string::String>(&v84);
    core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn std::io::Read>>>(
      (int)v76,
      (int)v22,
      v23,
      v24,
      v25,
      v26,
      v31,
      v33);
    v134 = 0;
  }
  v16 = v87;
  v65 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
          *((_QWORD *)&v86 + 1),
          v87,
          &off_2F9458);
  core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn std::io::Read>>>(
    (int)v76,
    v16,
    v27,
    v65,
    v28,
    v29,
    v31,
    v33);
LABEL_16:
  v134 = 0;
  core::ptr::drop_in_place<uu_hashsum::Options>(*(_QWORD *)v61);
  return v65;
}
