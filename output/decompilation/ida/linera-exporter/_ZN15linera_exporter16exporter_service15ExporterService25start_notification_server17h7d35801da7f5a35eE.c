void __fastcall linera_exporter::exporter_service::ExporterService::start_notification_server(
        __int64 a1,
        __int64 a2,
        __int16 a3,
        __int64 a4)
{
  *(_QWORD *)(a1 + 240) = a2;
  *(_WORD *)(a1 + 256) = a3;
  *(_QWORD *)(a1 + 248) = a4;
  *(_BYTE *)(a1 + 261) = 0;
}