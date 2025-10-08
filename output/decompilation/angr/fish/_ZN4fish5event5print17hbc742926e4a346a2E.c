void fish::event::print(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    void* v0;  // [bp-0x108]
    unsigned long long v1;  // [bp-0x100]
    void* v2;  // [bp-0xf8]
    unsigned long v3;  // [bp-0xf0]
    char v4;  // [bp-0xe8]
    unsigned long long v5;  // [bp-0xe0]
    void* v6;  // [bp-0xd8], Other Possible Types: unsigned long long
    void* v7;  // [bp-0xa8], Other Possible Types: unsigned long
    struct_1 *v8;  // [bp-0xa0]
    char v9;  // [bp-0x98]
    char v10;  // [bp-0x78]
    unsigned long long v11;  // [bp-0x70]
    unsigned long long v12;  // [bp-0x68]
    char v13;  // [bp-0x60]
    unsigned long long v15[4];  // rax
    char v16;  // dl
    struct_1 *v17;  // rax
    unsigned long v18;  // rdi
    unsigned long v19;  // rdi
    unsigned long long v21;  // rdx

    v4.lock();
    v15 = v4.expect(&g_14d7900);
    v10.clone(v15[2], v15[3]);
    core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v15, v16 & 1);
    alloc::slice::<impl [T]>::sort_by(v11, v12);
    v13.into_iter(&v10);
    if (v13.next())
    {
        v3 = a0->field_8;
        v7 = 0;
        do
        {
            v8 = v17;
            if ((char)v17->field_28.matches_filter(a1, a2))
            {
                v18 = v17->field_28;
                if (v7 == v18)
                {
                    goto (long long)(g_9f3d1c[v18 & 4294967295] + (char *)&g_9f3d1c[0]);
                }
                else
                {
                    v19 = v18;
                    if (v7)
                    {
                        v3.append("\n", 1);
                        v18 = v17->field_28;
                        v19 = v18 & 4294967295;
                    }
                    v7 = v18;
                    v0 = 0;
                    v1 = 4;
                    v2 = 0;
                    v4 = 1;
                    v5 = v19.name();
                    v6 = v21;
                    fish_printf::printf_impl::sprintf_locale(&v9, &v0, "Event %ls\nExecuted job %d from command '%ls'src/exec.rs", 10, &v4, 1);
                    v9.unwrap(&g_14d7918);
                    core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v4);
                    memcpy(&v4, &v0, 16);
                    v6 = 0;
                    v3.append(&v4);
                    goto (long long)(g_9f3d1c[v17->field_28] + (char *)&g_9f3d1c[0]);
                }
            }
            core::ptr::drop_in_place<alloc::sync::Arc<fish::event::EventHandler>>(&v8);
            v17 = v13.next();
        } while (v17);
    }
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::sync::Arc<fish::event::EventHandler>>>(&v13);
    return;
}
