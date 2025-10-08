__int64 __fastcall fuel_core_client::client::FuelClient::required_block_height(__int64 a1)
{
  unsigned int v2; // ebp
  _BYTE v3[8]; // [rsp+0h] [rbp-28h] BYREF
  __int64 v4; // [rsp+8h] [rbp-20h]
  unsigned int v5; // [rsp+10h] [rbp-18h]

  if ( *(_DWORD *)(a1 + 88) == 1 )
    return *(unsigned int *)(a1 + 92);
  std::sync::poison::mutex::Mutex<T>::lock(v3, *(_QWORD *)(a1 + 96) + 16LL);
  if ( (v3[0] & 1) != 0 )
  {
    core::ptr::drop_in_place<core::result::Result<std::sync::poison::mutex::MutexGuard<core::option::Option<fuel_types::numeric_types::BlockHeight>>,std::sync::poison::PoisonError<std::sync::poison::mutex::MutexGuard<core::option::Option<fuel_types::numeric_types::BlockHeight>>>>>(v3);
    return 0LL;
  }
  else
  {
    v2 = *(_DWORD *)(v4 + 8);
    core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<core::option::Option<fuel_types::numeric_types::BlockHeight>>>(
      v4,
      v5);
    return v2;
  }
}