long long uu_cat::splice::copy_exact::he9901ca4a412a70b(unsigned int a0, unsigned long a1, unsigned long long a2)
{
    unsigned long long v0;  // [sp-0x4070]
    unsigned long long v1;  // [sp-0x4068]
    unsigned long long v2;  // [sp-0x4060]
    unsigned long long v3;  // [sp-0x4058]
    unsigned long long v4;  // [sp-0x4050]
    int v5;  // [sp-0x4048]
    void* v6;  // [sp-0x4030]
    void* v7;  // [sp-0x3030]
    void* v8;  // [sp-0x2030]
    void* v9;  // [sp-0x1030]
    struct struct_0 **v12;  // rax
    unsigned long long v13;  // rax
    unsigned long long v14;  // r15
    void* v15;  // r14
    unsigned long long v16;  // rax
    unsigned long long v17;  // r14

    v9 = 0;
    v8 = 0;
    v7 = 0;
    v6 = 0;
    memset(&v6, 0, 0x4000);
    if (!a2)
        return 134;
    v12 = read;
    while (true)
    {
LABEL_488bbd:
        v0 = v17 - v14;
        v13 = v12(a0, &v6, 0x4000);
        if (v13 == -1)
            break;
        v14 = v13;
        v1 = v13;
        if (!v13)
        {
            v2 = &anon.42361cee55f06dd1cb7425420bf289bc.11.llvm.17685125084060184286;
            v3 = 1;
            v4 = 8;
            *((int128_t *)&v5) = 0;
            core::panicking::assert_failed::he50a69aed557d2c7(); /* do not return */
        }
        if (v14 > 0x4000)
            core::slice::index::slice_end_index_len_fail::hb96f779f51482844(); /* do not return */
        v15 = 0;
        while (true)
        {
            v16 = write(1, &v6 + v15, v14 - v15);
            if (v16 == -1)
                break;
            if (!v16)
                _ZN6uu_cat6splice10copy_exact19panic_cold_explicit17h3ab9e5a3b801edbfE.llvm.17685125084060184286(); /* do not return */
            v15 += v16;
            if (v15 >= v14)
            {
                v17 = v0;
                if (v17 == v14)
                {
                    return 134;
                    goto LABEL_488c52;
                }
                goto LABEL_488bbd;
            }
        }
    }
LABEL_488c52:
    return nix::errno::consts::from_i32::hb3bc9b2c0830196d(*(__errno_location()));
}
