void __fastcall linera_exporter::runloops::indexer::indexer_exporter::AcknowledgementTask::run(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = a2;
  *(_BYTE *)(a1 + 40) = 0;
}