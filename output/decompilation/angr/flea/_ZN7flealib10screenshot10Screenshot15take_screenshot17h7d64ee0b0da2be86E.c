long long flealib::screenshot::Screenshot::take_screenshot(struct_0 *a0, unsigned long a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0x198]
    unsigned short *v1;  // [sp-0x190], Other Possible Types: char *, unsigned long long
    unsigned long long v2;  // [sp-0x188]
    unsigned long v3;  // [bp-0x180], Other Possible Types: unsigned long long, char
    unsigned long long v4;  // [bp-0x180]
    unsigned long v5;  // [bp-0x180]
    unsigned short v6;  // [bp-0x17f]
    char v7;  // [bp-0x17d]
    unsigned long long v8;  // [bp-0x178]
    unsigned long v9;  // [bp-0x178], Other Possible Types: unsigned long long
    char *v10;  // [bp-0x170], Other Possible Types: unsigned long long
    unsigned long long v11;  // [bp-0x170]
    int v12;  // [bp-0x168], Other Possible Types: unsigned long long
    void* v13;  // [bp-0x160]
    char v14;  // [bp-0x154]
    char v15;  // [bp-0x150]
    char v16;  // [bp-0x140], Other Possible Types: unsigned long long
    unsigned long long v17;  // [sp-0x138]
    char *v18;  // [sp-0x130], Other Possible Types: unsigned long long
    unsigned long long v19;  // [sp-0x128]
    void* v20;  // [sp-0x120], Other Possible Types: unsigned long long
    char *v21;  // [bp-0x110], Other Possible Types: unsigned long long
    unsigned long long v22;  // [bp-0x108]
    void* v23;  // [bp-0x100]
    unsigned long v24;  // [bp-0xf0]
    unsigned long long v25;  // [bp-0xe8]
    char v26;  // [bp-0xe0], Other Possible Types: unsigned long long
    unsigned long long v27;  // [bp-0xd8]
    char v28;  // [bp-0xd0], Other Possible Types: unsigned long long
    char v29;  // [bp-0xcc]
    unsigned long long v30;  // [bp-0xc8]
    unsigned long long v31;  // [bp-0xc0]
    unsigned long long v32;  // [bp-0xb8]
    unsigned long v33;  // [bp-0xb0]
    int v34;  // [bp-0xa8], Other Possible Types: unsigned long long
    unsigned long long v35;  // [bp-0xa0]
    int v36;  // [bp-0x98], Other Possible Types: unsigned long long
    unsigned long long v37;  // [bp-0x90]
    int v38;  // [bp-0x88], Other Possible Types: unsigned long
    unsigned short v39;  // [bp-0x84]
    char v40;  // [bp-0x78]
    unsigned long long v41;  // [bp-0x50]
    char v42;  // [bp-0x48]
    unsigned long long v43;  // [bp-0x38]
    unsigned int v45;  // edx
    unsigned long long v46;  // rax
    unsigned long long v47;  // rax
    int v48;  // xmm0
    int v49;  // xmm1
    unsigned short *v50;  // rbp
    unsigned long long v51;  // r15
    unsigned long v52;  // rbx
    unsigned long long v53;  // rdx
    void* v54;  // rax
    unsigned long long v55;  // rbx
    void* v56;  // r13
    unsigned long long v57;  // rax
    unsigned long v58;  // rdi
    unsigned long long v59;  // r14
    unsigned long v60;  // rax
    void* v62;  // rax
    unsigned long long v63;  // rax

    v46 = 1.new(0).checked_div(v45);
    if (v45 == 0x3b9aca00)
        core::option::expect_failed("divide by zero error when dividing duration by scalarScreen captured! Saving...Image saved.flealib/src/screenshot.rs", 53, &g_b0bba0); /* do not return */
    v26.primary();
    if (v29 == 2)
    {
        v1 = v26;
        if (::0x7a20f0::core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hec4bd8d019e67a03E))
        {
            v16.spec_to_string(&v1);
            v21 = &v16;
            v22 = <alloc::string::String as core::fmt::Display>::fmt;
            v9 = &g_44fb30;
            v8 = 1;
            v13 = 0;
            v10 = &v21;
            v12 = 1;
            v34 = "flealib::screenshotException while sleeping in thread";
            v35 = 19;
            v36 = "flealib::screenshotException while sleeping in thread";
            v37 = 19;
            v38 = log::__private_api::loc(&g_b0bcd8);
            log::__private_api::log(&(char)v9, 1, &v34);
            ::0x7a1b50::core::ptr::drop_in_place<alloc::string::String>(&v16);
        }
        v3.spec_to_string(&v1);
        a0->field_10 = v10;
        *((int128_t *)&a0->field_0) = *((int128_t *)&v9);
        ::0x7a1b60::core::ptr::drop_in_place<std::io::error::Error>(&v1);
        return a0;
    }
    else
    {
        v43 = *((long long *)&v28);
        memcpy(&v42, &v26, 16);
        (char)v3.new(&v42);
        if (v14 == 2)
        {
            v0 = v9;
            if (::0x7a20f0::core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hec4bd8d019e67a03E))
            {
                (char)v21.spec_to_string(&v0);
                v1 = &(char)v21;
                v2 = <alloc::string::String as core::fmt::Display>::fmt;
                v16 = &g_44fb30;
                v17 = 1;
                v20 = 0;
                v18 = &v1;
                v19 = 1;
                v47 = log::__private_api::loc(&g_b0bcc0);
                v26 = "flealib::screenshotException while sleeping in thread";
                v27 = 19;
                v28 = "flealib::screenshotException while sleeping in thread";
                v30 = 19;
                v31 = v47;
                log::__private_api::log(&v16, 1, &v26);
                ::0x7a1b50::core::ptr::drop_in_place<alloc::string::String>(&(char)v21);
            }
            v16.spec_to_string(&v0);
            a0->field_10 = v18;
            *((int128_t *)&a0->field_0) = *((int128_t *)&v16);
            ::0x7a1b60::core::ptr::drop_in_place<std::io::error::Error>(&v0);
            return a0;
        }
        else
        {
            v48 = *((int128_t *)&v9);
            v49 = *((int128_t *)&v10);
            memcpy(&v40, &v15, 16);
            *((int128_t *)&v38) = *((int128_t *)&v13);
            v36 = v49;
            v34 = v48;
            v24 = v39;
            v33 = (short)(&v38)[6];
            while (true)
            {
                v1.frame(&(char)v34);
                if (v1)
                    break;
                v25 = v2;
                if ((char)v2.kind() == 13)
                {
                    std::thread::sleep(v46, v45);
                    ::0x7a1b60::core::ptr::drop_in_place<std::io::error::Error>(&v25);
                }
                else
                {
                    v0 = 40.new("Exception while sleeping in thread", 34);
                    if (::0x7a20f0::core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hec4bd8d019e67a03E))
                    {
                        v26.spec_to_string(&v0);
                        v21 = &v26;
                        v22 = <alloc::string::String as core::fmt::Display>::fmt;
                        v3 = &g_44fb30;
                        v9 = 1;
                        v13 = 0;
                        v10 = &v21;
                        v12 = 1;
                        v16 = "flealib::screenshotException while sleeping in thread";
                        v17 = 19;
                        v18 = "flealib::screenshotException while sleeping in thread";
                        v19 = 19;
                        v20 = log::__private_api::loc(&g_b0bca8);
                        log::__private_api::log(&(char)v3, 1, &v16);
                        ::0x7a1b50::core::ptr::drop_in_place<alloc::string::String>(&v26);
                    }
                    v3.spec_to_string(&v0);
                    a0->field_10 = v10;
                    *((int128_t *)&a0->field_0) = *((int128_t *)&v9);
                    ::0x7a1b60::core::ptr::drop_in_place<std::io::error::Error>(&v0);
                    ::0x7a1b60::core::ptr::drop_in_place<std::io::error::Error>(&v25);
                    core::ptr::drop_in_place<scrap::common::x11::Capturer>(&(char)v34);
                    return a0;
                }
            }
            v51 = v2;
            v52 = v33;
            if (::0x7a20f0::core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hec4bd8d019e67a03E) >= 4)
            {
                v3 = &g_b0bb80;
                v8 = 1;
                v11 = 8;
                *((uint128_t *)&v12) = 0;
                v16 = "flealib::screenshotException while sleeping in thread";
                v17 = 19;
                v18 = "flealib::screenshotException while sleeping in thread";
                v19 = 19;
                v20 = log::__private_api::loc(&g_b0bbb8);
                log::__private_api::log(&(char)v3, 4, &v16);
            }
            v21 = v52 * v24 * 4.with_capacity_in(&g_b0bbd0);
            v22 = v53;
            v23 = 0;
            if (!v52)
                core::panicking::panic_const::panic_const_div_by_zero(&g_b0bbe8); /* do not return */
            if (v51 >> 32)
            {
                v32 = (unsigned long long)((0 CONCAT v51) % v52) CONCAT (unsigned long long)((0 CONCAT v51) / v52);
                if (!v24)
                    goto LABEL_7a4cbc;
LABEL_7a4ab0:
                v54 = 0;
                do
                {
                    v41 = v54.forward_unchecked();
                    v55 = v32 * v54;
                    v56 = 0;
                    do
                    {
                        v57 = v56.forward_unchecked();
                        v58 = v55 + v56 * 4 + 2;
                        if (v58 >= v51)
                            core::panicking::panic_bounds_check(v58, v51, &g_b0bc48); /* do not return */
                        v59 = v57;
                        v58 = v55 + v56 * 4;
                        v60 = v58 + 1;
                        if (v60 >= v51)
                            core::panicking::panic_bounds_check(v60, v51, &g_b0bc60); /* do not return */
                        if (v58 >= v51)
                            core::panicking::panic_bounds_check(v58, v51, &g_b0bc78); /* do not return */
                        v3 = *(2 + (char *)v50 + v58);
                        v6 = __ROL__(*((short *)((char *)v50 + v58)), 8);
                        v7 = 255;
                        v21.append_elements(&v3, 4, &g_b0bc90);
                        v56 = v59;
                    } while (v59 < v24);
                    v52 = v33;
                    v54 = v41;
                } while (v41 < v33);
            }
            else
            {
                v32 = ((unsigned int)((0 CONCAT (unsigned int)v51) % (v52 & 4294967295)) CONCAT (unsigned int)((0 CONCAT (unsigned int)v51) / (v52 & 4294967295))) & 4294967295;
                if (!(!v24))
                    goto LABEL_7a4ab0;
LABEL_7a4cbc:
                v62 = 0;
                do
                {
                    v62 = v62.forward_unchecked();
                } while (v62 < v52);
            }
            v3.create(a2, a3);
            v63 = repng::encode((unsigned int)v3.unwrap(), v24, v52 & 4294967295, v22, 0);
            if (v63)
            {
                v0 = v63;
                if (::0x7a20f0::core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hec4bd8d019e67a03E))
                {
                    v26.spec_to_string(&v0);
                    v1 = &v26;
                    v2 = <alloc::string::String as core::fmt::Display>::fmt;
                    v4 = &g_44fb30;
                    v8 = 1;
                    v13 = 0;
                    v11 = &v1;
                    v12 = 1;
                    v16 = "flealib::screenshotException while sleeping in thread";
                    v17 = 19;
                    v18 = "flealib::screenshotException while sleeping in thread";
                    v19 = 19;
                    v20 = log::__private_api::loc(&g_b0bc30);
                    log::__private_api::log(&v3, 1, &v16);
                    ::0x7a1b50::core::ptr::drop_in_place<alloc::string::String>(&v26);
                }
                v3.spec_to_string(&v0);
                a0->field_10 = v11;
                *((int128_t *)&a0->field_0) = *((int128_t *)&v3);
                ::0x7a1b60::core::ptr::drop_in_place<std::io::error::Error>(&v0);
                ::0x7a1be0::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v21);
                core::ptr::drop_in_place<scrap::common::x11::Capturer>(&(char)v34);
                return a0;
            }
            else
            {
                if (::0x7a20f0::core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hec4bd8d019e67a03E) > 3)
                {
                    v5 = &g_b0bb90;
                    v8 = 1;
                    v10 = 8;
                    *((uint128_t *)&v12) = 0;
                    v16 = "flealib::screenshotException while sleeping in thread";
                    v17 = 19;
                    v18 = "flealib::screenshotException while sleeping in thread";
                    v19 = 19;
                    v20 = log::__private_api::loc(&g_b0bc18);
                    log::__private_api::log(&v3, 4, &v16);
                }
                ::0x7a1be0::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v21);
                *((unsigned long long *)&a0->field_0) = 0x8000000000000000;
                core::ptr::drop_in_place<scrap::common::x11::Capturer>(&(char)v34);
                return a0;
            }
        }
    }
}
