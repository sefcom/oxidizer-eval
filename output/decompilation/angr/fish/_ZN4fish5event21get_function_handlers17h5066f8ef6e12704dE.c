long long fish::event::get_function_handlers(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x40], Other Possible Types: unsigned long
    unsigned long long v1;  // [bp-0x38]
    char *v2;  // [bp-0x30]
    unsigned long long v3;  // [bp-0x28]
    unsigned long long v4;  // [bp-0x20]
    unsigned long long v6[4];  // rax
    unsigned long long v7[4];  // r14
    char v8;  // dl

    v3 = a1;
    v4 = a2;
    v0.lock();
    v6 = v0.expect(&g_14d7828);
    v7 = v6;
    v0 = v6[2];
    v1 = v6[2] + v7[3] * 8;
    v2 = &v3;
    a0.collect(&v0);
    core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v7, v8 & 1);
    return a0;
}
