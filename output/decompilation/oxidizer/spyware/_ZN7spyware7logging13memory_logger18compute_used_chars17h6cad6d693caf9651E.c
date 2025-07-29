fn spyware::logging::memory_logger::compute_used_chars(a0: void*, a1: u64) -> long long {
    return <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(a0, a0 + a1 * 24);
}
