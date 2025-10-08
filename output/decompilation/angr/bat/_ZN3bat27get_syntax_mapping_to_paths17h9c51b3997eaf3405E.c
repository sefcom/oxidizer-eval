long long bat::get_syntax_mapping_to_paths(unsigned long a0, unsigned long long a1)
{
    uint128_t v0[3];  // [bp-0xd0]
    int v1;  // [bp-0xc8]
    void* v2;  // [bp-0xc8]
    int v3;  // [bp-0xc0]
    int v4;  // [bp-0xb8], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0xa8]
    unsigned long long v6;  // [bp-0xa0]
    int v7;  // [bp-0x98]
    int v8;  // [bp-0x88]
    int v9;  // [bp-0x78]
    unsigned long long v10;  // [bp-0x68]
    unsigned long long v11[2];  // [bp-0x60]
    char v12;  // [bp-0x50]
    unsigned long long v14;  // rax
    unsigned long long v15[2];  // rdx
    unsigned long long v16[3];  // rbp
    unsigned long long v17;  // rax

    v14 = std::thread::local::LocalKey<T>::with();
    *((uint128_t *)&v8) = g_ac6f08;
    *((uint128_t *)&v9) = g_ac6f18;
    v10 = v14;
    v11[0] = v15;
    v12.from_residual(a1);
    while (true)
    {
        do
        {
            if (!v12.next())
            {
                v0[2] = *((int128_t *)&v10);
                *((void*)&v0[1]) = v9;
                *((void*)&v0[0]) = v8;
                return v0;
            }
        } while (v15[0]);
        v5.rustc_entry(&v8, v15[1]);
        if (v5)
        {
            v4 = v7;
            *((int128_t *)&v1) = *((int128_t *)&v5);
        }
        else
        {
            *((int128_t *)&v3) = *((int128_t *)&v6);
            v2 = 0;
        }
        v17 = (unsigned long long)v1.or_insert_with();
        v5.to_vec(v16[1], v16[2]);
        v4 = (long long)v7;
        *((int128_t *)&v1) = *((int128_t *)&v5);
        v17.push(&(unsigned long long)v1);
    }
}
