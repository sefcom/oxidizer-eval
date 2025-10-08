__int64 __fastcall fd::walk::WorkerState::receive(
        __m128i *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v7; // rax
  __int64 v9; // rax
  unsigned int v10; // ebx
  __int64 v11; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v12; // [rsp+8h] [rbp-E0h] BYREF
  __int64 v13; // [rsp+10h] [rbp-D8h]
  __int64 v14; // [rsp+18h] [rbp-D0h] BYREF
  _QWORD *v15; // [rsp+20h] [rbp-C8h]
  __int8 *v16; // [rsp+28h] [rbp-C0h]
  __int64 *v17; // [rsp+30h] [rbp-B8h]
  __int64 v18; // [rsp+48h] [rbp-A0h]
  __m128i v19[4]; // [rsp+A0h] [rbp-48h] BYREF

  v12 = a2;
  v13 = a3;
  v7 = a1[28].m128i_i64[1];
  if ( v7 )
  {
    if ( *(_BYTE *)(v7 + 40) )
    {
      v14 = a2;
      v15 = (_QWORD *)a3;
      v16 = 0LL;
      v18 = 0LL;
      return fd::exec::job::batch((__int64)&v14, *(_QWORD *)(v7 + 24), *(_QWORD *)(v7 + 32), a1);
    }
    LODWORD(v11) = 0;
    BYTE4(v11) = 0;
    v14 = (__int64)a1;
    v15 = &v12;
    v16 = &a1[28].m128i_i8[8];
    v17 = &v11;
    v10 = ((__int64 (__fastcall *)(__int64 *, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))std::thread::scoped::scope)(
            &v14,
            a2,
            a3,
            a4,
            a5,
            a6,
            v11,
            v12,
            v13);
    core::ptr::drop_in_place<crossbeam_channel::channel::Receiver<fd::walk::Batch>>(&v12);
  }
  else
  {
    v14 = std::io::stdio::stdout();
    v9 = std::io::stdio::Stdout::lock(&v14);
    std::io::buffered::bufwriter::BufWriter<W>::with_capacity(v19, v9);
    fd::walk::ReceiverBuffer<W>::new((__int64)&v14, a1, a2, a3, v19);
    v10 = fd::walk::ReceiverBuffer<W>::process((__int64)&v14);
    core::ptr::drop_in_place<fd::walk::ReceiverBuffer<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>>(&v14);
  }
  return v10;
}