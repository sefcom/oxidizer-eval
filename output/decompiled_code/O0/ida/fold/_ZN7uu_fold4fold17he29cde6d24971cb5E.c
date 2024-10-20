__int64 __fastcall uu_fold::fold(__int64 a1, __int64 a2, int a3, int a4, unsigned __int64 a5)
{
  __int64 v5; // r12
  __int64 v6; // r13
  int *p_fd; // rbx
  __int64 (__fastcall **v8)(); // r14
  __int64 result; // rax
  __int64 (__fastcall **v10)(); // rdx
  __int64 v11; // rdx
  _BYTE *v12; // rax
  __int64 v13; // rbx
  unsigned __int64 v14; // r13
  unsigned __int64 v15; // rcx
  bool v16; // cf
  unsigned __int64 v17; // rcx
  _QWORD **v18; // r12
  unsigned __int64 v19; // rbp
  char *v20; // rcx
  __int64 *v21; // rax
  __int64 v22; // r14
  unsigned __int64 v23; // rbx
  __int64 v24; // rdx
  unsigned int v25; // edx
  unsigned int v26; // r13d
  __int64 (__fastcall *v27)(); // r12
  __int64 v28; // rsi
  _QWORD *v29; // rdi
  unsigned __int64 v30; // rbp
  unsigned __int64 v31; // rbx
  __int64 v32; // rcx
  __int64 v33; // r12
  unsigned int v34; // eax
  bool v35; // zf
  char v36; // al
  __int64 v37; // rax
  __int64 v38; // rdx
  size_t v39; // r12
  const void *v40; // r13
  __int64 v41; // rbp
  char *v42; // rbp
  __int64 v43; // r12
  __int64 v44; // rbx
  __int64 v45; // rbx
  __int64 v46; // rbx
  char **v47; // rdi
  char **v48; // rdi
  char v49; // [rsp+7h] [rbp-241h]
  int fd; // [rsp+8h] [rbp-240h] BYREF
  int v51; // [rsp+Ch] [rbp-23Ch]
  __int64 v52; // [rsp+10h] [rbp-238h] BYREF
  _QWORD *v53; // [rsp+18h] [rbp-230h]
  __int64 v54; // [rsp+20h] [rbp-228h] BYREF
  __int64 v55; // [rsp+28h] [rbp-220h] BYREF
  _BYTE *v56; // [rsp+30h] [rbp-218h]
  __int64 v57; // [rsp+38h] [rbp-210h] BYREF
  int v58; // [rsp+44h] [rbp-204h]
  __int64 v59; // [rsp+48h] [rbp-200h]
  _QWORD **v60; // [rsp+50h] [rbp-1F8h] BYREF
  unsigned __int64 v61; // [rsp+58h] [rbp-1F0h]
  char **v62; // [rsp+60h] [rbp-1E8h]
  unsigned __int64 v63; // [rsp+68h] [rbp-1E0h]
  int v64; // [rsp+70h] [rbp-1D8h]
  int v65; // [rsp+74h] [rbp-1D4h] BYREF
  __int64 v66; // [rsp+78h] [rbp-1D0h] BYREF
  __int64 v67; // [rsp+80h] [rbp-1C8h]
  __int64 **v68; // [rsp+88h] [rbp-1C0h]
  __int64 v69; // [rsp+90h] [rbp-1B8h]
  __int64 v70; // [rsp+98h] [rbp-1B0h]
  __int64 **v71; // [rsp+A8h] [rbp-1A0h] BYREF
  __int64 v72; // [rsp+B0h] [rbp-198h]
  __int128 v73; // [rsp+B8h] [rbp-190h] BYREF
  __int64 v74; // [rsp+C8h] [rbp-180h]
  int *v75; // [rsp+D0h] [rbp-178h]
  __int64 (__fastcall **v76)(); // [rsp+D8h] [rbp-170h]
  _QWORD *v77; // [rsp+E0h] [rbp-168h] BYREF
  __int64 (__fastcall *v78)(); // [rsp+E8h] [rbp-160h]
  __int64 *v79; // [rsp+F0h] [rbp-158h] BYREF
  __int64 (__fastcall *v80)(); // [rsp+F8h] [rbp-150h]
  __int64 (__fastcall **v81)(); // [rsp+100h] [rbp-148h]
  __int64 v82; // [rsp+108h] [rbp-140h]
  __int64 v83; // [rsp+110h] [rbp-138h]
  __int64 v84; // [rsp+118h] [rbp-130h]
  __int64 v85; // [rsp+120h] [rbp-128h] BYREF
  int v86; // [rsp+128h] [rbp-120h] BYREF
  unsigned int v87; // [rsp+12Ch] [rbp-11Ch]
  __int64 v88; // [rsp+130h] [rbp-118h]
  _BYTE *v89; // [rsp+138h] [rbp-110h] BYREF
  __int64 v90; // [rsp+140h] [rbp-108h]
  _QWORD *v91; // [rsp+148h] [rbp-100h]
  __int64 v92; // [rsp+150h] [rbp-F8h]
  __int64 v93; // [rsp+158h] [rbp-F0h]
  void *v94; // [rsp+168h] [rbp-E0h] BYREF
  __int64 v95; // [rsp+170h] [rbp-D8h]
  _QWORD *v96; // [rsp+178h] [rbp-D0h]
  __int64 v97; // [rsp+180h] [rbp-C8h]
  __int64 v98; // [rsp+188h] [rbp-C0h]
  void *v99; // [rsp+198h] [rbp-B0h] BYREF
  __int64 v100; // [rsp+1A0h] [rbp-A8h]
  _QWORD *v101; // [rsp+1A8h] [rbp-A0h]
  __int128 v102; // [rsp+1B0h] [rbp-98h]
  _QWORD v103[2]; // [rsp+1C8h] [rbp-80h] BYREF
  _QWORD v104[2]; // [rsp+1D8h] [rbp-70h] BYREF
  _QWORD v105[2]; // [rsp+1E8h] [rbp-60h] BYREF
  _QWORD v106[2]; // [rsp+1F8h] [rbp-50h] BYREF
  _QWORD v107[8]; // [rsp+208h] [rbp-40h] BYREF

  v63 = a5;
  v58 = a4;
  v64 = a3;
  if ( !a2 )
    return 0LL;
  v82 = a1 + 24 * a2;
  v62 = &off_10A2D8;
LABEL_4:
  if ( !a1 )
    return 0LL;
  v5 = *(_QWORD *)(a1 + 8);
  if ( !v5 )
    goto LABEL_186;
  v6 = *(_QWORD *)(a1 + 16);
  if ( v6 < 0 )
    goto LABEL_186;
  v83 = a1;
  v51 = 0;
  v49 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v6, asc_1EFBD, 1LL);
  if ( v49 )
  {
    v51 = 0;
    v85 = std::io::stdio::stdin();
    v51 = 0;
    p_fd = (int *)&v85;
    v8 = (__int64 (__fastcall **)())&unk_10A1F0;
  }
  else
  {
    v66 = 0x1B600000000LL;
    WORD2(v67) = 0;
    LODWORD(v67) = 1;
    v51 = 0;
    std::fs::OpenOptions::_open(&v86, &v66, v5, v6);
    if ( v86 )
    {
      v51 = 0;
      result = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
                 v88,
                 v5,
                 v6);
      v10 = &anon_a80d68ed0ca9468bdfa8ffec365be6d5_6_llvm_17686139402540038789;
      if ( result )
        return result;
    }
    else
    {
      LODWORD(result) = v87;
      v10 = (__int64 (__fastcall **)())(v87 | (unsigned __int64)v81 & 0xFFFFFFFF00000000LL);
    }
    v81 = v10;
    fd = (int)v10;
    LOBYTE(result) = 1;
    v51 = result;
    p_fd = &fd;
    v8 = &off_10A198;
  }
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v66, 0x2000LL, 0LL);
  if ( v66 )
    alloc::raw_vec::handle_error(v67, v68);
  if ( !v68 )
    core::panicking::panic_nounwind(anon_3ea58ce9b04195e65e7596eb035a132b_2_llvm_3490124054932126836, 93LL);
  v71 = v68;
  v72 = 0x2000LL;
  v73 = 0LL;
  v74 = 0LL;
  v75 = p_fd;
  v76 = v8;
  if ( (_BYTE)v64 )
  {
    v55 = 0LL;
    v56 = (_BYTE *)(&dword_0 + 1);
    while ( 1 )
    {
      while ( 1 )
      {
        v57 = 0LL;
        if ( std::io::append_to_string(&v55, &v71) )
        {
          result = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v11);
          if ( result )
          {
            if ( v55 )
            {
              v45 = result;
              _rust_dealloc(v56, v55, 1LL);
              result = v45;
            }
            if ( v72 )
            {
              v44 = result;
              goto LABEL_179;
            }
            goto LABEL_184;
          }
        }
        else if ( !v11 )
        {
          if ( v55 )
            _rust_dealloc(v56, v55, 1LL);
          if ( v72 )
          {
            v44 = 0LL;
            goto LABEL_179;
          }
LABEL_180:
          if ( !v49 )
          {
            std::sys::pal::unix::fs::debug_assert_fd_is_open((unsigned int)fd);
            close(fd);
          }
          a1 = v83 + 24;
          if ( v83 + 24 == v82 )
            return 0LL;
          goto LABEL_4;
        }
        v12 = v56;
        if ( !v56 )
          goto LABEL_186;
        v13 = v57;
        if ( v57 < 0 )
          goto LABEL_186;
        if ( v57 )
          break;
LABEL_66:
        if ( !v12 || v13 < 0 )
          goto LABEL_186;
      }
      if ( v57 != 1 || *v56 != 10 )
      {
        v14 = 0LL;
        while ( 1 )
        {
          v15 = v13 - v14;
          if ( v13 - v14 >= v63 )
            v15 = v63;
          v16 = __CFADD__(v14, v15);
          v17 = v14 + v15;
          if ( v16 )
          {
            v47 = &off_10A258;
            goto LABEL_192;
          }
          if ( !v56 || v57 < 0 )
            goto LABEL_186;
          if ( v14 )
          {
            if ( v57 <= v14 )
            {
              if ( v57 != v14 )
                goto LABEL_189;
            }
            else if ( (char)v56[v14] <= -65 )
            {
              goto LABEL_189;
            }
          }
          if ( v17 )
          {
            if ( v57 <= v17 )
            {
              if ( v57 != v17 )
LABEL_189:
                core::str::slice_error_fail(v56, v57, v14, v17, &off_10A270);
            }
            else if ( (char)v56[v17] < -64 )
            {
              goto LABEL_189;
            }
          }
          if ( v57 < v17 )
            goto LABEL_187;
          v18 = (_QWORD **)&v56[v14];
          v19 = v17 - v14;
          if ( !(_BYTE)v58 )
            goto LABEL_56;
          if ( v17 >= v13 )
            goto LABEL_56;
          v89 = &v56[v14];
          v90 = v17 - v14;
          v91 = &v56[v14];
          v92 = (__int64)&v56[v17];
          v93 = 0LL;
          do
            <core::str::pattern::MultiCharEqSearcher<C> as core::str::pattern::ReverseSearcher>::next_back(&v52, &v89);
          while ( v52 == 1 );
          if ( v52 )
          {
LABEL_56:
            v60 = v18;
          }
          else
          {
            if ( v53 == (_QWORD *)-1LL )
              core::str::traits::str_index_overflow_fail(&off_10A288);
            v20 = (char *)v53 + 1;
            if ( (unsigned __int64)v53 + 1 >= v19 )
            {
              if ( (_QWORD *)((char *)v53 + 1) != (_QWORD *)v19 )
LABEL_196:
                core::str::slice_error_fail(v18, v19, 0LL, v20, &off_10A288);
            }
            else if ( v20[(_QWORD)v18] < -64 )
            {
              goto LABEL_196;
            }
            if ( (unsigned __int64)v53 >= v19 )
              goto LABEL_187;
            v60 = v18;
            v19 = (unsigned __int64)v53 + 1;
          }
          v61 = v19;
          if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v18, v19, asc_1EFBE, 1LL) )
            goto LABEL_65;
          v16 = __CFADD__(v61, v14);
          v14 += v61;
          if ( v16 )
          {
            v47 = &off_10A2A0;
LABEL_192:
            core::panicking::panic_const::panic_const_add_overflow(v47);
          }
          if ( v14 >= v13 )
            break;
          v79 = (__int64 *)&v60;
          v80 = <&T as core::fmt::Display>::fmt;
          v66 = (__int64)&unk_10A2B8;
          v67 = 2LL;
          v70 = 0LL;
          v68 = &v79;
          v69 = 1LL;
          std::io::stdio::_print(&v66);
        }
        v77 = &v60;
        v78 = <&T as core::fmt::Display>::fmt;
        v94 = &anon_5881361bc50ddb8569a319ef7cd28565_52_llvm_17519153253422479168;
        v95 = 1LL;
        v98 = 0LL;
        v96 = &v77;
        v97 = 1LL;
        std::io::stdio::_print(&v94);
LABEL_65:
        v12 = v56;
        v13 = v57;
        goto LABEL_66;
      }
      v99 = &off_10A248;
      v100 = 1LL;
      v101 = (_QWORD *)&byte_8;
      v102 = 0LL;
      std::io::stdio::_print(&v99);
      if ( !v56 || v57 < 0 )
        goto LABEL_186;
    }
  }
  v55 = 0LL;
  v56 = (_BYTE *)(&dword_0 + 1);
  v57 = 0LL;
  v52 = 0LL;
  v53 = (_QWORD *)(&dword_0 + 1);
  v21 = &v54;
  v22 = 0LL;
  v23 = 0LL;
LABEL_70:
  *v21 = 0LL;
  if ( !std::io::append_to_string(&v55, &v71) )
  {
    if ( !v24 )
    {
      if ( v52 )
        _rust_dealloc(v53, v52, 1LL);
      if ( v55 )
        _rust_dealloc(v56, v55, 1LL);
      if ( !v72 )
        goto LABEL_180;
      v44 = 0LL;
      goto LABEL_179;
    }
    goto LABEL_74;
  }
  result = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v24);
  if ( !result )
  {
LABEL_74:
    if ( !v56 || v57 < 0 )
      goto LABEL_186;
    v103[0] = v56;
    v103[1] = &v56[v57];
    while ( 1 )
    {
      if ( !(unsigned int)core::str::validations::next_code_point(v103) )
      {
LABEL_147:
        if ( !v54 )
          goto LABEL_155;
LABEL_152:
        v79 = &v52;
        v80 = <alloc::string::String as core::fmt::Display>::fmt;
        v66 = (__int64)&anon_5881361bc50ddb8569a319ef7cd28565_52_llvm_17519153253422479168;
        v67 = 1LL;
        v70 = 0LL;
        v68 = &v79;
        v69 = 1LL;
        std::io::stdio::_print(&v66);
        if ( v53 && v54 >= 0 )
        {
          v54 = 0LL;
          goto LABEL_155;
        }
LABEL_186:
        core::panicking::panic_nounwind(anon_a80d68ed0ca9468bdfa8ffec365be6d5_30_llvm_17686139402540038789, 162LL);
      }
      v26 = v25;
      if ( (v25 ^ 0xD800) - 2048 >= (unsigned int)&unk_10F800 )
        core::panicking::panic_nounwind(anon_a80d68ed0ca9468bdfa8ffec365be6d5_20_llvm_17686139402540038789, 57LL);
      if ( v25 == 10 )
      {
        if ( !v53 )
          goto LABEL_186;
        v43 = v54;
        if ( v54 < 0 )
          goto LABEL_186;
        v105[0] = v53;
        v105[1] = v54;
        v104[0] = v105;
        v104[1] = <&T as core::fmt::Display>::fmt;
        v89 = &unk_10A2B8;
        v90 = 2LL;
        v93 = 0LL;
        v91 = v104;
        v92 = 1LL;
        std::io::stdio::_print(&v89);
        alloc::string::String::replace_range(&v52, v43);
        v22 = 0LL;
        v23 = v54;
        if ( v54 )
          goto LABEL_152;
LABEL_155:
        if ( !v56 )
          goto LABEL_186;
        v21 = &v57;
        if ( v57 < 0 )
          goto LABEL_186;
        goto LABEL_70;
      }
      if ( v25 == (_DWORD)alloc::ffi::c_str::CString::_from_vec_unchecked::h4a890bda051425a0 )
        goto LABEL_147;
      if ( v23 >= v63 )
      {
        if ( v22 )
        {
          v27 = (__int64 (__fastcall *)())(v59 + 1);
          if ( v59 == -1 )
          {
            v48 = &off_10A2D8;
            goto LABEL_203;
          }
          v28 = v54;
        }
        else
        {
          v28 = v54;
          v27 = (__int64 (__fastcall *)())v54;
        }
        v29 = v53;
        if ( !v53 || v28 < 0 )
          goto LABEL_186;
        if ( v27 )
        {
          if ( v28 <= (unsigned __int64)v27 )
          {
            if ( (__int64 (__fastcall *)())v28 != v27 )
              goto LABEL_201;
          }
          else if ( *((char *)v27 + (_QWORD)v53) < -64 )
          {
            goto LABEL_201;
          }
        }
        if ( v28 < (unsigned __int64)v27 )
LABEL_187:
          core::panicking::panic_nounwind(anon_a80d68ed0ca9468bdfa8ffec365be6d5_19_llvm_17686139402540038789, 102LL);
        v107[0] = v53;
        v107[1] = v27;
        v106[0] = v107;
        v106[1] = <&T as core::fmt::Display>::fmt;
        v99 = &unk_10A2B8;
        v100 = 2LL;
        v101 = v106;
        v102 = 1uLL;
        std::io::stdio::_print(&v99);
        alloc::string::String::replace_range(&v52, v27);
        v23 = v54;
        v22 = 0LL;
      }
      switch ( v26 )
      {
        case 8u:
          v16 = v23 == 0;
          v31 = v23 - 1;
          v30 = 0LL;
          if ( !v16 )
            v30 = v31;
          goto LABEL_124;
        case 9u:
          if ( v23 >= 0xFFFFFFFFFFFFFFF8LL )
          {
            v48 = &off_10A2F0;
            goto LABEL_203;
          }
          v30 = v23 + 8 - (v23 & 7);
          if ( v30 > v63 )
          {
            v28 = v54;
            if ( v54 )
            {
              v27 = (__int64 (__fastcall *)())v54;
              if ( v22 )
              {
                v27 = (__int64 (__fastcall *)())(v59 + 1);
                if ( v59 == -1 )
                {
                  v48 = &off_10A308;
LABEL_203:
                  core::panicking::panic_const::panic_const_add_overflow(v48);
                }
              }
              if ( v54 < 0 )
                goto LABEL_186;
              v29 = v53;
              if ( !v53 )
                goto LABEL_186;
              if ( v54 <= (unsigned __int64)v27 )
              {
                if ( (__int64 (__fastcall *)())v54 != v27 )
                {
LABEL_200:
                  v62 = &off_10A308;
LABEL_201:
                  core::str::slice_error_fail(v29, v28, 0LL, v27, v62);
                }
              }
              else if ( *((char *)v27 + (_QWORD)v53) < -64 )
              {
                goto LABEL_200;
              }
              if ( v54 < (unsigned __int64)v27 )
                goto LABEL_187;
              v77 = v53;
              v78 = v27;
              v60 = &v77;
              v61 = (unsigned __int64)<&T as core::fmt::Display>::fmt;
              v94 = &unk_10A2B8;
              v95 = 2LL;
              v98 = 0LL;
              v96 = &v60;
              v97 = 1LL;
              std::io::stdio::_print(&v94);
              alloc::string::String::replace_range(&v52, v27);
            }
          }
          if ( (_BYTE)v58 )
          {
            v22 = 1LL;
            v84 = v54;
            v59 = v54;
          }
          else
          {
            v59 = v84;
            v22 = 0LL;
          }
          goto LABEL_124;
        case 0xDu:
          v30 = 0LL;
LABEL_124:
          v23 = v30;
          goto LABEL_125;
      }
      if ( (_BYTE)v58 )
      {
        if ( v26 <= 0x20 )
        {
          v32 = 0x100003800LL;
          if ( _bittest64(&v32, v26) )
          {
LABEL_116:
            if ( !++v23 )
            {
              v48 = &off_10A338;
              goto LABEL_203;
            }
            v22 = 1LL;
            v59 = v54;
            goto LABEL_141;
          }
        }
        if ( v26 >= 0x80 )
        {
          v34 = v26 >> 8;
          if ( v26 >> 8 > 0x1F )
          {
            if ( v34 != 32 )
            {
              if ( v34 != 48 )
                goto LABEL_140;
              v35 = v26 == 12288;
              goto LABEL_135;
            }
            v36 = core::unicode::unicode_data::white_space::WHITESPACE_MAP[(unsigned __int8)v26] >> 1;
          }
          else
          {
            if ( v34 )
            {
              if ( v34 != 22 )
                goto LABEL_140;
              v35 = v26 == 5760;
LABEL_135:
              if ( v35 )
                goto LABEL_116;
              goto LABEL_140;
            }
            v36 = core::unicode::unicode_data::white_space::WHITESPACE_MAP[(unsigned __int8)v26];
          }
          if ( (v36 & 1) != 0 )
            goto LABEL_116;
        }
      }
LABEL_140:
      if ( !++v23 )
      {
        v48 = &off_10A320;
        goto LABEL_203;
      }
LABEL_141:
      if ( v26 < 0x80 )
      {
LABEL_125:
        v33 = v54;
        if ( v54 == v52 )
          alloc::raw_vec::RawVec<T,A>::grow_one(&v52);
        *((_BYTE *)v53 + v33) = v26;
        v54 = v33 + 1;
      }
      else
      {
        v65 = 0;
        v37 = core::char::methods::encode_utf8_raw(v26, &v65, 4LL);
        v39 = v38;
        if ( v38 < 0 )
          core::panicking::panic_nounwind(anon_a80d68ed0ca9468bdfa8ffec365be6d5_18_llvm_17686139402540038789, 71LL);
        v40 = (const void *)v37;
        if ( !v37 )
          goto LABEL_186;
        v41 = v54;
        if ( v52 - v54 < (unsigned __int64)v38 )
        {
          alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v52, v54, v38);
          v41 = v54;
        }
        v42 = (char *)v53 + v41;
        core::intrinsics::copy_nonoverlapping::precondition_check(v40, v42, 1LL, 1LL, v39);
        memcpy(v42, v40, v39);
        v54 += v39;
      }
    }
  }
  v44 = result;
  if ( v52 )
  {
    _rust_dealloc(v53, v52, 1LL);
    result = v44;
  }
  if ( v55 )
  {
    _rust_dealloc(v56, v55, 1LL);
    result = v44;
  }
  if ( !v72 )
    goto LABEL_184;
LABEL_179:
  <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v73, v71, 1LL);
  result = v44;
  if ( !v44 )
    goto LABEL_180;
LABEL_184:
  if ( !v49 )
  {
    v46 = result;
    std::sys::pal::unix::fs::debug_assert_fd_is_open((unsigned int)fd);
    close(fd);
    return v46;
  }
  return result;
}
