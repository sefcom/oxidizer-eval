void starship::modules::dotnet::try_find_nearby_global_json(void* a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    char v0;  // [bp-0xf8], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0xf0]
    unsigned long v2;  // [bp-0xe8]
    void* v3;  // [sp-0xe0], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0xd8]
    unsigned long long v5;  // [bp-0xd0]
    unsigned long long v6;  // [bp-0xc8]
    unsigned long long v7;  // [bp-0xc0]
    unsigned long long v8;  // [bp-0xb8]
    char v9;  // [bp-0xb0]
    int v10;  // [bp-0xb0]
    char v11;  // [bp-0xa0]
    char v12;  // [bp-0x70], Other Possible Types: unsigned long long
    unsigned long long v13;  // [bp-0x68]
    char *v14;  // [bp-0x60]
    char *v16;  // rsi
    unsigned long long v17;  // rdx

    v5 = a1;
    v6 = a2;
    v7 = a3;
    v8 = a4;
    if (a3)
    {
        v12.components(a3, a4);
        v9.components(a1, a2);
        if (!v12.eq(&v9))
            goto LABEL_b916e9;
        v3 = 0;
        v16 = 0;
    }
    else
    {
LABEL_b916e9:
        v3 = a1.parent(a2);
        v4 = v17;
        v16 = &v3;
        if (!v3)
            v16 = 0;
    }
    v9.chain(v16, &v7);
    v0.collect(&v9);
    v0.dedup_by();
    v12 = v1;
    v13 = v2 * 16 + v1;
    v14 = &v5;
    v9.try_fold(&v12, &(char)v14);
    if ((char)(((0 ^ (long long)v10) & (0 ^ -((long long)v10))) >> 63))
    {
        *((unsigned long long *)a0) = 0x8000000000000000;
        core::ptr::drop_in_place<versions::Chunk>(&v9);
    }
    else
    {
        *((long long *)&a0[16]) = *((long long *)&v11);
        *(a0) = v10;
    }
    core::ptr::drop_in_place<alloc::vec::Vec<(&alloc::string::String,&toml::value::Value)>>(v0, v1);
    return;
}
