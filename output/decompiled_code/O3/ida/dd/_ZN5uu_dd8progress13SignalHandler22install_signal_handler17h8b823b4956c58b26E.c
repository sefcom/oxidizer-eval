__m128i *__fastcall uu_dd::progress::SignalHandler::install_signal_handler(__m128i *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rsi
  volatile signed __int64 *v7; // rcx
  __m128i v8; // xmm0
  volatile signed __int64 *v9; // rdx
  __m128i v10; // xmm0
  __m128i v11; // xmm1
  volatile signed __int64 *v13; // [rsp+8h] [rbp-F0h] BYREF
  __int64 v14; // [rsp+10h] [rbp-E8h]
  __m128i v15; // [rsp+18h] [rbp-E0h] BYREF
  volatile signed __int64 *v16; // [rsp+28h] [rbp-D0h]
  __int128 v17; // [rsp+30h] [rbp-C8h]
  __int64 v18; // [rsp+40h] [rbp-B8h]
  __int64 v19; // [rsp+48h] [rbp-B0h]
  __m128i v20; // [rsp+50h] [rbp-A8h] BYREF
  __m128i v21; // [rsp+60h] [rbp-98h]
  volatile signed __int64 *v22; // [rsp+70h] [rbp-88h]
  __int128 v23; // [rsp+78h] [rbp-80h]
  __int64 v24; // [rsp+88h] [rbp-70h]
  __int128 v25; // [rsp+90h] [rbp-68h] BYREF
  __int64 v26; // [rsp+A0h] [rbp-58h]
  __m128i v27; // [rsp+A8h] [rbp-50h]
  __m128i v28; // [rsp+B8h] [rbp-40h]
  volatile signed __int64 *v29; // [rsp+C8h] [rbp-30h]
  __int128 v30; // [rsp+D0h] [rbp-28h]

  std::os::unix::net::stream::UnixStream::pair(&v13);
  if ( (_DWORD)v13 )
  {
    v5 = v14;
LABEL_3:
    a1->m128i_i64[1] = v5;
    a1->m128i_i64[0] = 0LL;
    if ( *(_QWORD *)a3 )
      (*(void (__fastcall **)(__int64))a3)(a2);
    v6 = *(_QWORD *)(a3 + 8);
    if ( v6 )
      _rust_dealloc(a2, v6, *(_QWORD *)(a3 + 16));
    return a1;
  }
  signal_hook::iterator::backend::SignalDelivery<R,E>::with_pipe(&v13, HIDWORD(v13), (unsigned int)v14, 10LL);
  v7 = v13;
  v5 = v14;
  if ( !v13 )
    goto LABEL_3;
  v8 = _mm_loadu_si128(&v15);
  v9 = v16;
  v30 = v17;
  if ( _InterlockedIncrement64(v13) <= 0
    || _InterlockedIncrement64((volatile signed __int64 *)v8.m128i_i64[0]) <= 0
    || _InterlockedIncrement64(v9) <= 0 )
  {
    BUG();
  }
  v27.m128i_i64[0] = (__int64)v7;
  v27.m128i_i64[1] = v5;
  v28 = v8;
  v29 = v9;
  v13 = v7;
  v14 = v5;
  v15 = v8;
  v16 = v9;
  v17 = v30;
  v18 = a2;
  v19 = a3;
  v21.m128i_i64[0] = 0x8000000000000000LL;
  v20.m128i_i64[0] = 0LL;
  std::thread::Builder::spawn_unchecked(&v25, &v20, &v13);
  if ( !(_QWORD)v25 )
  {
    v20.m128i_i64[0] = *((_QWORD *)&v25 + 1);
    core::result::unwrap_failed(
      aFailedToSpawnT_0,
      22LL,
      &v20,
      &anon_09342749f2f0afc509120f10eba31a78_1_llvm_15503904748741807753,
      &off_116E08);
  }
  v24 = v26;
  v23 = v25;
  v22 = v29;
  v10 = v27;
  v11 = v28;
  v21 = v28;
  v20 = v27;
  a1[3].m128i_i64[0] = *((_QWORD *)&v25 + 1);
  a1[3].m128i_i64[1] = v24;
  a1[2].m128i_i64[0] = (__int64)v22;
  a1[2].m128i_i64[1] = v23;
  a1[1] = v11;
  *a1 = v10;
  return a1;
}
