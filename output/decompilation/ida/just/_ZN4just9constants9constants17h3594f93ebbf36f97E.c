// attributes: thunk
__int64 just::constants::constants(void)
{
  return std::sync::once_lock::OnceLock<T>::get_or_try_init();
}