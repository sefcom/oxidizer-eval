fn spyware::logging::core::MemoryLogger::global() -> long long {
    return once_cell::sync::OnceCell<T>::get(&_ZN7spyware7logging4core22MEMORY_LOGGER_INSTANCE17h716e29c46813bbfaE);
}
