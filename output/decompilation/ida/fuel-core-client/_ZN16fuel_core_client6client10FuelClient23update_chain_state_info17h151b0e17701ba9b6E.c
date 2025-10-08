void __fastcall fuel_core_client::client::FuelClient::update_chain_state_info(__int64 a1, _DWORD *a2)
{
  int v4; // ebp
  int v5; // r12d
  __int64 v6; // rdi
  __int64 v7; // rsi
  int v8; // r12d
  __int64 v9; // rdi
  __int64 v10; // rsi
  volatile signed __int64 *v11; // rsi
  unsigned int v12; // ebx
  __int64 v13; // rax
  char v14; // dl
  unsigned __int8 v15; // dl
  __int64 v16; // [rsp+0h] [rbp-48h] BYREF
  __int64 v17; // [rsp+8h] [rbp-40h]
  unsigned int v18; // [rsp+10h] [rbp-38h]
  volatile signed __int64 *v19; // [rsp+18h] [rbp-30h] BYREF

  v4 = a2[12];
  if ( v4 != 2 )
  {
    if ( a2[16] == 1 )
    {
      v5 = a2[17];
      std::sync::poison::mutex::Mutex<T>::lock(&v16, *(_QWORD *)(a1 + 120) + 16LL);
      if ( v16 == 1 )
      {
        core::ptr::drop_in_place<core::result::Result<std::sync::poison::mutex::MutexGuard<core::option::Option<u32>>,std::sync::poison::PoisonError<std::sync::poison::mutex::MutexGuard<core::option::Option<u32>>>>>(&v16);
      }
      else
      {
        v6 = v17;
        v7 = v18;
        *(_DWORD *)(v17 + 8) = 1;
        *(_DWORD *)(v6 + 12) = v5;
        core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<core::option::Option<fuel_types::numeric_types::BlockHeight>>>(
          v6,
          v7);
      }
    }
    if ( a2[18] == 1 )
    {
      v8 = a2[19];
      std::sync::poison::mutex::Mutex<T>::lock(&v16, *(_QWORD *)(a1 + 128) + 16LL);
      if ( v16 == 1 )
      {
        core::ptr::drop_in_place<core::result::Result<std::sync::poison::mutex::MutexGuard<core::option::Option<u32>>,std::sync::poison::PoisonError<std::sync::poison::mutex::MutexGuard<core::option::Option<u32>>>>>(&v16);
      }
      else
      {
        v9 = v17;
        v10 = v18;
        *(_DWORD *)(v17 + 8) = 1;
        *(_DWORD *)(v9 + 12) = v8;
        core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<core::option::Option<fuel_types::numeric_types::BlockHeight>>>(
          v9,
          v10);
      }
    }
  }
  if ( (*(_BYTE *)(a1 + 88) & 1) == 0 )
  {
    v11 = *(volatile signed __int64 **)(a1 + 96);
    if ( _InterlockedIncrement64(v11) <= 0 )
      BUG();
    v19 = v11;
    if ( v4 != 2 && a2[14] == 1 )
    {
      v12 = a2[15];
      std::sync::poison::mutex::Mutex<T>::lock(&v16, v11 + 2);
      v13 = core::result::Result<T,E>::expect(&v16);
      v15 = v14 & 1;
      if ( *(_DWORD *)(v13 + 8) != 1 || v12 >= *(_DWORD *)(v13 + 12) )
      {
        *(_DWORD *)(v13 + 8) = 1;
        *(_DWORD *)(v13 + 12) = v12;
      }
      core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<core::option::Option<fuel_types::numeric_types::BlockHeight>>>(
        v13,
        v15);
    }
    core::ptr::drop_in_place<alloc::sync::Arc<std::sync::poison::mutex::Mutex<core::option::Option<fuel_types::numeric_types::BlockHeight>>>>(&v19);
  }
}