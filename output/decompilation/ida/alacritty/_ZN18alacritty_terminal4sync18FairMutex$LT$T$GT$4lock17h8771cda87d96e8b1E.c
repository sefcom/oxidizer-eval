__int64 __fastcall alacritty_terminal::sync::FairMutex<T>::lock(__int64 a1)
{
  <parking_lot::raw_mutex::RawMutex as lock_api::mutex::RawMutex>::lock(a1 + 1776);
  <parking_lot::raw_mutex::RawMutex as lock_api::mutex::RawMutex>::lock(a1);
  core::ptr::drop_in_place<lock_api::mutex::MutexGuard<parking_lot::raw_mutex::RawMutex,alacritty_terminal::term::Term<alacritty::event::EventProxy>>>(a1 + 1776);
  return a1;
}