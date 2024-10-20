long long uu_split::platform::unix::instantiate_current_writer::h13ac829fe4114a07(struct_0 *a0, unsigned long long a1[3], unsigned long long a2, unsigned long long a3, char a4)
{
    char v0;  // [sp-0x2a8], Other Possible Types: unsigned long long
    char v1;  // [bp-0x2a4]
    unsigned int v2;  // [bp-0x2a0]
    char v3;  // [sp-0x29f]
    char v4;  // [sp-0x29e]
    char v5;  // [sp-0x29d]
    char v6;  // [bp-0x29c], Other Possible Types: unsigned short
    char v7;  // [bp-0x298]
    int v8;  // [bp-0x288], Other Possible Types: unsigned long, unsigned long long
    char v9;  // [bp-0x278], Other Possible Types: unsigned int
    char v10;  // [bp-0x274], Other Possible Types: unsigned long long
    char v11;  // [bp-0x270]
    int v12;  // [sp-0x26c]
    int v13;  // [sp-0x258], Other Possible Types: unsigned long long
    unsigned long long v14;  // [sp-0x250]
    int v15;  // [sp-0x248]
    unsigned long long v16;  // [sp-0x238]
    unsigned int *v17;  // [sp-0x230]
    unsigned long long v18;  // [sp-0x228]
    unsigned long long v19;  // [sp-0x220]
    unsigned long v20;  // [sp-0x218], Other Possible Types: unsigned long long
    unsigned long long v21;  // [sp-0x210]
    unsigned int v22;  // [sp-0x204]
    unsigned long long v23;  // [sp-0x200]
    int v24;  // [sp-0x1f8]
    char v25;  // [bp-0x1e8], Other Possible Types: unsigned long, unsigned long long
    unsigned long v26;  // [sp-0x1e0], Other Possible Types: unsigned long long
    unsigned int *v27;  // [sp-0x1d8], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v28;  // [sp-0x1d0]
    void* v29;  // [sp-0x1c8]
    char v30;  // [bp-0x118]
    unsigned long long v32;  // r15
    unsigned int *v33;  // rax
    unsigned int *v35;  // rax
    unsigned long long v36;  // rax
    unsigned long long v37;  // rax
    unsigned long long v38;  // r12
    unsigned int *v39;  // r14
    unsigned int *v41;  // rax
    unsigned int *v42;  // r14
    unsigned long long v43;  // rax
    unsigned long long v44;  // rdx
    uint128_t *v46;  // rax
    int v47;  // xmm0
    unsigned long long v48;  // rax

    v20 = a2;
    v21 = a3;
    if (a1[0] != 0x8000000000000000)
    {
        v19 = a1[1];
        v32 = a1[2];
        std::env::_var::h2f29fdf15fefb03a(&v25, "FILE", 4);
        std::env::set_var::h40116844762069e8("FILE", 4, a2, a3);
        v33 = __rust_alloc(4, 1);
        if (!v33)
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        *(v33) = 1162627398;
        *((int128_t *)&v15) = *((int128_t *)&v27);
        *((int128_t *)&v13) = *((int128_t *)&v25);
        v16 = 4;
        v17 = v33;
        v18 = 4;
        std::env::_var::h2f29fdf15fefb03a(&v25, "SHELL-cCouldn't wait for child processShell process returned : \n", 5);
        v38 = v26;
        v39 = v27;
        if (v25)
        {
            v41 = __rust_alloc(7, 1);
            if (!v41)
                alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
            *((int *)((char *)v41 + 3)) = 1752379246;
            *(v41) = 1852400175;
            if (v38 << 1)
                __rust_dealloc(v39);
            v38 = 7;
        }
        std::sys::pal::unix::process::process_common::Command::new::hc5270eb3e5a1ed89(&v25, v42, 7);
        memcpy(&v30, &v25, 208);
        if (v38)
            __rust_dealloc(v42);
        std::sys::pal::unix::process::process_common::Command::arg::h2082b49223f3a30d(&v30, "-cCouldn't wait for child processShell process returned : \n", 2);
        std::sys::pal::unix::process::process_common::Command::arg::h2082b49223f3a30d(&v30, v19, v32);
        std::sys::pal::unix::process::process_common::Command::stdin::h5b6bc6d58062712b(&v30, 2, v44);
        std::process::Command::spawn::h512586d0d6bfbf9c(&v0, &v30);
        if ((int)v0)
        {
            core::ptr::drop_in_place$LT$std..process..Command$GT$::h60887f8bb69f159f(&v30);
            core::ptr::drop_in_place$LT$uu_split..platform..unix..WithEnvVarSet$GT$::h615c831d4acd2f46(&v13);
            a0->field_8 = *((long long *)&v2);
            a0->field_0 = 0x8000000000000000;
            return a0;
        }
        v9 = *((int *)&v1);
        v10 = *((long long *)&v2);
        *((int128_t *)&v12) = *((int128_t *)&v7);
        core::ptr::drop_in_place$LT$std..process..Command$GT$::h60887f8bb69f159f(&v30);
        v8 = v12;
        core::ptr::drop_in_place$LT$uu_split..platform..unix..WithEnvVarSet$GT$::h615c831d4acd2f46(&v13);
        v22 = v9;
        v23 = v10;
        *((int128_t *)&v24) = (int128_t)v8;
        v46 = __rust_alloc(28, 4);
        if (!v46)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        v47 = *((int128_t *)&v22);
        *((void*)((char *)v46 + 12)) = v24;
        *((void*)v46) = v47;
        v48 = __rust_alloc(0x2000, 1);
        if (!v48)
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        a0->field_0 = 0x2000;
        a0->field_8 = v48;
        a0->field_10 = 0;
        a0->field_18 = 0;
        a0->field_20 = v46;
        v43 = &g_50bf38;
    }
    else
    {
        if (!a4)
        {
            v0 = 0x1b600000000;
            v2 = 0;
            v6 = 0;
            v4 = 1;
            std::fs::OpenOptions::_open::h7e99c13f64b1d4fc(&v9, &v0, a2, a3);
            if (v9)
            {
                v8 = *((long long *)&v11);
                v13 = &v20;
                v14 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h825bca3973fa52e3;
                v25 = &g_50bfa8;
                v26 = 2;
                v29 = 0;
                v27 = &v13;
                v28 = 1;
                alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v30, &v25);
                v36 = std::io::error::Error::new::hafde8ab7e37e3767(39, &v30);
                _ZN4core3ptr42drop_in_place$LT$std..io..error..Error$GT$17h1c7c86aae06dd8b1E.llvm.7543128912117523548(&v8);
                a0->field_8 = v36;
                a0->field_0 = 0x8000000000000000;
                return a0;
            }
        }
        else
        {
            v0 = 0x1b600000000;
            v2 = 0;
            v6 = 0;
            v3 = 1;
            v6 = 1;
            v5 = 1;
            std::fs::OpenOptions::_open::h7e99c13f64b1d4fc(&v9, &v0, a2, a3);
            if (v9)
            {
                v8 = *((long long *)&v11);
                v13 = &v20;
                v14 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h825bca3973fa52e3;
                v25 = &g_50bf88;
                v26 = 2;
                v29 = 0;
                v27 = &v13;
                v28 = 1;
                alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v30, &v25);
                v36 = std::io::error::Error::new::hafde8ab7e37e3767(39, &v30);
                _ZN4core3ptr42drop_in_place$LT$std..io..error..Error$GT$17h1c7c86aae06dd8b1E.llvm.7543128912117523548(&v8);
                a0->field_8 = v36;
                a0->field_0 = 0x8000000000000000;
                return a0;
            }
        }
        v35 = __rust_alloc(4, 4);
        if (!v35)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        *(v35) = *((int *)&v10);
        v37 = __rust_alloc(0x2000, 1);
        if (!v37)
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        a0->field_0 = 0x2000;
        a0->field_8 = v37;
        a0->field_10 = 0;
        a0->field_18 = 0;
        a0->field_20 = v35;
        v43 = &g_50bee8;
    }
    a0->field_28 = v43;
    return a0;
}
