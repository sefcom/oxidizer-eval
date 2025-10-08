__int64 __fastcall linera_exporter::runloops::NewBlockQueue::push_back(__int64 a1, __int64 a2)
{
  _BYTE v3[88]; // [rsp+0h] [rbp-58h] BYREF

  tokio::sync::mpsc::unbounded::UnboundedSender<T>::send(v3, a1, a2);
  return core::result::Result<T,E>::expect(v3, &off_13F1D70);
}