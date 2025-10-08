long long uu_chcon::process_files(unsigned long a0, struct_2 *a1, unsigned long long a2, unsigned long long a3)
{
    void* v0;  // [bp-0x138]
    void* v1;  // [bp-0x130]
    unsigned long long v2;  // [bp-0x128]
    void* v3;  // [bp-0x120]
    char v4;  // [bp-0x118]
    char v5;  // [bp-0x108]
    char v6;  // [bp-0x100]
    int v7;  // [bp-0xf8]
    int v8;  // [bp-0xe8]
    int v9;  // [bp-0xd8]
    unsigned long v10;  // [bp-0xc8]
    unsigned int v11;  // [bp-0xc0]
    int v12;  // [bp-0xbc]
    char v13;  // [bp-0x78]
    struct_1 *v15;  // rax
    int v16;  // xmm0

    v5.new(a1->field_8, a1->field_8 + a1->field_10 * 24, g_419bd0[a1->field_7b]);
    if (*((int *)&v5) == 18)
    {
        memcpy(&v4, &v6, 16);
        v1 = 0;
        v2 = 8;
        v3 = 0;
        while (true)
        {
            v11.read_next_entry(&v4);
            if (v11 == 18)
            {
                if (!(char)v12)
                    break;
                uu_chcon::process_file(&v13, a1, a2, &v4, a3);
                if (*((int *)&v13) != 18)
                    v1.push(&v13, &g_4f0428);
                else
                    core::ptr::drop_in_place<core::result::Result<bool,uu_chcon::errors::Error>>(&v13);
            }
            else
            {
                v1.push(&v11, &g_4f0440);
                break;
            }
        }
        *((unsigned long long *)&v0[16]) = 0;
        *((int128_t *)v0) = *((int128_t *)&v1);
        core::ptr::drop_in_place<uu_chcon::fts::FTS>(&v4);
        return v0;
    }
    else
    {
        v15 = 8.alloc_impl(72);
        if (!v15)
            alloc::alloc::handle_alloc_error(8, 72); /* do not return */
        v16 = *((int128_t *)&v5);
        v15->field_40 = v10;
        *((void*)&v15->field_30) = v9;
        *((void*)&v15->field_20) = v8;
        *((void*)&v15->field_10) = v7;
        *((void*)&v15->field_0) = v16;
        *((unsigned long long *)v0) = 1;
        *((struct_1 **)&v0[8]) = v15;
        *((unsigned long long *)&v0[16]) = 1;
        return v0;
    }
}
