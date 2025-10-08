void *__fastcall linera_exporter::runloops::validator_exporter::TaskQueue<S>::new(
        void *dest,
        __int64 a2,
        __int64 a3,
        const void *a4)
{
  __int64 v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // r13
  void *result; // rax

  v6 = tokio::sync::mpsc::bounded::channel(a2);
  v8 = v7;
  result = memcpy(dest, a4, 0x110uLL);
  *((_QWORD *)dest + 34) = v6;
  *((_QWORD *)dest + 35) = a2;
  *((_QWORD *)dest + 36) = a3;
  *((_QWORD *)dest + 37) = v8;
  return result;
}