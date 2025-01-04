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
    unsigned long long v11;  // rdx
    void* v12;  // r12
    unsigned long long v13;  // r15
    unsigned long long v15;  // r14
    unsigned long long v17;  // rax
    unsigned long long v18;  // rcx
    unsigned long long v19;  // rdx
    unsigned long long v20;  // r14
    unsigned long v21;  // cc_ndep
    unsigned long long v22;  // rax
    unsigned long long v23;  // rdx

    v7 = 0;
    v6 = 0;
    v5 = 0;
    v1 = 0;
    v0 = v9;
    v10 = *(a0);
    nix::sys::stat::fstat::h5414de4d70a08ddb(&v1, v10, v11);
    if ((int)v1)
    {
        v12 = 0;
        goto LABEL_4b8713;
    }
    else
    {
        v13 = *((int *)&v2);
        if (v10 > 0 && (unsigned short)v13 < 0)
        {
            v15 = *((long long *)&v3);
            if (v15 > 0)
            {
                v17 = sysconf(30);
                if (!v17)
                    core::panicking::panic_const::panic_const_rem_by_zero::h9246b1d1945ea5dd(); /* do not return */
                v18 = v17;
                if (!(v17 | v15) >> 32)
                {
                    v19 = ((unsigned int)((0 CONCAT (unsigned int)v15) % (v18 & 4294967295)) CONCAT (unsigned int)((0 CONCAT (unsigned int)v15) / (v18 & 4294967295))) >> 32 & 4294967295;
                    if (v19)
                        return v20;
                }
                else
                {
                    v19 = ((unsigned long long)((0 CONCAT v15) % v18) CONCAT (unsigned long long)((0 CONCAT v15) / v18)) >> 64;
                    if (v19)
                        return v20;
                }
                if ((char)amd64g_calculate_condition(4, 24, *((long long *)&v4) + 1, 0, amd64g_calculate_rflags_c(20, v19, 0, v21)))
                    core::panicking::panic_const::panic_const_rem_by_zero::h9246b1d1945ea5dd(); /* do not return */
                v22 = _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::hf141ef1001f771f9(a0, 0);
                if (v22)
                    v23 = 0;
                core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$std..io..error..Error$GT$$GT$::ha0f27aa6f0fdbae0(v22, v11);
            }
        }
        if (!((unsigned short)v13 & 0x1000) || uu_wc::count_fast::count_bytes_using_splice::h128e743cacc3bf6e(a0))
        {
LABEL_4b8713:
            memset(&v1, 0, 0x4000);
            do
            {
                v20 += v11;
                while (_$LT$std..fs..File$u20$as$u20$std..io..Read$GT$::read::h24fce4ed669fe556(a0, &v1, 0x4000))
                {
                    if ((char)::0x4b60f0::std::io::error::Error::kind::hb2ff5fa058639b3d(v11) == 35)
                        ::0x4b7290::core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hd9e364499d096c21(v11);
                    else
                        return v20;
                }
            } while (v11);
        }
        return v20;
    }
}
