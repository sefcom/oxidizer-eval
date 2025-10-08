void *__fastcall linera_exporter::runloops::indexer::indexer_exporter::AcknowledgementTask::new(
        _QWORD *a1,
        const void *a2,
        __int64 a3)
{
  void *result; // rax

  result = memcpy(a1, a2, 0xE8uLL);
  a1[29] = a3;
  return result;
}