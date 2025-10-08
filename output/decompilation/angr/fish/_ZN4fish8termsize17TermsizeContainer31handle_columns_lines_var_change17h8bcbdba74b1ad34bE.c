long long fish::termsize::TermsizeContainer::handle_columns_lines_var_change(unsigned long long a0, struct_0 **a1)
{
    unsigned long long v0;  // [bp-0x88]
    int v1;  // [bp-0x80]
    unsigned long long v3;  // [bp-0x70]
    int v4;  // [bp-0x68]
    char v5;  // [bp-0x58]
    char v6;  // [bp-0x40]
    unsigned long long v8;  // rax
    unsigned long long v9;  // r14
    unsigned long long v10;  // r15
    unsigned long long v11;  // rax
    char v12;  // dl

    v8 = (unsigned long long)core::sync::atomic::atomic_load(&g_15a9210, 0);
    if ((char)v8)
        return v8;
    a1(&v5, a0, "C", 7, 4);
    if (*((long long *)&v5))
    {
        fish::env_dispatch::init_locale::{{closure}}(&(char)v3, &v5);
        v1 = v4;
        v0 = v3;
        if (!((char)fish::termsize::TermsizeContainer::handle_columns_lines_var_change::{{closure}}(&v0) & 1))
            v9 = 80;
    }
    else
    {
        v9 = 80;
    }
    a1(&v6, a0, "L", 5, 4);
    if (*((long long *)&v6))
    {
        fish::env_dispatch::init_locale::{{closure}}(&(char)v3, &v6);
        v1 = v4;
        v0 = v3;
        if (!((char)fish::termsize::TermsizeContainer::handle_columns_lines_var_change::{{closure}}(&v0) & 1))
            v10 = 24;
    }
    else
    {
        v10 = 24;
    }
    v0.lock(&g_15a91d0);
    v11 = v0.unwrap(&g_14e2c58);
    v11 + 8.mark_override_from_env(v9, v10);
    return core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v11, v12 & 1);
}
