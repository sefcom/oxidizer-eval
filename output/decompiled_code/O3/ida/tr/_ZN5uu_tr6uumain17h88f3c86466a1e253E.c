__int64 __fastcall uu_tr::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 (__fastcall **v3)(); // rdx
  __int64 v4; // r14
  __int64 (__fastcall **v5)(); // r15
  unsigned __int8 v6; // r14
  unsigned __int64 v7; // rbp
  __int128 v8; // xmm0
  __int64 v9; // rax
  __int64 v10; // rdi
  _QWORD *v11; // rax
  __int64 v12; // rax
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int64 v16; // rdx
  __int64 v17; // rdx
  unsigned int v18; // ebx
  __int128 v19; // kr00_16
  __int64 v20; // rsi
  __int64 v21; // rax
  char v22; // dl
  void *v23; // rax
  __int64 v24; // rax
  __int128 v25; // xmm0
  __int64 v26; // rdx
  const char *v27; // r15
  __int64 v28; // r13
  __int64 v29; // rsi
  char v30; // dl
  __int64 v31; // rax
  __int64 v32; // rdi
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // rsi
  __int128 v36; // xmm0
  __int128 v37; // xmm0
  _BYTE *v38; // r14
  int v39; // ecx
  __int64 v40; // r9
  __int64 v41; // rax
  volatile __int32 *v42; // r15
  __int64 v43; // rcx
  __int64 v44; // r14
  unsigned __int8 flag; // [rsp+Dh] [rbp-9FBh]
  char v47; // [rsp+Eh] [rbp-9FAh]
  unsigned __int8 v48; // [rsp+Fh] [rbp-9F9h]
  __int64 v49; // [rsp+10h] [rbp-9F8h] BYREF
  char v50; // [rsp+18h] [rbp-9F0h]
  _BYTE v51[8]; // [rsp+20h] [rbp-9E8h] BYREF
  __int64 v52; // [rsp+28h] [rbp-9E0h]
  unsigned __int64 v53; // [rsp+30h] [rbp-9D8h]
  const char *v54; // [rsp+38h] [rbp-9D0h] BYREF
  __int128 v55; // [rsp+40h] [rbp-9C8h]
  __int128 v56; // [rsp+50h] [rbp-9B8h] BYREF
  __int64 v57; // [rsp+60h] [rbp-9A8h]
  __m256i *p_dest; // [rsp+68h] [rbp-9A0h] BYREF
  _BYTE v59[24]; // [rsp+70h] [rbp-998h]
  __int128 v60; // [rsp+88h] [rbp-980h]
  __int64 v61; // [rsp+98h] [rbp-970h]
  _BYTE v62[24]; // [rsp+A0h] [rbp-968h] BYREF
  __int128 v63; // [rsp+C0h] [rbp-948h]
  _QWORD *v64; // [rsp+D8h] [rbp-930h]
  __int128 v65; // [rsp+E0h] [rbp-928h]
  __int64 v66; // [rsp+F0h] [rbp-918h]
  __int64 v67; // [rsp+F8h] [rbp-910h] BYREF
  __int64 v68; // [rsp+100h] [rbp-908h] BYREF
  _QWORD v69[2]; // [rsp+108h] [rbp-900h] BYREF
  __int128 v70; // [rsp+118h] [rbp-8F0h]
  __int128 v71; // [rsp+128h] [rbp-8E0h]
  __int64 v72; // [rsp+138h] [rbp-8D0h]
  __int128 v73; // [rsp+140h] [rbp-8C8h] BYREF
  __int64 v74; // [rsp+150h] [rbp-8B8h]
  __int128 v75; // [rsp+158h] [rbp-8B0h]
  __int128 v76; // [rsp+168h] [rbp-8A0h]
  __int128 v77; // [rsp+178h] [rbp-890h]
  __int64 v78; // [rsp+188h] [rbp-880h]
  _BYTE src[720]; // [rsp+190h] [rbp-878h] BYREF
  __m256i v80; // [rsp+460h] [rbp-5A8h] BYREF
  __int128 v81; // [rsp+480h] [rbp-588h]
  __int128 v82; // [rsp+490h] [rbp-578h]
  __int128 v83; // [rsp+4A0h] [rbp-568h]
  __int128 v84; // [rsp+4B0h] [rbp-558h]
  __int64 v85; // [rsp+4C0h] [rbp-548h]
  __int128 v86; // [rsp+4C8h] [rbp-540h] BYREF
  __int64 v87; // [rsp+4D8h] [rbp-530h]
  __int128 v88; // [rsp+4E0h] [rbp-528h] BYREF
  __int64 v89; // [rsp+4F0h] [rbp-518h]
  __int128 v90; // [rsp+4F8h] [rbp-510h] BYREF
  __int64 v91; // [rsp+508h] [rbp-500h]
  __int128 v92; // [rsp+510h] [rbp-4F8h] BYREF
  __int64 v93; // [rsp+520h] [rbp-4E8h]
  __int64 v94; // [rsp+528h] [rbp-4E0h] BYREF
  __int128 v95; // [rsp+530h] [rbp-4D8h]
  __int64 v96; // [rsp+540h] [rbp-4C8h] BYREF
  __int128 v97; // [rsp+548h] [rbp-4C0h]
  __int64 v98; // [rsp+558h] [rbp-4B0h]
  __int128 v99; // [rsp+560h] [rbp-4A8h]
  _OWORD v100[3]; // [rsp+570h] [rbp-498h] BYREF
  __int64 v101; // [rsp+5A0h] [rbp-468h]
  _OWORD v102[3]; // [rsp+5A8h] [rbp-460h] BYREF
  __int64 v103; // [rsp+5D8h] [rbp-430h]
  __m256i dest; // [rsp+5E0h] [rbp-428h] BYREF
  __int128 v105; // [rsp+600h] [rbp-408h]
  __int128 v106; // [rsp+610h] [rbp-3F8h]
  __m256i *v107; // [rsp+8A8h] [rbp-160h] BYREF
  __m256i v108; // [rsp+8B0h] [rbp-158h]
  __int128 v109; // [rsp+8D0h] [rbp-138h]
  __int128 v110; // [rsp+8E0h] [rbp-128h]
  __int64 v111; // [rsp+8F0h] [rbp-118h]
  __int64 v112; // [rsp+930h] [rbp-D8h]
  _BYTE v113[24]; // [rsp+970h] [rbp-98h] BYREF
  _BYTE v114[24]; // [rsp+988h] [rbp-80h] BYREF
  _BYTE v115[104]; // [rsp+9A0h] [rbp-68h] BYREF

  uu_tr::uu_app(src);
  clap_builder::builder::command::Command::after_help(&dest, src);
  clap_builder::builder::command::Command::try_get_matches_from(&p_dest, &dest, a1, a2);
  if ( p_dest != (__m256i *)0x8000000000000000LL )
  {
    v72 = v61;
    v71 = v60;
    v70 = *(_OWORD *)&v59[8];
    v69[0] = p_dest;
    v69[1] = *(_QWORD *)v59;
    flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v69, aDelete, 6LL);
    v48 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v69, aComplement, 10LL);
    v6 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v69, aSqueezeRepeats, 15LL);
    v47 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v69, aTruncateSet1, 13LL);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(src, v69, aSets, 4LL);
    clap_builder::parser::error::MatchesError::unwrap(&dest, aSets, 4LL, src);
    v108 = dest;
    v109 = v105;
    v110 = v106;
    v107 = (__m256i *)(&dword_0 + 1);
    v111 = 0LL;
    v112 = 0LL;
    <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v51, &v107);
    v7 = v53;
    if ( !v53 )
    {
      alloc::raw_vec::RawVec<T,A>::try_allocate_in(src, 15LL, 0LL);
      v10 = *(_QWORD *)&src[8];
      if ( !*(_QWORD *)src )
      {
        v11 = *(_QWORD **)&src[16];
        *(_QWORD *)(*(_QWORD *)&src[16] + 7LL) = 0x646E617265706F20LL;
        *v11 = 0x20676E697373696DLL;
        *(_DWORD *)&src[24] = 1;
        *(_QWORD *)src = v10;
        *(_QWORD *)&src[8] = v11;
        *(_QWORD *)&src[16] = 15LL;
        v12 = _rust_alloc(32LL, 8LL);
        if ( !v12 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
        v4 = v12;
        v13 = *(_OWORD *)src;
        v14 = *(_OWORD *)&src[16];
        goto LABEL_16;
      }
      v64 = &src[16];
      goto LABEL_88;
    }
    if ( v53 == 1 && !(v6 | flag) )
    {
      v8 = *(_OWORD *)(v52 + 8);
      dest.m256i_i64[0] = 1LL;
      *(_OWORD *)&dest.m256i_u64[1] = v8;
      dest.m256i_i8[24] = 1;
      p_dest = &dest;
      *(_QWORD *)v59 = <os_display::Quoted as core::fmt::Display>::fmt;
      *(_QWORD *)src = &off_EBAE8;
      *(_QWORD *)&src[8] = 2LL;
      *(_QWORD *)&src[32] = 0LL;
      *(_QWORD *)&src[16] = &p_dest;
      *(_QWORD *)&src[24] = 1LL;
      alloc::fmt::format::format_inner(&v88, src);
      *(_DWORD *)&src[24] = 1;
      *(_OWORD *)src = v88;
      *(_QWORD *)&src[16] = v89;
      v9 = _rust_alloc(32LL, 8LL);
      if ( !v9 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      goto LABEL_15;
    }
    if ( (v6 & flag) == 1 && v53 == 1 )
    {
      v15 = *(_OWORD *)(v52 + 8);
      dest.m256i_i64[0] = 1LL;
      *(_OWORD *)&dest.m256i_u64[1] = v15;
      dest.m256i_i8[24] = 1;
      p_dest = &dest;
      *(_QWORD *)v59 = <os_display::Quoted as core::fmt::Display>::fmt;
      *(_QWORD *)src = &off_EBCD8;
      *(_QWORD *)&src[8] = 2LL;
      *(_QWORD *)&src[32] = 0LL;
      *(_QWORD *)&src[16] = &p_dest;
      *(_QWORD *)&src[24] = 1LL;
      alloc::fmt::format::format_inner(&v90, src);
      *(_DWORD *)&src[24] = 1;
      *(_OWORD *)src = v90;
      *(_QWORD *)&src[16] = v91;
      v9 = _rust_alloc(32LL, 8LL);
      if ( !v9 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      goto LABEL_15;
    }
    if ( v53 == 1 )
    {
LABEL_27:
      v21 = *(_QWORD *)(v52 + 8) + *(_QWORD *)(v52 + 16);
      *(_QWORD *)src = *(_QWORD *)(v52 + 8);
      *(_QWORD *)&src[8] = v21;
      src[16] = 0;
      v64 = &src[16];
      <core::iter::adapters::rev::Rev<I> as core::iter::traits::iterator::Iterator>::try_fold(src, 0LL, &src[17]);
      if ( (v22 & 1) == 0 )
        goto LABEL_34;
      alloc::raw_vec::RawVec<T,A>::try_allocate_in(src, 64LL, 0LL);
      v10 = *(_QWORD *)&src[8];
      if ( !*(_QWORD *)src )
      {
        v23 = *(void **)&src[16];
        *(_OWORD *)(*(_QWORD *)&src[16] + 48LL) = xmmword_1161A;
        qmemcpy(v23, "warning: an unescaped backslash at end of string", 48);
        *(_QWORD *)src = v10;
        *(_QWORD *)&src[8] = v23;
        *(_QWORD *)&src[16] = 64LL;
        *(_DWORD *)&src[24] = 0;
        v24 = _rust_alloc(32LL, 8LL);
        if ( !v24 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
        v25 = *(_OWORD *)src;
        *(_OWORD *)(v24 + 16) = *(_OWORD *)&src[16];
        *(_OWORD *)v24 = v25;
        v54 = (const char *)v24;
        *(_QWORD *)&v55 = &off_EBB90;
        uucore::mods::error::set_exit_code(*(unsigned int *)(v24 + 24));
        p_dest = (__m256i *)uucore::util_name();
        *(_QWORD *)v59 = v26;
        dest.m256i_i64[0] = (__int64)&p_dest;
        dest.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
        dest.m256i_i64[2] = (__int64)&v54;
        dest.m256i_i64[3] = (__int64)<alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
        *(_QWORD *)src = &unk_EBC00;
        *(_QWORD *)&src[8] = 3LL;
        *(_QWORD *)&src[32] = 0LL;
        *(_QWORD *)&src[16] = &dest;
        *(_QWORD *)&src[24] = 2LL;
        std::io::stdio::_eprint(src);
        v27 = v54;
        v28 = v55;
        if ( *(_QWORD *)v55 )
          (*(void (__fastcall **)(const char *))v55)(v54);
        v29 = *(_QWORD *)(v28 + 8);
        if ( v29 )
          _rust_dealloc(v27, v29, *(_QWORD *)(v28 + 16));
LABEL_34:
        v67 = std::io::stdio::stdin();
        v49 = std::io::stdio::Stdin::lock(&v67);
        v50 = v30 & 1;
        v68 = std::io::stdio::stdout();
        v31 = std::io::stdio::Stdout::lock(&v68);
        std::io::buffered::bufwriter::BufWriter<W>::with_capacity(&p_dest, 0x2000LL, v31);
        v32 = v52;
        LODWORD(v33) = v53;
        v34 = v52 + 24 * v53;
        if ( v53 )
        {
          v35 = *(_QWORD *)(v52 + 8);
          v33 = *(_QWORD *)(v52 + 16);
          v32 = v52 + 24;
        }
        else
        {
          v35 = 0LL;
        }
        if ( !v35 )
          LODWORD(v33) = 0;
        v39 = 1;
        if ( !v35 )
          LODWORD(v35) = 1;
        if ( v32 == v34 )
        {
          v40 = 0LL;
        }
        else
        {
          v40 = *(_QWORD *)(v32 + 8);
          v34 = *(_QWORD *)(v32 + 16);
        }
        if ( v40 )
          v39 = v40;
        else
          LODWORD(v34) = 0;
        uu_tr::operation::Sequence::solve_set_characters(
          (unsigned int)src,
          v35,
          v33,
          v39,
          v34,
          v48,
          (flag ^ 1) & (v53 >= 2) & v47,
          (flag ^ 1) & (v53 >= 2));
        if ( *(_QWORD *)src == 0x8000000000000000LL )
        {
          dest.m256i_i64[2] = *(_QWORD *)&src[24];
          *(_OWORD *)dest.m256i_i8 = *(_OWORD *)&src[8];
          *(_QWORD *)&src[16] = *(_QWORD *)&src[24];
          *(_OWORD *)src = *(_OWORD *)dest.m256i_i8;
          v41 = _rust_alloc(24LL, 8LL);
          if ( !v41 )
            alloc::alloc::handle_alloc_error(8LL, 24LL);
          goto LABEL_54;
        }
        *(_QWORD *)&v105 = *(_QWORD *)&src[40];
        dest = *(__m256i *)&src[8];
        v63 = *(_OWORD *)&src[8];
        v57 = *(_QWORD *)&src[40];
        v56 = *(_OWORD *)&src[24];
        if ( flag )
        {
          if ( v6 )
          {
            *(_OWORD *)&dest.m256i_u64[1] = v63;
            dest.m256i_i64[0] = *(_QWORD *)src;
            *(_QWORD *)&src[16] = v57;
            *(_OWORD *)src = v56;
            uu_tr::operation::SqueezeOperation::new(v100, src);
            v73 = *(_OWORD *)dest.m256i_i8;
            v74 = dest.m256i_i64[2];
            v75 = v100[0];
            v76 = v100[1];
            v77 = v100[2];
            v78 = v101;
            uu_tr::operation::translate_input((__int64)&v49, &p_dest, (__int64)&v73);
            goto LABEL_76;
          }
          v95 = v63;
          v94 = *(_QWORD *)src;
          uu_tr::operation::translate_input((__int64)&v49, &p_dest, (__int64)&v94);
          goto LABEL_71;
        }
        if ( v6 )
        {
          if ( v7 == 1 )
          {
            *(_OWORD *)&src[8] = v63;
            uu_tr::operation::SqueezeOperation::new(v115, src);
            uu_tr::operation::translate_input((__int64)&v49, &p_dest, (__int64)v115);
LABEL_71:
            core::ptr::drop_in_place<alloc::string::String>(&v56);
            goto LABEL_76;
          }
          *(_QWORD *)v62 = *(_QWORD *)src;
          *(_OWORD *)&v62[8] = v63;
          <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v54, &v56, *(_QWORD *)&src[40], &src[8]);
          uu_tr::operation::TranslateOperation::new(src, v62, &v54, v43);
          v65 = *(_OWORD *)&src[8];
          v66 = *(_QWORD *)&src[24];
          if ( !*(_QWORD *)src )
          {
            *(_QWORD *)&src[16] = v66;
            *(_OWORD *)src = v65;
            v4 = alloc::alloc::exchange_malloc(24LL);
            *(_QWORD *)(v4 + 16) = *(_QWORD *)&src[16];
            *(_OWORD *)v4 = *(_OWORD *)src;
            core::ptr::drop_in_place<alloc::string::String>(&v56);
LABEL_55:
            core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(&p_dest);
            v42 = (volatile __int32 *)v49;
            if ( !v50
              && (std::panicking::panic_count::GLOBAL_PANIC_COUNT & 0x7FFFFFFFFFFFFFFFLL) != 0
              && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path() )
            {
              *(_BYTE *)(v49 + 4) = 1;
            }
            if ( _InterlockedExchange(v42, 0) == 2 )
              std::sys::sync::mutex::futex::Mutex::wake(v42);
            v5 = &off_EBC68;
            goto LABEL_17;
          }
          v105 = *(_OWORD *)&src[32];
          *(_OWORD *)&dest.m256i_u64[1] = v65;
          dest.m256i_i64[3] = v66;
          dest.m256i_i64[0] = *(_QWORD *)src;
          *(_QWORD *)&src[16] = v57;
          *(_OWORD *)src = v56;
          uu_tr::operation::SqueezeOperation::new(v102, src);
          v80 = dest;
          v81 = v105;
          v82 = v102[0];
          v83 = v102[1];
          v84 = v102[2];
          v85 = v103;
          uu_tr::operation::translate_input((__int64)&v49, &p_dest, (__int64)&v80);
        }
        else
        {
          v54 = *(const char **)src;
          v55 = v63;
          dest.m256i_i64[2] = v57;
          *(_OWORD *)dest.m256i_i8 = v56;
          uu_tr::operation::TranslateOperation::new(src, &v54, &dest, &src[8]);
          *(_OWORD *)v62 = *(_OWORD *)&src[8];
          *(_QWORD *)&v62[16] = *(_QWORD *)&src[24];
          if ( !*(_QWORD *)src )
          {
            *(_QWORD *)&src[16] = *(_QWORD *)&v62[16];
            *(_OWORD *)src = *(_OWORD *)v62;
            v41 = alloc::alloc::exchange_malloc(24LL);
LABEL_54:
            v4 = v41;
            *(_QWORD *)(v41 + 16) = *(_QWORD *)&src[16];
            *(_OWORD *)v41 = *(_OWORD *)src;
            goto LABEL_55;
          }
          v99 = *(_OWORD *)&src[32];
          v96 = *(_QWORD *)src;
          v97 = *(_OWORD *)v62;
          v98 = *(_QWORD *)&v62[16];
          uu_tr::operation::translate_input((__int64)&v49, &p_dest, (__int64)&v96);
        }
LABEL_76:
        core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(&p_dest);
        v44 = v49;
        if ( !v50
          && (std::panicking::panic_count::GLOBAL_PANIC_COUNT & 0x7FFFFFFFFFFFFFFFLL) != 0
          && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path() )
        {
          *(_BYTE *)(v44 + 4) = 1;
        }
        if ( _InterlockedExchange((volatile __int32 *)v44, 0) == 2 )
          std::sys::sync::mutex::futex::Mutex::wake(v44);
        <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v51);
        <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v51);
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v69);
        return (unsigned int)uucore::mods::error::get_exit_code();
      }
LABEL_88:
      alloc::raw_vec::handle_error(v10, *v64);
    }
    v54 = aExtraOperand;
    *(_QWORD *)&v55 = 13LL;
    if ( (v6 | flag ^ 1) == 1 )
    {
      if ( v53 <= 2 )
        goto LABEL_27;
      v36 = *(_OWORD *)(v52 + 56);
      p_dest = (__m256i *)(&dword_0 + 1);
      *(_OWORD *)v59 = v36;
      v59[16] = 1;
      dest.m256i_i64[0] = (__int64)&v54;
      dest.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
      dest.m256i_i64[2] = (__int64)&p_dest;
      dest.m256i_i64[3] = (__int64)<os_display::Quoted as core::fmt::Display>::fmt;
      *(_QWORD *)src = &unk_EBB38;
      *(_QWORD *)&src[8] = 2LL;
      *(_QWORD *)&src[32] = 0LL;
      *(_QWORD *)&src[16] = &dest;
      *(_QWORD *)&src[24] = 2LL;
      alloc::fmt::format::format_inner(&v92, src);
      *(_DWORD *)&src[24] = 1;
      *(_OWORD *)src = v92;
      *(_QWORD *)&src[16] = v93;
      v9 = alloc::alloc::exchange_malloc(32LL);
    }
    else
    {
      v37 = *(_OWORD *)(v52 + 32);
      p_dest = (__m256i *)(&dword_0 + 1);
      *(_OWORD *)v59 = v37;
      v59[16] = 1;
      dest.m256i_i64[0] = (__int64)&v54;
      dest.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
      dest.m256i_i64[2] = (__int64)&p_dest;
      dest.m256i_i64[3] = (__int64)<os_display::Quoted as core::fmt::Display>::fmt;
      if ( v53 == 2 )
      {
        *(_QWORD *)src = &unk_EBB08;
        *(_QWORD *)&src[8] = 3LL;
        *(_QWORD *)&src[32] = 0LL;
        *(_QWORD *)&src[16] = &dest;
        *(_QWORD *)&src[24] = 2LL;
        v38 = v113;
        alloc::fmt::format::format_inner(v113, src);
      }
      else
      {
        *(_QWORD *)src = &unk_EBB38;
        *(_QWORD *)&src[8] = 2LL;
        *(_QWORD *)&src[32] = 0LL;
        *(_QWORD *)&src[16] = &dest;
        *(_QWORD *)&src[24] = 2LL;
        v38 = v114;
        alloc::fmt::format::format_inner(v114, src);
      }
      *(_QWORD *)&src[16] = *((_QWORD *)v38 + 2);
      *(_OWORD *)src = *(_OWORD *)v38;
      *(_DWORD *)&src[24] = 1;
      v9 = alloc::alloc::exchange_malloc(32LL);
    }
LABEL_15:
    v4 = v9;
    v13 = *(_OWORD *)src;
    v14 = *(_OWORD *)&src[16];
LABEL_16:
    *(_OWORD *)(v4 + 16) = v14;
    *(_OWORD *)v4 = v13;
    v5 = &off_EBA78;
LABEL_17:
    <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v51);
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v51);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v69);
    goto LABEL_18;
  }
  v2 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*(_QWORD *)v59);
  if ( !v2 )
    return (unsigned int)uucore::mods::error::get_exit_code();
  v4 = v2;
  v5 = v3;
LABEL_18:
  *(_QWORD *)&v73 = v4;
  *((_QWORD *)&v73 + 1) = v5;
  dest.m256i_i64[0] = (__int64)&v73;
  dest.m256i_i64[1] = (__int64)<alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
  *(_QWORD *)src = &anon_a15cc2d3895659decb08e547ee58be7a_73_llvm_5555830998822834654;
  *(_QWORD *)&src[8] = 1LL;
  *(_QWORD *)&src[32] = 0LL;
  *(_QWORD *)&src[16] = &dest;
  *(_QWORD *)&src[24] = 1LL;
  alloc::fmt::format::format_inner(&v86, src);
  *(_OWORD *)dest.m256i_i8 = v86;
  dest.m256i_i64[2] = v87;
  if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((_QWORD *)&v86 + 1), v87, 1LL, 0LL) )
  {
    v107 = (__m256i *)uucore::util_name();
    v108.m256i_i64[0] = v16;
    v80.m256i_i64[0] = (__int64)&v107;
    v80.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
    *(_QWORD *)src = &unk_EB9F8;
    *(_QWORD *)&src[8] = 2LL;
    *(_QWORD *)&src[32] = 0LL;
    *(_QWORD *)&src[16] = &v80;
    *(_QWORD *)&src[24] = 1LL;
    std::io::stdio::_eprint(src);
    v107 = &dest;
    v108.m256i_i64[0] = (__int64)<alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)src = &unk_EBA18;
    *(_QWORD *)&src[8] = 2LL;
    *(_QWORD *)&src[32] = 0LL;
    *(_QWORD *)&src[16] = &v107;
    *(_QWORD *)&src[24] = 1LL;
    std::io::stdio::_eprint(src);
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*((_QWORD *)&v73 + 1) + 104LL))(v73) )
  {
    v107 = (__m256i *)uucore::execution_phrase();
    v108.m256i_i64[0] = v17;
    v80.m256i_i64[0] = (__int64)&v107;
    v80.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
    *(_QWORD *)src = &off_EBA38;
    *(_QWORD *)&src[8] = 2LL;
    *(_QWORD *)&src[32] = 0LL;
    *(_QWORD *)&src[16] = &v80;
    *(_QWORD *)&src[24] = 1LL;
    std::io::stdio::_eprint(src);
  }
  v18 = (*(__int64 (__fastcall **)(_QWORD))(*((_QWORD *)&v73 + 1) + 96LL))(v73);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&dest);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&dest);
  v19 = v73;
  if ( **((_QWORD **)&v73 + 1) )
    (**((void (__fastcall ***)(_QWORD))&v73 + 1))(v73);
  v20 = *(_QWORD *)(*((_QWORD *)&v19 + 1) + 8LL);
  if ( v20 )
    _rust_dealloc(v19, v20, *(_QWORD *)(*((_QWORD *)&v19 + 1) + 16LL));
  return v18;
}
