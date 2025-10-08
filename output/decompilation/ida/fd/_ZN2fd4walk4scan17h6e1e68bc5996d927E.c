__int64 __fastcall fd::walk::scan(__int64 a1, __int64 a2, __int64 a3, __int64 a4, const void *a5)
{
  char dest[576]; // [rsp+8h] [rbp-240h] BYREF

  fd::walk::WorkerState::new(dest, a4, a5);
  fd::walk::WorkerState::scan(a1, (__int64)dest, a2, a3);
  return core::ptr::drop_in_place<fd::walk::WorkerState>(dest);
}