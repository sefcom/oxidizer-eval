_OWORD *__fastcall uu_date::set_system_datetime(__int64 a1)
{
  int v1; // esi
  int v2; // edx
  int v3; // ecx
  unsigned int v4; // ecx
  int v5; // eax
  __int64 v6; // rcx
  __syscall_slong_t v7; // rdi
  _OWORD *v8; // rbx
  unsigned __int64 v9; // rbx
  void *v10; // rax
  _OWORD *v11; // rax
  __int128 v13; // [rsp+8h] [rbp-40h]
  __int128 v14; // [rsp+18h] [rbp-30h]
  struct timespec tp; // [rsp+28h] [rbp-20h] BYREF

  v1 = *(int *)a1 >> 13;
  v2 = v1 - 1;
  v3 = 0;
  if ( v1 <= 0 )
  {
    v4 = (1 - v1) / 0x190u + 1;
    v2 += 400 * v4;
    v3 = -146097 * v4;
  }
  v5 = v3 + ((*(_DWORD *)a1 >> 4) & 0x1FF);
  v6 = *(unsigned int *)(a1 + 4);
  v7 = *(unsigned int *)(a1 + 8);
  tp.tv_sec = v6 + 86400LL * (((v2 / 100) >> 2) + ((1461 * v2) >> 2) + v5 - v2 / 100 - 719163);
  tp.tv_nsec = v7;
  v8 = 0LL;
  if ( clock_settime(0, &tp) )
  {
    v9 = ((unsigned __int64)(unsigned int)std::sys::pal::unix::os::errno() << 32) | 2;
    v10 = (void *)_rust_alloc(15LL, 1LL);
    if ( !v10 )
      alloc::raw_vec::handle_error(1LL, 15LL);
    qmemcpy(v10, "cannot set date", 15);
    *(_QWORD *)&v13 = 15LL;
    *((_QWORD *)&v13 + 1) = v10;
    *(_QWORD *)&v14 = 15LL;
    *((_QWORD *)&v14 + 1) = v9;
    v11 = (_OWORD *)_rust_alloc(32LL, 8LL);
    if ( !v11 )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    v8 = v11;
    v11[1] = v14;
    *v11 = v13;
  }
  return v8;
}
