long long fish::complete::Completer::perform_for_commandline(struct_4 *a0, struct_1 *a1)
{
    void* v0;  // [bp-0x98]
    unsigned long long v1;  // [bp-0x90]
    void* v2;  // [bp-0x88]
    unsigned long long v3[3];  // [bp-0x80]
    unsigned long long v4;  // [bp-0x78]
    unsigned long long v5;  // [bp-0x70]
    unsigned long long v6;  // [bp-0x68]
    unsigned long long v7;  // [bp-0x60]
    int v8;  // [bp-0x58], Other Possible Types: char
    unsigned long v9;  // [bp-0x48]
    char v10;  // [bp-0x30]
    struct_2 *v12;  // rax
    unsigned long long v13;  // rdx
    unsigned long long v14;  // rdx
    struct_3 *v15;  // rax
    struct_0 *v16;  // rax

    if (a0->field_38->field_0 != 1)
    {
        v12 = a0->field_38->field_8.libdata_mut();
        if (v12->field_78 >= 24)
        {
            if ((char)core::sync::atomic::atomic_load(&g_15a9380, 0))
            {
                v0 = 0;
                v1 = 1;
                v2 = 0;
                v3.to_flog_str(&g_15a9370);
                v8.into_iter(&v3);
                v0.spec_extend(&v8);
                v0.push(58, &g_14d5b80);
                v0.push(32, &g_14d5b80);
                v4 = "c";
                v5 = 59;
                *(v3) = 0x8000000000000000;
                v6 = v3.localize();
                v7 = v13;
                v10.to_flog_str(&v6);
                v8.into_iter(&v10);
                v0.spec_extend(&v8);
                core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v3);
                v0.push(10, &g_14d5b80);
                fish::flog::flog_impl(v1, 0);
                core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v1);
            }
            core::ptr::drop_in_place<core::cell::RefMut<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v13);
            return (unsigned long long)core::ptr::drop_in_place<widestring::utfstring::Utf32String>(a1);
        }
        v12->field_78 = v12->field_78 + 1;
        core::ptr::drop_in_place<core::cell::RefMut<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v13);
    }
    v9 = a1->field_10;
    *((uint128_t *)&v8) = a1->field_0;
    a0.perform_for_commandline_impl(&v8);
    v15 = a0->field_38;
    if (v15->field_0 == 1)
        return v15;
    v16 = v15->field_8.libdata_mut();
    if (!v16->field_78)
        core::panicking::panic_const::panic_const_sub_overflow(&g_14d5b68); /* do not return */
    v16->field_78 = v16->field_78 - 1;
    return (unsigned long long)core::ptr::drop_in_place<core::cell::RefMut<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v14);
}
