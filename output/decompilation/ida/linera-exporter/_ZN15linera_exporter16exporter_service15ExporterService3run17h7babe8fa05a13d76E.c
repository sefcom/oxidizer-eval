void __fastcall linera_exporter::exporter_service::ExporterService::run(__int64 a1, __int64 a2, __int64 a3, __int16 a4)
{
  *(_QWORD *)(a1 + 2896) = a2;
  *(_QWORD *)(a1 + 2904) = a3;
  *(_WORD *)(a1 + 2912) = a4;
  *(_BYTE *)(a1 + 2916) = 0;
}