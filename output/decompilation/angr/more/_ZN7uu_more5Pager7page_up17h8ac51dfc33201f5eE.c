long long uu_more::Pager::page_up(struct_2 *a0)
{
    void* v0;  // [bp-0x48]
    unsigned long long v1;  // [bp-0x40]
    void* v2;  // [bp-0x38]
    unsigned long long v4;  // rcx
    unsigned long long v5;  // rax
    unsigned long v6;  // cc_ndep
    unsigned long long v7;  // r14
    void* v8;  // r14
    unsigned long long v9;  // r15
    struct_1 *v10;  // rbp
    void* v11;  // r14
    void* v12;  // rax
    void* v13;  // r14
    unsigned long long v15;  // rdx

    v4 = a0->field_50;
    v5 = a0->field_58 + a0->field_78;
    if (!((char)_ccall(3, 4, a0->field_58, a0->field_78, v6)))
        v5 = 18446744073709551615;
    v7 = v4;
    v8 = v7 - v5;
    if (v7 < v5)
        v8 = 0;
    a0->field_50 = v8;
    if (a0->field_81 != 1)
        return 0;
    v0 = 0;
    v1 = 1;
    v2 = 0;
    if (v4 <= v5)
    {
        core::ptr::drop_in_place<alloc::string::String>(&v0);
        return 0;
    }
    v9 = a0->field_40;
    v10 = a0->field_48;
    while (true)
    {
        v11 = v8;
        v12 = a0.seek_to_line(v11);
        if (v12)
        {
            core::ptr::drop_in_place<alloc::string::String>(&v0);
            return v12;
        }
        v2 = 0;
        if (((char)v10->field_80(v9, &v0) & 1))
        {
            v12 = v15.from();
            core::ptr::drop_in_place<alloc::string::String>(&v0);
            return v12;
        }
        if (!(char)1.equal(0, "\nNext file: %--More--()'. Press 'h' for instructions. (unimplemented)][Press space to continue, 'q' to quit.]", 1))
            break;
        v13 = v11 - 1;
        a0->field_50 = v13;
        v8 = v13;
        if (v11 == 1)
            break;
    }
    core::ptr::drop_in_place<alloc::string::String>(&v0);
    return 0;
}
