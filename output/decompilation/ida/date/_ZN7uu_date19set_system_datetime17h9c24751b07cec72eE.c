__int64 __fastcall uu_date::set_system_datetime(unsigned int *a1)
{
  int v1; // eax
  __syscall_slong_t v2; // rdx
  __int64 v3; // rbx
  __int64 v4; // rax
  struct timespec v6; // [rsp+0h] [rbp-18h] BYREF

  v1 = chrono::naive::date::NaiveDate::num_days_from_ce(*a1);
  v2 = a1[2];
  v6.tv_sec = a1[1] + 86400LL * (v1 - 719163);
  v6.tv_nsec = v2;
  v3 = 0LL;
  if ( clock_settime(0, &v6) )
  {
    v4 = std::sys::pal::unix::os::errno();
    return <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context((v4 << 32) + 2);
  }
  return v3;
}
