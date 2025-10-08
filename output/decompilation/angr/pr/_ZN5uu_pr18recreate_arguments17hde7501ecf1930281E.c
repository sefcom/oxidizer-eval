long long uu_pr::recreate_arguments(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x150], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x150]
    unsigned long long v2;  // [bp-0x150]
    unsigned int v3;  // [bp-0x150]
    unsigned long v4;  // [bp-0x148], Other Possible Types: unsigned long long
    char *v5;  // [bp-0x140], Other Possible Types: unsigned long
    void* v6;  // [bp-0x138], Other Possible Types: unsigned long long
    void* v7;  // [bp-0x130], Other Possible Types: char *, unsigned long
    char v8;  // [bp-0x128]
    char v9;  // [bp-0x120]
    char *v10;  // [bp-0x108]
    unsigned long long v11;  // [bp-0x100]
    int v12;  // [bp-0xf8]
    int v13;  // [bp-0xe8]
    char v14;  // [bp-0xd8]
    char v15;  // [bp-0xc0], Other Possible Types: unsigned long long
    char v16;  // [bp-0xb8]
    char v17;  // [bp-0xa0]
    char v18;  // [bp-0x80]
    char v19;  // [bp-0x68]
    char v20;  // [bp-0x48]
    unsigned long long v22;  // rax
    unsigned long v23;  // rdx
    unsigned long v24;  // rbp
    unsigned long long v25;  // rax
    int v26;  // xmm0

    v0.new("^[-+]\\d+.*src/uu/pr/src/pr.rs", 10);
    v19.unwrap(&v0, &g_6690f8);
    v0.new("^[^-]\\d*$^-n\\s*$\n argument -cannot specify number of columns when printing in parallelcannot specify both printing across and printing in parallel%b %d %H:%M %Yinvalid --pages argument ':'", 9);
    v15.unwrap(&v0, &g_669110);
    v0.new("^-n\\s*$\n argument -cannot specify number of columns when printing in parallelcannot specify both printing across and printing in parallel%b %d %H:%M %Yinvalid --pages argument ':'", 7);
    v17.unwrap(&v0, &g_669128);
    v9.to_vec(a1, a2);
    v1 = a1;
    v4 = a1 + a2 * 24;
    v22 = v1.find_position(&v17);
    v2 = v1;
    if (v23)
    {
        v24 = v22 + 1;
        v2 = v1;
        if (v24 < a2)
        {
            v25 = v24 * 3;
            v3 = 0;
            v4 = *((long long *)(a1 + v25 * 8 + 8));
            v5 = *((long long *)(a1 + v25 * 8 + 16));
            v6 = 0;
            v7 = v5;
            v8 = 1;
            v3.set_span(v5);
            v26 = *((int128_t *)&v2);
            memcpy(&v14, &v7, 16);
            *((int128_t *)&v13) = *((int128_t *)&v5);
            v12 = v26;
            v3.search_half(v15, *((long long *)&v16), &v12);
            v2 = v0;
            if (!((char)vvar_199{stack -336} & 1))
            {
                v18.remove(&v9, v24);
                v12.default();
                v10 = &(char)v13;
                v11 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
                v2 = &g_451320;
                v4 = 1;
                v7 = 0;
                v5 = &v10;
                v6 = 1;
                v20.map_or_else(&v2);
                core::ptr::drop_in_place<uu_pr::NumberingMode>(&v12);
                v9.insert(v24, &v20, &g_669158);
                v9.insert(v22 + 2, &v18, &g_669170);
            }
        }
    }
    vvar_199{stack -336}.into_iter(&v9);
    v7 = &v19;
    a0.collect(&vvar_199{stack -336});
    core::ptr::drop_in_place<regex::regex::string::Regex>(&v17);
    core::ptr::drop_in_place<regex::regex::string::Regex>(&v15);
    core::ptr::drop_in_place<regex::regex::string::Regex>(&v19);
    return a0;
}
