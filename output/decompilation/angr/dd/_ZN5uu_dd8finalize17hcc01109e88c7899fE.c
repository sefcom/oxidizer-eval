long long uu_dd::finalize(unsigned long long *a0, uint128_t a1[2], struct_0 *a2, unsigned long long a3, unsigned int a4, unsigned long long a5, uint128_t a6[2], char a7)
{
    unsigned long long v0;  // [bp-0x130]
    unsigned long long v1;  // [bp-0x128]
    unsigned int v2;  // [bp-0x120]
    int v3;  // [bp-0x118]
    int v4;  // [bp-0x108], Other Possible Types: char
    int v5;  // [bp-0xf8], Other Possible Types: char
    int v6;  // [bp-0xe8], Other Possible Types: char
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
    unsigned long long v17;  // rax
    unsigned long long v18;  // rax
    unsigned int v19;  // edx
    int v20;  // xmm0
    unsigned long long v22;  // rdx

    v1 = a3;
    v2 = a4;
    v5.flush(a0);
    if (!(v5 & 1))
    {
        v0 = v7;
        memcpy(&v4, &v8, 16);
        v17 = a0.sync();
        if (!v17)
        {
            if (a7)
                a0.truncate();
            *((uint128_t *)&v3) = a2->field_10;
            v18 = v1.elapsed();
            *((uint128_t *)&v12) = a1[1];
            *((uint128_t *)&v11) = a1[0];
            v13 = a2->field_0 + *((long long *)&v6);
            v14 = a2->field_8 + v0 + ((a2->field_0 + *((long long *)&v6) <= a2->field_0 ? 1 : 0) & 1);
            v15 = AddV(v3, v4);
            v9 = v18;
            v10 = v19;
            v16 = 2;
            v5.send(a5, &v9, a3);
            v20 = a6[0];
            *((uint128_t *)&v6) = a6[1];
            v5 = v20;
            v5.join().expect(v22);
            core::ptr::drop_in_place<uu_dd::BlockWriter>(a0);
            return 0;
        }
    }
    ::0x4cc470::core::ptr::drop_in_place<std::thread::JoinHandle<()>>(a6);
    core::ptr::drop_in_place<uu_dd::BlockWriter>(a0);
    return v17;
}
