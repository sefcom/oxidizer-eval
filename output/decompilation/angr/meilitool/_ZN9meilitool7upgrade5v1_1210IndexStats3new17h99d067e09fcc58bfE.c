long long meilitool::upgrade::v1_12::IndexStats::new(void* a0, unsigned long long a1, unsigned long long a2)
{
    int v0;  // [bp-0x1d8], Other Possible Types: char
    unsigned long long v1;  // [bp-0x1c8]
    unsigned long long v2;  // [sp-0x1c0]
    unsigned long long v3;  // [bp-0x1c0]
    int v4;  // [bp-0x1b8], Other Possible Types: char
    char v5;  // [bp-0x1a8]
    int v6;  // [bp-0x198]
    int v7;  // [bp-0x188], Other Possible Types: char
    unsigned long long v8;  // [bp-0x178]
    unsigned long long v9;  // [bp-0x170]
    unsigned long long v10;  // [bp-0x168]
    char v11;  // [bp-0x160]
    unsigned long long v13;  // rax
    unsigned long long v14;  // rax

    (char)v8.number_of_documents(a1, a2);
    if (v8 != 93)
    {
        v14 = ::libc.so.0::memcpy(a0 + 16, &(char)v10, 304);
        *((unsigned long long *)a0) = v8;
        *((unsigned long long *)&a0[8]) = v9;
        return v14;
    }
    (char)v8.on_disk_size(a1);
    v3 = v2;
    if (v8 == 93)
    {
        v2 = v9;
        (char)v8.used_size(a1);
        v3 = v9;
        if (v8 == 93)
        {
            (char)v8.field_distribution(a1, a2);
            memcpy(&v0, &v9, 16);
            v1 = *((long long *)&v11);
            if ((int)v8 == 1)
            {
                v10 = v1;
                memcpy(&(char)v8, &v0, 16);
                return (unsigned long long)a0.from(&(char)v8);
            }
            (char)v8.created_at(a1, a2);
            memcpy(&v4, &v9, 16);
            if (v8 == 93)
            {
                (char)v8.updated_at(a1, a2);
                memcpy(&v5, &v9, 16);
                if (v8 == 93)
                {
                    memcpy(&v7, &v5, 16);
                    *((unsigned long long *)&a0[80]) = v1;
                    a0[64] = v0;
                    v6 = v4;
                    a0[8] = v4;
                    a0[24] = v7;
                    *((unsigned long long *)&a0[40]) = v9;
                    *((unsigned long long *)&a0[48]) = v2;
                    *((unsigned long long *)&a0[56]) = v9;
                    *((unsigned long long *)a0) = 93;
                    return v1;
                }
                ::libc.so.0::memcpy(a0 + 24, &v11, 296);
            }
            else
            {
                ::libc.so.0::memcpy(a0 + 24, &v11, 296);
            }
            a0[8] = v4;
            *((unsigned long long *)a0) = v8;
            return core::ptr::drop_in_place<alloc::collections::btree::map::BTreeMap<alloc::string::String,u64>>(&v0);
        }
    }
    v13 = ::libc.so.0::memcpy(a0 + 16, &(char)v10, 304);
    *((unsigned long long *)a0) = v8;
    *((unsigned long long *)&a0[8]) = v3;
    return v13;
}
