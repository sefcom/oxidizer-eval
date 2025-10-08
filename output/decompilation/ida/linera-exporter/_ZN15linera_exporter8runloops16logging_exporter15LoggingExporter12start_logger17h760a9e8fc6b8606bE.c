void *__fastcall linera_exporter::runloops::logging_exporter::LoggingExporter::start_logger(
        __int64 a1,
        int a2,
        const void *a3)
{
  void *result; // rax

  *(_DWORD *)(a1 + 600) = a2;
  result = memcpy((void *)a1, a3, 0x110uLL);
  *(_BYTE *)(a1 + 608) = 0;
  return result;
}