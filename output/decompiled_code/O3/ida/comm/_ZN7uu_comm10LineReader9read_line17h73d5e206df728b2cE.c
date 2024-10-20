__int64 __fastcall uu_comm::LineReader::read_line(__int64 a1, _QWORD *a2)
{
  unsigned __int8 v2; // bp
  __int64 until; // r14
  char v4; // dl
  volatile __int32 *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // r12
  __int64 v9; // r12
  __int64 v10; // [rsp+0h] [rbp-38h] BYREF
  char v11; // [rsp+8h] [rbp-30h]

  v2 = *(_BYTE *)(a1 + 48);
  if ( *(_QWORD *)a1 )
  {
    until = std::io::read_until(a1, v2, a2);
  }
  else
  {
    v10 = std::io::stdio::Stdin::lock(a1 + 8);
    v11 = v4 & 1;
    until = <std::io::stdio::StdinLock as std::io::BufRead>::read_until(&v10, v2, a2);
    v5 = (volatile __int32 *)v10;
    if ( !v11 )
    {
      if ( 2LL * std::panicking::panic_count::GLOBAL_PANIC_COUNT )
      {
        v9 = v10;
        if ( !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path() )
          *(_BYTE *)(v9 + 4) = 1;
      }
    }
    if ( _InterlockedExchange(v5, 0) == 2 )
      std::sys::sync::mutex::futex::Mutex::wake();
  }
  v6 = a2[1];
  v7 = a2[2];
  if ( !v7 || v2 != *(_BYTE *)(v6 + v7 - 1) )
  {
    if ( v7 == *a2 )
    {
      alloc::raw_vec::RawVec<T,A>::grow_one(a2);
      v6 = a2[1];
    }
    *(_BYTE *)(v6 + v7) = v2;
    a2[2] = v7 + 1;
  }
  return until;
}
