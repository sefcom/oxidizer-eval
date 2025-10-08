long long fish::highlight::highlight::is_veritable_cd(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v1;  // rax
    unsigned int v2;  // r14d
    unsigned int v3;  // r14d
    char v4;  // dl

    if (!(char)a0.equal(a1, "c", 2))
        return 0;
    v1 = fish::complete::complete_wrap_map();
    v3 = v2 & 0xffffff00 | !v1 + 8.get_inner("c", 2);
    core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v1, v4 & 1);
    return v3;
}
