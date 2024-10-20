__int64 __fastcall uu_dircolors::parse(__int64 a1, __int128 *a2, _BYTE *a3, __int64 (__fastcall *a4)(), char ***a5)
{
  size_t v6; // rbx
  const void *v7; // r12
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rax
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  char v16; // r12
  char v17; // cl
  __int64 v18; // r12
  size_t v19; // r12
  const void *v20; // rbp
  __int64 v21; // rsi
  char **v22; // r12
  __int64 v23; // rcx
  char v24; // al
  __int64 v25; // rsi
  char v26; // cl
  unsigned __int64 v27; // rax
  char v28; // dl
  char v29; // di
  int v30; // edi
  int v31; // edx
  __int64 v32; // rcx
  unsigned int v34; // ecx
  const void *v35; // r15
  size_t v36; // rbx
  __int64 v37; // rax
  __int64 v38; // rcx
  char v39; // [rsp+3h] [rbp-3A5h]
  char i; // [rsp+4h] [rbp-3A4h]
  char v41; // [rsp+4h] [rbp-3A4h]
  __int128 v42; // [rsp+8h] [rbp-3A0h] BYREF
  __int64 v43; // [rsp+18h] [rbp-390h]
  __int128 v44; // [rsp+20h] [rbp-388h] BYREF
  char ***v45; // [rsp+30h] [rbp-378h]
  __int64 (__fastcall *v46)(); // [rsp+38h] [rbp-370h]
  _BYTE *v47; // [rsp+40h] [rbp-368h]
  __int64 v48; // [rsp+48h] [rbp-360h]
  _BYTE v49[24]; // [rsp+50h] [rbp-358h] BYREF
  __int128 v50; // [rsp+68h] [rbp-340h]
  __int64 (__fastcall *v51)(); // [rsp+78h] [rbp-330h]
  char v52; // [rsp+80h] [rbp-328h]
  _BYTE v53[7]; // [rsp+81h] [rbp-327h]
  __int64 v54; // [rsp+88h] [rbp-320h]
  __int64 v55; // [rsp+98h] [rbp-310h]
  __int64 v56; // [rsp+A8h] [rbp-300h]
  __int64 v57; // [rsp+B0h] [rbp-2F8h]
  char v58; // [rsp+B8h] [rbp-2F0h]
  __int64 v59; // [rsp+C0h] [rbp-2E8h]
  __int64 v60; // [rsp+D0h] [rbp-2D8h]
  __int64 v61; // [rsp+E0h] [rbp-2C8h]
  __int64 v62; // [rsp+E8h] [rbp-2C0h]
  char v63; // [rsp+F0h] [rbp-2B8h]
  _BYTE v64[7]; // [rsp+F1h] [rbp-2B7h]
  __int64 *v65; // [rsp+F8h] [rbp-2B0h] BYREF
  __int64 (__fastcall *v66)(); // [rsp+100h] [rbp-2A8h]
  char ***v67; // [rsp+108h] [rbp-2A0h]
  __int64 (__fastcall *v68)(); // [rsp+110h] [rbp-298h]
  char v69[8]; // [rsp+118h] [rbp-290h] BYREF
  __int64 v70; // [rsp+120h] [rbp-288h]
  __int64 v71; // [rsp+128h] [rbp-280h]
  __int64 v72; // [rsp+130h] [rbp-278h] BYREF
  __int64 v73; // [rsp+138h] [rbp-270h]
  __int64 v74; // [rsp+140h] [rbp-268h] BYREF
  __int64 v75; // [rsp+148h] [rbp-260h]
  __int128 v76; // [rsp+150h] [rbp-258h] BYREF
  __int64 v77; // [rsp+160h] [rbp-248h]
  _BYTE v78[7]; // [rsp+173h] [rbp-235h]
  _BYTE v79[7]; // [rsp+17Ah] [rbp-22Eh]
  _BYTE v80[7]; // [rsp+181h] [rbp-227h]
  __int64 v81; // [rsp+188h] [rbp-220h]
  void *v82[2]; // [rsp+190h] [rbp-218h] BYREF
  size_t v83; // [rsp+1A0h] [rbp-208h]
  void *src[2]; // [rsp+1B0h] [rbp-1F8h] BYREF
  __int64 v85; // [rsp+1C0h] [rbp-1E8h]
  __int128 v86; // [rsp+1D0h] [rbp-1D8h] BYREF
  __int64 v87; // [rsp+1E0h] [rbp-1C8h]
  __int64 (__fastcall *v88)(); // [rsp+1F0h] [rbp-1B8h]
  char ***v89; // [rsp+1F8h] [rbp-1B0h]
  __int128 *v90; // [rsp+200h] [rbp-1A8h]
  __int64 v91; // [rsp+208h] [rbp-1A0h] BYREF
  char v92[8]; // [rsp+210h] [rbp-198h] BYREF
  __int64 v93; // [rsp+218h] [rbp-190h]
  __int64 v94; // [rsp+220h] [rbp-188h]
  char **v95; // [rsp+228h] [rbp-180h] BYREF
  __int128 v96; // [rsp+230h] [rbp-178h] BYREF
  __int128 v97; // [rsp+240h] [rbp-168h]
  int fd[4]; // [rsp+250h] [rbp-158h]
  __int64 v99; // [rsp+260h] [rbp-148h]
  __int64 v100; // [rsp+268h] [rbp-140h]
  __int64 v101; // [rsp+270h] [rbp-138h]
  __int64 v102; // [rsp+278h] [rbp-130h]
  __int64 v103; // [rsp+280h] [rbp-128h]
  __int64 v104; // [rsp+288h] [rbp-120h]
  _BYTE *v105; // [rsp+290h] [rbp-118h]
  __int64 v106; // [rsp+298h] [rbp-110h]
  __int128 v107; // [rsp+2A0h] [rbp-108h]
  __int64 v108; // [rsp+2B0h] [rbp-F8h]
  __int128 v109; // [rsp+2B8h] [rbp-F0h] BYREF
  __int64 v110; // [rsp+2C8h] [rbp-E0h]
  __int128 v111; // [rsp+2D0h] [rbp-D8h] BYREF
  size_t v112; // [rsp+2E0h] [rbp-C8h]
  __int128 v113; // [rsp+2E8h] [rbp-C0h] BYREF
  size_t v114; // [rsp+2F8h] [rbp-B0h]
  __int128 v115; // [rsp+300h] [rbp-A8h] BYREF
  size_t v116; // [rsp+310h] [rbp-98h]
  __int128 v117; // [rsp+318h] [rbp-90h] BYREF
  size_t v118; // [rsp+328h] [rbp-80h]
  __int128 v119; // [rsp+330h] [rbp-78h] BYREF
  size_t v120; // [rsp+340h] [rbp-68h]
  __int128 v121; // [rsp+348h] [rbp-60h] BYREF
  size_t v122; // [rsp+358h] [rbp-50h]
  __int128 v123; // [rsp+360h] [rbp-48h] BYREF
  __int64 v124; // [rsp+370h] [rbp-38h]

  v89 = a5;
  v88 = a4;
  v90 = a2;
  v81 = a1;
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(v49, 1790LL, 0LL);
  if ( *(_QWORD *)v49 )
    alloc::raw_vec::handle_error(*(_QWORD *)&v49[8], *(_QWORD *)&v49[16]);
  v42 = *(_OWORD *)&v49[8];
  v43 = 0LL;
  uu_dircolors::get_colors_format_strings(v49, a3);
  v6 = *(_QWORD *)&v49[16];
  v85 = *(_QWORD *)&v49[16];
  *(_OWORD *)src = *(_OWORD *)v49;
  v83 = (size_t)v51;
  *(_OWORD *)v82 = v50;
  v7 = *(const void **)&v49[8];
  v8 = 0LL;
  if ( (unsigned __int64)v42 < *(_QWORD *)&v49[16] )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v42, 0LL, *(_QWORD *)&v49[16]);
    v8 = v43;
  }
  memcpy((void *)(*((_QWORD *)&v42 + 1) + v8), v7, v6);
  v43 += v6;
  std::env::var(v49, aTerm_0, 4LL);
  if ( *(_QWORD *)v49 )
  {
    v45 = (char ***)v50;
    v44 = *(_OWORD *)&v49[8];
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v96, 4LL, 0LL);
    v9 = *((_QWORD *)&v96 + 1);
    if ( (_QWORD)v96 )
      alloc::raw_vec::handle_error(*((_QWORD *)&v96 + 1), v97);
    v10 = v97;
    *(_DWORD *)v97 = 1701736302;
    *(_QWORD *)&v76 = v9;
    *((_QWORD *)&v76 + 1) = v10;
    v77 = 4LL;
    if ( (_QWORD)v44 != 0x8000000000000000LL )
    {
      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v44);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v44);
    }
  }
  else
  {
    v77 = v50;
    v76 = *(_OWORD *)&v49[8];
  }
  v104 = *((_QWORD *)&v76 + 1);
  v103 = v77;
  v11 = *v90;
  v12 = v90[1];
  *(_OWORD *)fd = v90[2];
  v97 = v12;
  v96 = v11;
  v99 = 0LL;
  v105 = a3;
  v39 = *a3;
  for ( i = 0; ; i = v16 )
  {
    while ( 1 )
    {
      <std::io::Lines<B> as core::iter::traits::iterator::Iterator>::next(v49, &v96);
      if ( *(_QWORD *)v49 == 0x8000000000000001LL )
      {
        *(_QWORD *)&v107 = 0x8000000000000000LL;
LABEL_55:
        if ( *((_QWORD *)&v96 + 1) )
          _rust_dealloc(v96, *((_QWORD *)&v96 + 1), 1LL);
        close(fd[2]);
        v25 = v43;
        if ( *v105 == 2 )
        {
          if ( v43 )
          {
            v26 = *(_BYTE *)(*((_QWORD *)&v42 + 1) + v43 - 1);
            v27 = -1LL;
            if ( v26 < 0 )
            {
              v28 = *(_BYTE *)(*((_QWORD *)&v42 + 1) + v43 - 2);
              if ( v28 > -65 )
              {
                v31 = v28 & 0x1F;
              }
              else
              {
                v29 = *(_BYTE *)(*((_QWORD *)&v42 + 1) + v43 - 3);
                if ( v29 > -65 )
                  v30 = v29 & 0xF;
                else
                  v30 = ((*(_BYTE *)(*((_QWORD *)&v42 + 1) + v43 - 4) & 7) << 6) | v29 & 0x3F;
                v31 = (v30 << 6) | v28 & 0x3F;
              }
              v34 = (v31 << 6) | v26 & 0x3F;
              if ( v34 >= 0x80 )
              {
                v27 = -2LL;
                if ( v34 >= 0x800 )
                  v27 = (v34 < (unsigned int)&unk_10000) | 0xFFFFFFFFFFFFFFFCLL;
              }
            }
            v25 = v27 + v43;
            v43 += v27;
          }
          else
          {
            v25 = 0LL;
          }
        }
        v35 = v82[1];
        v36 = v83;
        if ( (__int64)v42 - v25 < v83 )
        {
          alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v42, v25, v83);
          v25 = v43;
        }
        memcpy((void *)(*((_QWORD *)&v42 + 1) + v25), v35, v36);
        v43 += v36;
        v37 = v81;
        *(_QWORD *)(v81 + 24) = v43;
        *(_OWORD *)(v37 + 8) = v42;
        *(_QWORD *)v37 = 0LL;
        <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v76);
        <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v76);
        <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v82);
        <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v82);
        <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(src);
        return <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(src);
      }
      if ( *(_QWORD *)v49 == 0x8000000000000000LL )
      {
        core::ptr::drop_in_place<std::io::error::Error>(*(_QWORD *)&v49[8]);
        *(_QWORD *)&v107 = 0x8000000000000000LL;
        goto LABEL_55;
      }
      v13 = v99++;
      v106 = v13;
      v107 = *(_OWORD *)v49;
      v108 = *(_QWORD *)&v49[16];
      v87 = *(_QWORD *)&v49[16];
      v86 = *(_OWORD *)v49;
      v91 = v13 + 1;
      v14 = <str as uu_dircolors::StrUtils>::purify(*(_QWORD *)&v49[8]);
      if ( v15 )
        break;
      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v86);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v86);
    }
    uu_dircolors::escape(v92, v14);
    <str as uu_dircolors::StrUtils>::split_two(v49, v93, v94);
    v72 = *(_QWORD *)v49;
    v73 = *(_QWORD *)&v49[8];
    v74 = *(_QWORD *)&v49[16];
    v75 = v50;
    if ( !(_QWORD)v50 )
      break;
    alloc::str::<impl str>::to_lowercase(v69);
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v70, v71, aTerm, 4LL)
      || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v70, v71, aColorterm, 9LL) )
    {
      v16 = 1;
      if ( !(unsigned __int8)<str as uu_dircolors::StrUtils>::fnmatch(v104, v103, v74, v75) )
        v16 = (2 * (i != 1)) | 1;
    }
    else
    {
      v17 = i;
      if ( i == 1 )
        v17 = 2;
      v16 = 3;
      v41 = v17;
      if ( v17 != 3 )
      {
        v18 = v70;
        v102 = v71;
        *(_DWORD *)v49 = 46;
        if ( (unsigned __int8)core::slice::<impl [T]>::starts_with(v72, v73, v49, 1LL) )
        {
          if ( v39 == 2 )
          {
            v65 = &v74;
            v66 = <&T as core::fmt::Display>::fmt;
            v67 = (char ***)&v72;
            v68 = <&T as core::fmt::Display>::fmt;
            *(_QWORD *)v49 = 2LL;
            *(_QWORD *)&v49[16] = 2LL;
            *((_QWORD *)&v50 + 1) = 0LL;
            v51 = (__int64 (__fastcall *)())&qword_20;
            v52 = 3;
            *(_DWORD *)&v53[3] = *(_DWORD *)&v78[3];
            *(_DWORD *)v53 = *(_DWORD *)v78;
            v54 = 2LL;
            v55 = 2LL;
            v56 = 1LL;
            v57 = 32LL;
            v58 = 3;
            v59 = 2LL;
            v60 = 2LL;
            v61 = 0LL;
            v62 = 32LL;
            v63 = 3;
            *(_DWORD *)&v64[3] = *(_DWORD *)&v78[3];
            *(_DWORD *)v64 = *(_DWORD *)v78;
            *(_QWORD *)&v44 = &off_F0618;
            *((_QWORD *)&v44 + 1) = 4LL;
            v47 = v49;
            v48 = 3LL;
            v45 = (char ***)&v65;
            v46 = (__int64 (__fastcall *)())(&dword_0 + 2);
            alloc::fmt::format::format_inner(&v111, &v44);
            *(_OWORD *)v49 = v111;
            v19 = v112;
            *(_QWORD *)&v49[16] = v112;
            v20 = (const void *)*((_QWORD *)&v111 + 1);
            v21 = v43;
            if ( (__int64)v42 - v43 < v112 )
            {
              alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v42, v43, v112);
              v21 = v43;
            }
          }
          else
          {
            *(_QWORD *)&v44 = &v72;
            *((_QWORD *)&v44 + 1) = <&T as core::fmt::Display>::fmt;
            v45 = (char ***)&v74;
            v46 = <&T as core::fmt::Display>::fmt;
            *(_QWORD *)v49 = &off_F0658;
            *(_QWORD *)&v49[8] = 3LL;
            *(_QWORD *)&v49[16] = &v44;
            v50 = 2uLL;
            alloc::fmt::format::format_inner(&v113, v49);
            *(_OWORD *)v49 = v113;
            v19 = v114;
            *(_QWORD *)&v49[16] = v114;
            v20 = (const void *)*((_QWORD *)&v113 + 1);
            v21 = v43;
            if ( (__int64)v42 - v43 < v114 )
            {
              alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v42, v43, v114);
              v21 = v43;
            }
          }
          goto LABEL_49;
        }
        *(_DWORD *)v49 = 42;
        if ( (unsigned __int8)core::slice::<impl [T]>::starts_with(v72, v73, v49, 1LL) )
        {
          if ( v39 == 2 )
          {
            v65 = &v74;
            v66 = <&T as core::fmt::Display>::fmt;
            v67 = (char ***)&v72;
            v68 = <&T as core::fmt::Display>::fmt;
            *(_QWORD *)v49 = 2LL;
            *(_QWORD *)&v49[16] = 2LL;
            *((_QWORD *)&v50 + 1) = 0LL;
            v51 = (__int64 (__fastcall *)())&qword_20;
            v52 = 3;
            *(_DWORD *)&v53[3] = *(_DWORD *)&v79[3];
            *(_DWORD *)v53 = *(_DWORD *)v79;
            v54 = 2LL;
            v55 = 2LL;
            v56 = 1LL;
            v57 = 32LL;
            v58 = 3;
            v59 = 2LL;
            v60 = 2LL;
            v61 = 0LL;
            v62 = 32LL;
            v63 = 3;
            *(_DWORD *)&v64[3] = *(_DWORD *)&v79[3];
            *(_DWORD *)v64 = *(_DWORD *)v79;
            *(_QWORD *)&v44 = &off_F0578;
            *((_QWORD *)&v44 + 1) = 4LL;
            v47 = v49;
            v48 = 3LL;
            v45 = (char ***)&v65;
            v46 = (__int64 (__fastcall *)())(&dword_0 + 2);
            alloc::fmt::format::format_inner(&v115, &v44);
            *(_OWORD *)v49 = v115;
            v19 = v116;
            *(_QWORD *)&v49[16] = v116;
            v20 = (const void *)*((_QWORD *)&v115 + 1);
            v21 = v43;
            if ( (__int64)v42 - v43 < v116 )
            {
              alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v42, v43, v116);
              v21 = v43;
            }
          }
          else
          {
            *(_QWORD *)&v44 = &v72;
            *((_QWORD *)&v44 + 1) = <&T as core::fmt::Display>::fmt;
            v45 = (char ***)&v74;
            v46 = <&T as core::fmt::Display>::fmt;
            *(_QWORD *)v49 = &unk_F05B8;
            *(_QWORD *)&v49[8] = 3LL;
            *(_QWORD *)&v49[16] = &v44;
            v50 = 2uLL;
            alloc::fmt::format::format_inner(&v117, v49);
            *(_OWORD *)v49 = v117;
            v19 = v118;
            *(_QWORD *)&v49[16] = v118;
            v20 = (const void *)*((_QWORD *)&v117 + 1);
            v21 = v43;
            if ( (__int64)v42 - v43 < v118 )
            {
              alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v42, v43, v118);
              v21 = v43;
            }
          }
          goto LABEL_49;
        }
        if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v70, v71, aOptions, 7LL)
          && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v70, v71, aColor, 5LL)
          && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v70, v71, aEightbit, 8LL) )
        {
          v100 = v18;
          v22 = &off_F5190 - 2;
          v23 = 1184LL;
          do
          {
            if ( !v23 )
            {
              v65 = 0LL;
              v66 = v88;
              v67 = v89;
              LOBYTE(v68) = 0;
              *(_QWORD *)v49 = &v65;
              *(_QWORD *)&v49[8] = <os_display::Quoted as core::fmt::Display>::fmt;
              *(_QWORD *)&v49[16] = &v91;
              *(_QWORD *)&v50 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
              *((_QWORD *)&v50 + 1) = &v72;
              v51 = <&T as core::fmt::Display>::fmt;
              *(_QWORD *)&v44 = &unk_F05E8;
              *((_QWORD *)&v44 + 1) = 3LL;
              v47 = 0LL;
              v45 = (char ***)v49;
              v46 = (__int64 (__fastcall *)())(&dword_0 + 3);
              alloc::fmt::format::format_inner(&v123, &v44);
              v38 = v81;
              *(_QWORD *)(v81 + 24) = v124;
              *(_OWORD *)(v38 + 8) = v123;
              *(_QWORD *)v38 = 1LL;
              core::ptr::drop_in_place<alloc::string::String>(v69);
              goto LABEL_66;
            }
            v101 = v23;
            v24 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v22[2], v22[3], v100, v102);
            v23 = v101 - 32;
            v22 += 4;
          }
          while ( !v24 );
          v95 = v22;
          if ( v39 == 2 )
          {
            v65 = &v74;
            v66 = <&T as core::fmt::Display>::fmt;
            v67 = &v95;
            v68 = <&T as core::fmt::Display>::fmt;
            *(_QWORD *)v49 = 2LL;
            *(_QWORD *)&v49[16] = 2LL;
            *((_QWORD *)&v50 + 1) = 0LL;
            v51 = (__int64 (__fastcall *)())&qword_20;
            v52 = 3;
            *(_DWORD *)&v53[3] = *(_DWORD *)&v80[3];
            *(_DWORD *)v53 = *(_DWORD *)v80;
            v54 = 2LL;
            v55 = 2LL;
            v56 = 1LL;
            v57 = 32LL;
            v58 = 3;
            v59 = 2LL;
            v60 = 2LL;
            v61 = 0LL;
            v62 = 32LL;
            v63 = 3;
            *(_DWORD *)&v64[3] = *(_DWORD *)&v80[3];
            *(_DWORD *)v64 = *(_DWORD *)v80;
            *(_QWORD *)&v44 = &off_F0578;
            *((_QWORD *)&v44 + 1) = 4LL;
            v47 = v49;
            v48 = 3LL;
            v45 = (char ***)&v65;
            v46 = (__int64 (__fastcall *)())(&dword_0 + 2);
            alloc::fmt::format::format_inner(&v119, &v44);
            *(_OWORD *)v49 = v119;
            v19 = v120;
            *(_QWORD *)&v49[16] = v120;
            v20 = (const void *)*((_QWORD *)&v119 + 1);
            v21 = v43;
            if ( (__int64)v42 - v43 < v120 )
            {
              alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v42, v43, v120);
              v21 = v43;
            }
          }
          else
          {
            *(_QWORD *)&v44 = &v95;
            *((_QWORD *)&v44 + 1) = <&T as core::fmt::Display>::fmt;
            v45 = (char ***)&v74;
            v46 = <&T as core::fmt::Display>::fmt;
            *(_QWORD *)v49 = &unk_F05B8;
            *(_QWORD *)&v49[8] = 3LL;
            *(_QWORD *)&v49[16] = &v44;
            v50 = 2uLL;
            alloc::fmt::format::format_inner(&v121, v49);
            *(_OWORD *)v49 = v121;
            v19 = v122;
            *(_QWORD *)&v49[16] = v122;
            v20 = (const void *)*((_QWORD *)&v121 + 1);
            v21 = v43;
            if ( (__int64)v42 - v43 < v122 )
            {
              alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v42, v43, v122);
              v21 = v43;
            }
          }
LABEL_49:
          memcpy((void *)(*((_QWORD *)&v42 + 1) + v21), v20, v19);
          v43 += v19;
          <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v49);
          <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v49);
        }
        v16 = v41;
      }
    }
    <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v69);
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v69);
    <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v92);
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v92);
    <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v86);
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v86);
  }
  *(_QWORD *)&v44 = 0LL;
  *((_QWORD *)&v44 + 1) = v88;
  v45 = v89;
  LOBYTE(v46) = 0;
  v65 = (__int64 *)&v44;
  v66 = <os_display::Quoted as core::fmt::Display>::fmt;
  v67 = (char ***)&v91;
  v68 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
  *(_QWORD *)v49 = &unk_F0548;
  *(_QWORD *)&v49[8] = 3LL;
  *(_QWORD *)&v49[16] = &v65;
  v50 = 2uLL;
  alloc::fmt::format::format_inner(&v109, v49);
  v32 = v81;
  *(_QWORD *)(v81 + 24) = v110;
  *(_OWORD *)(v32 + 8) = v109;
  *(_QWORD *)v32 = 1LL;
LABEL_66:
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v92);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v92);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v86);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v86);
  if ( *((_QWORD *)&v96 + 1) )
    _rust_dealloc(v96, *((_QWORD *)&v96 + 1), 1LL);
  close(fd[2]);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v76);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v76);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v82);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v82);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(src);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(src);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v42);
  return <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v42);
}
