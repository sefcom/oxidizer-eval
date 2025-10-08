long long fish::terminal::use_terminfo()
{
    char v0;  // [bp-0x20]
    struct_0 *v2;  // rax
    char v3;  // dl

    if (!fish::future_feature_flags::test(7))
    {
        v0.lock();
        v2 = v0.unwrap();
        core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v2, v3 & 1);
        return (unsigned int)&v0 & 0xffffff00 | v2->field_8;
    }
    return 0;
}
