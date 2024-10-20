_OWORD *__fastcall uu_tail::uu_tail(__int64 a1)
{
  __int64 v1; // rbx
  _OWORD *v2; // r12
  _OWORD *result; // rax
  __int64 v4; // rsi
  _QWORD *v5; // rbp
  _QWORD *v6; // rdi
  __int64 v7; // rdx
  unsigned __int64 v8; // r15
  __int64 v9; // rcx
  const char *v10; // rcx
  __int64 v11; // r15
  __int64 v12; // r15
  __int64 v13; // rcx
  char **v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r14
  __int64 v18; // r12
  __int64 v19; // r13
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rdx
  int v24; // edi
  __int64 v25; // r13
  unsigned __int64 v26; // r13
  unsigned __int8 v27; // bl
  unsigned __int64 v28; // r15
  unsigned __int8 v29; // bl
  __int64 (__fastcall *v30)(_QWORD, _OWORD *, char *); // rax
  unsigned __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rdx
  __int128 v34; // xmm0
  __int64 v35; // rax
  __int64 v36; // r14
  __int64 *v37; // rbp
  __int64 *v38; // rbx
  __int64 *v39; // rcx
  __int64 *v40; // rdx
  __int64 v41; // r15
  __int64 v42; // r15
  __int64 v43; // rax
  __int64 v44; // rdx
  unsigned __int64 v45; // r12
  const void *v46; // r13
  _QWORD *v47; // r14
  signed __int64 v48; // rbp
  __int64 v49; // r12
  unsigned __int64 v50; // r15
  __int64 v51; // rax
  __int128 v52; // xmm1
  __int64 v53; // rax
  __int64 v54; // rdx
  char v55; // bp
  __int64 v56; // rax
  unsigned __int64 v57; // rdx
  __int64 v58; // rdx
  bool v59; // zf
  __int64 v60; // rdi
  unsigned __int64 v61; // rsi
  char v62; // [rsp+16h] [rbp-4312h] BYREF
  char v63; // [rsp+17h] [rbp-4311h]
  __int64 v64; // [rsp+18h] [rbp-4310h]
  __int64 v65; // [rsp+20h] [rbp-4308h] BYREF
  unsigned __int64 v66; // [rsp+28h] [rbp-4300h]
  __int128 v67; // [rsp+30h] [rbp-42F8h]
  __int128 v68; // [rsp+40h] [rbp-42E8h]
  _QWORD v69[3]; // [rsp+50h] [rbp-42D8h] BYREF
  char v70; // [rsp+68h] [rbp-42C0h]
  __int64 v71; // [rsp+70h] [rbp-42B8h]
  char **v72; // [rsp+78h] [rbp-42B0h]
  __int128 v73; // [rsp+80h] [rbp-42A8h] BYREF
  __int64 v74; // [rsp+90h] [rbp-4298h]
  char *v75; // [rsp+98h] [rbp-4290h] BYREF
  _OWORD *v76; // [rsp+A0h] [rbp-4288h]
  __int128 v77; // [rsp+B0h] [rbp-4278h]
  int fd[2]; // [rsp+C0h] [rbp-4268h] BYREF
  _QWORD *v79; // [rsp+C8h] [rbp-4260h]
  __int128 v80; // [rsp+D0h] [rbp-4258h] BYREF
  __int64 v81; // [rsp+E0h] [rbp-4248h]
  const char *v82; // [rsp+E8h] [rbp-4240h] BYREF
  __int64 v83; // [rsp+F0h] [rbp-4238h]
  __int128 v84; // [rsp+F8h] [rbp-4230h]
  __int64 v85; // [rsp+108h] [rbp-4220h]
  __int64 v86; // [rsp+110h] [rbp-4218h]
  char v87; // [rsp+118h] [rbp-4210h]
  unsigned __int64 v88; // [rsp+120h] [rbp-4208h] BYREF
  __int64 v89; // [rsp+128h] [rbp-4200h]
  __int128 v90; // [rsp+130h] [rbp-41F8h]
  __int64 v91; // [rsp+140h] [rbp-41E8h]
  __int64 v92; // [rsp+148h] [rbp-41E0h]
  _QWORD *v93; // [rsp+150h] [rbp-41D8h]
  char v94[8]; // [rsp+158h] [rbp-41D0h] BYREF
  _QWORD *v95; // [rsp+160h] [rbp-41C8h]
  unsigned __int64 v96; // [rsp+168h] [rbp-41C0h]
  __int64 v97; // [rsp+170h] [rbp-41B8h] BYREF
  _QWORD v98[3]; // [rsp+178h] [rbp-41B0h] BYREF
  __int128 v99; // [rsp+190h] [rbp-4198h]
  __int128 v100; // [rsp+1A0h] [rbp-4188h]
  __m128i src[9]; // [rsp+1B8h] [rbp-4170h] BYREF
  _BYTE dest[144]; // [rsp+248h] [rbp-40E0h] BYREF
  _BYTE v103[8200]; // [rsp+2D8h] [rbp-4050h] BYREF
  _OWORD s[513]; // [rsp+22E0h] [rbp-2048h] BYREF
  unsigned __int8 v105; // [rsp+42F0h] [rbp-38h] BYREF

  *((_QWORD *)&s[257] + 1) = 0LL;
  *((_QWORD *)&s[1] + 1) = 0LL;
  *(_QWORD *)&v103[4128] = 0LL;
  *(_QWORD *)&v103[32] = 0LL;
  v1 = a1;
  v62 = *(_BYTE *)(a1 + 74) & 1;
  v63 = 1;
  uu_tail::follow::watch::Observer::from((__int64)src, a1);
  v2 = uu_tail::follow::watch::Observer::start(src, a1);
  if ( v2 )
    goto LABEL_2;
  v4 = *(_QWORD *)(a1 + 32);
  if ( !v4 )
    goto LABEL_143;
  if ( (v4 & 7) != 0 )
    goto LABEL_143;
  if ( *(_QWORD *)(a1 + 40) > 0x2AAAAAAAAAAAAAAuLL )
    goto LABEL_143;
  <T as alloc::slice::hack::ConvertVec>::to_vec(v94);
  v5 = v95;
  if ( !v95 || ((unsigned __int8)v95 & 7) != 0 || v96 > 0x2AAAAAAAAAAAAAALL )
    goto LABEL_143;
  if ( !v96 )
  {
LABEL_124:
    core::ptr::drop_in_place<alloc::vec::Vec<uu_tail::paths::Input>>(v94);
    if ( *(_BYTE *)(v1 + 76) == 2 )
      goto LABEL_125;
    v56 = *(_QWORD *)(v1 + 32);
    if ( v56 )
    {
      if ( (v56 & 7) == 0 )
      {
        v57 = *(_QWORD *)(v1 + 40);
        if ( v57 <= 0x2AAAAAAAAAAAAAALL )
        {
          v58 = 48 * v57;
          while ( v58 )
          {
            v58 -= 48LL;
            v59 = *(_QWORD *)(v56 + 24) == 0x8000000000000000LL;
            v56 += 48LL;
            if ( !v59 )
            {
              memcpy(dest, src, sizeof(dest));
              v2 = uu_tail::follow::watch::follow((__int64)dest, v1);
              if ( v2 )
                return v2;
              v55 = 1;
              goto LABEL_126;
            }
          }
LABEL_125:
          v55 = 0;
LABEL_126:
          core::sync::atomic::atomic_load(&uucore::mods::error::EXIT_CODE, 4LL);
          v2 = 0LL;
          if ( !v55 )
            goto LABEL_2;
          return v2;
        }
      }
    }
LABEL_143:
    core::panicking::panic_nounwind(anon_25ca73c7ec58fbee70b780a6cb8b0c0a_11_llvm_4725413469243929574, 162LL);
  }
  v93 = &v95[6 * v96];
  v72 = &off_18AD00;
  v64 = a1;
  while ( v5[3] != 0x8000000000000000LL )
  {
    std::sys::os_str::bytes::Slice::to_owned(s, aDevStdin_0, 10LL);
    v81 = *(_QWORD *)&s[1];
    v80 = s[0];
    if ( (unsigned __int8)<std::path::PathBuf as core::cmp::PartialEq>::eq(v5 + 3, &v80) )
    {
      if ( (_QWORD)v80 )
        _rust_dealloc(*((_QWORD *)&v80 + 1), v80, 1LL);
      break;
    }
    if ( (_QWORD)v80 )
      _rust_dealloc(*((_QWORD *)&v80 + 1), v80, 1LL);
    v20 = v5[4];
    if ( !v20 )
      goto LABEL_143;
    v21 = v5[5];
    if ( v21 < 0 )
      goto LABEL_143;
    v2 = (_OWORD *)uu_tail::tail_file(v1, (unsigned int)&v62, (_DWORD)v5, v20, v21, (unsigned int)src, 0LL);
    if ( v2 )
      goto LABEL_141;
LABEL_12:
    v5 += 6;
    if ( v5 == v93 )
      goto LABEL_124;
  }
  v6 = v98;
  uu_tail::paths::Input::resolve(v98, v5);
  v8 = v98[0];
  if ( v98[0] == 0x8000000000000000LL )
  {
    if ( !v5[1] )
      goto LABEL_143;
    v9 = v5[2];
    if ( v9 < 0 )
      goto LABEL_143;
    v88 = v5[1];
    v89 = v9;
    if ( (v62 & 1) != 0 )
    {
      v10 = (_BYTE *)(&dword_0 + 1);
      if ( (v63 & 1) == 0 )
        v10 = anon_ab742581333cf5e7f01380032d71b570_114_llvm_1562610066123874583;
      v82 = v10;
      v83 = !(v63 & 1);
      *(_QWORD *)v103 = &v82;
      *(_QWORD *)&v103[8] = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v103[16] = &v88;
      *(_QWORD *)&v103[24] = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&s[0] = &anon_ab742581333cf5e7f01380032d71b570_113_llvm_1562610066123874583;
      *((_QWORD *)&s[0] + 1) = 3LL;
      *(_QWORD *)&s[2] = 0LL;
      *(_QWORD *)&s[1] = v103;
      *((_QWORD *)&s[1] + 1) = 2LL;
      v6 = s;
      std::io::stdio::_print(s);
      v63 = 0;
    }
    v11 = std::io::stdio::stdin(v6, v5, v7);
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(s, 0x2000LL, 0LL);
    if ( *(_QWORD *)&s[0] )
      alloc::raw_vec::handle_error(*((_QWORD *)&s[0] + 1), *(_QWORD *)&s[1]);
    if ( !*(_QWORD *)&s[1] )
      core::panicking::panic_nounwind(anon_3ea58ce9b04195e65e7596eb035a132b_2_llvm_3490124054932126836, 93LL);
    v65 = *(_QWORD *)&s[1];
    v66 = 0x2000LL;
    v67 = 0LL;
    *(_QWORD *)&v68 = 0LL;
    *((_QWORD *)&v68 + 1) = v11;
    v97 = std::io::stdio::stdout(s, 0x2000LL);
    v12 = std::io::stdio::Stdout::lock(&v97);
    v75 = (char *)v12;
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(v103, 0x2000LL, 0LL);
    if ( *(_QWORD *)v103 )
      alloc::raw_vec::handle_error(*(_QWORD *)&v103[8], *(_QWORD *)&v103[16]);
    v69[0] = *(_QWORD *)&v103[8];
    v69[1] = *(_QWORD *)&v103[16];
    v69[2] = 0LL;
    v70 = 0;
    v71 = v12;
    switch ( *(_QWORD *)v1 )
    {
      case 0LL:
        v13 = *(_QWORD *)(v1 + 8);
        v87 = *(_BYTE *)(v1 + 16);
        v85 = 0LL;
        v86 = v13;
        v82 = 0LL;
        v83 = 8LL;
        v84 = 0LL;
        v14 = (char **)&v65;
        v2 = (_OWORD *)uu_tail::chunks::LinesChunkBuffer::fill((__int64)&v82, (__int64)&v65);
        if ( v2 )
          goto LABEL_83;
        v75 = (char *)v69;
        alloc::collections::vec_deque::VecDeque<T,A>::slice_ranges(v103, &v82, *((_QWORD *)&v84 + 1));
        v79 = v5;
        v15 = *(_QWORD *)&v103[24];
        v14 = (char **)v83;
        v35 = v83 + 8LL * *(_QWORD *)&v103[8];
        v36 = v83 + 8LL * *(_QWORD *)&v103[24];
        v37 = (__int64 *)(v83 + 8LL * *(_QWORD *)&v103[16]);
        v38 = (__int64 *)(v83 + 8LL * *(_QWORD *)v103);
        break;
      case 1LL:
        v25 = *(_QWORD *)(v1 + 8);
        if ( v25 == 1 )
          goto LABEL_66;
        if ( !v25 )
          goto LABEL_152;
        v26 = v25 - 1;
        v27 = *(_BYTE *)(v1 + 16);
        memset(s, 0, sizeof(s));
        v105 = v27;
        while ( 2 )
        {
          uu_tail::chunks::BytesChunk::fill(v103, (__int64)s, (__int64)&v65);
          if ( *(_QWORD *)v103 )
          {
            v2 = *(_OWORD **)&v103[8];
            v1 = v64;
            goto LABEL_108;
          }
          if ( *(_QWORD *)&v103[8] )
          {
            v28 = *(_QWORD *)&s[512];
            if ( *(_QWORD *)&s[512] >= 0x2001uLL )
              goto LABEL_144;
            v29 = v105;
            v30 = (__int64 (__fastcall *)(_QWORD, _OWORD *, char *))core::sync::atomic::atomic_load(
                                                                      &memchr::arch::x86_64::memchr::count_raw::FN,
                                                                      0LL);
            v31 = v30(v29, s, (char *)s + v28);
            *((_QWORD *)&s[512] + 1) = v31;
            if ( v26 > v31 )
            {
              v26 -= v31;
              continue;
            }
          }
          else
          {
            *((_QWORD *)&s[512] + 1) = 0LL;
          }
          break;
        }
        v28 = *(_QWORD *)&s[512];
        if ( !*(_QWORD *)&s[512] )
        {
          v2 = 0LL;
          v1 = v64;
          goto LABEL_108;
        }
        v1 = v64;
        if ( *(_QWORD *)&s[512] > 0x2000uLL )
LABEL_144:
          core::slice::index::slice_end_index_len_fail(
            v28,
            0x2000LL,
            &anon_d47df02a786f831a0d9960a1e02c39b9_25_llvm_1356039585147583896);
        v45 = 0LL;
        while ( 1 )
        {
          v75 = (char *)s + v45;
          if ( !v26 )
            break;
          *(_QWORD *)v103 = &v105;
          ++v45;
          v26 -= (unsigned __int8)core::cmp::impls::<impl core::cmp::PartialEq<&B> for &A>::eq(&v75, v103);
          if ( v28 == v45 )
          {
            v45 = v28;
            break;
          }
        }
        v2 = uu_tail::chunks::LinesChunk::print_bytes((__int64)s, v69, v45);
        if ( !v2 )
        {
          if ( v66 < 0x2000 || v66 < v69[0] )
            v53 = <std::io::buffered::bufwriter::BufWriter<I> as std::io::copy::BufferedWriterSpec>::copy_from(
                    v69,
                    &v65);
          else
            v53 = <std::io::buffered::bufreader::BufReader<I> as std::io::copy::BufferedReaderSpec>::copy_to(&v65, v69);
          if ( v53 )
          {
            *(_QWORD *)v103 = 0x8000000000000000LL;
            *(_QWORD *)&v103[24] = v54;
            v2 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
            if ( !v2 )
              alloc::alloc::handle_alloc_error(8LL, 32LL);
LABEL_72:
            v34 = *(_OWORD *)v103;
            v2[1] = *(_OWORD *)&v103[16];
            *v2 = v34;
          }
          else
          {
LABEL_107:
            v2 = 0LL;
          }
        }
LABEL_108:
        core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(v69);
        if ( v2 )
        {
          v61 = v66;
          if ( v66 )
          {
            v60 = v65;
LABEL_140:
            _rust_dealloc(v60, v61, 1LL);
          }
          goto LABEL_141;
        }
        v46 = (const void *)v5[1];
        if ( !v46 )
          goto LABEL_143;
        v47 = v5;
        v48 = v5[2];
        if ( v48 < 0 )
          goto LABEL_143;
        v49 = v65;
        v50 = v66;
        v99 = v67;
        v100 = v68;
        v51 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 48LL, 0LL);
        if ( !v51 )
          alloc::alloc::handle_alloc_error(8LL, 48LL);
        *(_QWORD *)v51 = v49;
        *(_QWORD *)(v51 + 8) = v50;
        v52 = v100;
        *(_OWORD *)(v51 + 16) = v99;
        *(_OWORD *)(v51 + 32) = v52;
        v2 = uu_tail::follow::watch::Observer::add_stdin((__int64)src, v46, v48, v51, (__int64)&off_18AAF8, 1u);
        v5 = v47;
        if ( v2 )
          goto LABEL_141;
        goto LABEL_12;
      case 2LL:
LABEL_66:
        if ( v66 < 0x2000 || v66 < *(_QWORD *)&v103[8] )
          v32 = <std::io::buffered::bufwriter::BufWriter<I> as std::io::copy::BufferedWriterSpec>::copy_from(v69, &v65);
        else
          v32 = <std::io::buffered::bufreader::BufReader<I> as std::io::copy::BufferedReaderSpec>::copy_to(&v65, v69);
        if ( !v32 )
          goto LABEL_107;
        *(_QWORD *)v103 = 0x8000000000000000LL;
        *(_QWORD *)&v103[24] = v33;
        v2 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
        if ( !v2 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
        goto LABEL_72;
      case 3LL:
        goto LABEL_107;
      case 4LL:
        switch ( *(_QWORD *)(v1 + 8) )
        {
          case 0LL:
            v91 = *(_QWORD *)(v1 + 16);
            v92 = 0LL;
            v88 = 0LL;
            v89 = 8LL;
            v90 = 0LL;
            v2 = (_OWORD *)uu_tail::chunks::BytesChunkBuffer::fill(&v88, (__int64)&v65);
            if ( v2 || (v2 = uu_tail::chunks::BytesChunkBuffer::print((__int64)&v88, v69)) != 0LL )
            {
              core::ptr::drop_in_place<alloc::collections::vec_deque::VecDeque<alloc::boxed::Box<uu_tail::chunks::BytesChunk>>>(&v88);
              goto LABEL_108;
            }
            core::ptr::drop_in_place<alloc::collections::vec_deque::VecDeque<alloc::boxed::Box<uu_tail::chunks::BytesChunk>>>(&v88);
            goto LABEL_107;
          case 1LL:
            v42 = *(_QWORD *)(v1 + 16);
            if ( v42 == 1 )
              goto LABEL_89;
            if ( !v42 )
            {
              v72 = &off_18ACA0;
LABEL_152:
              core::panicking::panic_const::panic_const_sub_overflow(v72);
            }
            memset(v103, 0, sizeof(v103));
            uu_tail::chunks::BytesChunk::fill(&v75, (__int64)v103, (__int64)&v65);
            if ( v75 )
            {
              v2 = v76;
              goto LABEL_108;
            }
            if ( v76 == (_OWORD *)((char *)&dword_0 + 1) )
              JUMPOUT(0xD53DALL);
            return result;
          case 2LL:
LABEL_89:
            if ( v66 < 0x2000 || v66 < *(_QWORD *)&v103[8] )
              v43 = <std::io::buffered::bufwriter::BufWriter<I> as std::io::copy::BufferedWriterSpec>::copy_from(
                      v69,
                      &v65);
            else
              v43 = <std::io::buffered::bufreader::BufReader<I> as std::io::copy::BufferedReaderSpec>::copy_to(
                      &v65,
                      v69);
            if ( !v43 )
              goto LABEL_107;
            *(_QWORD *)v103 = 0x8000000000000000LL;
            *(_QWORD *)&v103[24] = v44;
            v2 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
            if ( !v2 )
              alloc::alloc::handle_alloc_error(8LL, 32LL);
            goto LABEL_72;
          case 3LL:
            goto LABEL_107;
        }
        goto LABEL_107;
    }
    while ( v38 != (__int64 *)v35 )
    {
      v39 = v38 + 1;
      if ( !v38 )
        goto LABEL_78;
      v40 = v38;
      v41 = v35;
      ++v38;
LABEL_81:
      v14 = &v75;
      v2 = uu_tail::chunks::LinesChunk::print_bytes(*v40, &v75, 0LL);
      v35 = v41;
      if ( v2 )
      {
        v1 = v64;
        v5 = v79;
LABEL_83:
        core::ptr::drop_in_place<alloc::collections::vec_deque::VecDeque<alloc::boxed::Box<uu_tail::chunks::LinesChunk>>>(
          &v82,
          v14,
          v15,
          v16);
        goto LABEL_108;
      }
    }
    v39 = v38;
LABEL_78:
    if ( !v37 || v37 == (__int64 *)v36 )
    {
      core::ptr::drop_in_place<alloc::collections::vec_deque::VecDeque<alloc::boxed::Box<uu_tail::chunks::LinesChunk>>>(
        &v82,
        v14,
        v15,
        v39);
      v1 = v64;
      v5 = v79;
      goto LABEL_107;
    }
    v38 = v37 + 1;
    v40 = v37;
    v41 = v36;
    v36 = v35;
    v37 = v39;
    goto LABEL_81;
  }
  v17 = v98[1];
  v18 = v98[2];
  same_file::unix::Handle::from_file(s, 0LL, v7);
  if ( BYTE4(s[1]) == 2 )
  {
    *(_QWORD *)&v73 = *(_QWORD *)&s[0];
    BYTE4(v74) = 2;
    v19 = 0LL;
LABEL_48:
    core::ptr::drop_in_place<core::result::Result<same_file::Handle,std::io::error::Error>>(&v73);
    goto LABEL_49;
  }
  LODWORD(v74) = s[1];
  HIBYTE(v74) = BYTE7(s[1]);
  *(_WORD *)((char *)&v74 + 5) = *(_WORD *)((char *)&s[1] + 5);
  v73 = s[0];
  BYTE4(v74) = 1;
  v77 = s[0];
  *(_QWORD *)fd = v74;
  if ( LODWORD(s[1]) == -1 )
    core::option::unwrap_failed(&anon_3a851dbf6eb312812694bd4154fcfdc0_34_llvm_5498030807014029073);
  v22 = <std::fs::File as std::io::Seek>::seek(fd, 2LL, 0LL);
  v19 = v23;
  if ( v22 )
  {
    std::io::error::repr_bitpacked::decode_repr(s, v23);
    if ( LOBYTE(s[0]) >= 3u )
      core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>((char *)s + 8);
    v19 = 0LL;
  }
  v24 = fd[0];
  if ( (fd[1] & 1) != 0 )
  {
    fd[0] = -1;
    if ( v24 == -1 )
      core::option::unwrap_failed(&anon_3a851dbf6eb312812694bd4154fcfdc0_29_llvm_5498030807014029073);
  }
  else if ( fd[0] != -1 )
  {
    std::sys::pal::unix::fs::debug_assert_fd_is_open();
    close(fd[0]);
  }
  if ( BYTE4(v74) == 2 )
    goto LABEL_48;
LABEL_49:
  if ( !v17 || v18 < 0 )
    goto LABEL_143;
  v2 = (_OWORD *)uu_tail::tail_file(v1, (unsigned int)&v62, (_DWORD)v5, v17, v18, (unsigned int)src, v19);
  if ( !v2 )
  {
    if ( v8 )
      _rust_dealloc(v17, v8, 1LL);
    goto LABEL_12;
  }
  if ( v8 )
  {
    v60 = v17;
    v61 = v8;
    goto LABEL_140;
  }
LABEL_141:
  core::ptr::drop_in_place<alloc::vec::Vec<uu_tail::paths::Input>>(v94);
LABEL_2:
  core::ptr::drop_in_place<uu_tail::follow::watch::Observer>(src);
  return v2;
}
