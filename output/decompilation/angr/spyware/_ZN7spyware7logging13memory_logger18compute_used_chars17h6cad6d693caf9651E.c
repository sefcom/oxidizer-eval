long long spyware::logging::memory_logger::compute_used_chars(unsigned long long a0, unsigned long a1)
{
    return a0.fold(a0 + a1 * 24);
}
