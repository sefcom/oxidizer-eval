void __fastcall linera_storage_server::StorageServer::list_all(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = a2;
  *(_BYTE *)(a1 + 72) = 0;
}