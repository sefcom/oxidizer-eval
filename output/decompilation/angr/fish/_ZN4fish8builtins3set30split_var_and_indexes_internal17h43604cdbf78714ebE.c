long long fish::builtins::set::split_var_and_indexes_internal(unsigned long a0, void* a1, void* a2, unsigned int a3, unsigned long long a4)
{
    void* v0;  // [bp-0x108]
    void* v1;  // [bp-0x100]
    char v2;  // [bp-0xf8], Other Possible Types: unsigned int
    char v3;  // [bp-0xf0]
    unsigned long long v4;  // [bp-0xe8]
    void* v5;  // [bp-0xe0]
    unsigned long long v6;  // [bp-0xd8]
    void* v7;  // [bp-0xd0]
    void* v8;  // [bp-0xc8], Other Possible Types: unsigned long long
    int v9;  // [bp-0xc0]
    void* v10;  // [bp-0xc0]
    unsigned long long v11;  // [bp-0xb8]
    unsigned long long v12;  // [bp-0xb8]
    unsigned long long v13;  // [bp-0xb0]
    unsigned long long v14;  // [bp-0xa8]
    unsigned long long v15;  // [bp-0xa0]
    unsigned long long v16;  // [bp-0x98]
    unsigned long long v17;  // [bp-0x90]
    void* v18;  // [bp-0x88]
    unsigned long long v19;  // [bp-0x80]
    unsigned long long v20;  // [bp-0x78]
    char v21;  // [bp-0x70]
    unsigned long long v22;  // [bp-0x68]
    unsigned long long v23;  // [bp-0x60]
    char v24;  // [bp-0x58]
    unsigned long long v25;  // [bp-0x50]
    void* v26;  // [bp-0x48]
    char *v27;  // [bp-0x40]
    char *v28;  // [bp-0x38]
    char v30;  // r13b
    void* v31;  // rdx
    void* v32;  // rdx
    void* v33;  // rdx
    void* v35;  // rcx
    unsigned long long v36;  // cc_ndep
    unsigned long long v37;  // rax
    void* v38;  // r12
    unsigned long long v39;  // r13
    unsigned long long v41;  // rax
    void* v42;  // rdx
    unsigned int v43;  // eax
    unsigned long long v44;  // r13
    unsigned long long v45;  // r15
    void* v46;  // rdx
    void* v47;  // rdx
    void* v48;  // r12
    unsigned int v49;  // eax
    unsigned long long v51;  // rax
    int v52;  // xmm0
    int v53;  // xmm0
    int v54;  // xmm1
    int v55;  // xmm2

    v8 = 4;
    *((uint128_t *)&v9) = 0;
    v5 = 0;
    v6 = 8;
    v7 = 0;
    v30 = a1.find_char(a2, 91);
    if ((v30 & 1))
    {
        v31 = a1;
        v33 = v32;
        if (v33 > a2)
            core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14cca68); /* do not return */
    }
    else
    {
        v31 = 0;
    }
    if (!v31)
    {
        v35 = a2;
        if (v31)
            goto LABEL_1369afd;
LABEL_1369afc:
        v31 = a1;
    }
    else
    {
        v35 = v33;
        if (!v31)
            goto LABEL_1369afc;
LABEL_1369afd:
    }
    v8 = v31;
    v10 = v35;
    v2.getf(a4, v31, v35, a3);
    core::ptr::drop_in_place<core::option::Option<fish::env::var::EnvVar>>(&(char)v12);
    v14 = v4;
    memcpy(&(char)v12, &v2, 16);
    if ((v30 & 1))
    {
        v12 = v11;
        if (v12)
            v13 = v12;
        v15 = v12;
        if ((char)_ccall(4, 24, v32 + 1, 0, _ccall(20, v11, 0, v36)))
            core::panicking::panic_const::panic_const_add_overflow(&g_14cca08); /* do not return */
        v37 = a1.slice_from(a2, v32 + 1);
        while ((int)v37.char_at(v38, 0) != 93)
        {
            v0 = 0;
            if (!v7 && (int)v37.char_at(v38, 0) == 46)
            {
                v39 = 1;
                if ((int)v37.char_at(v38, 1) == 46)
                    goto LABEL_1369cd3;
            }
            v3 = 0;
            v2 = 0;
            fish::wutil::wcstoi::wcstoi_impl(&v16, v37, v37 + v38 * 4, &v2, &v0);
            if ((char)v16 == 1)
            {
                v2.to_vec(v37.slice_from(v38, v0), a2);
                if (*((long long *)&v2) != 0x8000000000000000)
                {
                    v52 = *((int128_t *)&v3);
                    *((long long *)&v1[8]) = *((long long *)&v2);
                    v1[16] = v52;
                    *((unsigned long long *)v1) = 0x8000000000000000;
                    core::ptr::drop_in_place<core::option::Option<fish::env::var::EnvVar>>(&(char)v12);
                    return (unsigned long long)core::ptr::drop_in_place<alloc::vec::Vec<f64>>(v5, 8);
                }
                v39 = *((long long *)&v3);
            }
            else
            {
                v39 = v17;
            }
            v37 = v37.slice_from(v38, v0);
            v42 = v32;
            while (true)
            {
                v38 = v42;
                if (v38)
                {
                    v43 = v37.char_at(v38, 0);
                    if (v43 - 9 >= 5 && v43 != 32 && (v43 < 128 || !(char)::0x12b00d0::core::unicode::unicode_data::white_space::lookup(v43)))
                        break;
                    v37 = v37.slice_from(v38, 1);
                    v42 = v32;
                }
                else
                {
                    v38 = 0;
                    break;
                }
            }
LABEL_1369cd3:
            v44 = fish::builtins::set::split_var_and_indexes_internal::{{closure}}(&v15, v39);
            if ((int)v37.char_at(v38, 0) != 46 || (int)v37.char_at(v38, 1) != 46)
                v5.push(v44);
            v37 = v37.slice_from(v38, 2);
            v18 = v0;
            if (!v7)
            {
                v45 = 18446744073709551615;
                v46 = v32;
                if ((int)v37.char_at(v46, 0) == 93)
                    goto LABEL_1369e4c;
            }
            v3 = 0;
            v2 = 0;
            fish::wutil::wcstoi::wcstoi_impl(&v16, v37, v37 + v32 * 4, &v2, &v0);
            v25 = v37;
            v26 = v32;
            v27 = &v0;
            v28 = &v18;
            if ((char)v16 == 1)
            {
                fish::builtins::set::split_var_and_indexes_internal::{{closure}}(&v2, &v25);
                v41 = *((long long *)&v2);
                if (*((long long *)&v2) != 0x8000000000000000)
                {
                    v52 = *((int128_t *)&v3);
                    *((unsigned long long *)&v1[8]) = v41;
                    v1[16] = v52;
                    *((unsigned long long *)v1) = 0x8000000000000000;
                    core::ptr::drop_in_place<core::option::Option<fish::env::var::EnvVar>>(&(char)v12);
                    return (unsigned long long)core::ptr::drop_in_place<alloc::vec::Vec<f64>>(v5, 8);
                }
                v45 = *((long long *)&v3);
            }
            else
            {
                v45 = v17;
            }
            v37 = v37.slice_from(v32, v0);
            v47 = v32;
            while (true)
            {
                v48 = v47;
                if (v48)
                {
                    v49 = v37.char_at(v48, 0);
                    if (v49 - 9 >= 5 && v49 != 32)
                    {
                        v46 = v48;
                        if (v49 < 128)
                            break;
                        v46 = v48;
                        if (!(char)::0x12b00d0::core::unicode::unicode_data::white_space::lookup(v49))
                            break;
                    }
                    v37 = v37.slice_from(v48, 1);
                    v47 = v32;
                }
                else
                {
                    v46 = 0;
                    break;
                }
            }
LABEL_1369e4c:
            v51 = fish::builtins::set::split_var_and_indexes_internal::{{closure}}(&v15, v45);
            if (v44 < v51)
            {
                v19 = v44;
                v20 = v51;
                v21 = 0;
                v5.extend_trusted(&v19);
            }
            else
            {
                v22 = v51;
                v23 = v44;
                v24 = 0;
                v5.extend_trusted(&v22);
            }
        }
    }
    v53 = *((int128_t *)&v5);
    v54 = *((int128_t *)&v7);
    v55 = (int128_t)v9;
    *((int128_t *)&v1[48]) = *((int128_t *)&v13);
    v1[32] = v55;
    v1[16] = v54;
    *(v1) = v53;
    return a0;
}
