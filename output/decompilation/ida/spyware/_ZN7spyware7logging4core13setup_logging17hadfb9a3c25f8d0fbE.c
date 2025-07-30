char __fastcall spyware::logging::core::setup_logging(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rax
  unsigned __int8 v7; // al
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int128 v13; // [rsp+0h] [rbp-128h] BYREF
  __int128 v14; // [rsp+10h] [rbp-118h]
  __int128 v15; // [rsp+20h] [rbp-108h]
  __int128 v16; // [rsp+30h] [rbp-F8h]
  __int128 v17; // [rsp+40h] [rbp-E8h]
  __int64 v18; // [rsp+50h] [rbp-D8h]
  __int128 v19; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v20; // [rsp+70h] [rbp-B8h]
  __int64 v21; // [rsp+78h] [rbp-B0h]
  char v22; // [rsp+80h] [rbp-A8h]
  __int64 v23; // [rsp+88h] [rbp-A0h]
  char v24; // [rsp+90h] [rbp-98h]
  __int64 v25; // [rsp+98h] [rbp-90h]
  __int64 v26; // [rsp+A0h] [rbp-88h]
  __int64 v27; // [rsp+A8h] [rbp-80h]
  __int64 v28; // [rsp+B0h] [rbp-78h]
  _BYTE v29[8]; // [rsp+C0h] [rbp-68h] BYREF
  __int128 v30; // [rsp+C8h] [rbp-60h]
  __int128 v31; // [rsp+D8h] [rbp-50h]
  __int128 v32; // [rsp+E8h] [rbp-40h]
  __int128 v33; // [rsp+F8h] [rbp-30h]
  __int128 v34; // [rsp+108h] [rbp-20h]
  __int64 v35; // [rsp+118h] [rbp-10h]

  core::sync::atomic::atomic_store(*a1);
  v1 = a1[1] >> 2;
  v21 = 0LL;
  v22 = 0;
  v23 = 0LL;
  v24 = 0;
  v25 = 0LL;
  v26 = 8LL;
  v27 = 0LL;
  v28 = v1;
  v19 = *(_OWORD *)a1;
  v20 = a1[2];
  once_cell::sync::OnceCell<T>::try_insert(v29, &spyware::logging::core::MEMORY_LOGGER_INSTANCE, &v19);
  if ( (_DWORD)v30 == 6 )
  {
    *(_QWORD *)&v13 = 6LL;
  }
  else
  {
    v13 = v30;
    v3 = v35;
    v18 = v35;
    v17 = v34;
    v16 = v33;
    v15 = v32;
    v14 = v31;
    if ( (_QWORD)v30 != 6LL )
    {
      ((void (__fastcall *)(__int128 *, void *, __int64, __int64, __int64, __int64))core::ptr::drop_in_place<core::result::Result<(),spyware::logging::core::MemoryLogger>>)(
        &v13,
        &spyware::logging::core::MEMORY_LOGGER_INSTANCE,
        v2,
        v35,
        v4,
        v5);
      return 2;
    }
  }
  v6 = spyware::logging::core::MemoryLogger::global(
         v29,
         &spyware::logging::core::MEMORY_LOGGER_INSTANCE,
         v2,
         v3,
         v4,
         v5,
         v13,
         *((_QWORD *)&v13 + 1),
         v14,
         *((_QWORD *)&v14 + 1),
         v15);
  if ( !v6 )
    core::option::unwrap_failed(&off_B9BB0);
  v7 = log::set_logger(v6, &off_B9BC8);
  core::result::Result<T,E>::unwrap(v7);
  ((void (__fastcall *)(__int128 *, __int64 (__fastcall **)(), __int64, __int64, __int64, __int64))core::ptr::drop_in_place<core::result::Result<(),spyware::logging::core::MemoryLogger>>)(
    &v13,
    &off_B9BC8,
    v8,
    v9,
    v10,
    v11);
  return 3;
}