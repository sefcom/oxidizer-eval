long long compat_core::unix::filters::exclude_self::h13168d9e64c5a6a6(struct_0 *a0)
{
    char v0;  // [bp-0xc8], Other Possible Types: unsigned long, unsigned long long
    int v1;  // [sp-0xc0], Other Possible Types: char
    char v2;  // [bp-0xb8]
    char v3;  // [bp-0xb0]
    char v4;  // [sp-0xa8], Other Possible Types: unsigned long
    char v5;  // [bp-0xa0], Other Possible Types: unsigned long long
    void* v6;  // [sp-0x98], Other Possible Types: unsigned long long
    unsigned long long v7;  // [sp-0x90]
    unsigned long long v8;  // [sp-0x88]
    unsigned long long v9;  // [sp-0x78]
    unsigned long long v10;  // [sp-0x70]
    unsigned long long v11;  // [sp-0x68]
    char v12;  // [bp-0x60]
    char v13;  // [bp-0x58]
    char v14;  // [bp-0x50]
    int v15;  // [sp-0x48]
    unsigned long long v17;  // r13
    struct_4 *v19;  // rbx
    unsigned long long v20;  // r12
    unsigned long long *v21;  // rbp
    unsigned long long v22;  // rax
    unsigned long long *v23;  // rbx
    unsigned long long v24;  // rax
    unsigned long long *v26;  // rbx
    unsigned long long *v27;  // rbp
    unsigned long long v28;  // rax
    unsigned long long v29;  // rax
    unsigned long long v30;  // rdx
    unsigned long long v31;  // r12
    unsigned long long v32;  // rbx
    struct_4 *v34;  // rbx
    unsigned long long v35;  // rbx
    unsigned long long v36;  // r15
    unsigned long long v37;  // r14
    unsigned long long v38;  // r14
    unsigned long long v40;  // r14
    unsigned long long v41;  // rax
    void* v42;  // rcx
    unsigned long long v43;  // rbp
    struct_0 *v44;  // rbp
    unsigned long long v45;  // rsi
    unsigned long long *v46;  // rax
    unsigned long long *v47;  // rsi
    unsigned long long v48;  // r15
    unsigned long long v49;  // r14
    unsigned long long v50;  // rbp
    unsigned long long v51;  // rbp
    unsigned long long v53;  // rbp
    unsigned long long v54;  // rax
    void* v55;  // rcx
    unsigned long long v56;  // rbx
    struct_0 *v57;  // rbx
    unsigned long long v58;  // rsi
    unsigned long long *v59;  // rax
    unsigned long long *v60;  // rsi

    std::env::current_dir::h902916e3182d6cd4(&v0);
    compat_kernel::app::AppError::zero::hf9f02f666fe092ca();
    if (*((int *)&v0) == 1)
    {
        if (v1 < 2)
            return 1;
        v19 = *((long long *)&v2);
        v19->field_8->field_0(v19->field_0);
        if (v19->field_8->field_8)
            __rust_dealloc(v19->field_0);
        __rust_dealloc(v19);
    }
    else
    {
        v17 = *((long long *)&v1);
        v7 = *((long long *)&v2);
        std::env::args_os::hdc9d63d633f8bf90(&v0);
        _$LT$std..env..ArgsOs$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h64c408517fee3bf3(&v4, &v0);
        v20 = v4;
        if (!v20)
        {
            compat_kernel::app::AppError::zero::hf9f02f666fe092ca();
            v23 = *((long long *)&v2);
            v24 = *((long long *)&v3);
            if (v24 != v23)
            {
                v27 = 0;
                do
                {
                    if (*((long long *)(v23 + v27 + 8)))
                        __rust_dealloc(*((long long *)(v23 + v27)));
                } while ((v27 += 24, (v24 - v23 >> 3) * 8 != v27));
            }
            v29 = *((long long *)&v1);
            if (v29 && v29 * 24)
                __rust_dealloc(v0);
        }
        else
        {
            v9 = v17;
            *((int128_t *)&v15) = *((int128_t *)&v5);
            compat_kernel::app::AppError::zero::hf9f02f666fe092ca();
            v21 = *((long long *)&v2);
            v22 = *((long long *)&v3);
            if (v22 != v21)
            {
                v26 = 0;
                do
                {
                    if (*((long long *)(v21 + v26 + 8)))
                        __rust_dealloc(*((long long *)(v21 + v26)));
                } while ((v26 += 24, (v22 - v21 >> 3) * 8 != v26));
            }
            v28 = *((long long *)&v1);
            if (v28 && v28 * 24)
                __rust_dealloc(v0);
            v0 = v20;
            v1 = v15;
            v17 = v9;
            std::path::Path::_join::hce1dc24dd14bb605(&v12, v17, *((long long *)&v3), _$LT$std..error..$LT$impl$u20$core..convert..From$LT$alloc..string..String$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$std..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$..from..StringError$u20$as$u20$std..error..Error$GT$::description::h6ee7d5ed722caa90(&v0), v30);
            if ((long long)v1)
                __rust_dealloc(v0);
            v31 = *((long long *)&v12);
            v32 = *((long long *)&v14);
            std::path::Path::canonicalize::h0706c2571c010e74(&v0, v31, v32);
            compat_kernel::app::AppError::zero::hf9f02f666fe092ca();
            if ((int)v0 != 1)
            {
                v8 = (long long)v1;
                v11 = (long long)(&v1)[8];
                std::path::Path::to_string_lossy::h8f993f88792b3f6e(&v0, v31, v32);
                v35 = v0;
                v36 = (long long)v1;
                v37 = (long long)(&v1)[8];
                v38 = v37;
                if (v35 == 1)
                    v38 = *((long long *)&v3);
                v40 = v38;
                v10 = *((long long *)&v3);
                if (!v40)
                {
                    v41 = 1;
                    v42 = 0;
                }
                else
                {
                    v41 = __rust_alloc(v40, 1);
                    if (!v41)
                        _ZN5alloc7raw_vec19RawVec$LT$T$C$A$GT$11allocate_in28_$u7b$$u7b$closure$u7d$$u7d$17h9f289d254163e8c5E.llvm.3765406455587417959(); /* do not return */
                    v42 = v40;
                }
                v4 = v41;
                v5 = v42;
                v6 = 0;
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::ha6434863460e3dbe(&v4, 0, v40);
                v43 = v6;
                core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::copy_from_slice::h5bd23e75d5fc6e32(v4 + v43, v40, v36, v40);
                v6 = v43 + v40;
                v44 = a0;
                v45 = v44->field_10;
                if (v45 == v44->field_8)
                {
                    alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::h68438e0eeab99c5f(v44, v45, 1);
                    v45 = v44->field_10;
                }
                v46 = v44->field_0;
                v47 = v45 * 32;
                *((unsigned long long *)(v46 + v47)) = 1;
                *((int128_t *)(v46 + v47 + 8)) = *((int128_t *)&v4);
                *((unsigned long long *)(v46 + v47 + 24)) = v6;
                v44->field_10 = v44->field_10 + 1;
                if (v35 && v37)
                    __rust_dealloc(v36);
                std::path::Path::to_string_lossy::h8f993f88792b3f6e(&v0, v8, v10);
                v48 = v0;
                v49 = (long long)v1;
                v50 = (long long)(&v1)[8];
                v51 = v50;
                if (v48 == 1)
                    v51 = *((long long *)&v3);
                v53 = v51;
                if (!v53)
                {
                    v54 = 1;
                    v55 = 0;
                }
                else
                {
                    v54 = __rust_alloc(v53, 1);
                    if (!v54)
                        _ZN5alloc7raw_vec19RawVec$LT$T$C$A$GT$11allocate_in28_$u7b$$u7b$closure$u7d$$u7d$17h9f289d254163e8c5E.llvm.3765406455587417959(); /* do not return */
                    v55 = v53;
                }
                v4 = v54;
                v5 = v55;
                v6 = 0;
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::ha6434863460e3dbe(&v4, 0, v53);
                v56 = v6;
                core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::copy_from_slice::h5bd23e75d5fc6e32(v4 + v56, v53, v49, v53);
                v6 = v56 + v53;
                v57 = a0;
                v58 = v57->field_10;
                if (v58 == v57->field_8)
                {
                    alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::h68438e0eeab99c5f(v57, v58, 1);
                    v58 = v57->field_10;
                }
                v59 = v57->field_0;
                v60 = v58 * 32;
                *((unsigned long long *)(v59 + v60)) = 1;
                *((int128_t *)(v59 + v60 + 8)) = *((int128_t *)&v4);
                *((unsigned long long *)(v59 + v60 + 24)) = v6;
                v57->field_10 = v57->field_10 + 1;
                if (v48 && v50)
                    __rust_dealloc(v49);
                if (v11)
                    __rust_dealloc(v8);
                if (*((long long *)&v13))
                    __rust_dealloc(v31);
                if (!v7)
                    return 0;
                __rust_dealloc(v9);
            }
            else
            {
                if ((char)v1 >= 2)
                {
                    v34 = (long long)(&v1)[8];
                    v34->field_8->field_0(v34->field_0);
                    if (v34->field_8->field_8)
                        __rust_dealloc(v34->field_0);
                    __rust_dealloc(v34);
                }
                if (*((long long *)&v13))
                    __rust_dealloc(v31);
            }
        }
        if (v7)
        {
            __rust_dealloc(v17);
            return 1;
        }
        return 1;
    }
}
