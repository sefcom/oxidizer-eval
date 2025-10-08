__int64 __fastcall alacritty::logging::extra_log_targets(__int64 a1)
{
  return *(_QWORD *)(std::sync::once_lock::OnceLock<T>::get_or_try_init(a1) + 8);
}