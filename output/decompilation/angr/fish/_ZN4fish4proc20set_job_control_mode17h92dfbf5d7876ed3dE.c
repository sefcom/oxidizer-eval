long long fish::proc::set_job_control_mode(unsigned int a0)
{
    unsigned long v1;  // rbx
    unsigned long long v2;  // rax

    v1 = a0;
    v2 = (unsigned long long)core::sync::atomic::atomic_store(&_ZN4fish4proc16JOB_CONTROL_MODE17ha8502fb878b4db01E, v1 & 4294967295, 0);
    if (!(char)v1)
        return signal(22, 0x1);
    return v2;
}
