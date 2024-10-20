char __fastcall uu_rm::remove(_OWORD *a1, __int64 a2, _BYTE *a3)
{
  __int64 v3; // rax
  char v4; // bl
  void *v5; // rbp
  size_t v6; // rbx
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // r15
  __int128 v11; // xmm0
  _BYTE *v12; // rdx
  __int64 v13; // rax
  char v14; // cl
  __int64 v15; // rax
  void *v16; // r14
  __int64 v17; // r15
  char **v18; // rax
  char v19; // bl
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // rsi
  __int64 v24; // rcx
  __int128 *v25; // rdx
  __int64 v26; // rsi
  __int64 v27; // rcx
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int64 v30; // rbx
  __int64 v31; // r15
  void *v32; // r12
  size_t v33; // r13
  __int64 v34; // r14
  __int64 v35; // rbp
  char v36; // al
  void *v37; // r14
  size_t v38; // r12
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rbx
  void *v42; // r13
  size_t v43; // r12
  __int64 v44; // rax
  __int64 v45; // r14
  __int64 v46; // rbp
  __int64 v47; // rax
  unsigned __int64 v48; // rdx
  __int64 v49; // rax
  unsigned __int64 v50; // rsi
  unsigned __int64 v51; // rdx
  __int64 v52; // rax
  __int64 v53; // r14
  __int64 v54; // r15
  __int64 v55; // rax
  void *v56; // r14
  size_t v57; // r12
  char v58; // al
  int v59; // ecx
  void *v60; // r14
  size_t v61; // r12
  unsigned __int64 v62; // rbx
  __int64 v63; // rax
  __int64 v64; // rcx
  __int128 v65; // xmm0
  __int64 v66; // rax
  __int64 v67; // rdx
  unsigned __int64 v68; // rdx
  unsigned __int64 v69; // rax
  unsigned __int64 v70; // rsi
  unsigned __int64 v71; // rax
  unsigned __int64 v72; // rcx
  unsigned __int64 v73; // rdi
  __int64 v74; // rcx
  __int64 v75; // rdx
  __int64 v76; // rbp
  __int64 v77; // r14
  __int64 v78; // rbx
  __int64 v79; // r15
  void *v80; // r12
  size_t v81; // r13
  char v82; // al
  int v83; // ecx
  __int64 v84; // rax
  void *v85; // r14
  __int64 v86; // r15
  char v87; // al
  __int64 v88; // rax
  void **v89; // r15
  __int64 (__fastcall *v90)(); // r12
  __int64 v91; // rax
  __int64 v92; // rcx
  __int64 v93; // rax
  void **v94; // r15
  __int64 (__fastcall *v95)(); // r12
  __int64 v97; // rdx
  int v98; // [rsp+Ch] [rbp-59Ch]
  _BYTE v100[24]; // [rsp+20h] [rbp-588h] BYREF
  __int128 v101; // [rsp+38h] [rbp-570h]
  __int64 v102; // [rsp+48h] [rbp-560h]
  size_t v103; // [rsp+50h] [rbp-558h]
  _BYTE v104[48]; // [rsp+58h] [rbp-550h] BYREF
  char v105; // [rsp+92h] [rbp-516h]
  unsigned __int64 v106; // [rsp+98h] [rbp-510h] BYREF
  __int64 v107; // [rsp+A0h] [rbp-508h]
  __int128 v108; // [rsp+A8h] [rbp-500h]
  volatile signed __int64 *v109; // [rsp+B8h] [rbp-4F0h] BYREF
  __int64 v110; // [rsp+C0h] [rbp-4E8h]
  __int64 v111; // [rsp+C8h] [rbp-4E0h]
  __int128 v112; // [rsp+D0h] [rbp-4D8h]
  char ***v113; // [rsp+E8h] [rbp-4C0h]
  __int128 *v114; // [rsp+F0h] [rbp-4B8h]
  __int128 *v115; // [rsp+F8h] [rbp-4B0h]
  __int64 v116; // [rsp+100h] [rbp-4A8h]
  __int64 v117; // [rsp+108h] [rbp-4A0h] BYREF
  __int64 v118; // [rsp+110h] [rbp-498h]
  unsigned __int64 v119; // [rsp+118h] [rbp-490h]
  void *src[2]; // [rsp+120h] [rbp-488h] BYREF
  size_t n[2]; // [rsp+130h] [rbp-478h]
  __int128 v122; // [rsp+140h] [rbp-468h]
  void *v123; // [rsp+150h] [rbp-458h]
  void **v124; // [rsp+158h] [rbp-450h] BYREF
  __int64 (__fastcall *v125)(); // [rsp+160h] [rbp-448h]
  _QWORD *v126; // [rsp+168h] [rbp-440h]
  __int64 v127; // [rsp+170h] [rbp-438h]
  __int64 v128; // [rsp+178h] [rbp-430h]
  __int64 v129; // [rsp+188h] [rbp-420h] BYREF
  char **v130; // [rsp+190h] [rbp-418h] BYREF
  __int64 (__fastcall *v131)(); // [rsp+198h] [rbp-410h]
  _QWORD *v132; // [rsp+1A0h] [rbp-408h]
  __int64 (__fastcall *v133)(); // [rsp+1A8h] [rbp-400h]
  __int64 v134; // [rsp+1B0h] [rbp-3F8h]
  void *v135; // [rsp+1C0h] [rbp-3E8h] BYREF
  _QWORD v136[6]; // [rsp+1C8h] [rbp-3E0h] BYREF
  void ***v137; // [rsp+1F8h] [rbp-3B0h] BYREF
  __int64 (__fastcall *v138)(); // [rsp+200h] [rbp-3A8h]
  _QWORD *v139; // [rsp+208h] [rbp-3A0h]
  __int64 v140; // [rsp+210h] [rbp-398h]
  __int64 v141; // [rsp+218h] [rbp-390h]
  void *v142; // [rsp+228h] [rbp-380h] BYREF
  _OWORD v143[3]; // [rsp+230h] [rbp-378h] BYREF
  _QWORD v144[2]; // [rsp+268h] [rbp-340h] BYREF
  _QWORD v145[2]; // [rsp+278h] [rbp-330h] BYREF
  _QWORD v146[2]; // [rsp+288h] [rbp-320h] BYREF
  _QWORD v147[2]; // [rsp+298h] [rbp-310h] BYREF
  _QWORD v148[2]; // [rsp+2A8h] [rbp-300h] BYREF
  _QWORD v149[2]; // [rsp+2B8h] [rbp-2F0h] BYREF
  _QWORD v150[2]; // [rsp+2C8h] [rbp-2E0h] BYREF
  _QWORD v151[2]; // [rsp+2D8h] [rbp-2D0h] BYREF
  _QWORD v152[2]; // [rsp+2E8h] [rbp-2C0h] BYREF
  _QWORD v153[2]; // [rsp+2F8h] [rbp-2B0h] BYREF
  _QWORD v154[2]; // [rsp+308h] [rbp-2A0h] BYREF
  __int128 v155; // [rsp+318h] [rbp-290h] BYREF
  __int64 v156; // [rsp+328h] [rbp-280h]
  _QWORD v157[4]; // [rsp+330h] [rbp-278h] BYREF
  _QWORD v158[3]; // [rsp+350h] [rbp-258h] BYREF
  char v159; // [rsp+368h] [rbp-240h]
  _QWORD v160[3]; // [rsp+370h] [rbp-238h] BYREF
  char v161; // [rsp+388h] [rbp-220h]
  _QWORD v162[6]; // [rsp+390h] [rbp-218h] BYREF
  _QWORD v163[6]; // [rsp+3C0h] [rbp-1E8h] BYREF
  __int64 v164; // [rsp+3F0h] [rbp-1B8h] BYREF
  __int128 v165; // [rsp+3F8h] [rbp-1B0h]
  char v166; // [rsp+408h] [rbp-1A0h]
  _OWORD v167[3]; // [rsp+410h] [rbp-198h] BYREF
  __int64 dest; // [rsp+448h] [rbp-160h] BYREF
  _QWORD v169[3]; // [rsp+450h] [rbp-158h] BYREF
  __int128 v170; // [rsp+468h] [rbp-140h]
  __int64 v171; // [rsp+478h] [rbp-130h]
  __int128 v172; // [rsp+480h] [rbp-128h]
  __int64 v173; // [rsp+490h] [rbp-118h]
  __int64 v174; // [rsp+498h] [rbp-110h]
  __int128 v175; // [rsp+4A0h] [rbp-108h]
  __int64 v176; // [rsp+4B0h] [rbp-F8h]
  __int128 v177; // [rsp+4B8h] [rbp-F0h]
  __int128 v178; // [rsp+4C8h] [rbp-E0h]
  __int128 v179; // [rsp+4D8h] [rbp-D0h]
  __int128 v180; // [rsp+4E8h] [rbp-C0h]
  __int64 v181; // [rsp+4F8h] [rbp-B0h] BYREF
  __int128 v182; // [rsp+500h] [rbp-A8h]
  __int128 v183; // [rsp+510h] [rbp-98h]
  __int128 v184; // [rsp+520h] [rbp-88h]
  __int64 v185; // [rsp+530h] [rbp-78h]
  __int64 v186; // [rsp+538h] [rbp-70h] BYREF
  __int128 v187; // [rsp+540h] [rbp-68h]
  __int128 v188; // [rsp+550h] [rbp-58h]
  __int128 v189; // [rsp+560h] [rbp-48h]
  __int64 v190; // [rsp+570h] [rbp-38h]

  if ( a2 )
  {
    v3 = 0LL;
    v113 = &v130;
    v115 = &a1[a2];
    while ( 1 )
    {
      if ( !a1 )
        return v3 & 1;
      v116 = v3;
      v5 = *(void **)a1;
      v114 = a1;
      v6 = *((_QWORD *)a1 + 1);
      std::sys::pal::unix::fs::lstat(&dest);
      if ( dest == 2 )
      {
        v7 = v169[0];
        v136[5] = v169[0];
        if ( (*a3 & 1) != 0 )
        {
          v4 = 0;
        }
        else
        {
          v8 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
          v9 = *(_QWORD *)(v8 + 8);
          v10 = *(_QWORD *)(v8 + 16);
          core::slice::raw::from_raw_parts::precondition_check(v9, 1LL, 1LL, v10);
          v145[0] = v9;
          v145[1] = v10;
          v144[0] = v145;
          v144[1] = <&T as core::fmt::Display>::fmt;
          v162[0] = &unk_116AA0;
          v162[1] = 2LL;
          v162[4] = 0LL;
          v162[2] = v144;
          v162[3] = 1LL;
          std::io::stdio::_eprint(v162);
          v11 = *v114;
          v164 = 1LL;
          v165 = v11;
          v166 = 1;
          v146[0] = &v164;
          v146[1] = <os_display::Quoted as core::fmt::Display>::fmt;
          v163[0] = &off_116AC0;
          v163[1] = 2LL;
          v163[4] = 0LL;
          v163[2] = v146;
          v163[3] = 1LL;
          v4 = 1;
          std::io::stdio::_eprint(v163);
        }
        std::io::error::repr_bitpacked::decode_repr(&dest, v7);
        if ( (unsigned __int8)dest >= 3u )
          core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(v169);
        goto LABEL_4;
      }
      if ( (v172 & 0xF000) != 0x4000 )
      {
        v4 = uu_rm::remove_file(v5, v6);
        goto LABEL_4;
      }
      std::path::Path::components(v104, v5, v6);
      if ( (v105 & 1) != 0 || (unsigned __int8)(v104[16] - 7) <= 0xFDu )
      {
        v13 = std::path::Path::parent(v5, v6);
        v12 = a3;
        v14 = a3[3];
        if ( (v14 & 1) == 0 )
        {
          if ( (a3[4] & 1) == 0 )
            goto LABEL_20;
          if ( !v13 && (a3[2] & 1) != 0 )
          {
            if ( (v14 & 1) != 0 )
            {
LABEL_95:
              v84 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
              v85 = *(void **)(v84 + 8);
              v86 = *(_QWORD *)(v84 + 16);
              core::slice::raw::from_raw_parts::precondition_check(v85, 1LL, 1LL, v86);
              v135 = v85;
              v136[0] = v86;
              v124 = &v135;
              v125 = <&T as core::fmt::Display>::fmt;
              *(_QWORD *)v100 = &unk_116AA0;
              *(_QWORD *)&v100[8] = 2LL;
              *(_QWORD *)&v100[16] = &v124;
              v101 = 1uLL;
              std::io::stdio::_eprint(v100);
              v109 = (_QWORD *)(&dword_0 + 1);
              v110 = (__int64)v5;
              v111 = v6;
              LOBYTE(v112) = 1;
              v130 = (char **)&v109;
              v131 = <os_display::Quoted as core::fmt::Display>::fmt;
              v18 = &off_116B98;
            }
            else
            {
LABEL_20:
              v15 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
              v16 = *(void **)(v15 + 8);
              v17 = *(_QWORD *)(v15 + 16);
              core::slice::raw::from_raw_parts::precondition_check(v16, 1LL, 1LL, v17);
              v135 = v16;
              v136[0] = v17;
              v124 = &v135;
              v125 = <&T as core::fmt::Display>::fmt;
              *(_QWORD *)v100 = &unk_116AA0;
              *(_QWORD *)&v100[8] = 2LL;
              *(_QWORD *)&v100[16] = &v124;
              v101 = 1uLL;
              std::io::stdio::_eprint(v100);
              v109 = (_QWORD *)(&dword_0 + 1);
              v110 = (__int64)v5;
              v111 = v6;
              LOBYTE(v112) = 1;
              v130 = (char **)&v109;
              v131 = <os_display::Quoted as core::fmt::Display>::fmt;
              v18 = &off_116B78;
            }
            *(_QWORD *)v104 = v18;
            *(_QWORD *)&v104[8] = 2LL;
            *(_QWORD *)&v104[32] = 0LL;
            *(_QWORD *)&v104[16] = v113;
            *(_QWORD *)&v104[24] = 1LL;
            std::io::stdio::_eprint(v104);
            v19 = 1;
            goto LABEL_91;
          }
LABEL_90:
          v19 = uu_rm::remove_dir(v5, v6);
          goto LABEL_91;
        }
        if ( !v13 && (a3[2] & 1) != 0 )
          goto LABEL_95;
      }
      else
      {
        v12 = a3;
        if ( (a3[3] & 1) == 0 )
        {
          if ( (a3[4] & 1) == 0 )
            goto LABEL_20;
          goto LABEL_90;
        }
      }
      if ( v12[6] != 2 && (a3[5] & 1) == 0 )
      {
        v20 = std::sys::pal::unix::fs::remove_dir_impl::remove_dir_all(v5, v6);
        if ( v20 )
        {
          *(_QWORD *)&v143[0] = v20;
          v21 = std::sys::pal::unix::fs::rmdir(v5, v6);
          if ( v21 )
          {
            std::io::error::repr_bitpacked::decode_repr(v104, v21);
            if ( v104[0] >= 3u )
              core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(&v104[8]);
            switch ( v143[0] & 3 )
            {
              case 0:
                v22 = 16LL;
                goto LABEL_101;
              case 1:
                v22 = 15LL;
LABEL_101:
                if ( *(_BYTE *)(*(_QWORD *)&v143[0] + v22) != 1 )
                  goto LABEL_102;
                goto LABEL_99;
              case 2:
                v87 = std::sys::pal::unix::decode_error_kind(HIDWORD(*(_QWORD *)&v143[0]));
                goto LABEL_98;
              case 3:
                v87 = std::io::error::repr_bitpacked::kind_from_prim(HIDWORD(*(_QWORD *)&v143[0]));
                if ( v87 == 41 )
                  core::hint::unreachable_unchecked::precondition_check();
LABEL_98:
                if ( v87 == 1 )
                {
LABEL_99:
                  v88 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
                  v89 = *(void ***)(v88 + 8);
                  v90 = *(__int64 (__fastcall **)())(v88 + 16);
                  core::slice::raw::from_raw_parts::precondition_check(v89, 1LL, 1LL, v90);
                  v124 = v89;
                  v125 = v90;
                  v137 = &v124;
                  v138 = <&T as core::fmt::Display>::fmt;
                  *(_QWORD *)v100 = &unk_116AA0;
                  *(_QWORD *)&v100[8] = 2LL;
                  *(_QWORD *)&v100[16] = &v137;
                  v101 = 1uLL;
                  std::io::stdio::_eprint(v100);
                  v109 = (_QWORD *)(&dword_0 + 1);
                  v110 = (__int64)v5;
                  v111 = v6;
                  LOBYTE(v112) = 1;
                  v130 = (char **)&v109;
                  v131 = <os_display::Quoted as core::fmt::Display>::fmt;
                  *(_QWORD *)v104 = &off_116B10;
                  v91 = 1LL;
                  v92 = 2LL;
                }
                else
                {
LABEL_102:
                  v93 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
                  v94 = *(void ***)(v93 + 8);
                  v95 = *(__int64 (__fastcall **)())(v93 + 16);
                  core::slice::raw::from_raw_parts::precondition_check(v94, 1LL, 1LL, v95);
                  v124 = v94;
                  v125 = v95;
                  v137 = &v124;
                  v138 = <&T as core::fmt::Display>::fmt;
                  *(_QWORD *)v100 = &unk_116AA0;
                  *(_QWORD *)&v100[8] = 2LL;
                  *(_QWORD *)&v100[16] = &v137;
                  v101 = 1uLL;
                  std::io::stdio::_eprint(v100);
                  v109 = (_QWORD *)(&dword_0 + 1);
                  v110 = (__int64)v5;
                  v111 = v6;
                  LOBYTE(v112) = 1;
                  v130 = (char **)&v109;
                  v131 = <os_display::Quoted as core::fmt::Display>::fmt;
                  v132 = v143;
                  v133 = <std::io::error::Error as core::fmt::Display>::fmt;
                  *(_QWORD *)v104 = &off_116AE0;
                  v91 = 2LL;
                  v92 = 3LL;
                }
                *(_QWORD *)&v104[8] = v92;
                *(_QWORD *)&v104[32] = 0LL;
                *(_QWORD *)&v104[16] = v113;
                *(_QWORD *)&v104[24] = v91;
                v19 = 1;
                std::io::stdio::_eprint(v104);
                break;
            }
          }
          else
          {
            v19 = 0;
          }
          std::io::error::repr_bitpacked::decode_repr(&v135, *(_QWORD *)&v143[0]);
          if ( (unsigned __int8)v135 >= 3u )
            core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(v136);
        }
        else
        {
          v19 = 0;
        }
        goto LABEL_91;
      }
      v106 = 0LL;
      v108 = 0LL;
      v107 = 8LL;
      v117 = 0LL;
      v118 = 8LL;
      v119 = 0LL;
      *(_OWORD *)&v104[16] = 0xAuLL;
      *(_QWORD *)&v104[32] = -1LL;
      *(_QWORD *)v104 = 0LL;
      *(_DWORD *)&v104[40] = 256;
      std::path::Path::to_path_buf(v100, v5, v6);
      v179 = *(_OWORD *)&v104[32];
      v178 = *(_OWORD *)&v104[16];
      v177 = *(_OWORD *)v104;
      v176 = *(_QWORD *)&v100[16];
      v175 = *(_OWORD *)v100;
      v170 = 0LL;
      v172 = 0LL;
      v180 = 0LL;
      dest = 0LL;
      v169[1] = 0LL;
      v169[2] = 8LL;
      v171 = 8LL;
      v173 = 8LL;
      v174 = 0LL;
      v98 = 0;
      v123 = v5;
      v103 = v6;
      while ( 1 )
      {
LABEL_37:
        while ( 1 )
        {
          <walkdir::IntoIter as core::iter::traits::iterator::Iterator>::next(&v186, &dest);
          if ( v186 != 2 )
            break;
          v122 = v189;
          *(_OWORD *)n = v188;
          *(_OWORD *)src = v187;
          if ( a3[6] == 2 )
          {
            v30 = v118;
            if ( !v118 || (v118 & 7) != 0 || v119 >= 0x555555555555556LL )
              core::panicking::panic_nounwind(anon_6843ccf2b4d4fbe6ebad01316345d198_26_llvm_5368656008581774328, 162LL);
            v31 = 24 * v119;
            while ( v31 )
            {
              v32 = src[1];
              v33 = n[0];
              core::slice::raw::from_raw_parts::precondition_check(src[1], 1LL, 1LL, n[0]);
              v34 = *(_QWORD *)(v30 + 8);
              v35 = *(_QWORD *)(v30 + 16);
              core::slice::raw::from_raw_parts::precondition_check(v34, 1LL, 1LL, v35);
              v36 = std::path::Path::_starts_with(v32, v33, v34, v35);
              v30 += 24LL;
              v31 -= 24LL;
              v5 = v123;
              if ( v36 )
              {
                <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(src);
                v6 = v103;
                goto LABEL_37;
              }
            }
          }
          if ( (WORD4(v122) & 0xF000) != 0x4000 )
          {
            v56 = src[1];
            v57 = n[0];
            core::slice::raw::from_raw_parts::precondition_check(src[1], 1LL, 1LL, n[0]);
            v58 = uu_rm::remove_file(v56, v57);
            v59 = v98;
            LOBYTE(v59) = (v58 | v98) & 1;
            v98 = v59;
            goto LABEL_73;
          }
          if ( a3[6] != 2 )
            goto LABEL_65;
          v37 = src[1];
          v38 = n[0];
          core::slice::raw::from_raw_parts::precondition_check(src[1], 1LL, 1LL, n[0]);
          std::sys::pal::unix::fs::readdir(v104, v37, v38);
          v40 = *(_QWORD *)v104;
          if ( v104[8] == 2 )
            core::result::unwrap_failed(aCalledResultUn_2, 43LL, v104, &off_1169C8, &off_116B30);
          v109 = *(volatile signed __int64 **)v104;
          LOBYTE(v110) = v104[8] & 1;
          v41 = 0LL;
          while ( 1 )
          {
            <std::fs::ReadDir as core::iter::traits::iterator::Iterator>::next(v100, &v109, v39, v40);
            if ( *(_QWORD *)v100 != 1LL )
              break;
            *(_QWORD *)&v104[40] = v102;
            *(_OWORD *)&v104[24] = v101;
            *(_OWORD *)&v104[8] = *(_OWORD *)&v100[8];
            *(_QWORD *)v104 = v41++;
            if ( !v41 )
              core::panicking::panic_const::panic_const_add_overflow(&anon_6843ccf2b4d4fbe6ebad01316345d198_21_llvm_5368656008581774328);
            core::ptr::drop_in_place<core::result::Result<std::fs::DirEntry,std::io::error::Error>>(&v104[8]);
          }
          if ( *(_QWORD *)v100 )
            core::ptr::drop_in_place<core::result::Result<std::fs::DirEntry,std::io::error::Error>>(&v100[8]);
          if ( !_InterlockedDecrement64(v109) )
            alloc::sync::Arc<T,A>::drop_slow(&v109);
          if ( v41 )
          {
            v42 = src[1];
            v43 = n[0];
            core::slice::raw::from_raw_parts::precondition_check(src[1], 1LL, 1LL, n[0]);
            v44 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
            v45 = *(_QWORD *)(v44 + 8);
            v46 = *(_QWORD *)(v44 + 16);
            core::slice::raw::from_raw_parts::precondition_check(v45, 1LL, 1LL, v46);
            v150[0] = v45;
            v150[1] = v46;
            v5 = v123;
            v149[0] = v150;
            v149[1] = <&T as core::fmt::Display>::fmt;
            v135 = &unk_116AA0;
            v136[0] = 2LL;
            v136[3] = 0LL;
            v136[1] = v149;
            v136[2] = 1LL;
            std::io::stdio::_eprint(&v135);
            v160[0] = 1LL;
            v160[1] = v42;
            v160[2] = v43;
            v161 = 1;
            v151[0] = v160;
            v151[1] = <os_display::Quoted as core::fmt::Display>::fmt;
            v130 = &off_116D28;
            v131 = (__int64 (__fastcall *)())(&dword_0 + 2);
            v134 = 0LL;
            v132 = v151;
            v133 = (__int64 (__fastcall *)())(&dword_0 + 1);
            std::io::stdio::_eprint(v113);
            v109 = (volatile signed __int64 *)&off_116C38;
            v110 = 1LL;
            v111 = 8LL;
            v112 = 0LL;
            std::io::stdio::_eprint(&v109);
            v142 = &std::io::stdio::stderr::INSTANCE;
            v47 = <std::io::stdio::Stderr as std::io::Write>::flush(&v142);
            if ( v47 )
            {
              v129 = v47;
              v153[0] = uucore::util_name();
              v153[1] = v97;
              v152[0] = v153;
              v152[1] = <&T as core::fmt::Display>::fmt;
              *(_QWORD *)v100 = &unk_116AA0;
              *(_QWORD *)&v100[8] = 2LL;
              *(_QWORD *)&v100[16] = v152;
              v101 = 1uLL;
              std::io::stdio::_eprint(v100);
              v154[0] = &v129;
              v154[1] = <std::io::error::Error as core::fmt::Display>::fmt;
              *(_QWORD *)v104 = &unk_116C48;
              *(_QWORD *)&v104[8] = 2LL;
              *(_QWORD *)&v104[32] = 0LL;
              *(_QWORD *)&v104[16] = v154;
              *(_QWORD *)&v104[24] = 1LL;
              std::io::stdio::_eprint(v104);
              std::process::exit(1);
            }
            if ( (unsigned __int8)uucore::read_yes() )
            {
              v167[2] = v122;
              v167[1] = *(_OWORD *)n;
              v167[0] = *(_OWORD *)src;
              v48 = v106;
              v49 = *((_QWORD *)&v108 + 1);
              v6 = v103;
              if ( *((_QWORD *)&v108 + 1) == v106 )
              {
                alloc::collections::vec_deque::VecDeque<T,A>::grow(&v106);
                v48 = v106;
                v49 = *((_QWORD *)&v108 + 1);
              }
              v50 = 0LL;
              if ( v49 + (__int64)v108 >= v48 )
                v50 = v48;
              v24 = v49 + v108 - v50;
              v25 = v167;
              goto LABEL_36;
            }
            v60 = src[1];
            v61 = n[0];
            core::slice::raw::from_raw_parts::precondition_check(src[1], 1LL, 1LL, n[0]);
            std::path::Path::to_path_buf(&v155, v60, v61);
            v62 = v119;
            if ( v119 == v117 )
              alloc::raw_vec::RawVec<T,A>::grow_one(&v117);
            v63 = v118;
            v64 = 3 * v62;
            v65 = v155;
            *(_QWORD *)(v118 + 8 * v64 + 16) = v156;
            *(_OWORD *)(v63 + 8 * v64) = v65;
            v119 = v62 + 1;
LABEL_73:
            v6 = v103;
            <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(src);
          }
          else
          {
LABEL_65:
            v143[2] = v122;
            v143[1] = *(_OWORD *)n;
            v143[0] = *(_OWORD *)src;
            v51 = v106;
            v49 = *((_QWORD *)&v108 + 1);
            v6 = v103;
            if ( *((_QWORD *)&v108 + 1) == v106 )
            {
              alloc::collections::vec_deque::VecDeque<T,A>::grow(&v106);
              v51 = v106;
              v49 = *((_QWORD *)&v108 + 1);
            }
            v23 = 0LL;
            if ( v49 + (__int64)v108 >= v51 )
              v23 = v51;
            v24 = v49 + v108 - v23;
            v25 = v143;
LABEL_36:
            v26 = v107;
            v27 = 48 * v24;
            v28 = *v25;
            v29 = v25[1];
            *(_OWORD *)(v107 + v27 + 32) = v25[2];
            *(_OWORD *)(v26 + v27 + 16) = v29;
            *(_OWORD *)(v26 + v27) = v28;
            *((_QWORD *)&v108 + 1) = v49 + 1;
          }
        }
        if ( v186 == 3 )
          break;
        v181 = v186;
        v184 = v189;
        v183 = v188;
        v182 = v187;
        v185 = v190;
        v52 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
        v53 = *(_QWORD *)(v52 + 8);
        v54 = *(_QWORD *)(v52 + 16);
        core::slice::raw::from_raw_parts::precondition_check(v53, 1LL, 1LL, v54);
        v148[0] = v53;
        v148[1] = v54;
        v147[0] = v148;
        v147[1] = <&T as core::fmt::Display>::fmt;
        v137 = (void ***)&unk_116AA0;
        v138 = (__int64 (__fastcall *)())(&dword_0 + 2);
        v141 = 0LL;
        v139 = v147;
        v140 = 1LL;
        std::io::stdio::_eprint(&v137);
        v158[0] = 1LL;
        v158[1] = v5;
        v158[2] = v6;
        v159 = 1;
        v157[0] = v158;
        v157[1] = <os_display::Quoted as core::fmt::Display>::fmt;
        v157[2] = &v181;
        v157[3] = <walkdir::error::Error as core::fmt::Display>::fmt;
        v124 = (void **)&off_116B48;
        v125 = (__int64 (__fastcall *)())(&dword_0 + 3);
        v128 = 0LL;
        v126 = v157;
        v127 = 2LL;
        v55 = std::io::stdio::_eprint(&v124);
        LOBYTE(v55) = 1;
        v98 = v55;
        core::ptr::drop_in_place<walkdir::error::ErrorInner>(&v181);
      }
      core::ptr::drop_in_place<walkdir::IntoIter>(&dest);
      v66 = core::slice::index::range(*((_QWORD *)&v108 + 1), &off_1169E8);
      v68 = v67 - v66;
      if ( !v68 )
      {
        v69 = 0LL;
        v70 = 0LL;
        goto LABEL_80;
      }
      v71 = v108 + v66;
      v70 = v106;
      v72 = 0LL;
      if ( v71 >= v106 )
        v72 = v106;
      v69 = v71 - v72;
      v73 = v68 - (v106 - v69);
      if ( v68 <= v106 - v69 )
      {
        v70 = v69 + v68;
LABEL_80:
        v73 = 0LL;
      }
      v74 = v107;
      v75 = v107 + 48 * v70;
      v76 = v107 + 48 * v73;
      v77 = v107 + 48 * v69;
      if ( v107 != v76 )
      {
LABEL_82:
        v78 = v74;
        v79 = v75;
        goto LABEL_85;
      }
      while ( v77 != v75 )
      {
        v78 = v77;
        v77 = v74;
        v79 = v74;
        v76 = v75;
LABEL_85:
        v80 = *(void **)(v76 - 40);
        v81 = *(_QWORD *)(v76 - 32);
        core::slice::raw::from_raw_parts::precondition_check(v80, 1LL, 1LL, v81);
        v82 = uu_rm::remove_dir(v80, v81);
        v76 -= 48LL;
        v83 = v98;
        LOBYTE(v83) = (v82 | v98) & 1;
        v98 = v83;
        v74 = v78;
        v75 = v79;
        if ( v78 != v76 )
          goto LABEL_82;
      }
      core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v117);
      core::ptr::drop_in_place<alloc::collections::vec_deque::VecDeque<walkdir::dent::DirEntry>>(&v106);
      v19 = v98;
LABEL_91:
      v4 = v19 & 1;
LABEL_4:
      v3 = v116;
      a1 = v114 + 1;
      LOBYTE(v3) = (v4 != 0) | v116;
      if ( v114 + 1 == v115 )
        return v3 & 1;
    }
  }
  LOBYTE(v3) = 0;
  return v3 & 1;
}
