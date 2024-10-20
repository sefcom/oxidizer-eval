_OWORD *__fastcall uu_unexpand::unexpand(_QWORD *a1)
{
  __int64 v1; // r14
  unsigned __int64 v2; // r13
  unsigned __int64 v3; // rax
  __int64 v4; // rbp
  unsigned __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 (__fastcall **v12)(); // rcx
  __int64 v13; // r14
  __int64 *v14; // rax
  __int64 *v15; // rbx
  char *v16; // rsi
  __int64 (__fastcall **v17)(); // r14
  _DWORD *v18; // rax
  __int64 v19; // rdx
  __int128 v20; // xmm0
  __int64 v21; // rdx
  __int64 v22; // rax
  unsigned __int64 v23; // r13
  unsigned __int64 v24; // rbp
  unsigned __int64 v25; // r8
  void *v26; // r12
  const void *v27; // rbp
  size_t v28; // rbx
  char v29; // r15
  __int64 v30; // rsi
  __int64 v31; // rcx
  __int64 v32; // r14
  char v33; // bl
  char v34; // di
  char v35; // al
  __int64 v36; // r9
  unsigned __int64 v37; // r12
  __int64 v38; // r12
  unsigned __int64 v39; // rsi
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // r14
  __int64 v42; // rsi
  size_t v43; // r15
  unsigned __int64 v44; // rax
  size_t v45; // rbx
  __int64 v46; // rax
  __int64 v47; // rax
  unsigned __int64 *v48; // rdx
  unsigned __int64 v49; // rsi
  bool v50; // cc
  int code_point; // eax
  unsigned int v52; // edx
  bool v53; // cf
  size_t v54; // r15
  unsigned __int64 v55; // rax
  size_t v56; // rbx
  void *v57; // r12
  const void *v58; // rbp
  char v59; // al
  __int64 v60; // rax
  size_t v61; // r14
  const void *v62; // r12
  size_t v63; // rbp
  void *v64; // rbx
  __int64 v65; // rax
  __int64 v66; // r14
  __int64 v67; // r15
  __int64 (__fastcall **v68)(); // rax
  __int64 (__fastcall *v69)(); // rsi
  __int64 (__fastcall *v70)(); // rdx
  __int64 v71; // rdi
  __int64 v72; // rax
  _OWORD *v73; // rax
  _OWORD *v74; // rbx
  __int128 v75; // xmm0
  __int64 v76; // rax
  __int64 v77; // rsi
  __int64 v78; // rsi
  char **v80; // rax
  char v81; // [rsp+4h] [rbp-274h]
  char v82; // [rsp+8h] [rbp-270h]
  unsigned __int64 *v83; // [rsp+10h] [rbp-268h]
  char **v84; // [rsp+18h] [rbp-260h]
  __int64 v85; // [rsp+20h] [rbp-258h] BYREF
  __int64 v86; // [rsp+28h] [rbp-250h]
  __int64 v87; // [rsp+30h] [rbp-248h]
  __int64 v88; // [rsp+38h] [rbp-240h] BYREF
  __int64 v89; // [rsp+40h] [rbp-238h]
  size_t v90; // [rsp+48h] [rbp-230h]
  char v91; // [rsp+50h] [rbp-228h]
  __int64 v92; // [rsp+58h] [rbp-220h] BYREF
  unsigned __int64 v93; // [rsp+60h] [rbp-218h]
  __int64 v94; // [rsp+68h] [rbp-210h] BYREF
  __int64 (__fastcall **v95)(); // [rsp+70h] [rbp-208h]
  unsigned __int64 v96; // [rsp+78h] [rbp-200h]
  _QWORD *v97; // [rsp+80h] [rbp-1F8h]
  __int64 v98; // [rsp+88h] [rbp-1F0h] BYREF
  __int64 v99; // [rsp+90h] [rbp-1E8h]
  __int64 (__fastcall **v100)(); // [rsp+98h] [rbp-1E0h]
  __int128 v101; // [rsp+A0h] [rbp-1D8h]
  __int128 v102; // [rsp+B0h] [rbp-1C8h]
  __int128 v103; // [rsp+C0h] [rbp-1B8h] BYREF
  __int128 v104; // [rsp+D0h] [rbp-1A8h] BYREF
  char **v105; // [rsp+F8h] [rbp-180h]
  __int64 v106; // [rsp+100h] [rbp-178h]
  __int64 v107; // [rsp+108h] [rbp-170h]
  __int64 v108; // [rsp+110h] [rbp-168h]
  _DWORD v109[2]; // [rsp+118h] [rbp-160h] BYREF
  __int64 v110; // [rsp+120h] [rbp-158h]
  __int64 v111; // [rsp+128h] [rbp-150h] BYREF
  __int64 v112; // [rsp+130h] [rbp-148h]
  _QWORD *v113; // [rsp+138h] [rbp-140h]
  __int64 v114; // [rsp+140h] [rbp-138h]
  __int64 v115; // [rsp+148h] [rbp-130h]
  _QWORD v116[2]; // [rsp+158h] [rbp-120h] BYREF
  _QWORD v117[2]; // [rsp+168h] [rbp-110h] BYREF
  _QWORD v118[2]; // [rsp+178h] [rbp-100h] BYREF
  _QWORD v119[3]; // [rsp+188h] [rbp-F0h] BYREF
  _QWORD v120[4]; // [rsp+1A0h] [rbp-D8h] BYREF
  __int128 v121; // [rsp+1C0h] [rbp-B8h]
  __int128 v122; // [rsp+1D0h] [rbp-A8h]
  _QWORD v123[6]; // [rsp+1E0h] [rbp-98h] BYREF
  _QWORD v124[3]; // [rsp+210h] [rbp-68h] BYREF
  char v125; // [rsp+228h] [rbp-50h] BYREF

  v1 = std::io::stdio::stdout();
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v103, 0x2000LL, 0LL);
  if ( (_QWORD)v103 )
    alloc::raw_vec::handle_error(*((_QWORD *)&v103 + 1), v104);
  v88 = *((_QWORD *)&v103 + 1);
  v89 = v104;
  v90 = 0LL;
  v91 = 0;
  v92 = v1;
  v83 = (unsigned __int64 *)a1[4];
  if ( !v83 || ((unsigned __int8)v83 & 7) != 0 || (v2 = a1[5], v2 >> 60) )
LABEL_172:
    core::panicking::panic_nounwind(anon_ea5d52e0609cca556c29fc6699d6f586_39_llvm_13207799637797456089, 162LL);
  v85 = 0LL;
  v86 = 1LL;
  v87 = 0LL;
  if ( v2 <= 1 )
    v3 = 0LL;
  else
    v3 = v83[v2 - 1];
  v96 = v3;
  v4 = a1[1];
  if ( !v4 || (v4 & 7) != 0 || (v5 = a1[2], v5 >= 0x555555555555556LL) )
    core::panicking::panic_nounwind(anon_b8e768ed0ddf17f1539d76bb5aedca5a_38_llvm_9157631453777517788, 162LL);
  if ( !v5 )
  {
    v74 = 0LL;
    goto LABEL_152;
  }
  v107 = v4 + 24 * v5;
  --v96;
  v108 = 8 * v2;
  v105 = &off_10B078;
  v84 = &off_10B030;
  v97 = a1;
  v93 = v2;
  while ( 1 )
  {
    v6 = *(_QWORD *)(v4 + 8);
    if ( !v6 )
      goto LABEL_172;
    v7 = *(_QWORD *)(v4 + 16);
    if ( v7 < 0 )
      goto LABEL_172;
    if ( (unsigned __int8)std::path::Path::is_dir(*(_QWORD *)(v4 + 8), *(_QWORD *)(v4 + 16)) )
    {
      v118[0] = v6;
      v118[1] = v7;
      v117[0] = v118;
      v117[1] = <std::path::Display as core::fmt::Display>::fmt;
      v111 = (__int64)&unk_10AEE0;
      v112 = 2LL;
      v113 = v117;
      v114 = 1LL;
      v115 = 0LL;
      alloc::fmt::format::format_inner(v119, &v111);
      v8 = v119[0];
      v9 = v119[1];
      v10 = v119[2];
      v11 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
      if ( !v11 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      *(_QWORD *)v11 = v8;
      *(_QWORD *)(v11 + 8) = v9;
      *(_QWORD *)(v11 + 16) = v10;
      *(_DWORD *)(v11 + 24) = 1;
      v12 = &off_10AF38;
      goto LABEL_130;
    }
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v7, asc_1ED01, 1LL) )
    {
      v13 = std::io::stdio::stdin();
      v14 = (__int64 *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 8LL, 0LL);
      if ( !v14 )
        alloc::alloc::handle_alloc_error(8LL, 8LL);
      *v14 = v13;
      v15 = v124;
      std::io::buffered::bufreader::BufReader<R>::new(v124, v14, &unk_10AE88);
      v16 = &v125;
    }
    else
    {
      v111 = 0x1B600000000LL;
      WORD2(v112) = 0;
      LODWORD(v112) = 1;
      std::fs::OpenOptions::_open(v109, &v111, v6, v7);
      if ( v109[0] )
      {
        v11 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
                v110,
                v6,
                v7);
        v12 = &anon_ea5d52e0609cca556c29fc6699d6f586_20_llvm_13207799637797456089;
        v17 = &anon_ea5d52e0609cca556c29fc6699d6f586_20_llvm_13207799637797456089;
        if ( v11 )
          goto LABEL_130;
      }
      else
      {
        LODWORD(v17) = v109[1];
      }
      v18 = (_DWORD *)alloc::alloc::Global::alloc_impl(1LL, 4LL, 4LL, 0LL);
      if ( !v18 )
        alloc::alloc::handle_alloc_error(4LL, 4LL);
      *v18 = (_DWORD)v17;
      v15 = (__int64 *)&v103;
      std::io::buffered::bufreader::BufReader<R>::new(&v103, v18, &off_10AE30);
      v16 = (char *)&v104 + 8;
    }
    v19 = *v15;
    v11 = v15[1];
    v12 = (__int64 (__fastcall **)())v15[2];
    v20 = *(_OWORD *)v16;
    v122 = *((_OWORD *)v16 + 1);
    v121 = v20;
    if ( v19 )
      break;
LABEL_130:
    v94 = v11;
    v95 = v12;
    _InterlockedExchange(&uucore::mods::error::EXIT_CODE, ((__int64 (__fastcall *)(__int64))v12[12])(v11));
    v65 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
    v66 = *(_QWORD *)(v65 + 8);
    v67 = *(_QWORD *)(v65 + 16);
    core::slice::raw::from_raw_parts::precondition_check(v66, 1LL, 1LL, v67);
    v116[0] = v66;
    v116[1] = v67;
    v120[0] = v116;
    v120[1] = <&T as core::fmt::Display>::fmt;
    v120[2] = &v94;
    v120[3] = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
    v123[0] = &unk_10B108;
    v123[1] = 3LL;
    v123[4] = 0LL;
    v123[2] = v120;
    v123[3] = 2LL;
    std::io::stdio::_eprint(v123);
    v68 = v95;
    if ( *v95 )
    {
      ((void (__fastcall *)(__int64))*v95)(v94);
      v68 = v95;
    }
    v69 = v68[1];
    if ( v69 )
    {
      v70 = v68[2];
      v71 = v94;
LABEL_13:
      _rust_dealloc(v71, v69, v70);
    }
LABEL_14:
    v4 += 24LL;
    if ( v4 == v107 )
    {
      v78 = v85;
      v74 = 0LL;
      if ( v85 )
        goto LABEL_150;
      goto LABEL_152;
    }
  }
  v106 = v4;
  v102 = v122;
  v101 = v121;
  v98 = v19;
  v99 = v11;
  v100 = v12;
  while ( 1 )
  {
    if ( std::io::read_until(&v98, 10LL, &v85) )
    {
      if ( !v87 )
      {
        std::io::error::repr_bitpacked::decode_repr(&v103, v21);
        if ( (unsigned __int8)v103 >= 3u )
          core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>((char *)&v103 + 8);
LABEL_136:
        if ( v99 )
          _rust_dealloc(v98, v99, 1LL);
        v72 = *((_QWORD *)&v102 + 1);
        v4 = v106;
        if ( **((_QWORD **)&v102 + 1) )
        {
          (**((void (__fastcall ***)(_QWORD))&v102 + 1))(v102);
          v72 = *((_QWORD *)&v102 + 1);
        }
        v69 = *(__int64 (__fastcall **)())(v72 + 8);
        if ( v69 )
        {
          v70 = *(__int64 (__fastcall **)())(v72 + 16);
          v71 = v102;
          goto LABEL_13;
        }
        goto LABEL_14;
      }
      std::io::error::repr_bitpacked::decode_repr(&v103, v21);
      if ( (unsigned __int8)v103 >= 3u )
        core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>((char *)&v103 + 8);
    }
    else if ( !v21 )
    {
      goto LABEL_136;
    }
    v22 = v87;
    if ( v87 )
      break;
    v82 = 3;
    v81 = 1;
    v23 = 0LL;
    v25 = 0LL;
LABEL_127:
    uu_unexpand::write_tabs(&v88, v83, v93, v25, v23, v82 == 2, v81 & 1, 1u);
    v46 = std::io::buffered::bufwriter::BufWriter<W>::flush_buf(&v88);
    if ( v46 )
      goto LABEL_142;
    v46 = <std::io::stdio::Stdout as std::io::Write>::flush(&v92);
    if ( v46 )
      goto LABEL_142;
    v87 = 0LL;
  }
  v81 = 1;
  v82 = 3;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  while ( 2 )
  {
    v29 = v82;
    if ( v96 >= v23 )
    {
      if ( v22 < 0 || (v30 = v86) == 0 )
        core::panicking::panic_nounwind(anon_69b1e845c8810c9cdb3b50477f5d946f_11_llvm_12964651969104725473, 162LL);
      v31 = *(unsigned __int8 *)(v86 + v24);
      if ( (*((_BYTE *)v97 + 49) & 1) == 0 )
      {
        v32 = 1LL;
        if ( (_DWORD)v31 == 8 )
        {
          v34 = 0;
          v33 = 0;
          v35 = 0;
LABEL_58:
          v82 = v35;
        }
        else
        {
          if ( (_DWORD)v31 == 9 )
          {
            v82 = 2;
            v34 = 0;
          }
          else
          {
            if ( (_DWORD)v31 == 32 )
            {
              v33 = 1;
              v34 = 0;
              v35 = 1;
              goto LABEL_58;
            }
            v82 = 3;
            v34 = 1;
          }
          v33 = 0;
        }
LABEL_61:
        v36 = 1LL;
        goto LABEL_62;
      }
      v32 = ((v31 & 0x80u) != 0LL) + 1LL;
      if ( __CFADD__(v32, v24) )
        goto LABEL_163;
      LOBYTE(v31) = 3;
      v82 = 3;
      v34 = 1;
      v36 = 1LL;
      if ( v32 + v24 > v22 )
      {
        v33 = 0;
        v32 = 1LL;
        goto LABEL_62;
      }
      v37 = v25;
      core::str::converts::from_utf8(&v103, v24 + v86, v32, v31, v25, 1LL);
      if ( (_QWORD)v103 )
      {
        v25 = v37;
LABEL_55:
        v33 = 0;
        v32 = 1LL;
        v34 = 1;
        goto LABEL_61;
      }
      v124[0] = *((_QWORD *)&v103 + 1);
      v124[1] = *((_QWORD *)&v103 + 1) + v104;
      code_point = core::str::validations::next_code_point(v124);
      v25 = v37;
      if ( !code_point )
        goto LABEL_55;
      if ( (v52 ^ 0xD800) - 2048 >= (unsigned int)&off_10F800 )
        core::panicking::panic_nounwind(anon_ea5d52e0609cca556c29fc6699d6f586_35_llvm_13207799637797456089, 57LL);
      if ( (int)v52 > 31 )
      {
        if ( v52 != 32 )
        {
          if ( v52 == (_DWORD)&unk_110000 )
            goto LABEL_55;
          goto LABEL_110;
        }
        v33 = 1;
        v34 = 0;
        v32 = 1LL;
        v59 = 1;
      }
      else
      {
        if ( v52 != 8 )
        {
          if ( v52 == 9 )
          {
            v82 = 2;
            v34 = 0;
            v32 = 1LL;
            v33 = 0;
LABEL_116:
            v36 = 0LL;
            goto LABEL_62;
          }
LABEL_110:
          if ( v52 >= 0x7F )
          {
            if ( v52 >= 0xA0 )
            {
              v33 = 0;
              v60 = unicode_width::tables::charwidth::lookup_width(v52, 0LL);
              v25 = v37;
              v34 = 1;
              v36 = v60;
              goto LABEL_62;
            }
          }
          else
          {
            v36 = 1LL;
            if ( v52 > 0x1F )
            {
              v33 = 0;
              v34 = 1;
              goto LABEL_62;
            }
          }
          v33 = 0;
          v36 = 0LL;
          v34 = 1;
LABEL_62:
          LOBYTE(v31) = 1;
          if ( (v81 & 1) == 0 )
          {
            v31 = *((unsigned __int8 *)v97 + 48);
            LOBYTE(v31) = v31 & 1;
          }
          if ( (unsigned __int8)(v82 - 1) >= 2u )
          {
            v38 = v36;
            v30 = (__int64)v83;
            uu_unexpand::write_tabs(&v88, v83, v93, v25, v23, v29 == 2, v81 & 1, v97[6] & 1);
            if ( v34 )
            {
              v53 = __CFADD__(v38, v23);
              v23 += v38;
              if ( v53 )
              {
                v80 = &off_10B090;
LABEL_162:
                v84 = v80;
LABEL_163:
                core::panicking::panic_const::panic_const_add_overflow(v84, v30);
              }
            }
            else
            {
              v53 = v23-- == 0;
              if ( v53 )
                v23 = 0LL;
            }
            v53 = __CFADD__(v24, v32);
            v41 = v24 + v32;
            if ( v53 )
            {
              v80 = &off_10B0A8;
              goto LABEL_162;
            }
            if ( !v86 )
              goto LABEL_172;
            v42 = v87;
            if ( v87 < 0 )
              goto LABEL_172;
            if ( v87 < v41 )
            {
              v105 = &off_10B0C0;
LABEL_158:
              core::slice::index::slice_end_index_len_fail(v41, v42, v105, v31, v25, v36);
            }
            v43 = v41 - v24;
            v44 = v24 + v86;
            v45 = v90;
            if ( v88 - v90 > v41 - v24 )
            {
              v26 = (void *)(v90 + v89);
              v27 = (const void *)(v24 + v86);
              core::intrinsics::copy_nonoverlapping::precondition_check(v44, v90 + v89, 1LL, 1LL, v43);
              memcpy(v26, v27, v43);
              v28 = v43 + v45;
              v81 = 0;
              goto LABEL_39;
            }
            v46 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(&v88, v44, v41 - v24);
            if ( v46 )
              goto LABEL_142;
            v81 = 0;
LABEL_40:
            v25 = v23;
          }
          else
          {
            if ( v33 )
              goto LABEL_66;
            if ( v93 == 1 )
            {
              v39 = *v83;
              if ( !*v83 )
                core::panicking::panic_const::panic_const_rem_by_zero(&off_10AFA8);
              if ( (v39 | v23) >> 32 )
                v40 = v23 % v39;
              else
                v40 = (unsigned int)v23 % (unsigned int)v39;
              v30 = v39 - v40;
            }
            else
            {
              v47 = v108;
              v48 = v83;
              while ( v47 && v48 )
              {
                v49 = *v48++;
                v47 -= 8LL;
                v50 = v49 <= v23;
                v30 = v49 - v23;
                if ( !v50 )
                  goto LABEL_96;
              }
LABEL_66:
              v30 = 1LL;
            }
LABEL_96:
            v53 = __CFADD__(v30, v23);
            v23 += v30;
            if ( v53 )
            {
              v80 = &off_10B048;
              goto LABEL_162;
            }
            v53 = __CFADD__(v24, v32);
            v41 = v24 + v32;
            if ( (_BYTE)v31 )
            {
              if ( v53 )
              {
                v80 = &off_10B0D8;
                goto LABEL_162;
              }
              goto LABEL_41;
            }
            if ( v53 )
            {
              v80 = &off_10B060;
              goto LABEL_162;
            }
            if ( !v86 )
              goto LABEL_172;
            v42 = v87;
            if ( v87 < 0 )
              goto LABEL_172;
            if ( v87 < v41 )
              goto LABEL_158;
            v54 = v41 - v24;
            v55 = v24 + v86;
            v56 = v90;
            if ( v88 - v90 > v41 - v24 )
            {
              v57 = (void *)(v90 + v89);
              v58 = (const void *)(v24 + v86);
              core::intrinsics::copy_nonoverlapping::precondition_check(v55, v90 + v89, 1LL, 1LL, v54);
              memcpy(v57, v58, v54);
              v28 = v54 + v56;
LABEL_39:
              v90 = v28;
              goto LABEL_40;
            }
            v46 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(&v88, v55, v41 - v24);
            v25 = v23;
            if ( v46 )
              goto LABEL_142;
          }
LABEL_41:
          v22 = v87;
          v24 = v41;
          if ( v41 >= v87 )
            goto LABEL_127;
          continue;
        }
        v34 = 0;
        v32 = 1LL;
        v33 = 0;
        v59 = 0;
      }
      v82 = v59;
      goto LABEL_116;
    }
    break;
  }
  uu_unexpand::write_tabs(&v88, v83, v93, v25, v23, v82 == 2, v81 & 1, 1u);
  if ( !v86 || v87 < 0 )
    core::panicking::panic_nounwind(anon_7bf8453590977c7a3fe5e2865e6df318_8_llvm_976352915506230263, 162LL);
  v61 = v87 - v24;
  if ( v87 < v24 )
    core::slice::index::slice_start_index_len_fail(v24, v87, &off_10B0F0);
  v62 = (const void *)(v24 + v86);
  v63 = v90;
  if ( v88 - v90 > v61 )
  {
    v64 = (void *)(v90 + v89);
    core::intrinsics::copy_nonoverlapping::precondition_check(v62, v90 + v89, 1LL, 1LL, v61);
    memcpy(v64, v62, v61);
    v90 = v61 + v63;
    v25 = v23;
    goto LABEL_127;
  }
  v46 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(&v88, v62, v61);
  v25 = v23;
  if ( !v46 )
    goto LABEL_127;
LABEL_142:
  *(_QWORD *)&v103 = 0x8000000000000000LL;
  *((_QWORD *)&v104 + 1) = v46;
  v73 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL, v25);
  v74 = v73;
  if ( !v73 )
    alloc::alloc::handle_alloc_error(8LL, 32LL);
  v75 = v103;
  v73[1] = v104;
  *v73 = v75;
  if ( v99 )
    _rust_dealloc(v98, v99, 1LL);
  v76 = *((_QWORD *)&v102 + 1);
  if ( **((_QWORD **)&v102 + 1) )
  {
    (**((void (__fastcall ***)(_QWORD))&v102 + 1))(v102);
    v76 = *((_QWORD *)&v102 + 1);
  }
  v77 = *(_QWORD *)(v76 + 8);
  if ( v77 )
    _rust_dealloc(v102, v77, *(_QWORD *)(v76 + 16));
  v78 = v85;
  if ( v85 )
LABEL_150:
    _rust_dealloc(v86, v78, 1LL);
LABEL_152:
  core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::Stdout>>(&v88);
  return v74;
}
