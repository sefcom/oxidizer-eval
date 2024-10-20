_OWORD *__fastcall uu_date::set_system_datetime(_DWORD *a1)
{
  __time_t v1; // rdx
  __syscall_slong_t v2; // rax
  _OWORD *v3; // rbx
  unsigned __int64 v4; // rbx
  __int64 v5; // r14
  void *v6; // r15
  _OWORD *v7; // rax
  __int128 v8; // xmm0
  __int128 v10; // [rsp+8h] [rbp-50h] BYREF
  __int128 v11; // [rsp+18h] [rbp-40h]
  unsigned __int64 v12; // [rsp+28h] [rbp-30h]
  struct timespec tp; // [rsp+30h] [rbp-28h] BYREF

  LODWORD(v10) = *a1;
  v1 = 86400LL * (int)chrono::naive::date::NaiveDate::num_days_from_ce(&v10) + (unsigned int)a1[1] - 0xE77934880LL;
  v2 = (unsigned int)a1[2];
  tp.tv_sec = v1;
  tp.tv_nsec = v2;
  v3 = 0LL;
  if ( clock_settime(0, &tp) )
  {
    v4 = ((unsigned __int64)(unsigned int)std::sys::pal::unix::os::errno() << 32) | 2;
    v12 = v4;
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v10, 15LL, 0LL);
    v5 = *((_QWORD *)&v10 + 1);
    if ( (_QWORD)v10 )
      alloc::raw_vec::handle_error(*((_QWORD *)&v10 + 1), v11);
    v6 = (void *)v11;
    core::intrinsics::copy_nonoverlapping::precondition_check(&unk_663E5, v11, 1LL, 1LL, 15LL);
    qmemcpy(v6, "cannot set date", 15);
    *(_QWORD *)&v10 = v5;
    *((_QWORD *)&v10 + 1) = v6;
    *(_QWORD *)&v11 = 15LL;
    *((_QWORD *)&v11 + 1) = v4;
    v7 = (_OWORD *)_rust_alloc(32LL, 8LL);
    if ( !v7 )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    v3 = v7;
    v8 = v10;
    v7[1] = v11;
    *v7 = v8;
  }
  return v3;
}
