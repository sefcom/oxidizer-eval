__int64 __fastcall uu_head::read_n_bytes(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rdi
  bool v4; // zf
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v8; // [rsp+0h] [rbp-28h] BYREF
  __int64 v9; // [rsp+8h] [rbp-20h] BYREF
  _QWORD v10[3]; // [rsp+10h] [rbp-18h] BYREF

  v10[0] = a1;
  v10[1] = a2;
  v9 = std::io::stdio::stdout();
  v8 = std::io::stdio::Stdout::lock(&v9);
  if ( <std::sys::pal::unix::kernel_copy::Copier<R,W> as std::sys::pal::unix::kernel_copy::SpecCopy>::copy(v10, &v8) )
  {
    v3 = v8;
    v4 = (*(_DWORD *)(v8 + 12))-- == 1;
    if ( v4 )
    {
      *(_QWORD *)v3 = 0LL;
      if ( _InterlockedExchange((volatile __int32 *)(v3 + 8), 0) == 2 )
      {
        v5 = v2;
        std::sys::sync::mutex::futex::Mutex::wake(v3 + 8);
        return v5;
      }
    }
  }
  else
  {
    v6 = v8;
    v4 = (*(_DWORD *)(v8 + 12))-- == 1;
    if ( v4 )
    {
      *(_QWORD *)v6 = 0LL;
      if ( _InterlockedExchange((volatile __int32 *)(v6 + 8), 0) == 2 )
        std::sys::sync::mutex::futex::Mutex::wake(v6 + 8);
    }
    return 0LL;
  }
  return v2;
}
