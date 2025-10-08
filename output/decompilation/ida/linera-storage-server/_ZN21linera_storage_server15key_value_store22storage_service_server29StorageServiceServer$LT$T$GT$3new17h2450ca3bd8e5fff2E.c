__int64 __fastcall linera_storage_server::key_value_store::storage_service_server::StorageServiceServer<T>::new(
        __int64 a1,
        __int128 *a2)
{
  __int128 v2; // xmm1
  __int64 v3; // rax
  _QWORD v5[2]; // [rsp+0h] [rbp-38h] BYREF
  __int128 v6; // [rsp+10h] [rbp-28h]
  __int128 v7; // [rsp+20h] [rbp-18h]

  v5[0] = 1LL;
  v5[1] = 1LL;
  v2 = a2[1];
  v6 = *a2;
  v7 = v2;
  v3 = ((__int64 (__fastcall *)(_QWORD *))alloc::boxed::Box<T>::new)(v5);
  return linera_storage_server::key_value_store::storage_service_server::StorageServiceServer<T>::from_arc(a1, v3);
}