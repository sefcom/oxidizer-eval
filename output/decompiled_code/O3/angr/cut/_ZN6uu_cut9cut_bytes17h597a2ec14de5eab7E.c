long long uu_cut::cut_bytes::h597a2ec14de5eab7(unsigned long a0, unsigned long a1, unsigned long a2, struct_2 *a3)
{
    char v0;  // [sp-0xe2]
    unsigned long v1;  // [sp-0xe0], Other Possible Types: unsigned long long
    unsigned long v2;  // [sp-0xd0], Other Possible Types: unsigned long long
    void* v3;  // [sp-0xc8]
    unsigned long long v4;  // [sp-0xc0]
    void* v5;  // [sp-0xb8]
    unsigned long v6;  // [sp-0xb0], Other Possible Types: unsigned long long
    unsigned long long v7;  // [sp-0xa8]
    int v8;  // [sp-0xa0]
    void* v9;  // [sp-0x90]
    unsigned long long v10;  // [sp-0x88]
    void* v11;  // [sp-0x80], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v12;  // [sp-0x78]
    void* v13;  // [sp-0x70], Other Possible Types: unsigned long long
    unsigned long long v14;  // [sp-0x68]
    struct_2 *v15;  // [sp-0x60], Other Possible Types: unsigned long long
    unsigned long long v16;  // [sp-0x58]
    unsigned long long v17;  // [sp-0x50]
    char v18;  // [sp-0x48]
    unsigned long v19;  // [sp-0x40], Other Possible Types: unsigned long long
    unsigned long long v20;  // [sp-0x38]
    unsigned long long v22;  // rax
    unsigned long long v23;  // rax
    unsigned long long v24;  // rcx
    unsigned long long v25;  // rax
    unsigned long long v26;  // r14
    struct_1 *v27;  // rdx
    struct_1 *v28;  // r15
    struct struct_0 **v29;  // rax
    struct_3 *v30;  // rax
    unsigned long long v31;  // r14
    struct_1 *v33;  // r15
    struct struct_0 **v34;  // rax

    v19 = a1;
    v20 = a2;
    v0 = a3->field_28;
    v22 = __rust_alloc(0x2000, 1);
    if (!v22)
        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
    v6 = v22;
    v7 = 0x2000;
    *((int128_t *)&v8) = 0;
    v9 = 0;
    v10 = a0;
    v1 = uu_cut::stdout_writer::hdf7375efa0212ce2();
    v23 = a3->field_0;
    v24 = (v23 ? 1 : a3->field_8);
    if (!v23)
        v23 = "\t: \n: Is a directory\nwhitespace-delimiteddelimiter";
    v11 = &v19;
    v12 = &v1;
    v13 = v23;
    v14 = v24;
    v15 = a3;
    v16 = &v0;
    v25 = bstr::io::BufReadExt::for_byte_record::hff51783f6f4b8fb0(&v6, v0, &v11);
    if (!v25)
    {
        v26 = v1;
        v28 = v27;
        if (v28->field_0)
            v29(v26);
        if (v28->field_8)
            __rust_dealloc(v26);
        if (!v7)
            return 0;
        __rust_dealloc(v6);
    }
    else
    {
        v2 = v25;
        v3 = 0;
        v4 = 1;
        v5 = 0;
        v17 = 32;
        v18 = 3;
        v11 = 0;
        v13 = 0;
        v15 = &v3;
        v16 = &g_4f0df0;
        if ((char)_$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739(&v2, &v11))
            core::result::unwrap_failed::h39784290e544308e(); /* do not return */
        v30 = __rust_alloc(32, 8);
        if (!v30)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        v30->field_0 = v3;
        v30->field_8 = v4;
        v30->field_10 = v5;
        v30->field_18 = 1;
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hd097f61426df0a88(v2);
        v31 = v1;
        v33 = v27;
        if (v33->field_0)
            v34(v31);
        if (v33->field_8)
            __rust_dealloc(v31);
        if (v7)
        {
            __rust_dealloc(v6);
            return v30;
        }
        return v30;
    }
}
