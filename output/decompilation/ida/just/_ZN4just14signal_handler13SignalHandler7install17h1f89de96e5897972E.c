__int64 __fastcall just::signal_handler::SignalHandler::install(__int64 a1, char a2)
{
  __int64 v2; // r14
  char v3; // dl
  unsigned __int8 v4; // bp

  v2 = just::signal_handler::SignalHandler::instance(a1);
  v4 = v3 & 1;
  *(_BYTE *)(v2 + 36) = a2;
  just::platform::unix::<impl just::platform_interface::PlatformInterface for just::platform::Platform>::install_signal_handler(a1);
  core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<just::signal_handler::SignalHandler>>(v2, v4);
  return a1;
}