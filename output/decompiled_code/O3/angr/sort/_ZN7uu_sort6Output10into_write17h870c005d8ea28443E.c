long long uu_sort::Output::into_write::h870c005d8ea28443(struct_1 *a0, struct_0 *a1)
{
    unsigned int v0;  // [sp-0x3c]
    unsigned long v1;  // [sp-0x38], Other Possible Types: unsigned long long
    unsigned long long v3;  // r14
    unsigned long long v5;  // r12
    unsigned int *v6;  // rax
    unsigned long long v7;  // rax
    unsigned long long v8;  // rcx

    v3 = a1->field_0;
    if (v3 != 0x8000000000000000)
    {
        v5 = a1->field_8;
        v0 = a1->field_18;
        v1 = std::fs::File::set_len::hd21acd2eeb028efb(&v0, 0);
        if (v1)
            _ZN4core3ptr42drop_in_place$LT$std..io..error..Error$GT$17hb556c871a57c1a72E.llvm.14646808445695166917(&v1);
        v6 = __rust_alloc(4, 4);
        if (!v6)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        *(v6) = v0;
        if (v3)
            __rust_dealloc(v5);
        v7 = __rust_alloc(0x2000, 1);
        if (!v7)
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        v8 = &anon.d7f70ae2e91d4deb3ee5c65537f9ec21.38.llvm.14646808445695166917;
    }
    else
    {
        v6 = __rust_alloc(8, 8);
        if (!v6)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        *((long long *)&v6) = std::io::stdio::stdout::h077da66234850927();
        v7 = __rust_alloc(0x2000, 1);
        if (!v7)
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        v8 = &anon.d7f70ae2e91d4deb3ee5c65537f9ec21.37.llvm.14646808445695166917;
    }
    a0->field_0 = 0x2000;
    a0->field_8 = v7;
    a0->field_10 = 0;
    a0->field_18 = 0;
    a0->field_20 = v6;
    a0->field_28 = v8;
    return a0;
}
