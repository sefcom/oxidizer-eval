undefined1 * __rustcall uu_dd::Source::stdin_as_file(void)

{
  if (std::io::stdio::stdin::INSTANCE._48_4_ == 4) {
    return std::io::stdio::stdin::INSTANCE;
  }
  std::sync::once_lock::OnceLock<T>::initialize();
  return std::io::stdio::stdin::INSTANCE;
}