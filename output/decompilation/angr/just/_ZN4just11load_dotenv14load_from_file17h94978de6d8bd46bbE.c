long long just::load_dotenv::load_from_file(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned int a3)
{
    unsigned int v0;  // [bp-0x1b4]
    unsigned long long v1;  // [bp-0x1a8]
    int v2;  // [bp-0x1a0]
    unsigned long long v3;  // [bp-0x198]
    void* v4;  // [bp-0x190]
    void* v5;  // [bp-0x180]
    char v6;  // [bp-0x178], Other Possible Types: unsigned long long
    int v7;  // [bp-0x171]
    unsigned long long v8;  // [bp-0x170]
    unsigned long long v9;  // [bp-0x168]
    int v10;  // [bp-0x161]
    int v11;  // [bp-0x148]
    unsigned long long v12;  // [bp-0x138]
    int v13;  // [bp-0x128]
    int v14;  // [bp-0x118], Other Possible Types: char
    unsigned long long v15;  // [bp-0x108]
    int v16;  // [bp-0x101]
    int v17;  // [bp-0x100]
    int v18;  // [bp-0xf8]
    char v19;  // [bp-0xf1]
    int v20;  // [bp-0xf0]
    unsigned long long v21;  // [bp-0xe9]
    int v22;  // [bp-0xe0]
    int v23;  // [bp-0xd0]
    char v24;  // [bp-0xc0]
    unsigned long long v25;  // [bp-0xb0]
    char v26;  // [bp-0xa8], Other Possible Types: unsigned long long
    int v27;  // [bp-0xa0]
    int v28;  // [bp-0x90], Other Possible Types: char
    int v29;  // [bp-0x80]
    int v30;  // [bp-0x70]
    char v31;  // [bp-0x60]
    unsigned long long v32;  // [bp-0x50]
    char v33;  // [bp-0x48]
    char *v35;  // r14
    unsigned long long v36;  // rcx
    int v37;  // xmm1
    int v38;  // xmm1
    unsigned long long v39;  // rax

    v0 = a3;
    dotenvy::from_path_iter(&v26, a1, a2);
    v13 = v27;
    memcpy(&v14, &v28, 16);
    if (!v26)
    {
        memcpy(&v19, &v14, 16);
        v16 = v13;
        a0->field_0 = 16;
        v38 = (int128_t)v18;
        *((int128_t *)&a0->field_1[0]) = *((int128_t *)&v15);
        *((void*)&a0->field_1[16]) = v38;
        v39 = v21;
        *((unsigned long long *)&a0->field_8[8]) = v39;
        return v39;
    }
    v25 = v32;
    memcpy(&v24, &v31, 16);
    v23 = v30;
    v22 = v29;
    v17 = v13;
    v20 = v14;
    v4 = 0;
    v5 = 0;
    v15 = v26;
    v35 = &v26;
    while (true)
    {
        v35.next(&(char)v15);
        if ((char)(((0 ^ v26) & (0 ^ -(v26))) >> 63))
        {
            v10 = v28;
            v7 = v27;
            a0->field_0 = 16;
            v37 = (int128_t)(&v7)[9];
            *((int128_t *)&a0->field_1[0]) = *((int128_t *)&v6);
            *((void*)&a0->field_1[16]) = v37;
            *((long long *)&a0->field_8[8]) = (long long)(&v10)[8];
            core::ptr::drop_in_place<dotenvy::iter::Iter<std::fs::File>>(&(char)v15);
            return core::ptr::drop_in_place<alloc::collections::btree::map::BTreeMap<alloc::string::String,alloc::string::String>>(&v4);
        }
        if (v26 == 9223372036854775809)
        {
            core::ptr::drop_in_place<dotenvy::iter::Iter<std::fs::File>>(&(char)v15);
            *((unsigned long long *)&a0->field_8[0]) = 0;
            *((int128_t *)&a0->field_1[7]) = *((int128_t *)&v4);
            a0->field_0 = 56;
            return 0;
        }
        v36 = (long long)v29;
        v2 = v27;
        v11 = v28;
        v1 = v26;
        v12 = v36;
        if (!((char)v0 & 1))
        {
            std::env::var_os(&v6, &v1);
            core::ptr::drop_in_place<std::env::VarError>(&v6);
            v35 = v35;
            if (!((char)(((0 ^ *((long long *)&v6)) & (0 ^ -(*((long long *)&v6)))) >> 63)))
            {
                core::ptr::drop_in_place<alloc::string::String>(&v11);
                core::ptr::drop_in_place<alloc::string::String>(&v1);
            }
        }
        v9 = v3;
        v6 = v1;
        v8 = (long long)v2;
        v33.insert(&v4, &(char)v6, &v11);
        core::ptr::drop_in_place<regex::error::Error>(&v33);
    }
}
