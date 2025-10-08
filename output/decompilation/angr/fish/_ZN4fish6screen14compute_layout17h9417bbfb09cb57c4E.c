void fish::screen::compute_layout(unsigned long a0, unsigned int a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7, unsigned long long a8, unsigned long long a9, unsigned long long a10[3], unsigned long long a11, unsigned long long a12)
{
    unsigned int v0;  // [bp-0x18c]
    void* v1;  // [bp-0x188]
    int v2;  // [bp-0x188]
    unsigned long long v3;  // [bp-0x180]
    void* v4;  // [bp-0x178], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0x168]
    int v6;  // [bp-0x168]
    unsigned long long v7;  // [bp-0x160]
    unsigned long long v8;  // [bp-0x158]
    int v9;  // [bp-0x138], Other Possible Types: char
    unsigned long long v10;  // [bp-0x128]
    void* v11;  // [bp-0x118]
    unsigned long long v12;  // [bp-0x110]
    void* v13;  // [bp-0x108]
    void* v14;  // [bp-0x100]
    unsigned long long v15;  // [bp-0xf8]
    void* v16;  // [bp-0xf0]
    void* v17;  // [bp-0xe8], Other Possible Types: char
    int v18;  // [bp-0xe8]
    unsigned long long v19;  // [bp-0xe0]
    int v20;  // [bp-0xd8]
    void* v21;  // [bp-0xd8]
    int v22;  // [bp-0xd0]
    unsigned long long v23;  // [bp-0xc8]
    int v24;  // [bp-0xc0]
    void* v25;  // [bp-0xc0]
    unsigned long long v26;  // [bp-0xb0]
    int v27;  // [bp-0xa8], Other Possible Types: unsigned long long
    unsigned long long v28;  // [bp-0xa0]
    uint128_t v29[5];  // [bp-0x90]
    unsigned long long v30;  // [bp-0x88]
    char v31;  // [bp-0x80], Other Possible Types: unsigned long long
    char v32;  // [bp-0x78]
    unsigned long long v33;  // [bp-0x60]
    char v34;  // [bp-0x58], Other Possible Types: unsigned long long
    char v35;  // [bp-0x50]
    char v36;  // [bp-0x38]
    unsigned long long v37;  // rax
    char v38;  // dl
    unsigned long long v39;  // rax
    unsigned long long v40;  // r13
    unsigned long long v41;  // r12
    unsigned long long v42;  // rax
    unsigned long long v43;  // rdx
    unsigned long long v44;  // rbp
    unsigned long long v45;  // rax
    unsigned long long v46;  // rbx
    unsigned long long v47;  // rbp
    unsigned long long v48;  // rax
    unsigned long long v49;  // r13
    char v50;  // al
    unsigned long long v51;  // rax
    unsigned long long v52;  // r13
    unsigned long long v53;  // r14
    unsigned long long v54;  // rax
    unsigned long long v55;  // rbx
    unsigned long long v56;  // r15
    int v58;  // xmm0
    int v59;  // xmm1
    int v60;  // xmm2
    unsigned long long v61;  // rdi
    unsigned long long v62;  // rdi

    v14 = 0;
    v15 = 4;
    v16 = 0;
    v17.lock();
    v37 = v17.unwrap(&g_14e20c0);
    v31.calc_prompt_layout(v37 + 8, a3, a4, &v14, a2);
    core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v37, v38 & 1);
    v11 = 0;
    v12 = 4;
    v13 = 0;
    v17.lock();
    v39 = v17.unwrap(&g_14e20d8);
    v34.calc_prompt_layout(v39 + 8, a5, a6, &v11, a2);
    core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v39, v38 & 1);
    v40 = v33;
    v41 = *((long long *)&v36);
    v42 = fish::editable_line::line_at_cursor(a7, a8, 0);
    v44 = v42.fold(v42 + v43 * 4);
    v45 = fish::editable_line::line_at_cursor(a7, a8, a8);
    v46 = v45.fold(v45 + v43 * 4);
    v30 = a11.fold(a11 + a12 * 4);
    v17 = 0;
    v19 = 4;
    *((uint128_t *)&v20) = 0;
    v23 = 4;
    *((uint128_t *)&v24) = 0;
    v26 = 4;
    *((uint128_t *)&v27) = 0;
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v17);
    v21 = 0;
    *((int128_t *)&v18) = *((int128_t *)&v14);
    v28 = v40;
    v47 = v44 + v40;
    if (!((char)__CFADD__(v44, v40)) && !((char)__CFADD__(v47, v41)))
    {
        if (v47 + v41 < a2)
        {
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v20);
            v25 = 0;
            *((int128_t *)&v22) = *((int128_t *)&v11);
            v0 = 0;
        }
        else
        {
            v0 = 1;
            v41 = 0;
        }
        v48 = v40;
        if ((char)__CFADD__(v48, v41))
        {
            v62 = &g_14e2108;
        }
        else if (v48 + v41 <= a2)
        {
            v49 = v40 + v46;
            if (!((char)__CFADD__(v40, v46)))
            {
                v5 = a7;
                v7 = a7 + a8 * 4;
                v50 = v5.rposition();
                v51 = v50.map_or(v43, v41, a10[1], a10[2]);
                v52 = v49 + v51;
                if (!((char)__CFADD__(v49, v51)))
                {
                    if (a2)
                    {
                        v53 = a2 - (!(v52 | a2) >> 32 ? ((unsigned int)((0 CONCAT (unsigned int)v52) % (a2 & 4294967295)) CONCAT (unsigned int)((0 CONCAT (unsigned int)v52) / (a2 & 4294967295))) >> 32 : ((unsigned long long)((0 CONCAT v52) % a2) CONCAT (unsigned long long)((0 CONCAT v52) / a2)) >> 64);
                        v1 = 0;
                        v3 = 4;
                        v4 = 0;
                        if (v53 < v30)
                        {
                            v54 = fish::screen::truncation_offset_for_width(a11, a12, v53 - 1);
                            if (v54 > a12)
                                core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14e2168); /* do not return */
                            v5.to_vec(a11, v54);
                            v10 = v8;
                            memcpy(&v9, &v5, 16);
                            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v1);
                            v4 = v10;
                            v2 = v9;
                            v1.push(a1);
                        }
                        else
                        {
                            v5.to_vec(a11, a12);
                            v10 = v8;
                            memcpy(&v9, &v5, 16);
                            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v1);
                            v4 = v10;
                            v2 = v9;
                        }
                        v55 = v4 + a8;
                        if (!((char)__CFADD__(v4, a8)))
                        {
                            v56 = a8 + a12;
                            if (!((char)__CFADD__(a8, a12)))
                            {
                                (unsigned long long)v6.drain(a9, v55.clone(v56), v43);
                                core::ptr::drop_in_place<alloc::vec::drain::Drain<fish::highlight::highlight::HighlightSpec>>(&(unsigned long long)v6);
                                (unsigned long long)v6.drain(a10, v55, v56);
                                core::ptr::drop_in_place<alloc::vec::drain::Drain<i32>>(&(unsigned long long)v6);
                                v8 = v4;
                                *((int128_t *)&v6) = (int128_t)v2;
                                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v24);
                                v27 = v8;
                                memcpy(&(char)v24, &(unsigned long long)v6, 16);
                                v29[4] = *((int128_t *)&v27);
                                v58 = (int128_t)v18;
                                v59 = (int128_t)v20;
                                v60 = *((int128_t *)&v23);
                                v29[3] = (int128_t)(&v24)[8];
                                *((void*)&v29[2]) = v60;
                                *((void*)&v29[1]) = v59;
                                *((void*)&v29[0]) = v58;
                                core::ptr::drop_in_place<core::cell::UnsafeCell<alloc::vec::Vec<&phf::map::Map<&str,&str>>>>(v34, *((long long *)&v35));
                                if ((char)v0)
                                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v11);
                                core::ptr::drop_in_place<core::cell::UnsafeCell<alloc::vec::Vec<&phf::map::Map<&str,&str>>>>(v31, *((long long *)&v32));
                                return;
                            }
                            v61 = &g_14e2198;
                        }
                        else
                        {
                            v61 = &g_14e2180;
                        }
                        core::panicking::panic_const::panic_const_add_overflow(v61); /* do not return */
                    }
                    else
                    {
                        core::panicking::panic_const::panic_const_rem_by_zero(&g_14e2150); /* do not return */
                    }
                }
                v62 = &g_14e2150;
            }
            else
            {
                v62 = &g_14e2138;
            }
        }
        else
        {
            core::panicking::panic("assertion failed: left_prompt_width + right_prompt_width <= screen_width", 72, &g_14e2120); /* do not return */
        }
        core::panicking::panic_const::panic_const_add_overflow(v62); /* do not return */
    }
    v0 = 1;
    core::panicking::panic_const::panic_const_add_overflow(&g_14e20f0); /* do not return */
}
