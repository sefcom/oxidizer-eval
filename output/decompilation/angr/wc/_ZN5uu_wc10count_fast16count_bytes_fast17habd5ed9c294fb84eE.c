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
    unsigned long long v11;  // r15
    unsigned long long v12;  // r14
    unsigned long long v13;  // r12
    unsigned long long v14;  // rax
    unsigned long long v15;  // rcx
    unsigned long v16;  // rdx
    unsigned long long v17;  // cc_dep1
    unsigned long long v18;  // rdx
    unsigned long v19;  // cc_ndep
    unsigned long long v20;  // rdx
    unsigned long long v21;  // rax
    unsigned long long v22;  // rdx
    void* v23;  // r12, Other Possible Types: unsigned long long

    v7 = 0;
    v6 = 0;
    v5 = 0;
    v1 = 0;
    v0 = v9;
    v10 = *(a0);
    nix::sys::stat::fstat::h5414de4d70a08ddb(&v1, v10);
    if ((int)v1)
    {
        v23 = 0;
        goto LABEL_4b8713;
    }
    else
    {
        v11 = *((int *)&v2);
        v23 = 0;
        if (v10 > 0 && (unsigned short)v11 < 0)
        {
            v12 = *((long long *)&v3);
            if (v12 > 0)
            {
                v13 = *((long long *)&v4);
                v14 = sysconf(30);
                if (!v14)
                    core::panicking::panic_const::panic_const_rem_by_zero::h9246b1d1945ea5dd(&g_530f10); /* do not return */
                v15 = v14;
                if (!(v14 | v12) >> 32)
                {
                    v18 = ((unsigned int)((0 CONCAT (unsigned int)v12) % (v15 & 4294967295)) CONCAT (unsigned int)((0 CONCAT (unsigned int)v12) / (v15 & 4294967295))) >> 32 & 4294967295;
                    v17 = v18;
                    if (v18)
                        return v12;
                }
                else
                {
                    v16 = ((unsigned long long)((0 CONCAT v12) % v15) CONCAT (unsigned long long)((0 CONCAT v12) / v15)) >> 64;
                    v17 = v16;
                    if (v16)
                        return v12;
                }
                if ((char)amd64g_calculate_condition(4, 24, v13 + 1, 0, amd64g_calculate_rflags_c(20, v17, 0, v19)))
                    core::panicking::panic_const::panic_const_rem_by_zero::h9246b1d1945ea5dd(&g_530f28); /* do not return */
                v20 = (!(v12 | v13 + 1) >> 32 ? ((unsigned int)((0 CONCAT (unsigned int)v12) % (v13 + 1 & 4294967295)) CONCAT (unsigned int)((0 CONCAT (unsigned int)v12) / (v13 + 1 & 4294967295))) >> 32 & 4294967295 : ((long long)((v12 >> 63 CONCAT v12) % (v13 + 1)) CONCAT (long long)((v12 >> 63 CONCAT v12) / (v13 + 1))) >> 64);
                v21 = _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::hf141ef1001f771f9(a0, 0, v12 - v20);
                v23 = (!v21 ? v22 : 0);
                core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$std..io..error..Error$GT$$GT$::ha0f27aa6f0fdbae0(v21, v22);
            }
        }
        if (!((unsigned short)v11 & 0x1000) || (v23 = v22, v12 = v22, uu_wc::count_fast::count_bytes_using_splice::h128e743cacc3bf6e(a0)))
        {
LABEL_4b8713:
            memset(&v1, 0, 0x4000);
            do
            {
                v12 = v23;
                while (_$LT$std..fs..File$u20$as$u20$std..io..Read$GT$::read::h24fce4ed669fe556(a0, &v1, 0x4000))
                {
                    if ((char)::0x4b60f0::std::io::error::Error::kind::hb2ff5fa058639b3d(v22) == 35)
                        ::0x4b7290::core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hd9e364499d096c21(v22);
                    else
                        return v12;
                }
                v23 = v12 + v22;
            } while (v22);
        }
        return v12;
    }
}
