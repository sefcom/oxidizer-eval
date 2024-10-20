__int64 *__fastcall uu_paste::InputSource::read_until(__int64 *a1, _QWORD *a2, unsigned __int8 a3, __int64 a4)
{
  __int64 until; // rax
  __int64 v6; // rdx
  __int64 v7; // r14
  _OWORD *v8; // rax
  __int128 v9; // xmm0
  __int64 v10; // r12
  unsigned __int64 v11; // rax
  char v14; // dl
  __int64 v15; // rax
  __int64 v16; // rdx
  _OWORD *v17; // rax
  __int128 v18; // xmm0
  volatile __int32 *v19; // r14
  volatile __int32 *v20; // rdi
  __int64 v21; // r14
  __int64 v22; // r15
  __int64 v23; // r12
  __int64 v24; // rax
  volatile __int32 *v25; // r15
  volatile __int32 *v26; // rdi
  char v28; // [rsp+Fh] [rbp-99h] BYREF
  volatile __int32 *v29; // [rsp+10h] [rbp-98h] BYREF
  char v30; // [rsp+18h] [rbp-90h]
  __int128 v31; // [rsp+20h] [rbp-88h] BYREF
  __int128 v32; // [rsp+30h] [rbp-78h]
  __int64 v33; // [rsp+40h] [rbp-68h]
  _QWORD v34[2]; // [rsp+50h] [rbp-58h] BYREF
  _QWORD v35[9]; // [rsp+60h] [rbp-48h] BYREF

  if ( *a2 )
  {
    until = std::io::read_until(a2, a3, a4);
    v7 = v6;
    if ( until )
    {
      *(_QWORD *)&v31 = 0x8000000000000000LL;
      *((_QWORD *)&v32 + 1) = v6;
      v8 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
      if ( !v8 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      v9 = v31;
      v8[1] = v32;
      *v8 = v9;
      *a1 = (__int64)v8;
      a1[1] = (__int64)&anon_f907210316a4f48a9c7de5c93e2a79ff_287_llvm_5503381581801417789;
      return a1;
    }
LABEL_24:
    a1[1] = v7;
    *a1 = 0LL;
    return a1;
  }
  v10 = a2[1];
  v11 = *(_QWORD *)(v10 + 16);
  if ( v11 >= 0x7FFFFFFFFFFFFFFFLL )
  {
    v34[0] = &v28;
    v34[1] = <core::cell::BorrowError as core::fmt::Display>::fmt;
    *(_QWORD *)&v31 = &anon_901da3c1efb1e0e537937b7cd8ee0384_62_llvm_15071104316176699102;
    *((_QWORD *)&v31 + 1) = 1LL;
    *(_QWORD *)&v32 = v34;
    *((_QWORD *)&v32 + 1) = 1LL;
    v33 = 0LL;
    alloc::fmt::format::format_inner(v35, &v31);
    v21 = v35[0];
    v22 = v35[1];
    v23 = v35[2];
    v24 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
    if ( !v24 )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    *(_QWORD *)v24 = v21;
    *(_QWORD *)(v24 + 8) = v22;
    *(_QWORD *)(v24 + 16) = v23;
    *(_DWORD *)(v24 + 24) = 1;
    *a1 = v24;
    a1[1] = (__int64)&anon_f907210316a4f48a9c7de5c93e2a79ff_265_llvm_5503381581801417789;
  }
  else
  {
    *(_QWORD *)(v10 + 16) = v11 + 1;
    v29 = (volatile __int32 *)std::io::stdio::Stdin::lock(v10 + 24);
    v30 = v14 & 1;
    v15 = <std::io::stdio::StdinLock as std::io::BufRead>::read_until(&v29, a3, a4);
    v7 = v16;
    if ( !v15 )
    {
      if ( (v30 & 1) == 0 )
      {
        v25 = v29;
        if ( (core::sync::atomic::atomic_load(&std::panicking::panic_count::GLOBAL_PANIC_COUNT, 0LL) & 0x7FFFFFFFFFFFFFFFLL) != 0
          && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path() )
        {
          core::sync::atomic::atomic_store(v25 + 1, 1LL, 0LL);
        }
      }
      v26 = v29;
      if ( _InterlockedExchange(v29, 0) == 2 )
        std::sys::sync::mutex::futex::Mutex::wake(v26);
      --*(_QWORD *)(v10 + 16);
      goto LABEL_24;
    }
    *(_QWORD *)&v31 = 0x8000000000000000LL;
    *((_QWORD *)&v32 + 1) = v16;
    v17 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
    if ( !v17 )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    v18 = v31;
    v17[1] = v32;
    *v17 = v18;
    *a1 = (__int64)v17;
    a1[1] = (__int64)&anon_f907210316a4f48a9c7de5c93e2a79ff_287_llvm_5503381581801417789;
    if ( (v30 & 1) == 0 )
    {
      v19 = v29;
      if ( (core::sync::atomic::atomic_load(&std::panicking::panic_count::GLOBAL_PANIC_COUNT, 0LL) & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path() )
      {
        core::sync::atomic::atomic_store(v19 + 1, 1LL, 0LL);
      }
    }
    v20 = v29;
    if ( _InterlockedExchange(v29, 0) == 2 )
      std::sys::sync::mutex::futex::Mutex::wake(v20);
    --*(_QWORD *)(v10 + 16);
  }
  return a1;
}
