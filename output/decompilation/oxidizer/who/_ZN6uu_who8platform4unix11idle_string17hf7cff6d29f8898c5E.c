fn uu_who::platform::unix::idle_string(a0: u64, a1: u64) -> long long {
    return std::thread::local::LocalKey<T>::with(a0, 0, a1);
}
