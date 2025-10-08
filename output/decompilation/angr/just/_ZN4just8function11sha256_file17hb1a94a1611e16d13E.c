long long just::function::sha256_file(void* a0, struct_0 **a1, unsigned long long a2, unsigned long long a3)
{
    unsigned int v0;  // [bp-0x174]
    char v1;  // [bp-0x170]
    unsigned long long v2;  // [bp-0x168]
    unsigned long long v3;  // [bp-0x160]
    int v4;  // [bp-0x158], Other Possible Types: unsigned long
    unsigned long long v5;  // [bp-0x158]
    char v6;  // [bp-0x150], Other Possible Types: unsigned long long
    int v7;  // [bp-0x148], Other Possible Types: char *, char
    unsigned int v8;  // [bp-0x144]
    unsigned long long v9;  // [bp-0x140]
    int v10;  // [bp-0x138], Other Possible Types: void*
    int v11;  // [bp-0x128]
    int v12;  // [bp-0x118]
    char v13;  // [bp-0x108]
    char v14;  // [bp-0xf8]
    char *v15;  // [bp-0xe0]
    unsigned long long v16;  // [bp-0xd8]
    char v17;  // [bp-0xd0], Other Possible Types: unsigned int
    unsigned int v18;  // [bp-0xcc]
    char v19;  // [bp-0xc8]
    int v20;  // [bp-0xb0], Other Possible Types: char
    unsigned long long v21;  // [bp-0xa0]
    int v22;  // [bp-0x98], Other Possible Types: char
    int v23;  // [bp-0x88]
    int v24;  // [bp-0x78]
    int v25;  // [bp-0x68]
    int v26;  // [bp-0x58]
    char v27;  // [bp-0x48]
    char v28;  // [bp-0x38]
    unsigned int v30;  // ecx
    unsigned long long v31;  // rdx
    unsigned long long v32;  // rax

    (char)v4.working_directory(*(a1)->field_10, *((long long *)&*(a1)->field_18));
    v1.join(*((long long *)&v6), *((long long *)&v7), a2, a3);
    core::ptr::drop_in_place<std::path::PathBuf>(&(char)v4);
    v22.default();
    v17.open(&v1);
    if (v17 == 1)
    {
        just::function::sha256_file::{{closure}}(&(char)v4, v2, v3, *((long long *)&v19));
        v30 = *((int *)&v6);
        *((unsigned int *)&a0[28]) = v8;
        *((long long *)&a0[20]) = *((long long *)&(&v6)[4]);
        *((unsigned long *)&a0[8]) = v4;
        *((unsigned int *)&a0[16]) = v30;
        *((unsigned long long *)a0) = 1;
    }
    else
    {
        v0 = v18;
        if (((char)std::io::copy::generic_copy(&v0, &v22) & 1))
        {
            just::function::sha256_file::{{closure}}(&(char)v4, v2, v3, v31);
            v32 = *((long long *)&v7);
            *((int128_t *)&a0[8]) = *((int128_t *)&v4);
            *((unsigned long long *)&a0[24]) = v32;
            *((unsigned long long *)a0) = 1;
        }
        else
        {
            memcpy(&v14, &v28, 16);
            memcpy(&v13, &v27, 16);
            v12 = v26;
            v11 = v25;
            v10 = v24;
            v7 = v23;
            v4 = v22;
            v17.finalize_fixed(&(char)v4);
            v15 = &v17;
            v16 = generic_array::hex::<impl core::fmt::LowerHex for generic_array::GenericArray<u8,T>>::fmt;
            v5 = &g_465db0;
            v6 = 1;
            v10 = 0;
            v7 = &v15;
            v9 = 1;
            v20.map_or_else(0, a2, &v5);
            *((unsigned long long *)&a0[24]) = v21;
            a0[8] = v20;
            *((unsigned long long *)a0) = 0;
        }
        core::ptr::drop_in_place<std::fs::File>(v0);
    }
    core::ptr::drop_in_place<std::path::PathBuf>(&v1);
    return a0;
}
