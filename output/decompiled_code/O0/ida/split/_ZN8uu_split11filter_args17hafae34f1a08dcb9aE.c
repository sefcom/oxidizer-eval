__int64 __fastcall uu_split::filter_args(__int64 a1, __int128 *a2, _QWORD *a3, _BYTE *a4, char *a5)
{
  char *v8; // r13
  unsigned __int64 v9; // rbp
  const void *v10; // rax
  size_t v11; // rdx
  char *v12; // r15
  char v13; // al
  unsigned __int64 v14; // rsi
  __int128 v15; // xmm0
  char v16; // al
  char v17; // al
  char v18; // al
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  char v25; // r15
  const void *v26; // rax
  size_t v27; // rdx
  __int128 v29; // xmm0
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  unsigned __int64 v34; // r15
  char **v35; // r8
  char v36; // [rsp+Fh] [rbp-E9h] BYREF
  _BYTE s2[24]; // [rsp+10h] [rbp-E8h] BYREF
  unsigned __int64 *v38; // [rsp+28h] [rbp-D0h]
  unsigned __int64 v39; // [rsp+30h] [rbp-C8h]
  unsigned __int64 v40; // [rsp+38h] [rbp-C0h]
  _BYTE *v41; // [rsp+40h] [rbp-B8h]
  unsigned __int64 v42; // [rsp+48h] [rbp-B0h] BYREF
  __int64 v43; // [rsp+50h] [rbp-A8h]
  unsigned __int64 v44; // [rsp+58h] [rbp-A0h]
  _BYTE v45[24]; // [rsp+60h] [rbp-98h]
  __int128 v46; // [rsp+80h] [rbp-78h]
  __int64 v47; // [rsp+90h] [rbp-68h]
  unsigned __int64 v48; // [rsp+98h] [rbp-60h] BYREF
  __int64 v49; // [rsp+A0h] [rbp-58h]
  unsigned __int64 v50; // [rsp+A8h] [rbp-50h]
  __int128 v51; // [rsp+B0h] [rbp-48h]

  v41 = a4;
  if ( !*((_QWORD *)a2 + 1) || *((__int64 *)a2 + 2) < 0 )
    core::panicking::panic_nounwind(anon_a1369f34f0af36e085eaa2e09186d83a_17_llvm_8562216672536282045, 162LL);
  std::sys::os_str::bytes::Slice::to_str(s2);
  if ( *(_QWORD *)s2 || (v8 = *(char **)&s2[8]) == 0LL )
  {
    v15 = *a2;
    *(_QWORD *)(a1 + 16) = *((_QWORD *)a2 + 2);
    *(_OWORD *)a1 = v15;
    return a1;
  }
  v9 = *(_QWORD *)&s2[16];
  *(_DWORD *)s2 = 0;
  v10 = (const void *)core::char::methods::encode_utf8_raw(45LL, s2, 4LL);
  if ( v11 <= v9 && !bcmp(v10, v8, v11) && (v9 < 2 || *(_WORD *)v8 != 11565) && (*v41 & 1) == 0 )
  {
    v16 = *a5;
    if ( v9 < 2 || (v16 & 1) != 0 )
    {
      if ( (v16 & 1) != 0 )
        goto LABEL_7;
    }
    else if ( *(_WORD *)v8 == 24877
           || *(_WORD *)v8 == 25133
           || *(_WORD *)v8 == 17197
           || *(_WORD *)v8 == 27693
           || *(_WORD *)v8 == 28205
           || *(_WORD *)v8 == 29741 )
    {
      goto LABEL_7;
    }
    v42 = 0LL;
    v43 = 4LL;
    v44 = 0LL;
    v36 = 0;
    *(_QWORD *)s2 = v8;
    *(_QWORD *)&s2[8] = &v8[v9];
    *(_QWORD *)&s2[16] = &v36;
    v38 = &v42;
    <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v48, s2);
    if ( v44 )
    {
      if ( v44 >> 61 || !v43 || (v43 & 3) != 0 )
        goto LABEL_88;
      *(_QWORD *)s2 = 0LL;
      *(_QWORD *)&s2[8] = 1LL;
      *(_QWORD *)&s2[16] = 0LL;
      <alloc::string::String as core::iter::traits::collect::Extend<char>>::extend(s2, v43, v43 + 4 * v44);
      v47 = *(_QWORD *)&s2[16];
      v46 = *(_OWORD *)s2;
      v39 = 0x8000000000000000LL;
      if ( *a3 != 0x8000000000000000LL )
      {
        alloc::raw_vec::RawVec<T,A>::current_memory(s2, a3);
        if ( *(_QWORD *)&s2[8] )
          <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
            a3 + 2,
            *(_QWORD *)s2,
            *(_QWORD *)&s2[8],
            *(_QWORD *)&s2[16]);
      }
      a3[2] = v47;
      *(_OWORD *)a3 = v46;
      if ( !v49 || (v49 & 3) != 0 || v50 > 0x1FFFFFFFFFFFFFFFLL )
LABEL_88:
        core::panicking::panic_nounwind(anon_6c54eb1e7b215b8ed1966ba3419445bf_34_llvm_11417008648433573330, 162LL);
      if ( v50 <= 1 )
      {
LABEL_69:
        if ( v48 )
        {
          if ( v48 > 0x3FFFFFFFFFFFFFFFLL )
            goto LABEL_89;
          v30 = 4 * v48;
          *(_QWORD *)s2 = v49;
          *(_QWORD *)&s2[8] = 4LL;
          v31 = 16LL;
        }
        else
        {
          v31 = 8LL;
          v30 = 0LL;
        }
        *(_QWORD *)&s2[v31] = v30;
        if ( *(_QWORD *)&s2[8] && *(_QWORD *)&s2[16] )
          _rust_dealloc(*(_QWORD *)s2);
        if ( !v42 )
        {
          v33 = 8LL;
          v32 = 0LL;
          goto LABEL_80;
        }
        if ( v42 <= 0x3FFFFFFFFFFFFFFFLL )
        {
          v32 = 4 * v42;
          *(_QWORD *)s2 = v43;
          *(_QWORD *)&s2[8] = 4LL;
          v33 = 16LL;
LABEL_80:
          v34 = v39;
          *(_QWORD *)&s2[v33] = v32;
          if ( *(_QWORD *)&s2[8] && *(_QWORD *)&s2[16] )
            _rust_dealloc(*(_QWORD *)s2);
          *(_QWORD *)v45 = v34;
          *(_OWORD *)&v45[8] = v51;
          if ( v9 < 2 )
            goto LABEL_42;
          goto LABEL_8;
        }
LABEL_89:
        core::panicking::panic_nounwind(anon_a92f4473147c949333621fbaa13d72e0_10_llvm_7006787405930273849, 69LL);
      }
      *(_QWORD *)s2 = 0LL;
      *(_QWORD *)&s2[8] = 1LL;
      *(_QWORD *)&s2[16] = 0LL;
      <alloc::string::String as core::iter::traits::collect::Extend<char>>::extend(s2, v49, v49 + 4 * v50);
      v39 = *(_QWORD *)s2;
      v29 = *(_OWORD *)&s2[8];
    }
    else
    {
      std::sys::os_str::bytes::Slice::to_owned(s2, v8, v9);
      v39 = *(_QWORD *)s2;
      v29 = *(_OWORD *)&s2[8];
    }
    v51 = v29;
    goto LABEL_69;
  }
LABEL_7:
  std::sys::os_str::bytes::Slice::to_owned(s2, v8, v9);
  *(_QWORD *)&v45[16] = *(_QWORD *)&s2[16];
  *(_OWORD *)v45 = *(_OWORD *)s2;
  if ( v9 < 2 )
    goto LABEL_42;
LABEL_8:
  if ( *(_WORD *)v8 != 11565 )
    goto LABEL_42;
  v12 = v8 + 2;
  if ( v9 != 2 )
  {
    if ( *v12 <= -65 )
    {
      v35 = &off_1354C8;
    }
    else
    {
      v40 = v9 - 2;
      v17 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
              v8 + 2,
              v9 - 2,
              anon_4f04ac8a3ef9e065a432e2bbb7f80309_6_llvm_15963415444986902846,
              5LL);
      LOBYTE(v39) = 1;
      if ( v17 )
        goto LABEL_41;
      if ( *v12 < -64 )
      {
        v35 = &off_1354E0;
      }
      else
      {
        if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                v8 + 2,
                                v40,
                                anon_4f04ac8a3ef9e065a432e2bbb7f80309_7_llvm_15963415444986902846,
                                10LL) )
          goto LABEL_41;
        if ( *v12 < -64 )
        {
          v35 = &off_1354F8;
        }
        else
        {
          if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                  v8 + 2,
                                  v40,
                                  anon_4f04ac8a3ef9e065a432e2bbb7f80309_8_llvm_15963415444986902846,
                                  5LL) )
            goto LABEL_41;
          if ( *v12 < -64 )
          {
            v35 = &off_135510;
          }
          else
          {
            if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                    v8 + 2,
                                    v40,
                                    anon_4f04ac8a3ef9e065a432e2bbb7f80309_9_llvm_15963415444986902846,
                                    17LL) )
              goto LABEL_41;
            v14 = v40;
            if ( *v12 >= -64 )
              goto LABEL_37;
            v35 = &off_135528;
          }
        }
      }
    }
    core::str::slice_error_fail(v8, v9, 2LL, v9, v35);
  }
  v13 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
          v8 + 2,
          0LL,
          anon_4f04ac8a3ef9e065a432e2bbb7f80309_6_llvm_15963415444986902846,
          5LL);
  LOBYTE(v39) = 1;
  if ( !v13
    && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                           v8 + 2,
                           0LL,
                           anon_4f04ac8a3ef9e065a432e2bbb7f80309_7_llvm_15963415444986902846,
                           10LL)
    && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                           v8 + 2,
                           0LL,
                           anon_4f04ac8a3ef9e065a432e2bbb7f80309_8_llvm_15963415444986902846,
                           5LL)
    && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                           v8 + 2,
                           0LL,
                           anon_4f04ac8a3ef9e065a432e2bbb7f80309_9_llvm_15963415444986902846,
                           17LL) )
  {
    v14 = 0LL;
LABEL_37:
    v18 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8 + 2, v14, aFilter, 6LL);
    LOBYTE(v39) = 1;
    if ( !v18 )
    {
      v19 = core::str::traits::<impl core::ops::index::Index<I> for str>::index(v8, v9, 2LL, &off_135540);
      if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                               v19,
                               v20,
                               anon_4f04ac8a3ef9e065a432e2bbb7f80309_11_llvm_15963415444986902846,
                               6LL) )
      {
        v21 = core::str::traits::<impl core::ops::index::Index<I> for str>::index(v8, v9, 2LL, &off_135558);
        if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                 v21,
                                 v22,
                                 anon_4f04ac8a3ef9e065a432e2bbb7f80309_16_llvm_15963415444986902846,
                                 13LL) )
        {
          v23 = core::str::traits::<impl core::ops::index::Index<I> for str>::index(v8, v9, 2LL, &off_135570);
          LOBYTE(v39) = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v23, v24, aSeparator, 9LL);
        }
      }
    }
  }
LABEL_41:
  *v41 = v39;
LABEL_42:
  v25 = 1;
  if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v9, aB, 2LL)
    && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v9, aC, 2LL)
    && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v9, asc_23364, 2LL)
    && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v9, aN, 2LL)
    && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v9, aA, 2LL) )
  {
    v25 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v9, aT, 2LL);
  }
  *a5 = v25;
  *(_DWORD *)s2 = 0;
  v26 = (const void *)core::char::methods::encode_utf8_raw(45LL, s2, 4LL);
  if ( v27 > v9 || bcmp(v26, v8, v27) )
  {
    *a5 = 0;
    *v41 = 0;
  }
  *(_QWORD *)(a1 + 16) = *(_QWORD *)&v45[16];
  *(_OWORD *)a1 = *(_OWORD *)v45;
  alloc::raw_vec::RawVec<T,A>::current_memory(s2, a2);
  if ( *(_QWORD *)&s2[8] )
    <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
      a2 + 1,
      *(_QWORD *)s2,
      *(_QWORD *)&s2[8],
      *(_QWORD *)&s2[16]);
  return a1;
}
