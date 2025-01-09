long long uu_wc::count_fast::count_bytes_fast::habd5ed9c294fb84e(unsigned int *a0)
{
    unsigned long long v0;  // [sp-0x4038]
    void* v1;  // [sp-0x4030]
    char v2;  // [bp-0x4010]
    char v3;  // [bp-0x3ff8]
    char v4;  // [bp-0x3ff0]
    void* v5;  // [sp-0x3030]
    void* v6;  // [sp-0x2030]
    void* v7;  // [sp-0x1030]
    unsigned long v9;  // rax
    unsigned int v10;  // ebp
    void* v11;  // r12
    unsigned long long v12;  // r15
    unsigned long long v14;  // r14
    unsigned long long v15;  // r12
    unsigned long long v16;  // rax
    unsigned long long v17;  // rcx
    unsigned long long v18;  // rdx
    unsigned long long v19;  // r14
    unsigned long v20;  // cc_ndep
    unsigned long long v22;  // rax
    unsigned long long v23;  // rdx
    unsigned long long v24;  // rdx

    v7 = 0;
    v6 = 0;
    v5 = 0;
    v1 = 0;
    v0 = v9;
    v10 = *(a0);
    nix::sys::stat::fstat::h5414de4d70a08ddb(&v1, v10);
    if ((int)v1)
    {
        v11 = 0;
        goto LABEL_4b8713;
    }
    else
    {
        v12 = *((int *)&v2);
        if (v10 > 0 && (unsigned short)v12 < 0)
        {
            v14 = *((long long *)&v3);
            if (v14 > 0)
            {
                v15 = *((long long *)&v4);
                v16 = sysconf(30);
                if (!v16)
                    core::panicking::panic_const::panic_const_rem_by_zero::h9246b1d1945ea5dd(&g_530f10); /* do not return */
                v17 = v16;
                if (!(v16 | v14) >> 32)
                {
                    v18 = ((unsigned int)((0 CONCAT (unsigned int)v14) % (v17 & 4294967295)) CONCAT (unsigned int)((0 CONCAT (unsigned int)v14) / (v17 & 4294967295))) >> 32 & 4294967295;
                    if (v18)
                        return v19;
                }
                else
                {
                    v18 = ((unsigned long long)((0 CONCAT v14) % v17) CONCAT (unsigned long long)((0 CONCAT v14) / v17)) >> 64;
                    if (v18)
                        return v19;
                }
                if ((char)amd64g_calculate_condition(4, 24, v15 + 1, 0, amd64g_calculate_rflags_c(20, v18, 0, v20)))
                    core::panicking::panic_const::panic_const_rem_by_zero::h9246b1d1945ea5dd(&g_530f28); /* do not return */
                v22 = _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::hf141ef1001f771f9(a0, 0, v14 - (!(v14 | v15 + 1) >> 32 ? ((unsigned int)((0 CONCAT (unsigned int)v14) % (v15 + 1 & 4294967295)) CONCAT (unsigned int)((0 CONCAT (unsigned int)v14) / (v15 + 1 & 4294967295))) >> 32 & 4294967295 : ((long long)((v14 >> 63 CONCAT v14) % (v15 + 1)) CONCAT (long long)((v14 >> 63 CONCAT v14) / (v15 + 1))) >> 64));
                if (v22)
                    v24 = 0;
                core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$std..io..error..Error$GT$$GT$::ha0f27aa6f0fdbae0(v22, v23);
            }
        }
        if (!((unsigned short)v12 & 0x1000) || uu_wc::count_fast::count_bytes_using_splice::h128e743cacc3bf6e(a0))
        {
LABEL_4b8713:
            memset(&v1, 0, 0x4000);
            do
            {
                v19 += v23;
                while (_$LT$std..fs..File$u20$as$u20$std..io..Read$GT$::read::h24fce4ed669fe556(a0, &v1, 0x4000))
                {
                    if ((char)::0x4b60f0::std::io::error::Error::kind::hb2ff5fa058639b3d(v23) == 35)
                        ::0x4b7290::core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hd9e364499d096c21();
                    else
                        return v19;
                }
            } while (v23);
        }
        return v19;
    }
}
