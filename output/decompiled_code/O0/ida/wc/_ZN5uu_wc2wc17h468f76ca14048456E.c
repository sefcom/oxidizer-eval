__int64 __fastcall uu_wc::wc(__int64 *a1, _BYTE *a2)
{
  __int64 v2; // rbx
  __int64 v3; // r12
  __int64 v4; // rax
  int v5; // eax
  unsigned __int64 v6; // rcx
  __int64 *v7; // r12
  unsigned __int64 v8; // r15
  int v9; // eax
  __int64 v10; // rcx
  unsigned __int64 v11; // r14
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 (__fastcall **v14)(); // rcx
  __int64 v15; // rax
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm2
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm2
  __int64 v24; // rsi
  __int64 v25; // rdx
  unsigned __int64 v26; // r15
  __int64 v27; // rax
  __int64 v28; // r14
  void (__fastcall **v29)(_QWORD); // rax
  void (__fastcall *v30)(_QWORD); // rsi
  _OWORD *v31; // rax
  __int64 v32; // rax
  __int64 v33; // r14
  __int128 v34; // xmm0
  unsigned __int64 v35; // rax
  signed __int64 v36; // rax
  const char *v37; // r14
  __int64 v38; // rax
  __int64 v39; // r14
  __int64 v40; // rdx
  __int64 v41; // rax
  __int128 *v42; // rsi
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // r14
  const char *v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rbx
  __int64 v50; // r14
  __int64 *v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rsi
  __int64 v55; // rdx
  bool v56; // cf
  unsigned __int64 v57; // rdx
  int v58; // ecx
  unsigned __int64 v59; // rax
  char **v60; // rax
  char v61; // [rsp+Fh] [rbp-599h]
  unsigned __int64 v62; // [rsp+10h] [rbp-598h]
  __int128 v63; // [rsp+20h] [rbp-588h] BYREF
  __int64 v64; // [rsp+30h] [rbp-578h] BYREF
  _BYTE *v65; // [rsp+40h] [rbp-568h]
  __int128 v66; // [rsp+48h] [rbp-560h] BYREF
  __int64 v67; // [rsp+58h] [rbp-550h]
  char **v68; // [rsp+60h] [rbp-548h]
  __int64 v69; // [rsp+68h] [rbp-540h] BYREF
  void (__fastcall **v70)(_QWORD); // [rsp+70h] [rbp-538h]
  __int64 v71; // [rsp+78h] [rbp-530h] BYREF
  __int128 v72; // [rsp+80h] [rbp-528h]
  __int64 v73; // [rsp+90h] [rbp-518h]
  __int64 v74; // [rsp+98h] [rbp-510h] BYREF
  __int64 v75; // [rsp+A0h] [rbp-508h] BYREF
  __int64 v76; // [rsp+A8h] [rbp-500h] BYREF
  __int128 v77; // [rsp+B0h] [rbp-4F8h] BYREF
  __int128 v78; // [rsp+C0h] [rbp-4E8h]
  unsigned __int64 v79; // [rsp+D0h] [rbp-4D8h]
  __int64 v80; // [rsp+E0h] [rbp-4C8h]
  unsigned __int64 v81; // [rsp+E8h] [rbp-4C0h]
  __int128 v82; // [rsp+F0h] [rbp-4B8h] BYREF
  __int64 v83; // [rsp+100h] [rbp-4A8h]
  __int128 v84; // [rsp+108h] [rbp-4A0h]
  __int64 v85; // [rsp+118h] [rbp-490h]
  __int128 v86; // [rsp+120h] [rbp-488h] BYREF
  __int128 v87; // [rsp+130h] [rbp-478h]
  unsigned __int64 v88; // [rsp+140h] [rbp-468h]
  __int64 v89[6]; // [rsp+148h] [rbp-460h] BYREF
  _QWORD v90[2]; // [rsp+178h] [rbp-430h] BYREF
  _QWORD v91[2]; // [rsp+188h] [rbp-420h] BYREF
  _QWORD v92[2]; // [rsp+198h] [rbp-410h] BYREF
  _QWORD v93[2]; // [rsp+1A8h] [rbp-400h] BYREF
  _QWORD v94[2]; // [rsp+1B8h] [rbp-3F0h] BYREF
  _QWORD v95[2]; // [rsp+1C8h] [rbp-3E0h] BYREF
  _QWORD v96[4]; // [rsp+1D8h] [rbp-3D0h] BYREF
  _QWORD v97[4]; // [rsp+1F8h] [rbp-3B0h] BYREF
  _QWORD v98[4]; // [rsp+218h] [rbp-390h] BYREF
  _QWORD v99[4]; // [rsp+238h] [rbp-370h] BYREF
  _QWORD v100[4]; // [rsp+258h] [rbp-350h] BYREF
  _OWORD dest[11]; // [rsp+278h] [rbp-330h] BYREF
  _OWORD src[11]; // [rsp+328h] [rbp-280h] BYREF
  _QWORD v103[6]; // [rsp+3D8h] [rbp-1D0h] BYREF
  _QWORD v104[6]; // [rsp+408h] [rbp-1A0h] BYREF
  _QWORD v105[6]; // [rsp+438h] [rbp-170h] BYREF
  _QWORD v106[6]; // [rsp+468h] [rbp-140h] BYREF
  _QWORD v107[6]; // [rsp+498h] [rbp-110h] BYREF
  __int64 v108; // [rsp+4C8h] [rbp-E0h] BYREF
  _OWORD v109[2]; // [rsp+4D0h] [rbp-D8h] BYREF
  __int64 v110; // [rsp+4F0h] [rbp-B8h]
  __int64 v111; // [rsp+4F8h] [rbp-B0h]
  _OWORD v112[2]; // [rsp+500h] [rbp-A8h] BYREF
  __int64 v113; // [rsp+520h] [rbp-88h]
  __int128 v114; // [rsp+528h] [rbp-80h] BYREF
  __int64 v115; // [rsp+538h] [rbp-70h]
  __int128 v116; // [rsp+540h] [rbp-68h]
  __int128 v117; // [rsp+550h] [rbp-58h]
  __int128 v118; // [rsp+560h] [rbp-48h]
  __int64 v119; // [rsp+570h] [rbp-38h]

  v3 = (__int64)a2;
  v78 = 0LL;
  v77 = 0LL;
  v79 = 0LL;
  v4 = *a1;
  v62 = 1LL;
  v61 = a2[29];
  v65 = a2;
  if ( v61 == 2 )
    goto LABEL_15;
  if ( !v4 )
  {
    v9 = uu_wc::Settings::number_enabled(a2);
    v10 = 7LL;
    if ( v9 == 1 )
      v10 = 1LL;
LABEL_13:
    v62 = v10;
    goto LABEL_14;
  }
  v62 = 1LL;
  if ( v4 != 1 )
    goto LABEL_14;
  v5 = uu_wc::Settings::number_enabled(a2);
  v6 = a1[3];
  if ( v5 == 1 && v6 == 1 )
    goto LABEL_14;
  v2 = a1[2];
  if ( !v2 || (v2 & 7) != 0 || v6 > 0x555555555555555LL )
    goto LABEL_139;
  if ( !v6 )
    goto LABEL_14;
  v7 = (__int64 *)(v2 + 24 * v6);
  v62 = 1LL;
  v8 = 0LL;
  while ( 1 )
  {
    v52 = (__int64 *)(v2 + 24);
    v53 = *(_QWORD *)v2;
    if ( *(_QWORD *)v2 == 0x8000000000000001LL )
      break;
LABEL_112:
    v54 = *(_QWORD *)(v2 + 8);
    v55 = *(_QWORD *)(v2 + 16);
    v2 = (__int64)v52;
    if ( v53 != 0x8000000000000000LL && (!v54 || v55 < 0) )
      goto LABEL_139;
    std::sys::pal::unix::fs::stat(src);
    if ( *(_QWORD *)&src[0] == 2LL )
    {
      dest[0] = __PAIR128__(*((unsigned __int64 *)&src[0] + 1), 2LL);
    }
    else
    {
      memcpy(dest, src, sizeof(dest));
      if ( *(_QWORD *)&dest[0] != 2LL )
      {
        if ( (WORD4(dest[3]) & 0xF000) == 0x8000 )
        {
          v56 = __CFADD__(*(_QWORD *)&dest[5], v8);
          v8 += *(_QWORD *)&dest[5];
          if ( v56 )
            core::panicking::panic_const::panic_const_add_overflow(&off_118C70);
        }
        else
        {
          v62 = 7LL;
        }
        goto LABEL_107;
      }
    }
    std::io::error::repr_bitpacked::decode_repr(src);
    if ( LOBYTE(src[0]) >= 3u )
      core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>((char *)src + 8);
LABEL_107:
    if ( (__int64 *)v2 == v7 )
      goto LABEL_124;
  }
  while ( v52 != v7 )
  {
    v53 = *v52;
    v52 += 3;
    if ( v53 != 0x8000000000000001LL )
    {
      v2 = (__int64)(v52 - 3);
      v62 = 7LL;
      goto LABEL_112;
    }
  }
  v62 = 7LL;
LABEL_124:
  if ( v8 )
  {
    v57 = v8 / 0x2540BE400LL;
    v58 = 10;
    if ( v8 >> 10 < 0x9502F9 )
    {
      v58 = 0;
      v57 = v8;
    }
    v3 = (__int64)v65;
    if ( v57 >= 0x186A0 )
    {
      v57 /= 0x186A0uLL;
      v58 |= 5u;
    }
    v59 = v58
        + ((((_DWORD)v57 + 393206) & ((_DWORD)v57 + 524188) ^ (unsigned int)((unsigned int)&loc_DFC15 + v57 + 3) & ((_DWORD)v57 + 514288)) >> 17)
        + 1;
    v10 = v62;
    if ( v59 > v62 )
      v10 = v59;
    goto LABEL_13;
  }
  v3 = (__int64)v65;
LABEL_14:
  v4 = *a1;
LABEL_15:
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      v2 = a1[2];
      if ( v2 )
      {
        if ( (v2 & 7) == 0 )
        {
          v11 = a1[3];
          if ( v11 <= 0x555555555555555LL )
          {
            v12 = 1LL;
            v13 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 16LL, 0LL);
            if ( !v13 )
              alloc::alloc::handle_alloc_error(8LL, 16LL);
            *(_QWORD *)v13 = v2;
            *(_QWORD *)(v13 + 8) = v2 + 24 * v11;
            v14 = (__int64 (__fastcall **)())&unk_118AE0;
            goto LABEL_33;
          }
        }
      }
LABEL_139:
      core::panicking::panic_nounwind(anon_dd263a7f757787748cb25eec96e5d9c9_4_llvm_2301497830685427482, 162LL);
    }
    v15 = a1[1];
    if ( v15 == 0x8000000000000001LL )
    {
      uu_wc::files0_iter_stdin((__int64)src);
      v12 = 1LL;
      v13 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 88LL, 0LL);
      if ( !v13 )
        alloc::alloc::handle_alloc_error(8LL, 88LL);
      *(_QWORD *)(v13 + 80) = *(_QWORD *)&src[5];
      *(_OWORD *)(v13 + 64) = src[4];
      v16 = src[0];
      v17 = src[1];
      v18 = src[2];
      *(_OWORD *)(v13 + 48) = src[3];
      *(_OWORD *)(v13 + 32) = v18;
      *(_OWORD *)(v13 + 16) = v17;
      *(_OWORD *)v13 = v16;
      v14 = &off_118B50;
    }
    else
    {
      v19 = a1[2];
      v20 = a1[3];
      if ( v15 != 0x8000000000000000LL && (!v19 || v20 < 0) )
        goto LABEL_139;
      uu_wc::files0_iter_file((__int64)&v114, v19, v20);
      v2 = *((_QWORD *)&v114 + 1);
      if ( (_QWORD)v114 == 0x8000000000000001LL )
        return v2;
      *((_QWORD *)&dest[4] + 1) = v119;
      *(_OWORD *)((char *)&dest[3] + 8) = v118;
      *(_OWORD *)((char *)&dest[2] + 8) = v117;
      *(_OWORD *)((char *)&dest[1] + 8) = v116;
      dest[0] = v114;
      *(_QWORD *)&dest[1] = v115;
      v12 = 1LL;
      v13 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 80LL, 0LL);
      if ( !v13 )
        alloc::alloc::handle_alloc_error(8LL, 80LL);
      *(_OWORD *)(v13 + 64) = dest[4];
      v21 = dest[0];
      v22 = dest[1];
      v23 = dest[2];
      *(_OWORD *)(v13 + 48) = dest[3];
      *(_OWORD *)(v13 + 32) = v23;
      *(_OWORD *)(v13 + 16) = v22;
      *(_OWORD *)v13 = v21;
      v14 = &off_118B18;
    }
  }
  else
  {
    *(_QWORD *)&v84 = 0x8000000000000001LL;
    BYTE8(v84) = 1;
    v12 = 1LL;
    v13 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 24LL, 0LL);
    if ( !v13 )
      alloc::alloc::handle_alloc_error(8LL, 24LL);
    *(_QWORD *)(v13 + 16) = v85;
    *(_OWORD *)v13 = v84;
    v14 = &off_118AA8;
  }
LABEL_33:
  v24 = *(_QWORD *)v3;
  if ( *(_QWORD *)v3 == 0x8000000000000001LL )
  {
    v25 = *(_BYTE *)(v3 + 8) & 1;
    v24 = 0x8000000000000001LL;
  }
  else
  {
    v25 = 0x8000000000000002LL;
    if ( v24 != 0x8000000000000002LL )
    {
      v25 = *(_QWORD *)(v3 + 8);
      v12 = *(_QWORD *)(v3 + 16);
      if ( v24 == 0x8000000000000000LL )
      {
        v24 = 0x8000000000000000LL;
      }
      else
      {
        if ( !v25 )
          goto LABEL_139;
        v24 = 0x8000000000000000LL;
        if ( v12 < 0 )
          goto LABEL_139;
      }
    }
  }
  v89[0] = v24;
  v89[1] = v25;
  v80 = v12;
  v89[2] = v12;
  v89[3] = v13;
  v89[4] = (__int64)v14;
  v89[5] = 0LL;
  v26 = 0LL;
  v81 = 0x8000000000000003LL;
  v68 = &anon_156660b9c25f01ff58d76be86b1fcb77_38_llvm_3299036047218045036;
  while ( 1 )
  {
    uu_wc::Inputs::try_iter::{{closure}}(&v82, v89);
    if ( (_QWORD)v82 == v81 )
      break;
    v73 = v83;
    v72 = v82;
    if ( !++v26 )
      core::panicking::panic_const::panic_const_add_overflow(&off_118DA0);
    if ( (_QWORD)v72 == 0x8000000000000002LL )
    {
      v69 = *((_QWORD *)&v72 + 1);
      v70 = (void (__fastcall **)(_QWORD))v73;
      _InterlockedExchange(&uucore::mods::error::EXIT_CODE, (*(__int64 (**)(void))(v73 + 96))());
      v27 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
      v2 = *(_QWORD *)(v27 + 8);
      v28 = *(_QWORD *)(v27 + 16);
      core::slice::raw::from_raw_parts::precondition_check(v2, 1LL, 1LL, v28);
      v90[0] = v2;
      v90[1] = v28;
      v96[0] = v90;
      v96[1] = <&T as core::fmt::Display>::fmt;
      v96[2] = &v69;
      v96[3] = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
      v103[0] = &unk_118D70;
      v103[1] = 3LL;
      v103[4] = 0LL;
      v103[2] = v96;
      v103[3] = 2LL;
      std::io::stdio::_eprint(v103);
      v29 = v70;
      if ( *v70 )
      {
        (*v70)(v69);
        v29 = v70;
      }
      v30 = v29[1];
      if ( v30 )
        _rust_dealloc(v69, v30, v29[2]);
      continue;
    }
    v64 = v83;
    v63 = v82;
    uu_wc::word_count_from_input((__int64)&v108, (__int64 *)&v63, (__int64)v65);
    v31 = v109;
    if ( v108 )
    {
      if ( v108 == 1 )
      {
        v113 = v110;
        v112[1] = v109[1];
        v112[0] = v109[0];
        v74 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
                v111,
                &v63);
        _InterlockedExchange(&uucore::mods::error::EXIT_CODE, 1);
        v32 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
        v2 = *(_QWORD *)(v32 + 8);
        v33 = *(_QWORD *)(v32 + 16);
        core::slice::raw::from_raw_parts::precondition_check(v2, 1LL, 1LL, v33);
        v91[0] = v2;
        v91[1] = v33;
        v97[0] = v91;
        v97[1] = <&T as core::fmt::Display>::fmt;
        v97[2] = &v74;
        v97[3] = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
        v104[0] = &unk_118D70;
        v104[1] = 3LL;
        v104[4] = 0LL;
        v104[2] = v97;
        v104[3] = 2LL;
        std::io::stdio::_eprint(v104);
        core::ptr::drop_in_place<alloc::boxed::Box<uucore::mods::error::UIoError>>(&v74);
        v31 = v112;
        goto LABEL_52;
      }
      v75 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
              *(_QWORD *)&v109[0],
              &v63);
      _InterlockedExchange(&uucore::mods::error::EXIT_CODE, 1);
      v38 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
      v2 = *(_QWORD *)(v38 + 8);
      v39 = *(_QWORD *)(v38 + 16);
      core::slice::raw::from_raw_parts::precondition_check(v2, 1LL, 1LL, v39);
      v92[0] = v2;
      v92[1] = v39;
      v98[0] = v92;
      v98[1] = <&T as core::fmt::Display>::fmt;
      v98[2] = &v75;
      v98[3] = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
      v105[0] = &unk_118D70;
      v105[1] = 3LL;
      v105[4] = 0LL;
      v105[2] = v98;
      v105[3] = 2LL;
      std::io::stdio::_eprint(v105);
      core::ptr::drop_in_place<alloc::boxed::Box<uucore::mods::error::UIoError>>(&v75);
      if ( (__int64)v63 >= (__int64)0x8000000000000002LL )
      {
        alloc::raw_vec::RawVec<T,A>::current_memory(src, &v63);
        v40 = *((_QWORD *)&src[0] + 1);
        if ( *((_QWORD *)&src[0] + 1) )
        {
LABEL_64:
          <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
            &v64,
            *(_QWORD *)&src[0],
            v40,
            *(_QWORD *)&src[1]);
          continue;
        }
      }
    }
    else
    {
LABEL_52:
      v34 = *v31;
      v87 = v31[1];
      v86 = v34;
      v35 = *((_QWORD *)v31 + 4);
      v88 = v35;
      if ( __CFADD__((_QWORD)v34, (_QWORD)v77) )
        goto LABEL_138;
      if ( __CFADD__(*((_QWORD *)&v86 + 1), *((_QWORD *)&v77 + 1)) )
      {
        v60 = &anon_156660b9c25f01ff58d76be86b1fcb77_39_llvm_3299036047218045036;
        goto LABEL_137;
      }
      if ( __CFADD__((_QWORD)v78, (_QWORD)v87) )
      {
        v60 = &anon_156660b9c25f01ff58d76be86b1fcb77_40_llvm_3299036047218045036;
LABEL_137:
        v68 = v60;
LABEL_138:
        core::panicking::panic_const::panic_const_add_overflow(v68);
      }
      if ( __CFADD__(*((_QWORD *)&v78 + 1), *((_QWORD *)&v87 + 1)) )
      {
        v60 = &anon_156660b9c25f01ff58d76be86b1fcb77_41_llvm_3299036047218045036;
        goto LABEL_137;
      }
      if ( v79 > v35 )
        v35 = v79;
      *(_QWORD *)&v77 = v34 + v77;
      *((_QWORD *)&v77 + 1) += *((_QWORD *)&v86 + 1);
      *(_QWORD *)&v78 = v78 + v87;
      *((_QWORD *)&v78 + 1) += *((_QWORD *)&v87 + 1);
      v79 = v35;
      v36 = v63;
      if ( v61 == 2 )
        goto LABEL_94;
      if ( (_QWORD)v63 != 0x8000000000000001LL )
      {
        if ( (_QWORD)v63 != 0x8000000000000000LL && (!*((_QWORD *)&v63 + 1) || v64 < 0) )
          goto LABEL_139;
        std::sys::os_str::bytes::Slice::to_str(src, *((_QWORD *)&v63 + 1), v64);
        if ( !*(_QWORD *)&src[0] )
        {
          v37 = (const char *)*((_QWORD *)&src[0] + 1);
          if ( *((_QWORD *)&src[0] + 1) )
          {
            v2 = *(_QWORD *)&src[1];
            if ( *(_QWORD *)&src[1] > 0xFuLL )
            {
              if ( core::slice::memchr::memchr_aligned(10LL, *((_QWORD *)&src[0] + 1), *(_QWORD *)&src[1]) != 1 )
                goto LABEL_86;
            }
            else
            {
              if ( !*(_QWORD *)&src[1] )
              {
                v2 = 0LL;
LABEL_86:
                *(_QWORD *)&v66 = 0x8000000000000000LL;
                *((_QWORD *)&v66 + 1) = v37;
                v67 = v2;
                goto LABEL_87;
              }
              v41 = 0LL;
              while ( *(_BYTE *)(*((_QWORD *)&src[0] + 1) + v41) != 10 )
              {
                if ( *(_QWORD *)&src[1] == ++v41 )
                  goto LABEL_86;
              }
            }
          }
        }
        if ( (_QWORD)v63 != 0x8000000000000000LL && (!*((_QWORD *)&v63 + 1) || v64 < 0) )
          goto LABEL_139;
        uucore::features::quoting_style::escape_name_inner(
          dest,
          *((_QWORD *)&v63 + 1),
          v64,
          &anon_f24642c09166824134b4a04b26eaa90d_12_llvm_11289963011487936703,
          0LL);
        v37 = (const char *)*((_QWORD *)&dest[0] + 1);
        v2 = *(_QWORD *)&dest[1];
        v66 = dest[0];
        v67 = *(_QWORD *)&dest[1];
        if ( *(_QWORD *)&dest[0] == 0x8000000000000000LL )
          goto LABEL_87;
        if ( *(_QWORD *)&dest[0] != 0x8000000000000001LL )
        {
          core::slice::raw::from_raw_parts::precondition_check(*((_QWORD *)&dest[0] + 1), 1LL, 1LL, *(_QWORD *)&dest[1]);
          goto LABEL_87;
        }
        goto LABEL_83;
      }
      if ( (BYTE8(v63) & 1) != 0 )
      {
        *(_QWORD *)&v66 = 0x8000000000000001LL;
LABEL_83:
        v37 = 0LL;
        goto LABEL_87;
      }
      *(_QWORD *)&v66 = 0x8000000000000000LL;
      v37 = anon_f24642c09166824134b4a04b26eaa90d_11_llvm_11289963011487936703;
      *((_QWORD *)&v66 + 1) = anon_f24642c09166824134b4a04b26eaa90d_11_llvm_11289963011487936703;
      v67 = 1LL;
      v2 = 1LL;
LABEL_87:
      v42 = &v86;
      v43 = uu_wc::print_stats(v65, &v86, v37, v2, v62);
      if ( v43 )
      {
        if ( !v37 )
        {
          v37 = (const char *)&unk_1FEF0;
          v2 = 7LL;
        }
        v93[0] = v37;
        v93[1] = v2;
        v76 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
                v43,
                v93);
        _InterlockedExchange(&uucore::mods::error::EXIT_CODE, 1);
        v44 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
        v2 = *(_QWORD *)(v44 + 8);
        v45 = *(_QWORD *)(v44 + 16);
        v42 = (_OWORD *)(&dword_0 + 1);
        core::slice::raw::from_raw_parts::precondition_check(v2, 1LL, 1LL, v45);
        v94[0] = v2;
        v94[1] = v45;
        v99[0] = v94;
        v99[1] = <&T as core::fmt::Display>::fmt;
        v99[2] = &v76;
        v99[3] = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
        v106[0] = &unk_118D70;
        v106[1] = 3LL;
        v106[4] = 0LL;
        v106[2] = v99;
        v106[3] = 2LL;
        std::io::stdio::_eprint(v106);
        core::ptr::drop_in_place<alloc::boxed::Box<uucore::mods::error::UIoError>>(&v76);
      }
      if ( (__int64)v66 >= (__int64)0x8000000000000002LL )
        <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v66, v42);
      v36 = v63;
LABEL_94:
      if ( v36 >= (__int64)0x8000000000000002LL )
      {
        alloc::raw_vec::RawVec<T,A>::current_memory(src, &v63);
        v40 = *((_QWORD *)&src[0] + 1);
        if ( *((_QWORD *)&src[0] + 1) )
          goto LABEL_64;
      }
    }
  }
  core::ptr::drop_in_place<uu_wc::Inputs::try_iter::{{closure}}>(v89);
  if ( (unsigned int)(unsigned __int8)v65[29] - 1 >= 2 && (v65[29] || v26 <= 1) )
    return 0LL;
  v2 = 0LL;
  v46 = aTotal;
  if ( v61 == 2 )
    v46 = 0LL;
  v47 = uu_wc::print_stats(v65, &v77, v46, 5LL, v62);
  if ( v47 )
  {
    v71 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v47);
    _InterlockedExchange(&uucore::mods::error::EXIT_CODE, 1);
    v48 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
    v49 = *(_QWORD *)(v48 + 8);
    v50 = *(_QWORD *)(v48 + 16);
    core::slice::raw::from_raw_parts::precondition_check(v49, 1LL, 1LL, v50);
    v95[0] = v49;
    v95[1] = v50;
    v100[0] = v95;
    v100[1] = <&T as core::fmt::Display>::fmt;
    v100[2] = &v71;
    v100[3] = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
    v107[0] = &unk_118D70;
    v107[1] = 3LL;
    v107[4] = 0LL;
    v107[2] = v100;
    v107[3] = 2LL;
    std::io::stdio::_eprint(v107);
    core::ptr::drop_in_place<alloc::boxed::Box<uucore::mods::error::UIoError>>(&v71);
    return 0LL;
  }
  return v2;
}
