long long fish::env::environment::EnvStack::universal_sync(struct_0 *a0, unsigned long long a1, char a2)
{
    void* v0;  // [bp-0x120]
    unsigned long long v1;  // [bp-0x118]
    void* v2;  // [bp-0x110]
    char v3;  // [bp-0x108]
    unsigned long long v4;  // [bp-0xf8]
    int v5;  // [bp-0xe8], Other Possible Types: char
    char v6;  // [bp-0xe0]
    int v7;  // [bp-0xd8]
    char v8;  // [bp-0xd0]
    char v9;  // [bp-0xc8]
    unsigned long long v11;  // [bp-0xb8]
    unsigned long long v12;  // [bp-0xb0]
    int v13;  // [bp-0xa8]
    int v14;  // [bp-0x98]
    char v15;  // [bp-0x88]
    char v16;  // [bp-0x68]
    unsigned long long v18;  // rax
    char v19;  // dl
    unsigned long long v20;  // rax
    struct_2 *v21;  // rdx

    if (!_ZN4fish3env16environment_impl20UVAR_SCOPE_IS_GLOBAL17h1620f19708d430dbE.load() && (a2 || _ZN4fish3env11environment22UVARS_LOCALLY_MODIFIED17h7f7672bb64b2b548E.load()))
    {
        _ZN4fish3env11environment22UVARS_LOCALLY_MODIFIED17h7f7672bb64b2b548E.store(0);
        v18 = fish::env::environment_impl::uvars();
        v5.sync(v18 + 8);
        memcpy(&v3, &v6, 16);
        v4 = *((long long *)&v8);
        core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v18, v19 & 1);
        if (v5)
        {
            v20 = fish::universal_notifier::default_notifier();
            v21->field_18(v20);
        }
        v0 = 0;
        v1 = 8;
        v2 = 0;
        if (*((long long *)&v3) != 0x8000000000000000)
        {
            v15.into_iter(&v3);
            (char)v11.next(&v15);
            if (v11 != 0x8000000000000000)
            {
                do
                {
                    memcpy(&v9, &v14, 16);
                    v7 = v13;
                    *((int128_t *)&v5) = *((int128_t *)&v11);
                    fish::env_dispatch::env_dispatch_var_change(v12, (long long)v13, a1);
                    if ((long long)(&v7)[8])
                        v16.variable_set(&(char)v11);
                    else
                        v16.variable_erase(&(char)v11);
                    v0.push(&v16, &g_14d67d8);
                    core::ptr::drop_in_place<core::option::Option<fish::env::var::EnvVar>>(&(char)v7);
                    (char)v11.next(&v15);
                } while (v11 != 0x8000000000000000);
            }
            core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<fish::env_universal_common::CallbackData>>(&v15);
        }
        a0->field_10 = 0;
        a0->field_0 = v0;
        a0->field_8 = 8;
        return a0;
    }
    a0->field_0 = 0;
    a0->field_8 = 8;
    a0->field_10 = 0;
    return a0;
}
