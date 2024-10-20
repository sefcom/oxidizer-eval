__int64 __fastcall uu_ls::display_group(__m128i *a1, unsigned int a2, char a3)
{
  __int64 result; // rax
  __int64 v5; // r13
  const __m128i *v6; // r15
  __int64 v8; // r12
  __int64 v9; // rbp
  __int64 v10; // r14
  const __m128i *v11; // rsi
  __int32 v12; // r8d
  const __m128i *v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  char v18; // dl
  unsigned __int64 v20; // r15
  int is_zero_slow_path; // eax
  char v22; // [rsp+7h] [rbp-A1h] BYREF
  int v23; // [rsp+8h] [rbp-A0h]
  __int32 v24; // [rsp+Ch] [rbp-9Ch]
  __m128i v25; // [rsp+10h] [rbp-98h] BYREF
  __int64 v26; // [rsp+20h] [rbp-88h]
  __int64 v27; // [rsp+28h] [rbp-80h] BYREF
  unsigned int v28; // [rsp+34h] [rbp-74h] BYREF
  int *v29; // [rsp+38h] [rbp-70h] BYREF
  __int64 v30; // [rsp+40h] [rbp-68h]
  const __m128i *v31; // [rsp+48h] [rbp-60h]
  int v32; // [rsp+50h] [rbp-58h]
  __m128i *v33; // [rsp+58h] [rbp-50h]
  __int64 (__fastcall **v34)(); // [rsp+60h] [rbp-48h]
  __int64 v35; // [rsp+68h] [rbp-40h]
  char v36; // [rsp+70h] [rbp-38h]

  if ( a3 )
  {
    LODWORD(v27) = a2;
    v25.m128i_i64[0] = 0LL;
    v25.m128i_i64[1] = 1LL;
    v26 = 0LL;
    v35 = 32LL;
    v36 = 3;
    v29 = 0LL;
    v31 = 0LL;
    v33 = &v25;
    v34 = &off_1AC0E8;
    if ( (unsigned __int8)core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt(&v27, &v29) )
      core::result::unwrap_failed(aADisplayImplem_0, 55LL, &v22, &unk_1AC1A0, &off_1AC118);
    result = v26;
    a1[1].m128i_i64[0] = v26;
    *a1 = _mm_loadu_si128(&v25);
  }
  else
  {
    v28 = a2;
    if ( qword_1B7C60 != 2 )
      once_cell::imp::OnceCell<T>::initialize(&uu_ls::cached_gid2grp::GID_CACHE, &uu_ls::cached_gid2grp::GID_CACHE);
    if ( _InterlockedCompareExchange(&dword_1B7C28, 1, 0) )
      std::sys::sync::mutex::futex::Mutex::lock_contended(&dword_1B7C28);
    if ( 2LL * std::panicking::panic_count::GLOBAL_PANIC_COUNT )
    {
      is_zero_slow_path = std::panicking::panic_count::is_zero_slow_path();
      LOBYTE(is_zero_slow_path) = is_zero_slow_path ^ 1;
      v23 = is_zero_slow_path;
    }
    else
    {
      v23 = 0;
    }
    if ( byte_1B7C2C )
    {
      v29 = &dword_1B7C28;
      LOBYTE(v30) = v23;
      core::result::unwrap_failed(aCalledResultUn_4, 43LL, &v29, &off_1AC1E0, &off_1ACB18);
    }
    hashbrown::rustc_entry::<impl hashbrown::map::HashMap<K,V,S,A>>::rustc_entry(&v29, &unk_1B7C30, a2);
    if ( v29 )
    {
      v5 = v30;
      v6 = v31;
      v24 = v32;
      _RDI = &v29;
      <uucore::features::entries::Group as uucore::features::entries::Locate<u32>>::locate(&v29, a2);
      v8 = (__int64)v29;
      v9 = v30;
      if ( v29 == (int *)0x8000000000000000LL )
      {
        v27 = v30;
        v25.m128i_i64[0] = 0LL;
        v25.m128i_i64[1] = 1LL;
        v26 = 0LL;
        v35 = 32LL;
        v36 = 3;
        v29 = 0LL;
        v31 = 0LL;
        v33 = &v25;
        v34 = &off_1AC0E8;
        if ( (unsigned __int8)core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt(&v28, &v29) )
          core::result::unwrap_failed(aADisplayImplem_0, 55LL, &v22, &unk_1AC1A0, &off_1AC118);
        v9 = v25.m128i_i64[1];
        v8 = v25.m128i_i64[0];
        v10 = v26;
        _RDI = (int **)&v27;
        core::ptr::drop_in_place<std::io::error::Error>(&v27, &v29);
      }
      else
      {
        v10 = (__int64)v31;
      }
      v12 = v24;
      v13 = *(const __m128i **)v5;
      v14 = *(_QWORD *)(v5 + 8);
      v15 = (unsigned __int64)v6 & v14;
      _ESI = _mm_movemask_epi8(_mm_loadu_si128((const __m128i *)(*(_QWORD *)v5 + ((unsigned __int64)v6 & v14))));
      if ( !_ESI )
      {
        _RDI = (int **)&word_10;
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
      v20 = (unsigned __int64)v6 >> 57;
      v13->m128i_i8[_RDI] = v20;
      v13[1].m128i_i8[v14 & (_RDI - 16)] = v20;
      v11 = &v13[-2 * _RDI];
      *(_QWORD *)(v5 + 16) -= v18 & 1;
      v11[-2].m128i_i32[0] = v12;
      v11[-2].m128i_i64[1] = v8;
      v11[-1].m128i_i64[0] = v9;
      v11[-1].m128i_i64[1] = v10;
      ++*(_QWORD *)(v5 + 24);
    }
    else
    {
      v11 = v31;
    }
    <alloc::string::String as core::clone::Clone>::clone(a1, &v11[-2].m128i_u64[1]);
    if ( !(_BYTE)v23
      && (std::panicking::panic_count::GLOBAL_PANIC_COUNT & 0x7FFFFFFFFFFFFFFFLL) != 0
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path() )
    {
      byte_1B7C2C = 1;
    }
    result = (unsigned int)_InterlockedExchange(&dword_1B7C28, 0);
    if ( (_DWORD)result == 2 )
      return std::sys::sync::mutex::futex::Mutex::wake(&dword_1B7C28);
  }
  return result;
}
