long long fd::walk::WorkerState::scan(struct_0 *a0, unsigned long long a1[68], unsigned long long a2)
{
    int v0;  // [bp-0x128], Other Possible Types: char
    unsigned long long v1;  // [bp-0x120]
    int v2;  // [bp-0x118]
    int v3;  // [bp-0x108]
    int v4;  // [bp-0xf8]
    int v5;  // [bp-0xe8]
    int v6;  // [bp-0xd8]
    int v7;  // [bp-0xc8]
    int v8;  // [bp-0xb8]
    int v9;  // [bp-0xa8]
    unsigned long long v10[68];  // [bp-0x98]
    unsigned long long v11;  // [bp-0x88]
    unsigned long long v12;  // [bp-0x80]
    int v13;  // [bp-0x78]
    int v14;  // [bp-0x68]
    int v15;  // [bp-0x58]
    int v16;  // [bp-0x48]
    int v17;  // [bp-0x38]
    int v18;  // [bp-0x28]
    unsigned long long v20;  // rax
    char v21;  // r14b
    unsigned long long v22;  // 4097
    unsigned long long v23;  // 4097
    unsigned long long v24;  // rdx
    int v25;  // xmm0

    (char)v0.build_walker(a1, a2);
    v20 = v1;
    if (*((long long *)&v0) == 2)
    {
        a0->field_8 = v12;
        v21 = 1;
    }
    else
    {
        v18 = v7;
        v17 = v6;
        v16 = v5;
        v15 = v4;
        v14 = v3;
        v13 = v2;
        v11 = *((long long *)&v0);
        v12 = v20;
        if (!((char)(((0 ^ a1[25]) & (0 ^ -(a1[25]))) >> 63)) && !a1[57])
        {
            v22 = atomic_fetch_add(a1[66]);
            if ((char)_ccall(14, 24, v22 + 1, 0, (unsigned long long)(char)(a1[57] < 0)))
                [D] Unsupported jumpkind Ijk_NoDecode at address 6266674()
            v23 = atomic_fetch_add(a1[67]);
            if ((char)_ccall(14, 24, v23 + 1, 0, _ccall(24, v22 + 1, 0, (unsigned long long)(char)(a1[57] < 0))))
                [D] Unsupported jumpkind Ijk_NoDecode at address 6266674()
            ctrlc::init_and_set_handler(&(char)v0, a1[66], a1[67]);
            (char)v0.unwrap();
        }
        crossbeam_channel::channel::bounded(&(char)v0, a1[52] * 2, v24, v11);
        v25 = *((int128_t *)&v0);
        v10[0] = a1;
        v9 = v2;
        *((int128_t *)&v0) = *((int128_t *)&v11);
        v2 = v13;
        v3 = v14;
        v4 = v15;
        memcpy(&v5, &v16, 16);
        v6 = v17;
        memcpy(&v7, &v18, 16);
        v8 = v25;
        v20 = (unsigned int)std::thread::scoped::scope(&(char)v0);
        *((int *)&a0->field_1) = (!(char)core::sync::atomic::atomic_load(a1[67] + 16, 0) ? 5 : (char)v20);
    }
    a0->field_0 = v21;
    return v20;
}
