void __fastcall linera_indexer::service::Service::get_chains(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = a2;
  *(_BYTE *)(a1 + 744) = 0;
}