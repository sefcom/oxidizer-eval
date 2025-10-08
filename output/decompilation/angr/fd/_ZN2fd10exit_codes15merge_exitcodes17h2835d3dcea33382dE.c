long long fd::exit_codes::merge_exitcodes(unsigned long long a0)
{
    char v0;  // [bp-0x28]
    unsigned long v2;  // rbx

    v0.from_residual(a0);
    v2 = v0.any();
    core::ptr::drop_in_place<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<std::thread::scoped::ScopedJoinHandle<fd::exit_codes::ExitCode>>,fd::walk::WorkerState::receive::{{closure}}::{{closure}}>>(&v0);
    return (unsigned int)v2 & 0xffffff00 | (char)v2 * 2 + 2;
}
