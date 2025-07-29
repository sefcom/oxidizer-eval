long long backdoorautomater::modifyservice::get_service(struct_0 *a0, struct_1 *a1, unsigned int a2, struct_0 *a3, struct_0 *a4)
{
    struct_0 *v0;  // [bp-0x1b8]
    struct_1 *v1;  // [bp-0x1b0]
    struct_0 *v2;  // [bp-0x1a8]
    struct_0 *v3;  // [bp-0x1a0]
    int v4;  // [bp-0x198], Other Possible Types: unsigned long
    unsigned int v5;  // [bp-0x194]
    unsigned long long v6;  // [bp-0x190]
    int v7;  // [bp-0x188], Other Possible Types: unsigned long, unsigned long long
    int v8;  // [bp-0x180]
    int v9;  // [bp-0x178]
    unsigned long long v10;  // [bp-0x170]
    unsigned int v11;  // [bp-0x15c]
    int v12;  // [bp-0x158], Other Possible Types: char
    unsigned long long v13;  // [bp-0x150]
    unsigned long v14;  // [bp-0x148], Other Possible Types: unsigned long long
    void* v15;  // [bp-0x140]
    unsigned long long v16;  // [bp-0x138]
    void* v17;  // [bp-0x130]
    char v18;  // [bp-0x128]
    unsigned long long v19;  // [bp-0x118]
    int v20;  // [bp-0x108], Other Possible Types: char
    unsigned long long v21;  // [bp-0xf8]
    unsigned long long v22;  // [bp-0xf0]
    unsigned long long v23;  // [bp-0xe8]
    unsigned long long v24;  // [bp-0xe0]
    int v25;  // [bp-0xd8]
    unsigned long v26;  // [bp-0xc8]
    int v27;  // [bp-0xb8]
    unsigned long v28;  // [bp-0xa8]
    char v29;  // [bp-0x98]
    void* v30;  // [bp-0x88]
    int v31;  // [bp-0x78], Other Possible Types: char
    unsigned long long v32;  // [bp-0x68]
    int v33;  // [bp-0x60], Other Possible Types: char
    int v34;  // [bp-0x50]
    char v35;  // [bp-0x40]
    struct_0 *v37;  // rbp
    struct_0 *v38;  // r12
    struct_1 *v39;  // r15
    struct_0 *v40;  // r14
    unsigned long v41;  // rax
    unsigned long long v42;  // rcx
    unsigned int v43;  // eax
    unsigned long long v44;  // r13
    unsigned long long v45;  // rax
    struct_0 *v46;  // r14
    struct_1 *v47;  // r15

    v37 = a4;
    v38 = a3;
    v39 = a1;
    v40 = a0;
    v41 = *((long long *)&a1->padding_1[7]);
    v42 = a1->field_10;
    v4 = *((long long *)&a1->padding_1[7]);
    v6 = v42 + v41;
    v43 = (char)v4.next_back();
    if (v43 != 47 && v43 != 0x110000)
        a1.push();
    v20.clone(a0);
    v31.clone(a1);
    v10 = v21;
    v8 = v20;
    v4 = v31;
    v7 = v32;
    alloc::str::join_generic_copy(&(char)v12, &(char)v4, 2, 1, 0);
    v19 = v14;
    memcpy(&v18, &v12, 16);
    ::0x452120::core::ptr::drop_in_place<[alloc::string::String; 2]>(&(char)v4);
    (char)v4.open(&v18);
    if ((int)v4)
    {
        v44 = v6;
    }
    else
    {
        v33.with_capacity(0x2000, v5);
        v11 = a2;
        v3 = a4;
        v2 = a3;
        v1 = a1;
        v0 = a0;
        v15 = 0;
        v16 = 8;
        v17 = 0;
        *((int128_t *)&v9) = *((int128_t *)&v35);
        v7 = v34;
        v4 = v33;
        while (true)
        {
            (char)v12.next(&(char)v4);
            v45 = *((long long *)&v12);
            if (v45 == 9223372036854775809)
            {
                ::0x451e90::core::ptr::drop_in_place<std::io::Lines<std::io::buffered::bufreader::BufReader<std::fs::File>>>(&(char)v4);
                v46 = v0;
                v26 = v46->field_10;
                *((uint128_t *)&v25) = v46->field_0;
                v47 = v1;
                v28 = v47->field_10;
                *((int128_t *)&v27) = *((int128_t *)&v47->field_0);
                v30 = 0;
                memcpy(&v29, &v15, 16);
                v14 = v2->field_10;
                *((uint128_t *)&v12) = v2->field_0;
                v7 = v3->field_10;
                *((uint128_t *)&v4) = v3->field_0;
                backdoorautomater::modifyservice::modify_service(&v25, &v27, (char)v11, &v29, &(char)v12, &(char)v4);
                ::0x451fa0::core::ptr::drop_in_place<alloc::string::String>(&v18);
                return 0;
            }
            v44 = v13;
            if (v45 == 0x8000000000000000)
                break;
            v22 = v45;
            v23 = v44;
            v24 = v14;
            v15.push(&v22);
        }
        ::0x451e90::core::ptr::drop_in_place<std::io::Lines<std::io::buffered::bufreader::BufReader<std::fs::File>>>(&(char)v4);
        v40 = v0;
        v39 = v1;
        v38 = v2;
        v37 = v3;
        ::0x452170::core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v15);
    }
    ::0x451fa0::core::ptr::drop_in_place<alloc::string::String>(&v18);
    ::0x451fa0::core::ptr::drop_in_place<alloc::string::String>(v37);
    ::0x451fa0::core::ptr::drop_in_place<alloc::string::String>(v38);
    ::0x451fa0::core::ptr::drop_in_place<alloc::string::String>(v39);
    ::0x451fa0::core::ptr::drop_in_place<alloc::string::String>(v40);
    return v44;
}
