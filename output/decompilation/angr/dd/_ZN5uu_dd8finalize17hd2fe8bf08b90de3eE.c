long long uu_dd::finalize(unsigned long long *a0, uint128_t a1[2], struct_0 *a2, unsigned long long a3, unsigned int a4, unsigned long long a5, unsigned long long a6, struct_1 *a7, char a8)
{
    unsigned long long v0;  // [bp-0x130]
    unsigned long long v1;  // [bp-0x128]
    unsigned int v2;  // [bp-0x120]
    int v3;  // [bp-0x118]
    int v4;  // [bp-0x108], Other Possible Types: char
    int v5;  // [bp-0xf8], Other Possible Types: char
    unsigned long v6;  // [bp-0xe8], Other Possible Types: unsigned long long
    unsigned long long v7;  // [bp-0xe0]
    char v8;  // [bp-0xd8]
    unsigned long long v9;  // [bp-0x98]
    unsigned int v10;  // [bp-0x90]
    int v11;  // [bp-0x88]
    int v12;  // [bp-0x78]
    unsigned long long v13;  // [bp-0x68]
    unsigned long long v14;  // [bp-0x60]
    int v15;  // [bp-0x58]
    char v16;  // [bp-0x48]
    unsigned long long v17;  // r14
    unsigned long long v18;  // rax
    unsigned long long v19;  // rax
    unsigned int v20;  // edx
    unsigned long long v22;  // rdx

    v1 = a3;
    v2 = a4;
    v5.flush(a0);
    if (*((int *)&v5) != 1)
    {
        v17 = v6;
        v0 = v7;
        memcpy(&v4, &v8, 16);
        v18 = a0.sync();
        if (!v18)
        {
            if (a8)
                a0.truncate();
            *((uint128_t *)&v3) = a2->field_10;
            v19 = v1.elapsed();
            *((uint128_t *)&v12) = a1[1];
            *((uint128_t *)&v11) = a1[0];
            v13 = a2->field_0 + v17;
            v14 = a2->field_8 + v0 + ((a2->field_0 + v17 <= a2->field_0 ? 1 : 0) & 1);
            v15 = AddV(v3, v4);
            v9 = v19;
            v10 = v20;
            v16 = 2;
            v5.send(a5, a6, &v9);
            v6 = a7->field_10;
            *((uint128_t *)&v5) = a7->field_0;
            v5.join().expect(v22);
            core::ptr::drop_in_place<uu_dd::BlockWriter>(a0);
            return 0;
        }
    }
    core::ptr::drop_in_place<std::thread::JoinHandle<()>>(a7);
    core::ptr::drop_in_place<uu_dd::BlockWriter>(a0);
    return v18;
}
