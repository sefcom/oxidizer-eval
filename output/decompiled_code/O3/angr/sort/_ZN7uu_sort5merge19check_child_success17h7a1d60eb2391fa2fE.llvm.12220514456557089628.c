long long _ZN7uu_sort5merge19check_child_success17h7a1d60eb2391fa2fE.llvm.12220514456557089628(unsigned int a0[7], void* a1)
{
    char v0;  // [bp-0x78]
    char v1;  // [bp-0x74]
    unsigned long v2;  // [sp-0x70], Other Possible Types: unsigned long long
    void* v3;  // [sp-0x68], Other Possible Types: unsigned long
    unsigned long long v4;  // [sp-0x60]
    char v5;  // [bp-0x58]
    char v6;  // [bp-0x48]
    unsigned int v7;  // [sp-0x38]
    unsigned long v8;  // [sp-0x30], Other Possible Types: unsigned long long
    unsigned long long v10;  // rax
    uint128_t v11[4];  // r14
    unsigned long v12;  // rdx
    unsigned long long v13;  // r12
    int v14;  // xmm0
    int v15;  // xmm1
    int v16;  // xmm2

    std::process::Child::wait::h4ce2f205e1183efb(&v0, a0);
    if (*((int *)&v0))
    {
        v8 = v2;
        v7 = 1;
        ::0x4cf560::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hb556c871a57c1a72(&v8);
        goto LABEL_4e3e74;
    }
    v10 = *((int *)&v1);
    if (!(!((char)v10 & 127)) || !(((unsigned short)v10 & 0xff00)))
    {
LABEL_4e3e74:
        v11 = 0;
        goto LABEL_4e3e77;
    }
    if (!v12)
    {
        v13 = 1;
        goto LABEL_4e3f13;
    }
    else
    {
        if (v12 < 0)
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        v13 = __rust_alloc(v12, 1);
        if (v13)
        {
LABEL_4e3f13:
            memcpy(v3, a1, v12);
            v2 = v12;
            v3 = v13;
            v4 = v12;
            v0 = 6;
            v11 = __rust_alloc(64, 8);
            if (!v11)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            v14 = *((int128_t *)&v0);
            v15 = *((int128_t *)&v3);
            v16 = *((int128_t *)&v5);
            v11[3] = *((int128_t *)&v6);
            *((void*)&v11[2]) = v16;
            *((void*)&v11[1]) = v15;
            *((void*)&v11[0]) = v14;
LABEL_4e3e77:
            if (a0[3] != -1)
                close(a0[3]);
            if (a0[4] != -1)
                close(a0[4]);
            if (a0[5] != -1)
                close(a0[5]);
            if (a0[6] == -1)
                return v11;
            close(a0[6]);
        }
    }
}
