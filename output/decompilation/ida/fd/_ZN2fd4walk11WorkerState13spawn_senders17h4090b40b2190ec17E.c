__int64 __fastcall fd::walk::WorkerState::spawn_senders(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD v5[3]; // [rsp+0h] [rbp-18h] BYREF

  v5[0] = a3;
  v5[1] = a4;
  ignore::walk::WalkParallel::run(a2, a1, v5);
  return core::ptr::drop_in_place<crossbeam_channel::channel::Sender<fd::walk::Batch>>(v5);
}