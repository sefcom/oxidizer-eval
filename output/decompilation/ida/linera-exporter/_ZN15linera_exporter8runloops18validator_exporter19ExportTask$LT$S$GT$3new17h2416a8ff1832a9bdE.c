void *__fastcall linera_exporter::runloops::validator_exporter::ExportTask<S>::new(
        _QWORD *a1,
        const void *a2,
        const void *a3,
        __int64 a4)
{
  void *result; // rax

  memcpy(a1, a2, 0xD8uLL);
  result = memcpy(a1 + 27, a3, 0x110uLL);
  a1[61] = a4;
  return result;
}