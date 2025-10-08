void __fastcall linera_exporter::runloops::validator_exporter::ExportTask<S>::run(__int64 a1, __int64 a2, __int64 a3)
{
  *(_QWORD *)(a1 + 160) = a2;
  *(_QWORD *)(a1 + 168) = a3;
  *(_BYTE *)(a1 + 178) = 0;
}