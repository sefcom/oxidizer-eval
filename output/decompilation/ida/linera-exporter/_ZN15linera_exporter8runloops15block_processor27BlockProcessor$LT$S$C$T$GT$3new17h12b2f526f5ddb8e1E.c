void *__fastcall linera_exporter::runloops::block_processor::BlockProcessor<S,T>::new(
        char *dest,
        const void *a2,
        const void *a3,
        __int64 a4,
        __int64 a5,
        char a6)
{
  void *result; // rax

  memcpy(dest + 1296, a2, 0x188uLL);
  result = memcpy(dest, a3, 0x510uLL);
  *((_QWORD *)dest + 211) = a4;
  *((_QWORD *)dest + 212) = a5;
  dest[1704] = a6;
  return result;
}