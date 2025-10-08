long long fish::reader::commandline_get_state(unsigned long long a0, unsigned int a1)
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rax
    char v3;  // dl

    if (a1)
    {
        v1 = fish::reader::current_data();
        if (v1)
            v1.update_commandline_state();
    }
    v2 = fish::reader::commandline_state_snapshot();
    a0.clone(v2 + 8);
    core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v2, v3 & 1);
    return a0;
}
