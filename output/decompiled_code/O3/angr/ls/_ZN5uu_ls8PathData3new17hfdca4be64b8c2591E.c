int uu_ls::PathData::new::hfdca4be64b8c2591()
{
    unsigned int v0;  // [sp-0x24c]
    unsigned int v1;  // [sp-0x240]
    unsigned long long v2;  // [sp-0x238]
    unsigned long v3;  // [sp-0x228], Other Possible Types: unsigned long long
    void* v4;  // [sp-0x220], Other Possible Types: unsigned long long
    unsigned long long v5;  // [sp-0x218]
    unsigned long long v6[3];  // [sp-0x210]
    unsigned long long v7;  // [sp-0x208]
    unsigned long long v8[3];  // [sp-0x200]
    char v9;  // [bp-0x1a8]
    char v10;  // [bp-0x1a0]
    char v11;  // [bp-0x198]
    char v12;  // [bp-0xf0]
    unsigned long long v13;  // [sp-0x30]
    unsigned long long v14;  // [sp-0x28]
    unsigned long long v15;  // [sp-0x20]
    unsigned long long v16;  // [sp-0x18]
    unsigned long long v17;  // [sp-0x10]
    unsigned long v19;  // r15
    unsigned long v20;  // r14
    unsigned long v21;  // r13
    unsigned long v22;  // r12
    unsigned long v23;  // rbx
    unsigned long long v24;  // rdx
    unsigned long long v25[3];  // rsi
    unsigned long long v26[3];  // rcx
    char v27;  // r9b
    void* v28;  // r14
    unsigned long long v29;  // r14
    unsigned long long v30;  // r15
    unsigned long long v31;  // rax
    unsigned long long v32;  // rdi
    unsigned long long v33;  // rax
    unsigned int v34;  // eax

    v17 = v19;
    v16 = v20;
    v15 = v21;
    v14 = v22;
    v13 = v23;
    v7 = v24;
    v6[0] = v25;
    v5 = v2;
    v8[0] = v26;
    if (v5 != 0x8000000000000000)
    {
        v4 = v26[1];
        v3 = v26[2];
        v1 = 0;
        v0 = 0;
        v2 = v5;
        goto *((int *)(4380572 + *((char *)(vvar_36{reg 80} + 242)) * 4)) + 4380572;
    }
    else if (!v27)
    {
        v29 = v25[1];
        v30 = v25[2];
        v31 = std::path::Path::file_name::h79ecbb7850a9c7f3(v29, v30, 0x8000000000000000, v26);
        if (v31)
        {
            std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v9, v31, v24);
            v2 = *((long long *)&v9);
            v4 = *((long long *)&v10);
            v3 = *((long long *)&v11);
            v1 = v3 | -0x100 | 1;
            v0 = 0;
            goto *((int *)(4380572 + *((char *)(vvar_36{reg 80} + 242)) * 4)) + 4380572;
        }
        else
        {
            std::path::Path::components::h4f3217acf0fc8653(&v9, v29, v30);
            _$LT$std..path..Components$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::next_back::h97f55807d89ed77a(&v12, &v9, v24, v26);
            v33 = v12;
            if ((char)v33 == 10)
                core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
            v34 = (4 <= (v33 - 6 & 4294967295 & 255 & 255 & 255) ? 0 : (char)v33 - 5);
            goto *((int *)(4380552 + vvar_18{reg 16} * 4)) + 4380552;
        }
    }
    else
    {
        v28 = v25[1];
        v3 = v25[2];
        if (!v3)
        {
            vvar_212{stack -544} = v32;
            memcpy(v4, v28, v3);
            vvar_214{stack -576} = v26 | -0x100 | 1;
            goto *((int *)(4380588 + *((char *)(vvar_36{reg 80} + 242)) * 4)) + 4380588;
        }
        else
        {
            if (v3 < 0)
                alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
            v32 = __rust_alloc(v3, 1);
            if (v32)
            {
                v4 = v32;
                memcpy(v4, v28, v3);
                v1 = v26 | -0x100 | 1;
                goto *((int *)(4380588 + *((char *)(vvar_36{reg 80} + 242)) * 4)) + 4380588;
            }
        }
    }
}
