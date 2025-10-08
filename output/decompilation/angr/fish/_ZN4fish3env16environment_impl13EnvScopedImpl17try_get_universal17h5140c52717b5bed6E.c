long long fish::env::environment_impl::EnvScopedImpl::try_get_universal(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v1;  // rax
    char v2;  // dl

    v1 = fish::env::environment_impl::uvars();
    a0.get(v1 + 8, a1, a2);
    return core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v1, v2 & 1);
}
