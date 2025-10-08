long long fish::job_group::JobGroup::get_cancel_signal(unsigned long a0)
{
    unsigned long long v1;  // rax

    v1 = core::sync::atomic::atomic_load(a0 + 108);
    if (!(unsigned int)v1)
        return v1;
    v1 & 4294967295.new();
    return v1 & 4294967295;
}
