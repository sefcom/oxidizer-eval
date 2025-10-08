__int64 __fastcall fd::walk::Batch::lock(__int64 a1)
{
  _BYTE v2[32]; // [rsp+8h] [rbp-20h] BYREF

  std::sync::poison::mutex::Mutex<T>::lock(v2, a1 + 16);
  return core::result::Result<T,E>::unwrap(v2);
}