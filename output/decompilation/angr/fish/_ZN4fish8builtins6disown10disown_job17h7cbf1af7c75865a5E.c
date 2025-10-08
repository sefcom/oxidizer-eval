long long fish::builtins::disown::disown_job(unsigned long long a0, unsigned long long a1, unsigned long long a2, struct_0 *a3)
{
    void* v0;  // [bp-0xe8]
    unsigned long long v1;  // [bp-0xe0]
    void* v2;  // [bp-0xd8]
    unsigned long long v3;  // [bp-0xd0]
    unsigned long long v4;  // [bp-0xc8]
    unsigned long long v5;  // [bp-0xc0]
    char v6;  // [bp-0xb8]
    unsigned long long v7;  // [bp-0xb0]
    unsigned long long v8;  // [bp-0xa8]
    char v9;  // [bp-0x98]
    void* v10;  // [bp-0x88], Other Possible Types: char
    unsigned short v11;  // [bp-0x78]
    unsigned long long v12;  // [bp-0x70]
    char v13;  // [bp-0x58]
    int v14;  // [bp-0x50]
    struct_1 *v16;  // rax
    unsigned long long v17;  // rdx
    unsigned long long v18;  // rax
    unsigned int v19;  // ebp
    unsigned long long v20;  // rax
    unsigned int v21;  // eax

    v16 = a3.flags();
    v18 = (unsigned long long)core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v17);
    if (v16->field_3)
        return v18;
    v19 = a3.get_pgid();
    if ((char)a3.is_stopped())
    {
        if (v19)
            killpg(v19, 18);
        v0 = 0;
        v1 = 4;
        v2 = 0;
        v4 = "%";
        v5 = 68;
        v3 = 0x8000000000000000;
        v20 = v3.localize();
        v7 = a0;
        v8 = a1;
        v6 = 1;
        v21 = a3.job_id();
        memcpy(&v9, &v6, 16);
        memcpy(&v10, &v8, 16);
        v11 = 16389;
        v12 = -(v21 < 1) | v21;
        v13 = 1;
        *((int128_t *)&v14) = *((int128_t *)&(&a3->padding_0)[1]);
        fish_printf::printf_impl::sprintf_locale(&v6, &v0, v20, v17, ".", &v9, 3);
        v6.unwrap(&g_14c8ca0);
        core::ptr::drop_in_place<[fish_printf::arg::Arg; 3]>(&v9);
        core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v3);
        memcpy(&v9, &v0, 16);
        v10 = 0;
        a2.append(&v9);
    }
    *((char *)(a3.mut_flags() + 3)) = 1;
    core::ptr::drop_in_place<core::cell::RefMut<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v17);
    return fish::proc::add_disowned_job(a3);
}
