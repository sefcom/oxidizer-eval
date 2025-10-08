void zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::open_dir(void* a0, unsigned long long a1[3])
{
    char v0;  // [bp-0xf8], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0xf0]
    unsigned long long v2;  // [bp-0xe8]
    unsigned long long v3;  // [bp-0xe0]
    int v4;  // [bp-0xd8], Other Possible Types: char
    unsigned long long v5;  // [bp-0xc8]
    void* v6;  // [bp-0xc0], Other Possible Types: char
    unsigned long long v7;  // [bp-0xb8]
    void* v8;  // [bp-0xb0]
    int v9;  // [bp-0xa8], Other Possible Types: unsigned long long
    unsigned long long v10;  // [bp-0xa0]
    unsigned long long v11;  // [bp-0x98]
    int v12;  // [bp-0x88]
    char v13;  // [bp-0x78]
    char v14;  // [bp-0x60], Other Possible Types: unsigned long long
    char v15;  // [bp-0x58]
    char v16;  // [bp-0x48]
    unsigned long long v17;  // [bp-0x38]
    unsigned long long v19;  // rbx
    unsigned long long v20;  // r12
    unsigned long long v21;  // rdx
    unsigned long long v22;  // rbp
    unsigned long long v23;  // rax
    int v24;  // xmm0
    int v25;  // xmm1

    v19 = a1[1];
    v20 = v19.as_ref(a1[2]);
    v4.join(v20, v21, "db.zounable to create data directory: could not read from database: ", 5);
    std::fs::canonicalize(&v6, &v4);
    v11 = v5;
    v9 = v4;
    v0.unwrap_or(&v6, &(char)v9);
    std::fs::read(&v14, &v0);
    if ((char)(((0 ^ v14) & (0 ^ -(v14))) >> 63))
    {
        v22 = *((long long *)&v15);
        if ((char)v22.kind())
        {
            v10 = v22;
            v9 = 1;
            a0.with_context(&v9, v1, v2);
            goto LABEL_491998;
        }
        else
        {
            v3 = v22;
            v23 = std::fs::create_dir_all(v20, v21).with_context(v20, v21);
            if (v23)
            {
                *((unsigned long long *)&a0[8]) = v23;
                *((unsigned long long *)a0) = 1;
                core::ptr::drop_in_place<std::io::error::Error>(&v3);
LABEL_491998:
                core::mem::drop(v0, v1);
            }
            else
            {
                v17 = v2;
                memcpy(&v16, &v0, 16);
                v6 = 0;
                v7 = 1;
                v8 = 0;
                (char)v9.new(&v16, &v6);
                v24 = (int128_t)v9;
                v25 = *((int128_t *)&v11);
                *((int128_t *)&a0[56]) = *((int128_t *)&v13);
                a0[40] = v12;
                a0[24] = v25;
                a0[8] = v24;
                *((unsigned long long *)a0) = 0;
                core::ptr::drop_in_place<std::io::error::Error>(&v3);
            }
        }
    }
    else
    {
        v11 = v2;
        *((int128_t *)&v9) = *((int128_t *)&v0);
        a0.try_new(&(char)v9, &v14);
    }
    core::mem::drop(a1[0], v19);
    return;
}
