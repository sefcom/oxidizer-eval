__int64 __fastcall uu_ls::display_group(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r12d
  volatile __int32 *v4; // r14
  char v5; // bp
  __int64 v6; // rax
  int v8; // [rsp+8h] [rbp-A0h] BYREF
  int v9; // [rsp+Ch] [rbp-9Ch] BYREF
  _BYTE v10[24]; // [rsp+10h] [rbp-98h] BYREF
  __int64 v11; // [rsp+28h] [rbp-80h]
  volatile __int32 *v12; // [rsp+30h] [rbp-78h] BYREF
  char v13; // [rsp+38h] [rbp-70h]
  volatile __int32 *v14; // [rsp+40h] [rbp-68h] BYREF
  __int128 v15; // [rsp+48h] [rbp-60h]
  __int64 v16; // [rsp+58h] [rbp-50h]
  _BYTE *v17; // [rsp+60h] [rbp-48h]
  __int64 (__fastcall **v18)(); // [rsp+68h] [rbp-40h]
  __int64 v19; // [rsp+70h] [rbp-38h]
  char v20; // [rsp+78h] [rbp-30h]

  v3 = *(_DWORD *)(a2 + 64);
  if ( (*(_BYTE *)(a3 + 227) & 1) != 0 )
  {
    v8 = *(_DWORD *)(a2 + 64);
    *(_QWORD *)v10 = 0LL;
    *(_QWORD *)&v10[8] = 1LL;
    *(_QWORD *)&v10[16] = 0LL;
    v19 = 32LL;
    v20 = 3;
    v14 = 0LL;
    *((_QWORD *)&v15 + 1) = 0LL;
    v17 = v10;
    v18 = &anon_af4f526f2bb93cc55be513d58d93e125_7_llvm_17079165128840404064;
    if ( (unsigned __int8)core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt(&v8, &v14) )
      core::result::unwrap_failed(
        anon_af4f526f2bb93cc55be513d58d93e125_9_llvm_17079165128840404064,
        55LL,
        &v12,
        &anon_21d6120f1bf3ae8083dd7bd30f6eb60d_17_llvm_13186119769495240950,
        &anon_af4f526f2bb93cc55be513d58d93e125_11_llvm_17079165128840404064);
    *(_QWORD *)(a1 + 16) = *(_QWORD *)&v10[16];
    *(_OWORD *)a1 = *(_OWORD *)v10;
  }
  else
  {
    v9 = *(_DWORD *)(a2 + 64);
    v4 = (volatile __int32 *)once_cell::sync::OnceCell<T>::get_or_try_init(
                               &uu_ls::cached_gid2grp::GID_CACHE,
                               &uu_ls::cached_gid2grp::GID_CACHE);
    if ( (unsigned int)core::sync::atomic::atomic_compare_exchange(v4, 0LL, 1LL, 2LL, 0LL) )
      std::sys::sync::mutex::futex::Mutex::lock_contended(v4);
    v5 = 0;
    if ( 2 * core::sync::atomic::atomic_load(&std::panicking::panic_count::GLOBAL_PANIC_COUNT, 0LL) )
      v5 = std::panicking::panic_count::is_zero_slow_path() ^ 1;
    if ( (unsigned __int8)core::sync::atomic::atomic_load(v4 + 1, 0LL) )
    {
      v14 = v4;
      LOBYTE(v15) = v5;
      core::result::unwrap_failed(aCalledResultUn_2, 43LL, &v14, &off_1FE5F8, &off_1FF7B8);
    }
    v12 = v4;
    v13 = v5;
    hashbrown::rustc_entry::<impl hashbrown::map::HashMap<K,V,S,A>>::rustc_entry(&v14, v4 + 2, v3);
    *(_OWORD *)&v10[8] = v15;
    v11 = v16;
    *(_QWORD *)v10 = v14 != 0LL;
    v6 = std::collections::hash::map::Entry<K,V>::or_insert_with(v10, &v9);
    <alloc::string::String as core::clone::Clone>::clone(a1, v6);
    if ( !v5
      && (core::sync::atomic::atomic_load(&std::panicking::panic_count::GLOBAL_PANIC_COUNT, 0LL) & 0x7FFFFFFFFFFFFFFFLL) != 0
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path() )
    {
      core::sync::atomic::atomic_store(v4 + 1, 1LL, 0LL);
    }
    if ( _InterlockedExchange(v4, 0) == 2 )
      std::sys::sync::mutex::futex::Mutex::wake(v4);
  }
  return a1;
}
