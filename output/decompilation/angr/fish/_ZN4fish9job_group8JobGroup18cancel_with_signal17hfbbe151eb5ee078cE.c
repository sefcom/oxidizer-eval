long long fish::job_group::JobGroup::cancel_with_signal(unsigned long a0, unsigned long long a1)
{
    return core::sync::atomic::atomic_compare_exchange(a0 + 108, a1);
}
