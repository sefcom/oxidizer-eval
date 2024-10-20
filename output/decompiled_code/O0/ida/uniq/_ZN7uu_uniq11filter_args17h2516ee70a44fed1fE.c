__int64 __fastcall uu_uniq::filter_args(__int64 a1, __int128 *a2, __int64 *a3, _QWORD *a4, _BYTE *a5, char *a6)
{
  char *v9; // r13
  unsigned __int64 v10; // rbp
  const void *v11; // rax
  size_t v12; // rdx
  const void *v13; // rax
  size_t v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  char *v17; // r15
  char v18; // al
  unsigned __int64 v19; // r12
  __int128 v20; // xmm0
  char v21; // al
  unsigned __int64 v22; // rdx
  int v23; // edx
  int v24; // edx
  char v25; // al
  char v26; // r15
  const void *v27; // rax
  size_t v28; // rdx
  __int64 v30; // rdx
  unsigned __int64 v31; // r15
  int v32; // eax
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // r12
  __int128 v35; // xmm0
  __int64 v36; // r8
  unsigned __int64 v37; // rsi
  __int64 v38; // r15
  size_t v39; // r15
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // r15
  unsigned __int64 v43; // r12
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rcx
  unsigned __int64 v48; // r15
  __int128 *v49; // rax
  unsigned __int64 v50; // r12
  __int64 v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rcx
  char **v54; // r8
  char v55; // [rsp+7h] [rbp-151h] BYREF
  _BYTE s2[24]; // [rsp+8h] [rbp-150h] BYREF
  char *v57; // [rsp+20h] [rbp-138h]
  __int128 *v58; // [rsp+28h] [rbp-130h]
  unsigned __int64 v59; // [rsp+30h] [rbp-128h]
  char v60; // [rsp+3Fh] [rbp-119h] BYREF
  __int128 v61; // [rsp+40h] [rbp-118h] BYREF
  unsigned __int64 v62; // [rsp+50h] [rbp-108h]
  __int128 v63; // [rsp+60h] [rbp-F8h] BYREF
  unsigned __int64 v64; // [rsp+70h] [rbp-E8h]
  void *src; // [rsp+78h] [rbp-E0h]
  _BYTE *v66; // [rsp+80h] [rbp-D8h]
  char *v67; // [rsp+88h] [rbp-D0h]
  __int128 v68; // [rsp+90h] [rbp-C8h] BYREF
  unsigned __int64 v69; // [rsp+A0h] [rbp-B8h]
  __int128 v70; // [rsp+B0h] [rbp-A8h] BYREF
  unsigned __int64 v71; // [rsp+C0h] [rbp-98h]
  _BYTE v72[24]; // [rsp+D0h] [rbp-88h]
  __int128 v73; // [rsp+F0h] [rbp-68h] BYREF
  void *dest; // [rsp+108h] [rbp-50h]
  __int128 v75; // [rsp+110h] [rbp-48h] BYREF

  v67 = a6;
  v66 = a5;
  if ( !*((_QWORD *)a2 + 1) || *((__int64 *)a2 + 2) < 0 )
    goto LABEL_141;
  std::sys::os_str::bytes::Slice::to_str(s2);
  if ( *(_QWORD *)s2 || (v9 = *(char **)&s2[8]) == 0LL )
  {
    v20 = *a2;
    *(_QWORD *)(a1 + 16) = *((_QWORD *)a2 + 2);
    *(_OWORD *)a1 = v20;
    return a1;
  }
  v10 = *(_QWORD *)&s2[16];
  *(_DWORD *)s2 = 0;
  v11 = (const void *)core::char::methods::encode_utf8_raw(45LL, s2, 4LL);
  if ( v12 > v10 || bcmp(v11, v9, v12) || v10 >= 2 && *(_WORD *)v9 == 11565 || (*v66 & 1) != 0 )
    goto LABEL_7;
  v21 = *v67;
  if ( v10 < 2 || (v21 & 1) != 0 )
  {
    if ( (v21 & 1) != 0 )
      goto LABEL_7;
    goto LABEL_69;
  }
  if ( *(_WORD *)v9 != 29485 && *(_WORD *)v9 != 26157 && *(_WORD *)v9 != 30509 )
  {
LABEL_69:
    *(_QWORD *)&v68 = 0LL;
    *((_QWORD *)&v68 + 1) = 4LL;
    v69 = 0LL;
    v60 = 0;
    v55 = 0;
    *(_QWORD *)s2 = v9;
    *(_QWORD *)&s2[8] = &v9[v10];
    *(_QWORD *)&s2[16] = &v55;
    v57 = &v60;
    v58 = &v68;
    <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v70, s2);
    v31 = v69;
    if ( !v69 )
    {
      std::sys::os_str::bytes::Slice::to_owned(s2, v9, v10);
      v59 = *(_QWORD *)s2;
      v35 = *(_OWORD *)&s2[8];
      goto LABEL_101;
    }
    v59 = 0x8000000000000000LL;
    if ( (v55 & 1) != 0 )
    {
      if ( *a3 != 0x8000000000000000LL )
      {
        alloc::raw_vec::RawVec<T,A>::current_memory(s2, a3, v30, 0x1FFFFFFFFFFFFFFFLL);
        if ( *(_QWORD *)&s2[8] )
          <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
            a3 + 2,
            *(_QWORD *)s2,
            *(_QWORD *)&s2[8],
            *(_QWORD *)&s2[16]);
      }
      *a3 = 0x8000000000000000LL;
      goto LABEL_96;
    }
    if ( v69 > 0x1FFFFFFFFFFFFFFFLL || !*((_QWORD *)&v68 + 1) || (BYTE8(v68) & 3) != 0 )
      goto LABEL_146;
    src = (void *)*((_QWORD *)&v68 + 1);
    *(_QWORD *)s2 = 0LL;
    *(_QWORD *)&s2[8] = 1LL;
    *(_QWORD *)&s2[16] = 0LL;
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(s2, 0LL, v69);
    <core::iter::adapters::cloned::Cloned<I> as core::iter::traits::iterator::Iterator>::fold(
      src,
      (char *)src + 4 * v31,
      s2);
    v62 = *(_QWORD *)&s2[16];
    v61 = *(_OWORD *)s2;
    if ( *a3 == 0x8000000000000000LL )
    {
      v64 = v62;
      v63 = v61;
LABEL_95:
      a3[2] = v64;
      *(_OWORD *)a3 = v63;
LABEL_96:
      v42 = *((_QWORD *)&v70 + 1);
      if ( !*((_QWORD *)&v70 + 1) )
        goto LABEL_146;
      if ( (BYTE8(v70) & 3) != 0 )
        goto LABEL_146;
      v43 = v71;
      if ( v71 > 0x1FFFFFFFFFFFFFFFLL )
        goto LABEL_146;
      if ( v71 <= 1 )
      {
LABEL_102:
        if ( (_QWORD)v70 )
        {
          if ( (unsigned __int64)v70 > 0x3FFFFFFFFFFFFFFFLL )
            goto LABEL_144;
          v44 = 4 * v70;
          *(_QWORD *)s2 = *((_QWORD *)&v70 + 1);
          *(_QWORD *)&s2[8] = 4LL;
          v45 = 16LL;
        }
        else
        {
          v45 = 8LL;
          v44 = 0LL;
        }
        *(_QWORD *)&s2[v45] = v44;
        if ( *(_QWORD *)&s2[8] && *(_QWORD *)&s2[16] )
          _rust_dealloc(*(_QWORD *)s2, *(_QWORD *)&s2[16], *(_QWORD *)&s2[8]);
        if ( (_QWORD)v68 )
        {
          if ( (unsigned __int64)v68 > 0x3FFFFFFFFFFFFFFFLL )
            goto LABEL_144;
          v46 = 4 * v68;
          *(_QWORD *)s2 = *((_QWORD *)&v68 + 1);
          *(_QWORD *)&s2[8] = 4LL;
          v47 = 16LL;
        }
        else
        {
          v47 = 8LL;
          v46 = 0LL;
        }
        v48 = v59;
        *(_QWORD *)&s2[v47] = v46;
        if ( *(_QWORD *)&s2[8] && *(_QWORD *)&s2[16] )
          _rust_dealloc(*(_QWORD *)s2, *(_QWORD *)&s2[16], *(_QWORD *)&s2[8]);
        v49 = &v75;
        goto LABEL_117;
      }
      *(_QWORD *)s2 = 0LL;
      *(_QWORD *)&s2[8] = 1LL;
      *(_QWORD *)&s2[16] = 0LL;
      alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(s2, 0LL, v71);
      <core::iter::adapters::cloned::Cloned<I> as core::iter::traits::iterator::Iterator>::fold(v42, v42 + 4 * v43, s2);
      v59 = *(_QWORD *)s2;
      v35 = *(_OWORD *)&s2[8];
LABEL_101:
      v75 = v35;
      goto LABEL_102;
    }
    src = (void *)a3[1];
    if ( src )
    {
      v36 = a3[2];
      if ( v36 >= 0 )
      {
        v37 = v62;
        if ( (unsigned __int64)v61 - v62 < v36 )
        {
          v38 = a3[2];
          alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v61, v62, v38);
          v37 = v62;
          v36 = v38;
        }
        dest = (void *)(*((_QWORD *)&v61 + 1) + v37);
        v39 = v36;
        core::intrinsics::copy_nonoverlapping::precondition_check(src, *((_QWORD *)&v61 + 1) + v37, 1LL, 1LL);
        memcpy(dest, src, v39);
        v62 += v39;
        v41 = *a3;
        v63 = v61;
        v64 = v62;
        if ( v41 != 0x8000000000000000LL )
        {
          alloc::raw_vec::RawVec<T,A>::current_memory(s2, a3, v40, 0x8000000000000000LL);
          if ( *(_QWORD *)&s2[8] )
            <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
              a3 + 2,
              *(_QWORD *)s2,
              *(_QWORD *)&s2[8],
              *(_QWORD *)&s2[16]);
        }
        goto LABEL_95;
      }
    }
LABEL_141:
    core::panicking::panic_nounwind(anon_2b0791c695ceb2ee6d0f035c0283b4dc_21_llvm_18417733653787042214, 162LL);
  }
LABEL_7:
  LODWORD(v63) = 0;
  v13 = (const void *)core::char::methods::encode_utf8_raw(43LL, &v63, 4LL);
  if ( v14 > v10 )
    goto LABEL_9;
  if ( bcmp(v13, v9, v14) )
    goto LABEL_9;
  if ( !uucore::mods::posix::posix_version() )
    goto LABEL_9;
  if ( v22 > (unsigned __int64)&unk_30A29 )
    goto LABEL_9;
  if ( (*v66 & 1) != 0 )
    goto LABEL_9;
  if ( (*v67 & 1) != 0 )
    goto LABEL_9;
  *(_QWORD *)s2 = v9;
  v59 = (unsigned __int64)&v9[v10];
  *(_QWORD *)&s2[8] = &v9[v10];
  if ( <core::str::iter::Chars as core::iter::traits::iterator::Iterator>::advance_by(s2, 1LL)
    || !(unsigned int)core::str::validations::next_code_point(s2) )
  {
    goto LABEL_9;
  }
  if ( (v23 ^ 0xD800u) - 2048 >= (unsigned int)&loc_10F800 )
    core::panicking::panic_nounwind(anon_6c54eb1e7b215b8ed1966ba3419445bf_11_llvm_11417008648433573330, 57LL);
  if ( (unsigned int)(v23 - 48) >= 0xA )
  {
LABEL_9:
    std::sys::os_str::bytes::Slice::to_owned(s2, v9, v10);
    *(_QWORD *)&v72[16] = *(_QWORD *)&s2[16];
    *(_OWORD *)v72 = *(_OWORD *)s2;
    if ( v10 < 2 )
      goto LABEL_59;
    if ( *(_WORD *)v9 == 26157 )
    {
      if ( *a3 != 0x8000000000000000LL )
      {
        alloc::raw_vec::RawVec<T,A>::current_memory(s2, a3, v15, v16);
        v15 = *(_QWORD *)&s2[8];
        if ( *(_QWORD *)&s2[8] )
          <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
            a3 + 2,
            *(_QWORD *)s2,
            *(_QWORD *)&s2[8],
            *(_QWORD *)&s2[16]);
      }
      *a3 = 0x8000000000000000LL;
    }
    if ( *(_WORD *)v9 == 29485 )
    {
      if ( *a4 != 0x8000000000000000LL )
      {
        alloc::raw_vec::RawVec<T,A>::current_memory(s2, a4, v15, v16);
        if ( *(_QWORD *)&s2[8] )
          <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
            a4 + 2,
            *(_QWORD *)s2,
            *(_QWORD *)&s2[8],
            *(_QWORD *)&s2[16]);
      }
      *a4 = 0x8000000000000000LL;
    }
LABEL_20:
    if ( *(_WORD *)v9 != 11565 )
      goto LABEL_59;
    v17 = v9 + 2;
    if ( v10 == 2 )
    {
      v18 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
              v9 + 2,
              0LL,
              anon_260c126feb8ab3c2b694f5739f14195b_28_llvm_4342503802335753491,
              10LL);
      LOBYTE(v59) = 1;
      if ( v18
        || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                              v9 + 2,
                              0LL,
                              anon_260c126feb8ab3c2b694f5739f14195b_27_llvm_4342503802335753491,
                              11LL)
        || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                              v9 + 2,
                              0LL,
                              anon_260c126feb8ab3c2b694f5739f14195b_23_llvm_4342503802335753491,
                              11LL)
        || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                              v9 + 2,
                              0LL,
                              anon_260c126feb8ab3c2b694f5739f14195b_31_llvm_4342503802335753491,
                              5LL) )
      {
        goto LABEL_58;
      }
      v19 = 0LL;
      goto LABEL_57;
    }
    if ( *v17 <= -65 )
    {
      v54 = &off_11CB18;
      goto LABEL_150;
    }
    v19 = v10 - 2;
    v25 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
            v9 + 2,
            v10 - 2,
            anon_260c126feb8ab3c2b694f5739f14195b_28_llvm_4342503802335753491,
            10LL);
    LOBYTE(v59) = 1;
    if ( !v25 )
    {
      if ( *v17 < -64 )
      {
        v54 = &off_11CB30;
        goto LABEL_150;
      }
      if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                               v9 + 2,
                               v10 - 2,
                               anon_260c126feb8ab3c2b694f5739f14195b_27_llvm_4342503802335753491,
                               11LL) )
      {
        if ( *v17 < -64 )
        {
          v54 = &off_11CB48;
          goto LABEL_150;
        }
        if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                 v9 + 2,
                                 v10 - 2,
                                 anon_260c126feb8ab3c2b694f5739f14195b_23_llvm_4342503802335753491,
                                 11LL) )
        {
          if ( *v17 < -64 )
          {
            v54 = &off_11CB60;
            goto LABEL_150;
          }
          if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                   v9 + 2,
                                   v10 - 2,
                                   anon_260c126feb8ab3c2b694f5739f14195b_31_llvm_4342503802335753491,
                                   5LL) )
          {
            if ( *v17 >= -64 )
            {
LABEL_57:
              LOBYTE(v59) = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                              v9 + 2,
                              v19,
                              anon_260c126feb8ab3c2b694f5739f14195b_22_llvm_4342503802335753491,
                              12LL);
              goto LABEL_58;
            }
            v54 = &off_11CB78;
LABEL_150:
            core::str::slice_error_fail(v9, v10, 2LL, v10, v54);
          }
        }
      }
    }
LABEL_58:
    *v66 = v59;
    goto LABEL_59;
  }
  *(_QWORD *)&v61 = 0LL;
  *((_QWORD *)&v61 + 1) = 4LL;
  v62 = 0LL;
  *(_QWORD *)&v68 = v9;
  *((_QWORD *)&v68 + 1) = v59;
  if ( (unsigned int)core::str::validations::next_code_point(&v68)
    && (v24 ^ 0xD800u) - 2048 >= (unsigned int)&loc_10F800 )
  {
LABEL_145:
    core::panicking::panic_nounwind(
      "unsafe precondition(s) violated: invalid value for `char`/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/s"
      "td/src/io/stdio.rscontextinner",
      57LL);
  }
  v70 = v68;
  while ( 1 )
  {
    v32 = core::str::validations::next_code_point(&v70);
    v59 = v33;
    if ( !v32 )
      goto LABEL_119;
    if ( ((unsigned int)v33 ^ 0xD800) - 2048 >= (unsigned int)&loc_10F800 )
      goto LABEL_145;
    if ( (_DWORD)v33 == (_DWORD)&loc_110000 )
    {
LABEL_119:
      v50 = v62;
      if ( !v62 )
      {
        std::sys::os_str::bytes::Slice::to_owned(s2, v9, v10);
        goto LABEL_132;
      }
      if ( !(v62 >> 61) && *((_QWORD *)&v61 + 1) && (BYTE8(v61) & 3) == 0 )
      {
        v59 = *((_QWORD *)&v61 + 1);
        *(_QWORD *)s2 = 0LL;
        *(_QWORD *)&s2[8] = 1LL;
        *(_QWORD *)&s2[16] = 0LL;
        alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(s2, 0LL, v62);
        <core::iter::adapters::cloned::Cloned<I> as core::iter::traits::iterator::Iterator>::fold(
          v59,
          v59 + 4 * v50,
          s2);
        v64 = *(_QWORD *)&s2[16];
        v63 = *(_OWORD *)s2;
        if ( *a4 != 0x8000000000000000LL )
        {
          alloc::raw_vec::RawVec<T,A>::current_memory(s2, a4, v51, 0x8000000000000000LL);
          if ( *(_QWORD *)&s2[8] )
            <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
              a4 + 2,
              *(_QWORD *)s2,
              *(_QWORD *)&s2[8],
              *(_QWORD *)&s2[16]);
        }
        a4[2] = v64;
        *(_OWORD *)a4 = v63;
        v48 = 0x8000000000000000LL;
        goto LABEL_133;
      }
LABEL_146:
      core::panicking::panic_nounwind(anon_6c54eb1e7b215b8ed1966ba3419445bf_34_llvm_11417008648433573330, 162LL);
    }
    if ( (unsigned int)(v33 - 48) >= 0xA )
      break;
    v34 = v62;
    if ( v62 == (_QWORD)v61 )
      alloc::raw_vec::RawVec<T,A>::grow_one(&v61, 1LL, v33, v33);
    *(_DWORD *)(*((_QWORD *)&v61 + 1) + 4 * v34) = v59;
    v62 = v34 + 1;
  }
  if ( *a4 != 0x8000000000000000LL )
  {
    alloc::raw_vec::RawVec<T,A>::current_memory(s2, a4, v33, v33);
    if ( *(_QWORD *)&s2[8] )
      <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
        a4 + 2,
        *(_QWORD *)s2,
        *(_QWORD *)&s2[8],
        *(_QWORD *)&s2[16]);
  }
  *a4 = 0x8000000000000000LL;
  std::sys::os_str::bytes::Slice::to_owned(s2, v9, v10);
LABEL_132:
  v48 = *(_QWORD *)s2;
  v73 = *(_OWORD *)&s2[8];
LABEL_133:
  if ( !(_QWORD)v61 )
  {
    v53 = 8LL;
    v52 = 0LL;
    goto LABEL_137;
  }
  if ( (unsigned __int64)v61 >> 62 )
LABEL_144:
    core::panicking::panic_nounwind(anon_a92f4473147c949333621fbaa13d72e0_10_llvm_7006787405930273849, 69LL);
  v52 = 4 * v61;
  *(_QWORD *)s2 = *((_QWORD *)&v61 + 1);
  *(_QWORD *)&s2[8] = 4LL;
  v53 = 16LL;
LABEL_137:
  *(_QWORD *)&s2[v53] = v52;
  if ( *(_QWORD *)&s2[8] && *(_QWORD *)&s2[16] )
    _rust_dealloc(*(_QWORD *)s2, *(_QWORD *)&s2[16], *(_QWORD *)&s2[8]);
  v49 = &v73;
LABEL_117:
  *(_QWORD *)v72 = v48;
  *(_OWORD *)&v72[8] = *v49;
  if ( v10 >= 2 )
    goto LABEL_20;
LABEL_59:
  v26 = 1;
  if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v9, v10, aS, 2LL)
    && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v9, v10, asc_209BB, 2LL) )
  {
    v26 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v9, v10, aW, 2LL);
  }
  *v67 = v26;
  *(_DWORD *)s2 = 0;
  v27 = (const void *)core::char::methods::encode_utf8_raw(45LL, s2, 4LL);
  if ( v28 > v10 || bcmp(v27, v9, v28) )
  {
    *v67 = 0;
    *v66 = 0;
  }
  *(_QWORD *)(a1 + 16) = *(_QWORD *)&v72[16];
  *(_OWORD *)a1 = *(_OWORD *)v72;
  alloc::raw_vec::RawVec<T,A>::current_memory(s2, a2);
  if ( *(_QWORD *)&s2[8] )
    <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
      a2 + 1,
      *(_QWORD *)s2,
      *(_QWORD *)&s2[8],
      *(_QWORD *)&s2[16]);
  return a1;
}
