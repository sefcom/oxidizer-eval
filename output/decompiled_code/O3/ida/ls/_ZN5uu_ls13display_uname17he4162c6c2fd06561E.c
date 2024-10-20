__int64 __fastcall uu_ls::display_uname(__m128i *a1, unsigned int a2, char a3)
{
  __int64 result; // rax
  int is_zero_slow_path; // r15d
  __int64 v6; // r13
  const __m128i *v7; // rbp
  __int64 v8; // r14
  const __m128i *v10; // rsi
  __int64 v11; // r15
  __int64 v12; // r12
  const __m128i *v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  char v18; // dl
  unsigned __int64 v20; // rbp
  char v21; // [rsp+7h] [rbp-111h] BYREF
  __m128i v22; // [rsp+8h] [rbp-110h] BYREF
  __int64 v23; // [rsp+18h] [rbp-100h]
  __int64 v24; // [rsp+20h] [rbp-F8h] BYREF
  int v25; // [rsp+2Ch] [rbp-ECh]
  __int32 v26; // [rsp+30h] [rbp-E8h]
  unsigned int v27; // [rsp+34h] [rbp-E4h] BYREF
  __int64 v28; // [rsp+38h] [rbp-E0h]
  __int64 v29; // [rsp+40h] [rbp-D8h]
  int *v30; // [rsp+48h] [rbp-D0h] BYREF
  __int64 v31; // [rsp+50h] [rbp-C8h]
  const __m128i *v32; // [rsp+58h] [rbp-C0h]
  __int64 v33; // [rsp+60h] [rbp-B8h]
  __m128i *v34; // [rsp+68h] [rbp-B0h]
  __int64 (__fastcall **v35)(); // [rsp+70h] [rbp-A8h]
  __int64 v36; // [rsp+78h] [rbp-A0h]
  __int64 *v37; // [rsp+80h] [rbp-98h]
  __int64 v38; // [rsp+90h] [rbp-88h]
  __int64 v39; // [rsp+98h] [rbp-80h]
  __int64 v40; // [rsp+A8h] [rbp-70h]
  __int64 v41; // [rsp+B0h] [rbp-68h]
  __int64 *v42; // [rsp+C8h] [rbp-50h]
  __int64 v43; // [rsp+D0h] [rbp-48h]
  __int64 v44; // [rsp+D8h] [rbp-40h]
  __int64 v45; // [rsp+E0h] [rbp-38h]

  if ( a3 )
  {
    LODWORD(v24) = a2;
    v22.m128i_i64[0] = 0LL;
    v22.m128i_i64[1] = 1LL;
    v23 = 0LL;
    v36 = 32LL;
    LOBYTE(v37) = 3;
    v30 = 0LL;
    v32 = 0LL;
    v34 = &v22;
    v35 = &off_1AC0E8;
    if ( (unsigned __int8)core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt(&v24, &v30) )
      core::result::unwrap_failed(aADisplayImplem_0, 55LL, &v21, &unk_1AC1A0, &off_1AC118);
    result = v23;
    a1[1].m128i_i64[0] = v23;
    *a1 = _mm_loadu_si128(&v22);
  }
  else
  {
    v27 = a2;
    if ( qword_1B7C10 != 2 )
      once_cell::imp::OnceCell<T>::initialize(&uu_ls::cached_uid2usr::UID_CACHE, &uu_ls::cached_uid2usr::UID_CACHE);
    if ( _InterlockedCompareExchange(&dword_1B7BD8, 1, 0) )
      std::sys::sync::mutex::futex::Mutex::lock_contended(&dword_1B7BD8);
    if ( 2LL * std::panicking::panic_count::GLOBAL_PANIC_COUNT )
    {
      is_zero_slow_path = std::panicking::panic_count::is_zero_slow_path();
      LOBYTE(is_zero_slow_path) = is_zero_slow_path ^ 1;
    }
    else
    {
      is_zero_slow_path = 0;
    }
    if ( byte_1B7BDC )
    {
      v30 = &dword_1B7BD8;
      LOBYTE(v31) = is_zero_slow_path;
      core::result::unwrap_failed(aCalledResultUn_4, 43LL, &v30, &off_1AC1E0, &off_1ACAE0);
    }
    hashbrown::rustc_entry::<impl hashbrown::map::HashMap<K,V,S,A>>::rustc_entry(&v30, &unk_1B7BE0, a2);
    if ( v30 )
    {
      v6 = v31;
      v7 = v32;
      v26 = v33;
      <uucore::features::entries::Passwd as uucore::features::entries::Locate<u32>>::locate(&v30, a2);
      v8 = (__int64)v30;
      if ( v30 == (int *)0x8000000000000000LL )
      {
        v24 = v31;
        v22.m128i_i64[0] = 0LL;
        v22.m128i_i64[1] = 1LL;
        v23 = 0LL;
        v36 = 32LL;
        LOBYTE(v37) = 3;
        v30 = 0LL;
        v32 = 0LL;
        v34 = &v22;
        v35 = &off_1AC0E8;
        if ( (unsigned __int8)core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt(&v27, &v30) )
          core::result::unwrap_failed(aADisplayImplem_0, 55LL, &v21, &unk_1AC1A0, &off_1AC118);
        v29 = v22.m128i_i64[1];
        v8 = v22.m128i_i64[0];
        v28 = v23;
        _RDI = &v24;
        core::ptr::drop_in_place<std::io::error::Error>(&v24, &v30);
      }
      else
      {
        v29 = v31;
        v25 = is_zero_slow_path;
        v28 = (__int64)v32;
        v11 = v36;
        _RDI = v37;
        v12 = v38;
        v43 = v39;
        v45 = v40;
        v44 = v41;
        if ( 2 * v33 )
        {
          v42 = v37;
          _rust_dealloc(v34, v33, 1LL);
          _RDI = v42;
        }
        if ( 2 * v11 )
          _rust_dealloc(_RDI, v11, 1LL);
        if ( 2 * v12 )
        {
          HIDWORD(_RDI) = HIDWORD(v43);
          _rust_dealloc(v43, v12, 1LL);
        }
        LOBYTE(is_zero_slow_path) = v25;
        if ( 2 * v45 )
        {
          HIDWORD(_RDI) = HIDWORD(v44);
          _rust_dealloc(v44, v45, 1LL);
        }
      }
      v13 = *(const __m128i **)v6;
      v14 = *(_QWORD *)(v6 + 8);
      v15 = (unsigned __int64)v7 & v14;
      _ESI = _mm_movemask_epi8(_mm_loadu_si128((const __m128i *)(*(_QWORD *)v6 + ((unsigned __int64)v7 & v14))));
      if ( !_ESI )
      {
        _RDI = (_QWORD *)&word_10;
        do
        {
          v15 = v14 & ((unsigned __int64)_RDI + v15);
          _ESI = _mm_movemask_epi8(_mm_loadu_si128((const __m128i *)((char *)v13 + v15)));
          _RDI += 2;
        }
        while ( !_ESI );
      }
      __asm { tzcnt   edi, esi }
      _RDI = v14 & ((unsigned __int64)_RDI + v15);
      v18 = v13->m128i_i8[_RDI];
      if ( v18 >= 0 )
      {
        _EDX = _mm_movemask_epi8(_mm_load_si128(v13));
        __asm { tzcnt   edi, edx }
        v18 = v13->m128i_i8[_RDI];
      }
      v20 = (unsigned __int64)v7 >> 57;
      v13->m128i_i8[_RDI] = v20;
      v13[1].m128i_i8[v14 & (_RDI - 16)] = v20;
      v10 = &v13[-2 * _RDI];
      *(_QWORD *)(v6 + 16) -= v18 & 1;
      v10[-2].m128i_i32[0] = v26;
      v10[-2].m128i_i64[1] = v8;
      v10[-1].m128i_i64[0] = v29;
      v10[-1].m128i_i64[1] = v28;
      ++*(_QWORD *)(v6 + 24);
    }
    else
    {
      v10 = v32;
    }
    <alloc::string::String as core::clone::Clone>::clone(a1, &v10[-2].m128i_u64[1]);
    if ( !(_BYTE)is_zero_slow_path
      && (std::panicking::panic_count::GLOBAL_PANIC_COUNT & 0x7FFFFFFFFFFFFFFFLL) != 0
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path() )
    {
      byte_1B7BDC = 1;
    }
    result = (unsigned int)_InterlockedExchange(&dword_1B7BD8, 0);
    if ( (_DWORD)result == 2 )
      return std::sys::sync::mutex::futex::Mutex::wake(&dword_1B7BD8);
  }
  return result;
}
