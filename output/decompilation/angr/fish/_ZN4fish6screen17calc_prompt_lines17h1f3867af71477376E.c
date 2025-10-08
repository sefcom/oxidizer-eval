long long fish::screen::calc_prompt_lines(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x50]
    unsigned long long v1;  // [bp-0x48]
    char v2;  // [bp-0x40]
    unsigned long long v4;  // rax
    char v5;  // dl

    v0 = a0;
    v1 = a0 + a1 * 4;
    if (!v0.try_fold().eq(1))
        return 1;
    v0.lock();
    v4 = v0.unwrap(&g_14e2078);
    v0.calc_prompt_layout(v4 + 8, a0, a1, 0, 18446744073709551615);
    core::ptr::drop_in_place<core::cell::UnsafeCell<alloc::vec::Vec<&phf::map::Map<&str,&str>>>>(v0, v1);
    core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v4, v5 & 1);
    return *((long long *)&v2) + 1;
}
