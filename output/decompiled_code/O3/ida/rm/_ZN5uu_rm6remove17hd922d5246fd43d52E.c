char __fastcall uu_rm::remove(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v3; // rax
  char v4; // al
  char v5; // bl
  int v6; // ecx
  void *v7; // rsi
  size_t v8; // rbx
  _BOOL8 v9; // rcx
  bool v10; // al
  __int64 v11; // rax
  size_t v12; // rsi
  __int64 v13; // rbx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  _BYTE *v18; // rax
  void *v19; // r14
  size_t v20; // r12
  __int64 v21; // r15
  __int64 v22; // r13
  char v23; // al
  __int64 v24; // r13
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // rbp
  __int64 v28; // r15
  __int64 v29; // rsi
  __int64 v30; // rax
  char v31; // al
  __int64 v32; // rax
  __int64 v33; // rcx
  unsigned __int64 v34; // rcx
  __int64 v35; // rax
  int v36; // ecx
  unsigned __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // r15
  __int64 v40; // rax
  __int64 v41; // rcx
  char v42; // bl
  unsigned __int64 v43; // rcx
  unsigned __int64 v44; // rdx
  __int64 v45; // rax
  unsigned __int64 v46; // rdx
  char **v47; // rax
  __int64 v48; // r14
  __int64 v49; // rax
  __int64 v50; // r15
  __int64 v51; // rcx
  __int64 v52; // r12
  __int64 v53; // r13
  bool v54; // zf
  __int64 v55; // r14
  _QWORD *v56; // r15
  __int64 v57; // rsi
  unsigned __int64 v58; // r12
  __int64 v59; // r14
  unsigned __int64 v60; // rcx
  unsigned __int64 v61; // r8
  unsigned __int64 v62; // rbp
  unsigned __int64 v63; // r15
  unsigned __int64 v64; // rbp
  _QWORD *v65; // r14
  __int64 v66; // rsi
  _QWORD *v67; // r13
  __int64 v68; // rsi
  char v69; // bl
  __int128 v71; // rax
  char v72; // [rsp+2h] [rbp-2C6h]
  char v73; // [rsp+3h] [rbp-2C5h]
  bool v74; // [rsp+4h] [rbp-2C4h]
  bool v75; // [rsp+5h] [rbp-2C3h]
  char v76; // [rsp+7h] [rbp-2C1h]
  bool v77; // [rsp+9h] [rbp-2BFh]
  char v78; // [rsp+Ah] [rbp-2BEh]
  unsigned __int8 v79; // [rsp+Bh] [rbp-2BDh]
  int v80; // [rsp+Ch] [rbp-2BCh]
  void *src; // [rsp+10h] [rbp-2B8h]
  __int64 v82; // [rsp+18h] [rbp-2B0h]
  unsigned __int64 v83; // [rsp+18h] [rbp-2B0h]
  _BYTE v84[24]; // [rsp+20h] [rbp-2A8h] BYREF
  __m256i v85; // [rsp+38h] [rbp-290h]
  __int128 v86; // [rsp+58h] [rbp-270h]
  int v87; // [rsp+6Ch] [rbp-25Ch]
  __int64 v88; // [rsp+70h] [rbp-258h]
  unsigned __int64 v89; // [rsp+78h] [rbp-250h] BYREF
  __int64 v90; // [rsp+80h] [rbp-248h]
  __int128 v91; // [rsp+88h] [rbp-240h]
  _BYTE *v92; // [rsp+98h] [rbp-230h] BYREF
  __int128 v93; // [rsp+A0h] [rbp-228h]
  __m256i n; // [rsp+B0h] [rbp-218h]
  __int64 v95; // [rsp+D0h] [rbp-1F8h]
  size_t v96; // [rsp+D8h] [rbp-1F0h]
  _BYTE v97[24]; // [rsp+E0h] [rbp-1E8h] BYREF
  __int128 v98; // [rsp+F8h] [rbp-1D0h]
  __int64 v99; // [rsp+108h] [rbp-1C0h]
  int v100; // [rsp+114h] [rbp-1B4h]
  __int128 v101; // [rsp+118h] [rbp-1B0h] BYREF
  size_t v102; // [rsp+128h] [rbp-1A0h]
  char v103; // [rsp+130h] [rbp-198h]
  __int64 v104; // [rsp+138h] [rbp-190h] BYREF
  __int64 v105; // [rsp+140h] [rbp-188h]
  __int64 v106; // [rsp+148h] [rbp-180h]
  __int64 v107; // [rsp+150h] [rbp-178h]
  __int64 v108; // [rsp+158h] [rbp-170h]
  char **dest; // [rsp+160h] [rbp-168h] BYREF
  __int64 v110; // [rsp+168h] [rbp-160h]
  _QWORD *v111; // [rsp+170h] [rbp-158h]
  __int64 v112; // [rsp+178h] [rbp-150h]
  __int128 v113; // [rsp+180h] [rbp-148h]
  __int64 v114; // [rsp+190h] [rbp-138h]
  __int128 v115; // [rsp+198h] [rbp-130h]
  __int64 v116; // [rsp+1A8h] [rbp-120h]
  __int64 v117; // [rsp+1B0h] [rbp-118h]
  __int128 v118; // [rsp+1B8h] [rbp-110h]
  __int64 v119; // [rsp+1C8h] [rbp-100h]
  __int128 v120; // [rsp+1D0h] [rbp-F8h]
  __int128 v121; // [rsp+1E0h] [rbp-E8h]
  __int128 v122; // [rsp+1F0h] [rbp-D8h]
  __int128 v123; // [rsp+200h] [rbp-C8h]
  _BYTE *v124; // [rsp+210h] [rbp-B8h]
  __int64 v125; // [rsp+218h] [rbp-B0h]
  __int128 *v126; // [rsp+220h] [rbp-A8h] BYREF
  __int64 (__fastcall *v127)(); // [rsp+228h] [rbp-A0h]
  _BYTE *v128; // [rsp+230h] [rbp-98h]
  __int64 (__fastcall *v129)(); // [rsp+238h] [rbp-90h]
  __int128 v130; // [rsp+240h] [rbp-88h]
  void *v131; // [rsp+258h] [rbp-70h] BYREF
  __int128 v132; // [rsp+260h] [rbp-68h]
  __m256i v133; // [rsp+270h] [rbp-58h]

  if ( a2 )
  {
    v73 = a3[3];
    v72 = a3[6];
    v79 = a3[5];
    v3 = a1;
    v76 = a3[4];
    v74 = a3[2] == 0;
    v78 = *a3;
    v77 = *a3 == 0;
    v75 = v73 == 0 || a3[2] != 0;
    v87 = 0;
    v124 = a3;
    v107 = a1 + 16 * a2;
    while ( 1 )
    {
      v7 = *(void **)v3;
      v108 = v3;
      v8 = *(_QWORD *)(v3 + 8);
      src = v7;
      std::sys::pal::unix::fs::lstat(&dest);
      if ( (_DWORD)dest == 2 )
        break;
      if ( (v115 & 0xF000) != 0x4000 )
      {
        v4 = uu_rm::remove_file(v7, v8);
LABEL_5:
        v5 = v4;
        goto LABEL_6;
      }
      v100 = v79;
      std::path::Path::components(&dest, v7, v8);
      v96 = v8;
      if ( (BYTE2(v115) || (unsigned __int8)((_BYTE)v111 - 5) >= 2u) && !std::path::Path::parent(v7, v8) )
      {
        v10 = v73 == 0;
        v9 = v74;
        if ( v75 )
          goto LABEL_19;
      }
      else if ( !v73 )
      {
        v10 = 1;
        LOBYTE(v9) = 1;
LABEL_19:
        if ( v76 && v9 )
        {
          v5 = uu_rm::remove_dir(v7, v8) & 1;
        }
        else
        {
          if ( v10 )
          {
            if ( uucore::UTIL_NAME != 2 )
              once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
            *(_OWORD *)v84 = xmmword_F3390;
            v92 = v84;
            *(_QWORD *)&v93 = <&T as core::fmt::Display>::fmt;
            dest = (char **)&unk_EE5F8;
            v110 = 2LL;
            *(_QWORD *)&v113 = 0LL;
            v111 = &v92;
            v112 = 1LL;
            std::io::stdio::_eprint(&dest);
            *(_QWORD *)v84 = 1LL;
            *(_QWORD *)&v84[8] = v7;
            *(_QWORD *)&v84[16] = v96;
            v85.m256i_i8[0] = 1;
            v92 = v84;
            *(_QWORD *)&v93 = <os_display::Quoted as core::fmt::Display>::fmt;
            v47 = &off_EE6D0;
          }
          else
          {
            if ( uucore::UTIL_NAME != 2 )
              once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
            *(_OWORD *)v84 = xmmword_F3390;
            v92 = v84;
            *(_QWORD *)&v93 = <&T as core::fmt::Display>::fmt;
            dest = (char **)&unk_EE5F8;
            v110 = 2LL;
            *(_QWORD *)&v113 = 0LL;
            v111 = &v92;
            v112 = 1LL;
            std::io::stdio::_eprint(&dest);
            *(_QWORD *)v84 = 1LL;
            *(_QWORD *)&v84[8] = v7;
            *(_QWORD *)&v84[16] = v96;
            v85.m256i_i8[0] = 1;
            v92 = v84;
            *(_QWORD *)&v93 = <os_display::Quoted as core::fmt::Display>::fmt;
            v47 = &off_EE6F0;
          }
          dest = v47;
          v110 = 2LL;
          *(_QWORD *)&v113 = 0LL;
          v111 = &v92;
          v112 = 1LL;
          std::io::stdio::_eprint(&dest);
          v5 = 1;
        }
        goto LABEL_6;
      }
      if ( v72 != 2 && v79 == 0 )
      {
        v11 = std::sys::pal::unix::fs::remove_dir_impl::remove_dir_all(v7, v8);
        if ( v11 )
        {
          v12 = v8;
          v13 = v11;
          *(_QWORD *)v97 = v11;
          dest = (char **)std::sys::pal::unix::fs::rmdir(src, v12);
          if ( dest )
          {
            core::ptr::drop_in_place<std::io::error::Error>(&dest);
            if ( (unsigned __int8)std::io::error::Error::kind(v13) == 1 )
            {
              if ( uucore::UTIL_NAME != 2 )
                once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
              *(_OWORD *)v84 = xmmword_F3390;
              v92 = v84;
              *(_QWORD *)&v93 = <&T as core::fmt::Display>::fmt;
              dest = (char **)&unk_EE5F8;
              v110 = 2LL;
              *(_QWORD *)&v113 = 0LL;
              v111 = &v92;
              v112 = 1LL;
              std::io::stdio::_eprint(&dest);
              *(_QWORD *)v84 = 1LL;
              *(_QWORD *)&v84[8] = src;
              *(_QWORD *)&v84[16] = v96;
              v85.m256i_i8[0] = 1;
              v92 = v84;
              *(_QWORD *)&v93 = <os_display::Quoted as core::fmt::Display>::fmt;
              dest = &off_EE638;
              v110 = 2LL;
              *(_QWORD *)&v113 = 0LL;
              v111 = &v92;
              v112 = 1LL;
              std::io::stdio::_eprint(&dest);
            }
            else
            {
              if ( uucore::UTIL_NAME != 2 )
                once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
              *(_OWORD *)v84 = xmmword_F3390;
              v92 = v84;
              *(_QWORD *)&v93 = <&T as core::fmt::Display>::fmt;
              dest = (char **)&unk_EE5F8;
              v110 = 2LL;
              *(_QWORD *)&v113 = 0LL;
              v111 = &v92;
              v112 = 1LL;
              std::io::stdio::_eprint(&dest);
              *(_QWORD *)v84 = 1LL;
              *(_QWORD *)&v84[8] = src;
              *(_QWORD *)&v84[16] = v96;
              v85.m256i_i8[0] = 1;
              v92 = v84;
              *(_QWORD *)&v93 = <os_display::Quoted as core::fmt::Display>::fmt;
              *((_QWORD *)&v93 + 1) = v97;
              n.m256i_i64[0] = (__int64)<std::io::error::Error as core::fmt::Display>::fmt;
              dest = &off_EE658;
              v110 = 3LL;
              *(_QWORD *)&v113 = 0LL;
              v111 = &v92;
              v112 = 2LL;
              std::io::stdio::_eprint(&dest);
            }
            v69 = 1;
          }
          else
          {
            v69 = 0;
          }
          core::ptr::drop_in_place<std::io::error::Error>(v97);
          v5 = v69 & 1;
        }
        else
        {
          v5 = 0;
        }
        goto LABEL_6;
      }
      v89 = 0LL;
      v91 = 0LL;
      v90 = 8LL;
      v104 = 0LL;
      v105 = 8LL;
      v106 = 0LL;
      std::path::Path::to_path_buf(v84, v7, v8, v9);
      v85.m256i_i64[0] = 0LL;
      *(_OWORD *)&v85.m256i_u64[2] = 0xAuLL;
      *(_QWORD *)&v86 = -1LL;
      DWORD2(v86) = 256;
      v122 = v86;
      v121 = 0xAuLL;
      v120 = *(_OWORD *)v85.m256i_i8;
      v119 = *(_QWORD *)&v84[16];
      v118 = *(_OWORD *)v84;
      dest = 0LL;
      v111 = 0LL;
      v112 = 8LL;
      v113 = 0LL;
      v114 = 8LL;
      v115 = 0LL;
      v116 = 8LL;
      v117 = 0LL;
      v123 = 0LL;
      v80 = 0;
      while ( 2 )
      {
        while ( 2 )
        {
          if ( v72 == 2 )
          {
LABEL_38:
            <walkdir::IntoIter as core::iter::traits::iterator::Iterator>::next(&v92, &dest);
            v18 = v92;
            if ( v92 == (_BYTE *)&dword_0 + 3 )
              goto LABEL_97;
            v133 = n;
            v132 = v93;
            if ( (_DWORD)v92 != 2 )
              goto LABEL_63;
            v19 = (void *)*((_QWORD *)&v93 + 1);
            v82 = v93;
            v20 = n.m256i_i64[0];
            v130 = *(_OWORD *)&n.m256i_u64[1];
            v88 = n.m256i_i64[3];
            v21 = v105;
            v22 = 24 * v106;
            while ( v22 )
            {
              v23 = std::path::Path::_starts_with(v19, v20, *(_QWORD *)(v21 + 8), *(_QWORD *)(v21 + 16));
              v21 += 24LL;
              v22 -= 24LL;
              if ( v23 )
              {
                if ( v82 )
                  _rust_dealloc(v19, v82, 1LL);
                goto LABEL_38;
              }
            }
            if ( (v88 & 0xF000) == 0x4000 )
            {
              std::sys::pal::unix::fs::readdir(v84, v19, v20);
              if ( v84[8] == 2 )
                core::result::unwrap_failed(aCalledResultUn_2, 43LL, v84, &off_EE538, &off_EE688);
              *(_QWORD *)&v101 = *(_QWORD *)v84;
              BYTE8(v101) = v84[8] != 0;
              v24 = 0LL;
              while ( 1 )
              {
                <std::fs::ReadDir as core::iter::traits::iterator::Iterator>::next(v97, &v101);
                if ( !*(_QWORD *)v97 )
                  break;
                v85.m256i_i64[2] = v99;
                *(_OWORD *)v85.m256i_i8 = v98;
                *(_OWORD *)&v84[8] = *(_OWORD *)&v97[8];
                *(_QWORD *)v84 = v24;
                if ( *(_QWORD *)&v97[8] )
                {
                  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)&v97[8]) )
                    alloc::sync::Arc<T,A>::drop_slow(&v84[8]);
                  v25 = *(_QWORD *)&v84[16];
                  v26 = v85.m256i_i64[0];
                  **(_BYTE **)&v84[16] = 0;
                  if ( v26 )
                    _rust_dealloc(v25, v26, 1LL);
LABEL_49:
                  ++v24;
                  continue;
                }
                if ( (unsigned __int64)(v84[16] & 3) - 2 < 2 || (v84[16] & 3) == 0 )
                  goto LABEL_49;
                v125 = *(_QWORD *)&v84[16] - 1LL;
                v27 = *(_QWORD *)(*(_QWORD *)&v84[16] - 1LL);
                v28 = *(_QWORD *)(*(_QWORD *)&v84[16] + 7LL);
                if ( *(_QWORD *)v28 )
                  (*(void (__fastcall **)(__int64))v28)(v27);
                v29 = *(_QWORD *)(v28 + 8);
                if ( v29 )
                  _rust_dealloc(v27, v29, *(_QWORD *)(v28 + 16));
                _rust_dealloc(v125, 24LL, 8LL);
                v8 = v96;
                ++v24;
              }
              if ( !_InterlockedDecrement64((volatile signed __int64 *)v101) )
                alloc::sync::Arc<T,A>::drop_slow(&v101);
              if ( !v24 )
                goto LABEL_89;
              if ( uucore::UTIL_NAME != 2 )
                once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
              *(_OWORD *)v97 = xmmword_F3390;
              *(_QWORD *)&v101 = v97;
              *((_QWORD *)&v101 + 1) = <&T as core::fmt::Display>::fmt;
              *(_QWORD *)v84 = &unk_EE5F8;
              *(_QWORD *)&v84[8] = 2LL;
              *(_QWORD *)&v84[16] = &v101;
              *(_OWORD *)v85.m256i_i8 = 1uLL;
              std::io::stdio::_eprint(v84);
              *(_QWORD *)v97 = 1LL;
              *(_QWORD *)&v97[8] = v19;
              *(_QWORD *)&v97[16] = v20;
              LOBYTE(v98) = 1;
              *(_QWORD *)&v101 = v97;
              *((_QWORD *)&v101 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
              *(_QWORD *)v84 = &off_EE880;
              *(_QWORD *)&v84[8] = 2LL;
              *(_QWORD *)&v84[16] = &v101;
              *(_OWORD *)v85.m256i_i8 = 1uLL;
              std::io::stdio::_eprint(v84);
              *(_QWORD *)v84 = &off_EE790;
              *(_QWORD *)&v84[8] = 1LL;
              *(_QWORD *)&v84[16] = 8LL;
              *(_OWORD *)v85.m256i_i8 = 0LL;
              std::io::stdio::_eprint(v84);
              v131 = &std::io::stdio::stderr::INSTANCE;
              v32 = <std::io::stdio::Stderr as std::io::Write>::flush(&v131);
              if ( v32 )
              {
                v126 = (__int128 *)v32;
                *(_QWORD *)&v71 = uucore::util_name();
                *(_OWORD *)v97 = v71;
                *(_QWORD *)&v101 = v97;
                *((_QWORD *)&v101 + 1) = <&T as core::fmt::Display>::fmt;
                *(_QWORD *)v84 = &unk_EE5F8;
                *(_QWORD *)&v84[8] = 2LL;
                *(_QWORD *)&v84[16] = &v101;
                *(_OWORD *)v85.m256i_i8 = 1uLL;
                std::io::stdio::_eprint(v84);
                *(_QWORD *)v97 = &v126;
                *(_QWORD *)&v97[8] = <std::io::error::Error as core::fmt::Display>::fmt;
                *(_QWORD *)v84 = &unk_EE7A0;
                *(_QWORD *)&v84[8] = 2LL;
                *(_QWORD *)&v84[16] = v97;
                *(_OWORD *)v85.m256i_i8 = 1uLL;
                std::io::stdio::_eprint(v84);
                std::process::exit(1);
              }
              if ( (unsigned __int8)uucore::read_yes() )
              {
                v34 = v89;
                v35 = *((_QWORD *)&v91 + 1);
                if ( *((_QWORD *)&v91 + 1) == v89 )
                {
                  alloc::collections::vec_deque::VecDeque<T,A>::grow(&v89);
                  v34 = v89;
                  v35 = *((_QWORD *)&v91 + 1);
                }
                v14 = v91 + v35;
                v15 = 0LL;
                if ( v14 >= v34 )
                  v15 = v34;
LABEL_32:
                v16 = v90;
                v17 = 48 * (v14 - v15);
                *(_QWORD *)(v90 + v17) = v82;
                *(_QWORD *)(v16 + v17 + 8) = v19;
                *(_QWORD *)(v16 + v17 + 16) = v20;
                *(_OWORD *)(v16 + v17 + 24) = v130;
                *(_QWORD *)(v16 + v17 + 40) = v88;
                ++*((_QWORD *)&v91 + 1);
                continue;
              }
              std::path::Path::to_path_buf(v84, v19, v20, v33);
              v39 = v106;
              if ( v106 == v104 )
                alloc::raw_vec::RawVec<T,A>::grow_one(&v104);
              v40 = v105;
              v41 = 3 * v39;
              *(_QWORD *)(v105 + 8 * v41 + 16) = *(_QWORD *)&v84[16];
              *(_OWORD *)(v40 + 8 * v41) = *(_OWORD *)v84;
              v106 = v39 + 1;
LABEL_82:
              if ( v82 )
                _rust_dealloc(v19, v82, 1LL);
              continue;
            }
            v31 = uu_rm::remove_file(v19, v20);
LABEL_81:
            v36 = v80;
            LOBYTE(v36) = (v31 | v80) & 1;
            v80 = v36;
            goto LABEL_82;
          }
          break;
        }
        <walkdir::IntoIter as core::iter::traits::iterator::Iterator>::next(&v92, &dest);
        v18 = v92;
        if ( v92 != (_BYTE *)&dword_0 + 3 )
        {
          v133 = n;
          v132 = v93;
          if ( (_DWORD)v92 != 2 )
          {
LABEL_63:
            *(_QWORD *)v84 = v18;
            v85 = v133;
            *(_OWORD *)&v84[8] = v132;
            *(_QWORD *)&v86 = v95;
            if ( uucore::UTIL_NAME != 2 )
              once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
            v101 = xmmword_F3390;
            v126 = &v101;
            v127 = <&T as core::fmt::Display>::fmt;
            *(_QWORD *)v97 = &unk_EE5F8;
            *(_QWORD *)&v97[8] = 2LL;
            *(_QWORD *)&v97[16] = &v126;
            v98 = 1uLL;
            std::io::stdio::_eprint(v97);
            *(_QWORD *)&v101 = 1LL;
            *((_QWORD *)&v101 + 1) = src;
            v102 = v8;
            v103 = 1;
            v126 = &v101;
            v127 = <os_display::Quoted as core::fmt::Display>::fmt;
            v128 = v84;
            v129 = <walkdir::error::Error as core::fmt::Display>::fmt;
            *(_QWORD *)v97 = &off_EE6A0;
            *(_QWORD *)&v97[8] = 3LL;
            *(_QWORD *)&v97[16] = &v126;
            v98 = 2uLL;
            v30 = std::io::stdio::_eprint(v97);
            if ( *(_QWORD *)v84 )
            {
              if ( *(_QWORD *)&v84[8] )
                v30 = _rust_dealloc(*(_QWORD *)&v84[16], *(_QWORD *)&v84[8], 1LL);
              if ( v85.m256i_i64[1] )
                v30 = _rust_dealloc(v85.m256i_i64[2], v85.m256i_i64[1], 1LL);
            }
            else
            {
              if ( *(_QWORD *)&v84[16] != 0x8000000000000000LL && *(_QWORD *)&v84[16] )
                _rust_dealloc(v85.m256i_i64[0], *(_QWORD *)&v84[16], 1LL);
              v30 = core::ptr::drop_in_place<std::io::error::Error>(&v84[8]);
            }
            LOBYTE(v30) = 1;
            v80 = v30;
            continue;
          }
          v19 = (void *)*((_QWORD *)&v93 + 1);
          v82 = v93;
          v20 = n.m256i_i64[0];
          v130 = *(_OWORD *)&n.m256i_u64[1];
          LODWORD(v88) = n.m256i_i32[6];
          if ( (n.m256i_i16[12] & 0xF000) == 0x4000 )
          {
            HIDWORD(v88) = n.m256i_i32[7];
LABEL_89:
            v37 = v89;
            v38 = *((_QWORD *)&v91 + 1);
            if ( *((_QWORD *)&v91 + 1) == v89 )
            {
              alloc::collections::vec_deque::VecDeque<T,A>::grow(&v89);
              v37 = v89;
              v38 = *((_QWORD *)&v91 + 1);
            }
            v14 = v91 + v38;
            v15 = 0LL;
            if ( v14 >= v37 )
              v15 = v37;
            goto LABEL_32;
          }
          v31 = uu_rm::remove_file(*((void **)&v93 + 1), n.m256i_u64[0]);
          goto LABEL_81;
        }
        break;
      }
LABEL_97:
      core::ptr::drop_in_place<walkdir::IntoIter>(&dest);
      v42 = v80;
      if ( *((_QWORD *)&v91 + 1) )
      {
        v43 = v89;
        v44 = 0LL;
        if ( (unsigned __int64)v91 >= v89 )
          v44 = v89;
        v45 = v91 - v44;
        v46 = *((_QWORD *)&v91 + 1) - (v89 - (v91 - v44));
        if ( *((_QWORD *)&v91 + 1) <= v89 - v45 )
        {
          v43 = v45 + *((_QWORD *)&v91 + 1);
          goto LABEL_108;
        }
      }
      else
      {
        v45 = 0LL;
        v43 = 0LL;
LABEL_108:
        v46 = 0LL;
      }
      v48 = v90;
      v49 = v90 + 48 * v45;
      v50 = v90 + 48 * v43;
      v51 = v90 + 48 * v46;
      if ( v90 != v51 )
        goto LABEL_112;
LABEL_113:
      v52 = v51;
      v53 = v50;
      v48 = v49;
      v54 = v49 == v50;
      v50 = v51;
      if ( !v54 )
      {
        while ( 1 )
        {
          v42 = (uu_rm::remove_dir(*(void **)(v53 - 40), *(_QWORD *)(v53 - 32)) | v42) & 1;
          v49 = v52;
          v51 = v53 - 48;
          if ( v48 == v53 - 48 )
            goto LABEL_113;
LABEL_112:
          v52 = v49;
          v53 = v51;
        }
      }
      v55 = v106;
      if ( v106 )
      {
        v56 = (_QWORD *)(v105 + 8);
        do
        {
          v57 = *(v56 - 1);
          if ( v57 )
            _rust_dealloc(*v56, v57, 1LL);
          v56 += 3;
          --v55;
        }
        while ( v55 );
      }
      if ( v104 )
        _rust_dealloc(v105, 24 * v104, 8LL);
      v58 = *((_QWORD *)&v91 + 1);
      if ( *((_QWORD *)&v91 + 1) )
      {
        v59 = v90;
        v60 = v89;
        if ( (unsigned __int64)v91 < v89 )
          v60 = 0LL;
        v61 = v89 - (v91 - v60);
        v62 = v91 - v60 + *((_QWORD *)&v91 + 1);
        v83 = v61;
        v63 = *((_QWORD *)&v91 + 1) - v61;
        if ( *((_QWORD *)&v91 + 1) < v61 )
          v63 = 0LL;
        if ( *((_QWORD *)&v91 + 1) > v61 )
          v62 = v89;
        v64 = v62 - (v91 - v60);
        if ( v64 )
        {
          v67 = (_QWORD *)(v90 + 48 * v91 - 48 * v60 + 8);
          do
          {
            v68 = *(v67 - 1);
            if ( v68 )
              _rust_dealloc(*v67, v68, 1LL);
            v67 += 6;
            --v64;
          }
          while ( v64 );
        }
        if ( v83 < v58 )
        {
          v65 = (_QWORD *)(v59 + 8);
          do
          {
            v66 = *(v65 - 1);
            if ( v66 )
              _rust_dealloc(*v65, v66, 1LL);
            v65 += 6;
            --v63;
          }
          while ( v63 );
        }
      }
      if ( v89 )
        _rust_dealloc(v90, 48 * v89, 8LL);
      v5 = v42 & 1;
LABEL_6:
      v6 = v87;
      LOBYTE(v6) = v5 | v87;
      v87 = v6;
      v3 = v108 + 16;
      if ( v108 + 16 == v107 )
        return v87 & 1;
    }
    *(_QWORD *)v97 = v110;
    if ( !v78 )
    {
      if ( uucore::UTIL_NAME != 2 )
        once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
      *(_OWORD *)v84 = xmmword_F3390;
      v92 = v84;
      *(_QWORD *)&v93 = <&T as core::fmt::Display>::fmt;
      dest = (char **)&unk_EE5F8;
      v110 = 2LL;
      *(_QWORD *)&v113 = 0LL;
      v111 = &v92;
      v112 = 1LL;
      std::io::stdio::_eprint(&dest);
      *(_QWORD *)v84 = 1LL;
      *(_QWORD *)&v84[8] = v7;
      *(_QWORD *)&v84[16] = v8;
      v85.m256i_i8[0] = 1;
      v92 = v84;
      *(_QWORD *)&v93 = <os_display::Quoted as core::fmt::Display>::fmt;
      dest = &off_EE618;
      v110 = 2LL;
      *(_QWORD *)&v113 = 0LL;
      v111 = &v92;
      v112 = 1LL;
      std::io::stdio::_eprint(&dest);
    }
    core::ptr::drop_in_place<std::io::error::Error>(v97);
    v4 = v77;
    goto LABEL_5;
  }
  v87 = 0;
  return v87 & 1;
}
