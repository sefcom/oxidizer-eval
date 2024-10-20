__int64 __fastcall uu_paste::InputSource::read_until(_QWORD *a1, _QWORD *a2, unsigned __int8 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // r14
  _OWORD *v7; // rax
  __int128 v8; // xmm0
  __int64 v9; // r12
  unsigned __int64 v10; // rax
  char v13; // dl
  __int64 v14; // rax
  __int64 v15; // rdx
  _OWORD *v16; // rax
  __int128 v17; // xmm0
  __int64 v18; // rbx
  _OWORD *v19; // rax
  __int128 v20; // xmm0
  __int64 v21; // r15
  char v22; // [rsp+7h] [rbp-A1h] BYREF
  __int64 v23; // [rsp+8h] [rbp-A0h] BYREF
  char v24; // [rsp+10h] [rbp-98h]
  __int128 v25; // [rsp+18h] [rbp-90h] BYREF
  __int128 v26; // [rsp+28h] [rbp-80h]
  __int64 v27; // [rsp+38h] [rbp-70h]
  _QWORD v28[2]; // [rsp+48h] [rbp-60h] BYREF
  __int128 v29; // [rsp+58h] [rbp-50h] BYREF
  __int128 v30; // [rsp+68h] [rbp-40h]

  if ( *a2 )
  {
    result = std::io::read_until(a2, a3, a4);
    v6 = v5;
    if ( result )
    {
      *(_QWORD *)&v25 = 0x8000000000000000LL;
      *((_QWORD *)&v26 + 1) = v5;
      v7 = (_OWORD *)_rust_alloc(32LL, 8LL);
      if ( !v7 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      v8 = v25;
      v7[1] = v26;
      *v7 = v8;
      *a1 = v7;
      result = (__int64)&anon_9b9ba72dabd212696498d24b7f543cb0_73_llvm_3928628070634382108;
LABEL_14:
      a1[1] = result;
      return result;
    }
    goto LABEL_19;
  }
  v9 = a2[1];
  v10 = *(_QWORD *)(v9 + 16);
  if ( v10 >= 0x7FFFFFFFFFFFFFFFLL )
  {
    v28[0] = &v22;
    v28[1] = <core::cell::BorrowError as core::fmt::Display>::fmt;
    *(_QWORD *)&v25 = &anon_a15cc2d3895659decb08e547ee58be7a_73_llvm_5555830998822834654;
    *((_QWORD *)&v25 + 1) = 1LL;
    v27 = 0LL;
    *(_QWORD *)&v26 = v28;
    *((_QWORD *)&v26 + 1) = 1LL;
    alloc::fmt::format::format_inner(&v29, &v25);
    DWORD2(v30) = 1;
    v19 = (_OWORD *)_rust_alloc(32LL, 8LL);
    if ( !v19 )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    v20 = v29;
    v19[1] = v30;
    *v19 = v20;
    *a1 = v19;
    result = (__int64)&off_DD300;
    goto LABEL_14;
  }
  *(_QWORD *)(v9 + 16) = v10 + 1;
  v23 = std::io::stdio::Stdin::lock(v9 + 24);
  v24 = v13 & 1;
  v14 = <std::io::stdio::StdinLock as std::io::BufRead>::read_until(&v23, a3, a4);
  v6 = v15;
  if ( !v14 )
  {
    v21 = v23;
    if ( !v24
      && (std::panicking::panic_count::GLOBAL_PANIC_COUNT & 0x7FFFFFFFFFFFFFFFLL) != 0
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path() )
    {
      *(_BYTE *)(v21 + 4) = 1;
    }
    result = (unsigned int)_InterlockedExchange((volatile __int32 *)v21, 0);
    if ( (_DWORD)result == 2 )
      result = std::sys::sync::mutex::futex::Mutex::wake(v21);
    --*(_QWORD *)(v9 + 16);
LABEL_19:
    a1[1] = v6;
    *a1 = 0LL;
    return result;
  }
  *(_QWORD *)&v25 = 0x8000000000000000LL;
  *((_QWORD *)&v26 + 1) = v15;
  v16 = (_OWORD *)_rust_alloc(32LL, 8LL);
  if ( !v16 )
    alloc::alloc::handle_alloc_error(8LL, 32LL);
  v17 = v25;
  v16[1] = v26;
  *v16 = v17;
  *a1 = v16;
  a1[1] = &anon_9b9ba72dabd212696498d24b7f543cb0_73_llvm_3928628070634382108;
  v18 = v23;
  if ( !v24
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path() )
  {
    *(_BYTE *)(v18 + 4) = 1;
  }
  result = (unsigned int)_InterlockedExchange((volatile __int32 *)v18, 0);
  if ( (_DWORD)result == 2 )
    result = std::sys::sync::mutex::futex::Mutex::wake(v18);
  --*(_QWORD *)(v9 + 16);
  return result;
}
