long long bat::printer::InteractivePrinter::print_header_multiline_component(uint128_t a0[5], struct_1 *a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    int v0;  // [bp-0x178], Other Possible Types: char
    unsigned long long v1;  // [bp-0x170]
    void* v2;  // [bp-0x168]
    unsigned long long v3;  // [bp-0x148]
    unsigned long long v4;  // [bp-0x140]
    void* v5;  // [bp-0x138], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0x128]
    unsigned long long v7;  // [bp-0x120]
    unsigned long long v8;  // [bp-0x118]
    void* v9;  // [bp-0x110]
    void* v10;  // [bp-0x100]
    void* v11;  // [bp-0xf0]
    void* v12;  // [bp-0xe0]
    unsigned long long v13;  // [bp-0xd8]
    void* v14;  // [bp-0xd0]
    char v15;  // [bp-0xc8]
    unsigned int v16;  // [bp-0xc4]
    char v17;  // [bp-0xc0]
    void* v18;  // [bp-0xb8]
    void* v19;  // [bp-0xa8]
    void* v20;  // [bp-0x98]
    unsigned long long v21;  // [bp-0x88]
    unsigned long long v22;  // [bp-0x80]
    void* v23;  // [bp-0x78]
    char v24;  // [bp-0x70]
    unsigned int v25;  // [bp-0x6c]
    char v26;  // [bp-0x68]
    unsigned long long v27;  // [bp-0x60]
    unsigned long long v28;  // [bp-0x58]
    unsigned long long v29;  // [bp-0x50]
    unsigned long long v30;  // [bp-0x48]
    unsigned long long v31;  // [bp-0x40]
    char v32;  // [bp-0x38]
    unsigned long long v34;  // rax
    unsigned long long v35;  // r13
    void* v36;  // rdx
    int v37;  // xmm0
    int v38;  // xmm1
    int v39;  // xmm2

    v34 = a1->field_200.get_header_component_indent_length(*((long long *)&a1->field_210));
    v35 = a1->field_200->field_100 - v34;
    if (a3.count(a3 + a4) <= v35)
        return a0.print_header_component_with_indent(a1, a2, a3, a4);
    v27 = a3;
    v28 = a4;
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v12 = 0;
    v13 = a4;
    v14 = 0;
    v15 = 2;
    v16 = 268566529;
    v17 = 16;
    v18 = 0;
    v19 = 0;
    v20 = 0;
    v21 = a4;
    v22 = a4;
    v23 = 0;
    v24 = 2;
    v25 = 268566529;
    v26 = 16;
    v0.collect(&v9);
    v36 = v2;
    if (v36 > v35)
    {
        do
        {
            core::slice::<impl [T]>::split_at_unchecked(&v29, v1, v36, v35);
            alloc::str::join_generic_copy(&v3, v29, v30, 1, 0);
            v8 = v5;
            memcpy(&v6, &v3, 16);
            v9.print_header_component_with_indent(a1, a2, v7, v5);
            if ((char)v9 != 13)
            {
                a0[4] = *((int128_t *)&v14);
                v37 = *((int128_t *)&v9);
                v38 = *((int128_t *)&v10);
                v39 = *((int128_t *)&v11);
                a0[3] = *((int128_t *)&v12);
                *((void*)&a0[2]) = v39;
                *((void*)&a0[1]) = v38;
                *((void*)&a0[0]) = v37;
                core::ptr::drop_in_place<alloc::string::String>(&v6);
                return (unsigned long long)core::ptr::drop_in_place<alloc::vec::Vec<(&alloc::string::String,&alloc::string::String)>>((long long)v0, v1);
            }
            core::ptr::drop_in_place<alloc::string::String>(&v6);
            v9.to_vec(v31, *((long long *)&v32));
            core::ptr::drop_in_place<alloc::vec::Vec<(&alloc::string::String,&alloc::string::String)>>((long long)v0, v1);
            v36 = v10;
            v2 = v36;
            *((int128_t *)&v0) = *((int128_t *)&v9);
        } while (v36 > v35);
    }
    alloc::str::join_generic_copy(&v9, v1, v36, 1, 0);
    v5 = v10;
    memcpy(&v3, &v9, 16);
    a0.print_header_component_with_indent(a1, a2, v4, v10);
    core::ptr::drop_in_place<alloc::vec::Vec<(&alloc::string::String,&alloc::string::String)>>((long long)v0, v1);
    return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&v3);
}
