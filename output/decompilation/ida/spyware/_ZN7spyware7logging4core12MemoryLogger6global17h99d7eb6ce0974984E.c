__int64 spyware::logging::core::MemoryLogger::global()
{
  return once_cell::sync::OnceCell<T>::get(&spyware::logging::core::MEMORY_LOGGER_INSTANCE);
}