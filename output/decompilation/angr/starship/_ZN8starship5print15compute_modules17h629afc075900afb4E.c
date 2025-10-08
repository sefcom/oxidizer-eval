long long starship::print::compute_modules(unsigned long long a0, unsigned long long a1)
{
    int v0;  // [bp-0x198]
    unsigned long long v1;  // [bp-0x190]
    void* v2;  // [bp-0x188]
    void* v3;  // [bp-0x180]
    unsigned long long v4;  // [bp-0x178]
    void* v5;  // [bp-0x170]
    struct_0 *v6;  // [bp-0x168]
    unsigned long long v7;  // [bp-0x160]
    unsigned long long v8;  // [bp-0x158]
    unsigned long long v9;  // [bp-0x150]
    char v10;  // [bp-0x148], Other Possible Types: unsigned long long
    void* v11;  // [bp-0x140]
    char v12;  // [bp-0x138], Other Possible Types: unsigned long long
    unsigned long long v13;  // [bp-0x130]
    char v14;  // [bp-0x128], Other Possible Types: unsigned long long
    void* v15;  // [bp-0x120]
    char v16;  // [bp-0x118], Other Possible Types: unsigned long long
    unsigned long long v17;  // [bp-0x110]
    void* v18;  // [bp-0x108], Other Possible Types: unsigned long long
    int v19;  // [bp-0x100]
    void* v20;  // [bp-0xf0]
    int v21;  // [bp-0xe8]
    char v22;  // [bp-0xc8]
    char v23;  // [bp-0xb8]
    char v24;  // [bp-0xa8]
    char v25;  // [bp-0x98]
    unsigned long long v26;  // [bp-0x88]
    int v27;  // [bp-0x80]
    int v28;  // [bp-0x68]
    char v29;  // [bp-0x50]
    void* v31;  // rax
    unsigned long long v32;  // rcx
    unsigned long long v33;  // rdx
    unsigned long long v34;  // rsi
    unsigned long long v35[3];  // rax
    unsigned long long v36;  // rcx

    v3 = 0;
    v4 = 8;
    v5 = 0;
    starship::print::load_formatter_and_modules(&v10, a1);
    v26 = v18;
    memcpy(&v25, &v16, 16);
    memcpy(&v24, &v14, 16);
    memcpy(&v23, &v12, 16);
    memcpy(&v22, &v10, 16);
    v31 = v20;
    v2 = v31;
    v0 = v19;
    v32 = (long long)v0;
    v33 = v1;
    v34 = v32;
    if (!v32)
        v31 = 0;
    v10 = v34;
    v11 = 0;
    v12 = v32;
    v13 = v33;
    v14 = v34;
    v15 = 0;
    v16 = v32;
    v17 = v33;
    v18 = v31;
    while (true)
    {
        v35 = v10.next();
        if (!v35)
            break;
        if ((char)v35[1].equal(v35[2], "all\n Here are the timings of modules in your prompt (>=1ms or output):\n  -    -   \"\"\n\n Here\'s a breakdown of your prompt:\n \"\" (azA", 3))
        {
            starship::print::all_modules_uniq(&v29, (long long)v0, v1);
            v21.into_iter(&v29);
            v7.next(&v21);
            if (v7 != 0x8000000000000000)
            {
                do
                {
                    starship::print::handle_module(&v28, v8, v9, a1, &(char)v0);
                    v29.into_iter(&v28);
                    v3.spec_extend(&v29);
                    core::ptr::drop_in_place<alloc::string::String>(&v7);
                    v7.next(&v21);
                } while (v7 != 0x8000000000000000);
            }
            core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::string::String>>(&v21);
        }
        else
        {
            starship::print::handle_module(&v27, v35[1], v35[2], a1, &(char)v0);
            v29.into_iter(&v27);
            v3.spec_extend(&v29);
        }
    }
    v36 = a0;
    v6->field_10 = 0;
    v6->field_0 = *((int128_t *)&v3);
    core::ptr::drop_in_place<alloc::collections::btree::set::BTreeSet<alloc::string::String>>(&(char)v0);
    return core::ptr::drop_in_place<starship::formatter::string_formatter::StringFormatter>(&v22);
}
