long long fish::proc::Job::resume(struct_0 *a0)
{
    void* v0;  // [bp-0x88]
    unsigned long long v1;  // [bp-0x80]
    void* v2;  // [bp-0x78]
    void* v3;  // [bp-0x70], Other Possible Types: char
    unsigned long long v4;  // [bp-0x68]
    void* v5;  // [bp-0x60]
    char v6;  // [bp-0x58]
    void* v7;  // [bp-0x48]
    char v8;  // [bp-0x40]
    int v9;  // [bp-0x38]
    unsigned long long v11;  // rdx
    unsigned long long v12;  // rax
    unsigned long v13;  // r14
    unsigned long long v14;  // r15
    unsigned long long v15;  // r15
    unsigned long v16;  // r15

    *((char *)(a0.mut_flags() + 1)) = 0;
    core::ptr::drop_in_place<core::cell::RefMut<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v11);
    v12 = a0.signal(18);
    if ((char)v12)
    {
        if (a0->field_18)
        {
            v13 = *((long long *)((char *)&a0->field_8 + 8)) + 216;
            v14 = a0->field_18 * 224;
            do
            {
                v15 = v14;
                v13.store(0);
                v13 += 224;
                v16 = v15 - 224;
                v14 = v16;
            } while (v15 != 224);
        }
    }
    else
    {
        if ((char)core::sync::atomic::atomic_load(&g_15a96e0, 0))
        {
            v0 = 0;
            v1 = 1;
            v2 = 0;
            v3.to_flog_str(&g_15a96d0);
            v8.into_iter(&v3);
            v0.spec_extend(&v8);
            v0.push(58, &g_14df410);
            v0.push(32, &g_14df410);
            v3 = 0;
            v4 = 4;
            v5 = 0;
            v8 = 1;
            *((int128_t *)&v9) = *((int128_t *)&(&a0->padding_0)[1]);
            fish_printf::printf_impl::sprintf_locale(&v6, &v3, "Failed to send SIGCONT to procs in job %lskillpg(%d, %s)", 42, &v8, 1);
            v6.unwrap(&g_14df410);
            core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v8);
            memcpy(&v6, &v3, 16);
            v7 = 0;
            v3.to_flog_str(&v6);
            v8.into_iter(&v3);
            v0.spec_extend(&v8);
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v6);
            v0.push(10, &g_14df410);
            fish::flog::flog_impl(v1, 0);
            core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v1);
        }
    }
    return v12 & 4294967295;
}
