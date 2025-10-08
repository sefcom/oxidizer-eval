long long fish::fork_exec::spawn::PosixSpawner::spawn(unsigned long a0, char *a1, unsigned long a2, unsigned long long a3)
{
    unsigned int v0;  // [bp-0x84]
    unsigned long long v1;  // [bp-0x80]
    unsigned long long *v2;  // [bp-0x78]
    unsigned long long v3;  // [bp-0x70]
    unsigned long v4;  // [bp-0x60]
    unsigned long long v5;  // [bp-0x58]
    char v6;  // [bp-0x50]
    unsigned int v8;  // eax
    unsigned long long v9;  // rax
    unsigned long long *v10;  // rax
    unsigned long long *v11;  // rbx
    unsigned long long v12;  // rax
    unsigned long long v13;  // rbp
    unsigned long long v14;  // rbp
    unsigned long v15;  // rbp
    unsigned int v16;  // eax
    unsigned long long v17;  // rdx

    v0 = 4294967295;
    v8 = posix_spawn(&v0);
    if (!v8)
        return 0;
    v4 = a0 + 336;
    v5 = a3;
    1.unwrap_err();
    v9 = strlen(a1);
    if (v8 != 8)
    {
        return 1;
    }
    else if ((char)fish::exec::is_thompson_shell_script(a1, v9 + 1))
    {
        v10 = 8.alloc_impl(8, 0);
        if (!v10)
            alloc::alloc::handle_alloc_error(8, 8); /* do not return */
        v11 = v10;
        *(v11) = core::sync::atomic::atomic_load();
        v1 = 1;
        v2 = v11;
        v3 = 1;
        v6.spec_new_impl(a1, v9);
        v12 = v6.unwrap(&g_14d8ca0);
        v1.push(v12, &g_14d8cb8);
        v13 = 9223372036854775810;
        while (true)
        {
            v14 = v13;
            if (!v14)
                core::panicking::panic_const::panic_const_add_overflow(&g_14bdeb8); /* do not return */
            if (!*((long long *)(a2 + v14 * 8 - 8)))
                break;
            v15 = v14 + 1;
            v1.push(*((long long *)(a2 + v14 * 8 - 8)), &g_14d8ce8);
            v13 = v15;
        }
        v1.push(0, &g_14d8cd0);
        core::sync::atomic::atomic_load();
        v16 = posix_spawn(&v0);
        core::ptr::drop_in_place<alloc::ffi::c_str::CString>(v12, v17);
        core::ptr::drop_in_place<alloc::vec::Vec<f64>>(v1, v2);
        return v16;
    }
    else
    {
        return 1;
    }
}
