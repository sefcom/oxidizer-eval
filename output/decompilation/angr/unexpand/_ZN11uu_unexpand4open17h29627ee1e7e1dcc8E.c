long long uu_unexpand::open(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0xb8], Other Possible Types: unsigned long
    unsigned long v1;  // [bp-0xb0]
    unsigned long long v2;  // [bp-0xa8]
    unsigned int v3;  // [bp-0xa0]
    unsigned long long v4;  // [bp-0x98]
    unsigned long long v5;  // [bp-0x90]
    char v6;  // [bp-0x88]
    unsigned long long v7;  // [bp-0x78]
    char v8;  // [bp-0x70]
    unsigned long long v9;  // [bp-0x60]
    char v10;  // [bp-0x50]
    char v11;  // [bp-0x40]
    unsigned long long v13;  // rax
    unsigned long long v14;  // rax
    unsigned long long v15;  // rcx

    if ((char)a1.is_dir(a2))
    {
        v0.to_vec("pathzeroAnsi -- ", 4);
        v4 = a1;
        v5 = a2;
        v10.spec_to_string(&v4);
        v7 = v2;
        memcpy(&v6, &v0, 16);
        memcpy(&v8, &v10, 16);
        v9 = *((long long *)&v11);
        v10.from_iter(&v6);
        uucore::mods::locale::get_message_with_args(&v0, "unexpand-error-is-directory\t : \n", 27, &v10);
        v3 = 1;
        *((double *)&a0->field_8) = v0.new();
        a0->field_10 = &g_57ab48;
        a0->field_0 = 0;
        return &g_57ab48;
    }
    if ((char)a1.equal(a2, "-/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 1))
    {
        v14 = std::io::stdio::stdin().new();
        v15 = &g_57aad0;
    }
    else
    {
        v10.open(a1, a2);
        v0.map_err_context(&v10, a1, a2);
        v13 = v0;
        if (v0)
        {
            a0->field_8 = v0;
            a0->field_10 = v1;
            a0->field_0 = 0;
            return v13;
        }
        v14 = (unsigned int)v1.new();
        v15 = &g_57aa78;
    }
    return a0.with_capacity(0x2000, v14, v15);
}
