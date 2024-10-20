__int64 __fastcall uu_hashsum::hashsum(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v7; // rax
  __int64 v8; // rdx
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  int v12; // r9d
  int v13; // esi
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // rax
  __int64 v18; // rdx
  char **v19; // rsi
  int v20; // edx
  int v21; // ecx
  int v22; // r8d
  int v23; // r9d
  int v24; // edx
  int v25; // r8d
  int v26; // r9d
  int v27; // [rsp+0h] [rbp-828h]
  struct _Unwind_Exception *v28; // [rsp+0h] [rbp-828h]
  int v29; // [rsp+8h] [rbp-820h]
  __int64 v30; // [rsp+8h] [rbp-820h]
  __int64 v31; // [rsp+10h] [rbp-818h]
  int v32; // [rsp+18h] [rbp-810h]
  int v33; // [rsp+20h] [rbp-808h]
  int v34; // [rsp+28h] [rbp-800h]
  char v35; // [rsp+2Fh] [rbp-7F9h]
  int v36; // [rsp+30h] [rbp-7F8h]
  int v37; // [rsp+38h] [rbp-7F0h]
  int v38; // [rsp+40h] [rbp-7E8h]
  __int64 *v39; // [rsp+40h] [rbp-7E8h]
  int v40; // [rsp+48h] [rbp-7E0h]
  struct _Unwind_Exception *v41; // [rsp+50h] [rbp-7D8h]
  _DWORD *v42; // [rsp+58h] [rbp-7D0h]
  __int64 v43; // [rsp+60h] [rbp-7C8h]
  int v44; // [rsp+68h] [rbp-7C0h]
  char v45; // [rsp+6Fh] [rbp-7B9h]
  int v46; // [rsp+70h] [rbp-7B8h]
  int v47; // [rsp+78h] [rbp-7B0h]
  int v48; // [rsp+80h] [rbp-7A8h]
  int v49; // [rsp+88h] [rbp-7A0h]
  int v50; // [rsp+90h] [rbp-798h]
  int v51; // [rsp+98h] [rbp-790h]
  int v52; // [rsp+A0h] [rbp-788h]
  int v53; // [rsp+A8h] [rbp-780h]
  int v54; // [rsp+B0h] [rbp-778h]
  char v55; // [rsp+B8h] [rbp-770h]
  int v56[2]; // [rsp+C0h] [rbp-768h]
  int v57; // [rsp+C8h] [rbp-760h]
  int v58; // [rsp+D0h] [rbp-758h]
  __int64 v59; // [rsp+D0h] [rbp-758h]
  int v60; // [rsp+D8h] [rbp-750h]
  int v61[2]; // [rsp+E0h] [rbp-748h] BYREF
  int v62[2]; // [rsp+E8h] [rbp-740h]
  int src[16]; // [rsp+F0h] [rbp-738h] BYREF
  struct _Unwind_Exception *dest; // [rsp+130h] [rbp-6F8h] BYREF
  int v65; // [rsp+138h] [rbp-6F0h]
  __int64 v66; // [rsp+170h] [rbp-6B8h]
  __int64 v67; // [rsp+178h] [rbp-6B0h]
  int v68[2]; // [rsp+180h] [rbp-6A8h] BYREF
  int v69[3]; // [rsp+188h] [rbp-6A0h]
  int v70; // [rsp+194h] [rbp-694h]
  int v71[14]; // [rsp+198h] [rbp-690h] BYREF
  int v72[2]; // [rsp+1D0h] [rbp-658h]
  int v73[2]; // [rsp+1D8h] [rbp-650h]
  _QWORD v74[2]; // [rsp+1E0h] [rbp-648h] BYREF
  __int64 v75; // [rsp+1F0h] [rbp-638h] BYREF
  __int64 v76; // [rsp+1F8h] [rbp-630h]
  _BYTE v77[16]; // [rsp+200h] [rbp-628h] BYREF
  int v78[4]; // [rsp+210h] [rbp-618h] BYREF
  __int128 v79; // [rsp+220h] [rbp-608h] BYREF
  __int64 v80; // [rsp+230h] [rbp-5F8h]
  __int128 v81; // [rsp+240h] [rbp-5E8h] BYREF
  __int128 v82; // [rsp+250h] [rbp-5D8h]
  _BYTE v83[32]; // [rsp+260h] [rbp-5C8h] BYREF
  int v84[8]; // [rsp+280h] [rbp-5A8h] BYREF
  __int128 v85; // [rsp+2A0h] [rbp-588h]
  __int128 v86; // [rsp+2B0h] [rbp-578h]
  _QWORD v87[3]; // [rsp+2C0h] [rbp-568h] BYREF
  _QWORD v88[2]; // [rsp+2D8h] [rbp-550h] BYREF
  _QWORD v89[5]; // [rsp+2E8h] [rbp-540h] BYREF
  _BYTE v90[48]; // [rsp+310h] [rbp-518h] BYREF
  _OWORD v91[2]; // [rsp+340h] [rbp-4E8h] BYREF
  __int128 v92; // [rsp+360h] [rbp-4C8h]
  __int128 v93; // [rsp+370h] [rbp-4B8h]
  _BYTE v94[48]; // [rsp+380h] [rbp-4A8h] BYREF
  _OWORD v95[3]; // [rsp+3B0h] [rbp-478h] BYREF
  __int128 v96; // [rsp+3E8h] [rbp-440h]
  __int64 v97; // [rsp+3F8h] [rbp-430h] BYREF
  __int128 v98; // [rsp+400h] [rbp-428h]
  __int128 v99; // [rsp+410h] [rbp-418h]
  _BYTE v100[48]; // [rsp+420h] [rbp-408h] BYREF
  _OWORD v101[4]; // [rsp+450h] [rbp-3D8h] BYREF
  int *v102; // [rsp+498h] [rbp-390h]
  _QWORD *v103; // [rsp+4A0h] [rbp-388h]
  _QWORD *v104; // [rsp+4A8h] [rbp-380h]
  __int128 *v105; // [rsp+4B0h] [rbp-378h]
  int v106[6]; // [rsp+4B8h] [rbp-370h] BYREF
  __int128 v107; // [rsp+4D0h] [rbp-358h]
  __int128 v108; // [rsp+4E0h] [rbp-348h]
  __int128 v109; // [rsp+4F0h] [rbp-338h]
  __int128 v110; // [rsp+500h] [rbp-328h]
  _BYTE v111[48]; // [rsp+510h] [rbp-318h] BYREF
  __int128 v112; // [rsp+540h] [rbp-2E8h] BYREF
  __int128 v113; // [rsp+550h] [rbp-2D8h]
  _BYTE v114[48]; // [rsp+560h] [rbp-2C8h] BYREF
  _OWORD v115[3]; // [rsp+590h] [rbp-298h] BYREF
  _QWORD *v116; // [rsp+5C8h] [rbp-260h]
  __int128 *v117; // [rsp+5D0h] [rbp-258h]
  int *v118; // [rsp+5D8h] [rbp-250h]
  _QWORD v119[2]; // [rsp+5E0h] [rbp-248h] BYREF
  __int128 v120; // [rsp+5F0h] [rbp-238h]
  __int128 v121; // [rsp+600h] [rbp-228h]
  __int128 v122; // [rsp+610h] [rbp-218h]
  _BYTE v123[48]; // [rsp+620h] [rbp-208h] BYREF
  _OWORD v124[4]; // [rsp+650h] [rbp-1D8h] BYREF
  __int128 v125; // [rsp+698h] [rbp-190h]
  __int128 v126; // [rsp+6A8h] [rbp-180h]
  __int128 v127; // [rsp+6B8h] [rbp-170h]
  __int128 v128; // [rsp+6C8h] [rbp-160h]
  char v129; // [rsp+6DFh] [rbp-149h]
  __int128 *v130; // [rsp+6F0h] [rbp-138h]
  __int64 (__fastcall *v131)(); // [rsp+6F8h] [rbp-130h]
  _QWORD *v132; // [rsp+700h] [rbp-128h]
  __int64 (__fastcall *v133)(); // [rsp+708h] [rbp-120h]
  __int128 *v134; // [rsp+710h] [rbp-118h]
  __int64 (__fastcall *v135)(); // [rsp+718h] [rbp-110h]
  _QWORD *v136; // [rsp+720h] [rbp-108h]
  __int64 (__fastcall *v137)(); // [rsp+728h] [rbp-100h]
  __int128 *v138; // [rsp+730h] [rbp-F8h]
  __int64 (__fastcall *v139)(); // [rsp+738h] [rbp-F0h]
  _QWORD *v140; // [rsp+740h] [rbp-E8h]
  __int64 (__fastcall *v141)(); // [rsp+748h] [rbp-E0h]
  int *v142; // [rsp+750h] [rbp-D8h]
  __int64 (__fastcall *v143)(); // [rsp+758h] [rbp-D0h]
  __int128 *v144; // [rsp+760h] [rbp-C8h]
  __int64 (__fastcall *v145)(); // [rsp+768h] [rbp-C0h]
  __int128 *v146; // [rsp+770h] [rbp-B8h]
  __int64 (__fastcall *v147)(); // [rsp+778h] [rbp-B0h]
  _QWORD *v148; // [rsp+780h] [rbp-A8h]
  __int64 (__fastcall *v149)(); // [rsp+788h] [rbp-A0h]
  __int128 *v150; // [rsp+790h] [rbp-98h]
  __int64 (__fastcall *v151)(); // [rsp+798h] [rbp-90h]
  _QWORD *v152; // [rsp+7A0h] [rbp-88h]
  __int64 (__fastcall *v153)(); // [rsp+7A8h] [rbp-80h]
  int *v154; // [rsp+7B0h] [rbp-78h]
  __int64 (__fastcall *v155)(); // [rsp+7B8h] [rbp-70h]
  int *v156; // [rsp+7C0h] [rbp-68h]
  __int64 (__fastcall *v157)(); // [rsp+7C8h] [rbp-60h]
  _QWORD *v158; // [rsp+7D0h] [rbp-58h]
  __int64 (__fastcall *v159)(); // [rsp+7D8h] [rbp-50h]
  _QWORD *v160; // [rsp+7E0h] [rbp-48h]
  __int64 (__fastcall *v161)(); // [rsp+7E8h] [rbp-40h]
  __int64 *v162; // [rsp+7F0h] [rbp-38h]
  __int64 (__fastcall *v163)(); // [rsp+7F8h] [rbp-30h]
  int v164; // [rsp+814h] [rbp-14h]

  *(_QWORD *)v56 = a1;
  v57 = a2;
  v129 = 0;
  if ( (*(_BYTE *)(a1 + 40) & 1) != 0 )
    *(_QWORD *)v61 = asc_59F0D;
  else
    *(_QWORD *)v61 = asc_59F0C;
  *(_QWORD *)v62 = 1LL;
  <I as core::iter::traits::collect::IntoIterator>::into_iter(src, a2);
  memcpy(&dest, src, 0x40uLL);
  while ( 1 )
  {
    v2 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::next(&dest);
    v54 = v3;
    v55 = v2;
    v66 = v2;
    v67 = v3;
    if ( !v2 )
    {
      v59 = 0LL;
      core::ptr::drop_in_place<uu_hashsum::Options>(*(_QWORD *)v56);
      return v59;
    }
    v4 = std::path::Path::new(v66, v67);
    v52 = v5;
    v53 = v4;
    *(_QWORD *)v68 = v4;
    *(_QWORD *)v69 = v5;
    v7 = std::ffi::os_str::OsStr::new(asc_59F04, 1LL);
    v50 = v8;
    v51 = v7;
    v74[0] = v7;
    v74[1] = v8;
    v45 = core::cmp::impls::<impl core::cmp::PartialEq<&B> for &A>::eq(v68, v74);
    if ( (v45 & 1) != 0 )
    {
      v43 = std::io::stdio::stdin();
      v39 = (__int64 *)alloc::alloc::exchange_malloc(8LL);
      *v39 = v43;
      *(_QWORD *)v72 = v39;
      *(_QWORD *)v73 = &unk_2F92A0;
    }
    else
    {
      std::fs::File::open(
        (int)v78,
        v68[0],
        v69[0],
        v9,
        v10,
        v11,
        v27,
        v29,
        v31,
        v32,
        v33,
        v34,
        v36,
        v37,
        v38,
        v40,
        v41,
        (int)v42);
      <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
        v77,
        v78);
      <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v75, v77);
      if ( v75 )
      {
        v59 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                v75,
                v76,
                &off_2F9288);
        goto LABEL_16;
      }
      v70 = v76;
      v129 = 0;
      v164 = v76;
      v42 = (_DWORD *)alloc::alloc::exchange_malloc(4LL);
      *v42 = v164;
      *(_QWORD *)v72 = v42;
      *(_QWORD *)v73 = &off_2F9230;
    }
    std::io::buffered::bufreader::BufReader<R>::new((int)v71, v72[0], v73[0]);
    uucore::features::checksum::digest_reader(
      (int)v84,
      v56[0] + 16,
      (int)v71,
      *(_BYTE *)(*(_QWORD *)v56 + 40LL) & 1,
      *(_QWORD *)(*(_QWORD *)v56 + 32LL),
      v12,
      v27,
      v29,
      v31,
      v32,
      v33,
      v34,
      v36,
      v37,
      (int)v39,
      v40,
      (int)v41,
      (int)v42,
      v43,
      v44,
      v46,
      v47,
      v48,
      v49,
      v50,
      v51,
      v52,
      v53,
      v54,
      v55,
      v56[0],
      v57,
      v58,
      v60,
      v61[0],
      v62[0],
      src[0],
      src[2],
      src[4],
      src[6],
      src[8],
      src[10],
      src[12],
      src[14],
      dest,
      v65);
    <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
      v83,
      v84);
    <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v81, v83);
    if ( (_QWORD)v81 == 0x8000000000000000LL )
      break;
    v86 = v82;
    v85 = v81;
    v80 = v82;
    v79 = v81;
    uucore::features::checksum::escape_filename(v89, *(_QWORD *)v68, *(_QWORD *)v69);
    v87[0] = v89[0];
    v87[1] = v89[1];
    v87[2] = v89[2];
    v88[0] = v89[3];
    v88[1] = v89[4];
    if ( (*(_BYTE *)(*(_QWORD *)v56 + 41LL) & 1) != 0 )
    {
      v35 = core::cmp::impls::<impl core::cmp::PartialEq<&B> for &A>::eq(*(_QWORD *)v56, &off_2F9388);
      if ( (v35 & 1) != 0 )
      {
        v31 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)v56 + 24LL) + 48LL))(*(_QWORD *)(*(_QWORD *)v56 + 16LL));
        if ( v31 == 512 )
        {
          v136 = v87;
          v137 = <alloc::string::String as core::fmt::Display>::fmt;
          *(_QWORD *)&v92 = v87;
          *((_QWORD *)&v92 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
          v134 = &v79;
          v135 = <alloc::string::String as core::fmt::Display>::fmt;
          *(_QWORD *)&v93 = &v79;
          *((_QWORD *)&v93 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
          v91[0] = v92;
          v91[1] = v93;
          v19 = &off_2F93E8;
          core::fmt::Arguments::new_v1(v90, &off_2F93E8, v91);
          std::io::stdio::_print(v90);
        }
        else
        {
          v30 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)v56 + 24LL) + 48LL))(*(_QWORD *)(*(_QWORD *)v56 + 16LL));
          v97 = v30;
          v162 = &v97;
          v163 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
          *(_QWORD *)&v96 = &v97;
          *((_QWORD *)&v96 + 1) = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
          v132 = v87;
          v133 = <alloc::string::String as core::fmt::Display>::fmt;
          *(_QWORD *)&v98 = v87;
          *((_QWORD *)&v98 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
          v130 = &v79;
          v131 = <alloc::string::String as core::fmt::Display>::fmt;
          *(_QWORD *)&v99 = &v79;
          *((_QWORD *)&v99 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
          v95[0] = v96;
          v95[1] = v98;
          v95[2] = v99;
          v19 = &off_2F9418;
          core::fmt::Arguments::new_v1(v94, &off_2F9418, v95);
          std::io::stdio::_print(v94);
        }
      }
      else
      {
        alloc::str::<impl str>::to_ascii_uppercase(
          (int)v106,
          **(_QWORD **)v56,
          *(_QWORD *)(*(_QWORD *)v56 + 8LL),
          v14,
          v15,
          v16,
          (int)v28,
          v30,
          v31,
          v32,
          v33,
          v34,
          v36,
          v37,
          v38,
          v40,
          v41,
          (int)v42);
        v102 = v106;
        v103 = v88;
        v104 = v87;
        v105 = &v79;
        v152 = v88;
        v153 = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v107 = v88;
        *((_QWORD *)&v107 + 1) = <&T as core::fmt::Display>::fmt;
        v142 = v106;
        v143 = <alloc::string::String as core::fmt::Display>::fmt;
        *(_QWORD *)&v108 = v106;
        *((_QWORD *)&v108 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
        v140 = v87;
        v141 = <alloc::string::String as core::fmt::Display>::fmt;
        *(_QWORD *)&v109 = v87;
        *((_QWORD *)&v109 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
        v138 = &v79;
        v139 = <alloc::string::String as core::fmt::Display>::fmt;
        *(_QWORD *)&v110 = &v79;
        *((_QWORD *)&v110 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
        v101[0] = v107;
        v101[1] = v108;
        v101[2] = v109;
        v101[3] = v110;
        v19 = (char **)&unk_2F9398;
        core::fmt::Arguments::new_v1(v100, &unk_2F9398, v101);
        std::io::stdio::_print(v100);
        core::ptr::drop_in_place<alloc::string::String>(v106);
      }
    }
    else if ( (*(_BYTE *)(*(_QWORD *)v56 + 42LL) & 1) != 0 )
    {
      v144 = &v79;
      v145 = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v113 = &v79;
      *((_QWORD *)&v113 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      v112 = v113;
      v19 = (char **)&unk_2F8F88;
      core::fmt::Arguments::new_v1(v111, &unk_2F8F88, &v112);
      std::io::stdio::_print(v111);
    }
    else if ( (*(_BYTE *)(*(_QWORD *)v56 + 43LL) & 1) != 0 )
    {
      v17 = std::path::Path::display(*(_QWORD *)v68, *(_QWORD *)v69);
      v32 = v18;
      v33 = v17;
      v119[0] = v17;
      v119[1] = v18;
      v116 = v119;
      v117 = &v79;
      v118 = v61;
      v146 = &v79;
      v147 = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v120 = &v79;
      *((_QWORD *)&v120 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      v154 = v61;
      v155 = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v121 = v61;
      *((_QWORD *)&v121 + 1) = <&T as core::fmt::Display>::fmt;
      v160 = v119;
      v161 = <std::path::Display as core::fmt::Display>::fmt;
      *(_QWORD *)&v122 = v119;
      *((_QWORD *)&v122 + 1) = <std::path::Display as core::fmt::Display>::fmt;
      v115[0] = v120;
      v115[1] = v121;
      v115[2] = v122;
      v19 = (char **)&unk_2F9348;
      core::fmt::Arguments::new_v1(v114, &unk_2F9348, v115);
      std::io::stdio::_print(v114);
    }
    else
    {
      v158 = v88;
      v159 = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v125 = v88;
      *((_QWORD *)&v125 + 1) = <&T as core::fmt::Display>::fmt;
      v150 = &v79;
      v151 = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v126 = &v79;
      *((_QWORD *)&v126 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      v156 = v61;
      v157 = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v127 = v61;
      *((_QWORD *)&v127 + 1) = <&T as core::fmt::Display>::fmt;
      v148 = v87;
      v149 = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v128 = v87;
      *((_QWORD *)&v128 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      v124[0] = v125;
      v124[1] = v126;
      v124[2] = v127;
      v124[3] = v128;
      v19 = (char **)&unk_2F92F8;
      core::fmt::Arguments::new_v1(v123, &unk_2F92F8, v124);
      std::io::stdio::_print(v123);
    }
    core::ptr::drop_in_place<alloc::string::String>(v87);
    core::ptr::drop_in_place<alloc::string::String>(&v79);
    core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn std::io::Read>>>(
      (int)v71,
      (int)v19,
      v20,
      v21,
      v22,
      v23,
      v28,
      v30);
    v129 = 0;
  }
  v13 = v82;
  v59 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
          *((_QWORD *)&v81 + 1),
          v82,
          &off_2F9458);
  core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn std::io::Read>>>(
    (int)v71,
    v13,
    v24,
    v59,
    v25,
    v26,
    v28,
    v30);
LABEL_16:
  v129 = 0;
  core::ptr::drop_in_place<uu_hashsum::Options>(*(_QWORD *)v56);
  return v59;
}
