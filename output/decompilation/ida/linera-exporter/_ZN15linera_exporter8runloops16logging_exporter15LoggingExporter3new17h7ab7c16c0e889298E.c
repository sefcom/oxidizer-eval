__int64 __fastcall linera_exporter::runloops::logging_exporter::LoggingExporter::new(__int64 a1, __int64 a2)
{
  _BYTE v3[24]; // [rsp+0h] [rbp-18h] BYREF

  std::fs::File::create(v3, a1, a2);
  return core::result::Result<T,E>::expect(v3);
}