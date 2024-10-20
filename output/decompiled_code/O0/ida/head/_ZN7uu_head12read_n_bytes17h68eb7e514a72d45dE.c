__int64 __fastcall uu_head::read_n_bytes(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rbx
  int v5; // ecx
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v11; // [rsp+0h] [rbp-38h] BYREF
  __int64 v12; // [rsp+8h] [rbp-30h] BYREF
  _QWORD v13[5]; // [rsp+10h] [rbp-28h] BYREF

  v13[0] = a1;
  v13[1] = a2;
  v12 = std::io::stdio::stdout();
  v11 = std::io::stdio::Stdout::lock(&v12);
  v2 = <std::sys::pal::unix::kernel_copy::Copier<R,W> as std::sys::pal::unix::kernel_copy::SpecCopy>::copy(v13, &v11);
  v4 = v11;
  v5 = *(_DWORD *)(v11 + 12) - 1;
  *(_DWORD *)(v11 + 12) = v5;
  if ( !v2 )
  {
    v3 = 0LL;
    if ( v5 )
      return v3;
    v6 = 0LL;
    v9 = core::option::Option<T>::map_or(0LL, 0LL, 0LL);
    core::sync::atomic::atomic_store(v4, v9, 0LL);
    v8 = v11;
    if ( _InterlockedExchange((volatile __int32 *)(v11 + 8), 0) != 2 )
      return 0LL;
    goto LABEL_9;
  }
  if ( !v5 )
  {
    v6 = v3;
    v7 = core::option::Option<T>::map_or(0LL, 0LL, v3);
    core::sync::atomic::atomic_store(v4, v7, 0LL);
    v8 = v11;
    if ( _InterlockedExchange((volatile __int32 *)(v11 + 8), 0) != 2 )
      return v6;
LABEL_9:
    std::sys::sync::mutex::futex::Mutex::wake(v8 + 8);
    return v6;
  }
  return v3;
}
