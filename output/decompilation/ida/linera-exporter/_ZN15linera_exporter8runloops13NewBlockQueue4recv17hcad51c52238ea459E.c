void __fastcall linera_exporter::runloops::NewBlockQueue::recv(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = a2;
  *(_BYTE *)(a1 + 32) = 0;
}