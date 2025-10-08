long long fish::builtins::argparse::validate_arg(unsigned long long a0, unsigned long long a1, unsigned long long a2, struct_0 *a3, char a4, unsigned long long a5, unsigned long long a6, unsigned long long a7)
{
    unsigned long long v0;  // [bp-0xe8]
    unsigned long v1;  // [bp-0xe0]
    unsigned long long v2;  // [bp-0xd8]
    char v3;  // [bp-0xd8]
    unsigned int *v4;  // [bp-0xd0]
    unsigned long long v5;  // [bp-0xc8]
    char v6;  // [bp-0xb8]
    unsigned long long v7;  // [bp-0xa8]
    unsigned long v8;  // [bp-0xa0]
    void* v9;  // [bp-0x90]
    unsigned long long v10;  // [bp-0x88]
    void* v11;  // [bp-0x80]
    char v12;  // [bp-0x78]
    unsigned long long v13;  // [bp-0x70]
    unsigned long long v14;  // [bp-0x68]
    char v15;  // [bp-0x60]
    unsigned long long v16;  // [bp-0x58]
    unsigned long long v17;  // [bp-0x50]
    char v18;  // [bp-0x48]
    unsigned long v19;  // rbx
    unsigned int *v20;  // rax
    unsigned long long v21;  // rdx
    unsigned long v22;  // r14

    if (!a3->field_30)
        return 0;
    v0 = a5;
    v8 = a3->field_30;
    v19 = a0 + 472;
    v19.push(1);
    v3.to_vec(a1, a2);
    v1 = v19;
    v19.set_one("_", 13, 17, &v3);
    v3.to_vec("_", 6);
    v12.add(&v3, "name#", 4);
    if (a4)
    {
        v3.to_vec(a3->field_18, a3->field_20);
        v7 = v5;
        memcpy(&v6, &v3, 16);
        v1.set_one(v13, v14, 17, &v6);
    }
    else
    {
        v20 = 4.alloc_impl(4, 0);
        if (!v20)
            alloc::alloc::handle_alloc_error(4, 4); /* do not return */
        *(v20) = a3->field_40;
        v2 = 1;
        v4 = v20;
        v5 = 1;
        v1.set_one(v13, v14, 17, &v2);
    }
    v3.to_vec("_", 6);
    v7 = v5;
    memcpy(&v6, &v3, 16);
    v15.add(&v6, "valueassertion failed: opt_arg.starts_with(\"-\")assertion failed: opt_arg.ends_with(more_opts)assertion failed: opt_arg.ends_with(value)assertion failed: more_opts.is_empty() || value.is_empty()assertion failed: w.remaining_text.is_empty()assertion failed: ", 5);
    v3.to_vec(v0, a6);
    v7 = v5;
    memcpy(&v6, &v3, 16);
    v1.set_one(v16, v17, 17, &v6);
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v15);
    v9 = 0;
    v10 = 8;
    v11 = 0;
    v0 = v21;
    v22 = (unsigned int)fish::exec::exec_subshell(a3->field_28, v8, a0, &v9, 0);
    v3.into_iter(&v9);
    v18.next(&v3);
    if (!((char)(((0 ^ *((long long *)&v18)) & (0 ^ -(*((long long *)&v18)))) >> 63)))
    {
        do
        {
            a7.append(&v18);
            a7.push(10);
            v18.next(&v3);
        } while (*((long long *)&v18) != 0x8000000000000000);
    }
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<widestring::utfstring::Utf32String>>(&v3);
    v1.pop();
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v12);
    return (unsigned int)v22 & 1 | (((char)v22 & 1) ? v0 * 0x100000000 : 0);
}
