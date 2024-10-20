__int64 __fastcall uu_comm::LineReader::read_line(__int64 a1, _QWORD *a2)
{
  unsigned __int8 v2; // bp
  char v3; // dl
  volatile __int32 *v4; // r14
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 until; // [rsp+0h] [rbp-38h]
  volatile __int32 *v9; // [rsp+10h] [rbp-28h] BYREF
  char v10; // [rsp+18h] [rbp-20h]

  v2 = *(_BYTE *)(a1 + 48);
  if ( *(_QWORD *)a1 )
  {
    until = std::io::read_until(a1, v2, a2);
  }
  else
  {
    v9 = (volatile __int32 *)std::io::stdio::Stdin::lock(a1 + 8);
    v10 = v3 & 1;
    until = <std::io::stdio::StdinLock as std::io::BufRead>::read_until(&v9, v2, a2);
    if ( (v10 & 1) == 0 )
    {
      v4 = v9;
      if ( 2 * core::sync::atomic::atomic_load(&std::panicking::panic_count::GLOBAL_PANIC_COUNT, 0LL) )
      {
        if ( !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path() )
          core::sync::atomic::atomic_store(v4 + 1, 1LL, 0LL);
      }
    }
    if ( _InterlockedExchange(v9, 0) == 2 )
      std::sys::sync::mutex::futex::Mutex::wake();
  }
  v5 = a2[1];
  if ( !v5 || (v6 = a2[2], v6 < 0) )
    core::panicking::panic_nounwind(anon_69b1e845c8810c9cdb3b50477f5d946f_11_llvm_12964651969104725473, 162LL);
  if ( !v6 || v2 != *(_BYTE *)(v5 + v6 - 1) )
  {
    if ( v6 == *a2 )
    {
      alloc::raw_vec::RawVec<T,A>::grow_one(a2);
      v5 = a2[1];
    }
    *(_BYTE *)(v5 + v6) = v2;
    a2[2] = v6 + 1;
  }
  return until;
}
