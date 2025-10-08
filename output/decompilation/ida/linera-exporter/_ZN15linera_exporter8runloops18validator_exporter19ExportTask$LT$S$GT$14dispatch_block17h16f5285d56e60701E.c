void *__fastcall linera_exporter::runloops::validator_exporter::ExportTask<S>::dispatch_block(
        __int64 a1,
        __int64 a2,
        const void *a3)
{
  void *result; // rax

  *(_QWORD *)(a1 + 664) = a2;
  result = memcpy((void *)a1, a3, 0x298uLL);
  *(_BYTE *)(a1 + 1416) = 0;
  return result;
}