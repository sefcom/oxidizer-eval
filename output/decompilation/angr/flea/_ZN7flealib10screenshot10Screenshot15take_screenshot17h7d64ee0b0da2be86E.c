long long flealib::screenshot::Screenshot::take_screenshot(struct_0 *a0, unsigned long a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0x198]
    unsigned short *v1;  // [sp-0x190], Other Possible Types: char *, unsigned long long
    unsigned long long v2;  // [sp-0x188]
    unsigned long v3;  // [bp-0x180], Other Possible Types: char, unsigned long long
    unsigned long long v4;  // [bp-0x180]
    unsigned long v5;  // [bp-0x180]
    unsigned short v6;  // [bp-0x17f]
    char v7;  // [bp-0x17d]
    unsigned long long v8;  // [bp-0x178]
    char *v9;  // [bp-0x170], Other Possible Types: unsigned long long
    unsigned long long v10;  // [bp-0x170]
    int v11;  // [bp-0x168], Other Possible Types: unsigned long long
    void* v12;  // [bp-0x160]
    char v13;  // [bp-0x154]
    char v14;  // [bp-0x150]
    char v15;  // [bp-0x140], Other Possible Types: unsigned long long
    unsigned long long v16;  // [bp-0x138]
    char *v17;  // [bp-0x130], Other Possible Types: unsigned long long
    unsigned long long v18;  // [bp-0x128]
    void* v19;  // [sp-0x120], Other Possible Types: unsigned long long
    char *v20;  // [bp-0x110], Other Possible Types: unsigned long long
    unsigned long long v21;  // [bp-0x108]
    void* v22;  // [bp-0x100]
    unsigned long v23;  // [bp-0xf0]
    unsigned long long v24;  // [bp-0xe8]
    char v25;  // [bp-0xe0], Other Possible Types: unsigned long long
    unsigned long long v26;  // [bp-0xd8]
    char v27;  // [bp-0xd0], Other Possible Types: unsigned long long
    char v28;  // [bp-0xcc]
    unsigned long long v29;  // [bp-0xc8]
    unsigned long long v30;  // [bp-0xc0]
    unsigned long long v31;  // [bp-0xb8]
    unsigned long v32;  // [bp-0xb0]
    int v33;  // [bp-0xa8], Other Possible Types: unsigned long long
    unsigned long long v34;  // [bp-0xa0]
    int v35;  // [bp-0x98], Other Possible Types: unsigned long long
    unsigned long long v36;  // [bp-0x90]
    int v37;  // [bp-0x88], Other Possible Types: unsigned long
    unsigned short v38;  // [bp-0x84]
    char v39;  // [bp-0x78]
    unsigned long long v40;  // [bp-0x50]
    char v41;  // [bp-0x48]
    unsigned long long v42;  // [bp-0x38]
    unsigned int v44;  // edx
    unsigned long long v45;  // rax
    unsigned long long v46;  // rax
    int v47;  // xmm0
    int v48;  // xmm1
    unsigned short *v49;  // rbp
    unsigned long long v50;  // r15
    unsigned long v51;  // rbx
    unsigned long long v52;  // rdx
    void* v53;  // rax
    unsigned long long v54;  // rbx
    void* v55;  // r13
    unsigned long long v56;  // rax
    unsigned long v57;  // rdi
    unsigned long long v58;  // r14
    unsigned long v59;  // rax
    void* v61;  // rax
    unsigned long long v62;  // rax

    v45 = 1.new(0).checked_div(v44);
    if (v44 == 0x3b9aca00)
        core::option::expect_failed("divide by zero error when dividing duration by scalarScreen captured! Saving...Image saved.flealib/src/screenshot.rs", 53, &g_b0bba0); /* do not return */
    v25.primary();
    if (v28 == 2)
    {
        v1 = v25;
        if (::0x7a20f0::core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hec4bd8d019e67a03E))
        {
            v15.spec_to_string(&v1);
            v20 = &v15;
            v21 = <alloc::string::String as core::fmt::Display>::fmt;
            v3 = &g_44fb30;
            v8 = 1;
            v12 = 0;
            v9 = &v20;
            v11 = 1;
            v33 = "flealib::screenshotException while sleeping in thread";
            v34 = 19;
            v35 = "flealib::screenshotException while sleeping in thread";
            v36 = 19;
            v37 = log::__private_api::loc(&g_b0bcd8);
            log::__private_api::log(&(char)v3, 1, &v33);
            ::0x7a1b50::core::ptr::drop_in_place<alloc::string::String>(&v15);
        }
        v3.spec_to_string(&v1);
        a0->field_10 = v9;
        *((int128_t *)&a0->field_0) = *((int128_t *)&v3);
        ::0x7a1b60::core::ptr::drop_in_place<std::io::error::Error>(&v1);
        return a0;
    }
    else
    {
        v42 = *((long long *)&v27);
        memcpy(&v41, &v25, 16);
        (char)v3.new(&v41);
        if (v13 == 2)
        {
            v0 = v3;
            if (::0x7a20f0::core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hec4bd8d019e67a03E))
            {
                (char)v20.spec_to_string(&v0);
                v1 = &(char)v20;
                v2 = <alloc::string::String as core::fmt::Display>::fmt;
                v15 = &g_44fb30;
                v16 = 1;
                v19 = 0;
                v17 = &v1;
                v18 = 1;
                v46 = log::__private_api::loc(&g_b0bcc0);
                v25 = "flealib::screenshotException while sleeping in thread";
                v26 = 19;
                v27 = "flealib::screenshotException while sleeping in thread";
                v29 = 19;
                v30 = v46;
                log::__private_api::log(&v15, 1, &v25);
                ::0x7a1b50::core::ptr::drop_in_place<alloc::string::String>(&(char)v20);
            }
            v15.spec_to_string(&v0);
            a0->field_10 = v17;
            *((int128_t *)&a0->field_0) = *((int128_t *)&v15);
            ::0x7a1b60::core::ptr::drop_in_place<std::io::error::Error>(&v0);
            return a0;
        }
        else
        {
            v47 = *((int128_t *)&v3);
            v48 = *((int128_t *)&v9);
            memcpy(&v39, &v14, 16);
            *((int128_t *)&v37) = *((int128_t *)&v12);
            v35 = v48;
            v33 = v47;
            v23 = v38;
            v32 = (short)(&v37)[6];
            while (true)
            {
                v1.frame(&(char)v33);
                if (v1)
                    break;
                v24 = v2;
                if ((char)v2.kind() == 13)
                {
                    std::thread::sleep(v45, v44);
                    ::0x7a1b60::core::ptr::drop_in_place<std::io::error::Error>(&v24);
                }
                else
                {
                    v0 = 40.new("Exception while sleeping in thread", 34);
                    if (::0x7a20f0::core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hec4bd8d019e67a03E))
                    {
                        v25.spec_to_string(&v0);
                        v20 = &v25;
                        v21 = <alloc::string::String as core::fmt::Display>::fmt;
                        v3 = &g_44fb30;
                        v8 = 1;
                        v12 = 0;
                        v9 = &v20;
                        v11 = 1;
                        v15 = "flealib::screenshotException while sleeping in thread";
                        v16 = 19;
                        v17 = "flealib::screenshotException while sleeping in thread";
                        v18 = 19;
                        v19 = log::__private_api::loc(&g_b0bca8);
                        log::__private_api::log(&(char)v3, 1, &v15);
                        ::0x7a1b50::core::ptr::drop_in_place<alloc::string::String>(&v25);
                    }
                    v3.spec_to_string(&v0);
                    a0->field_10 = v9;
                    *((int128_t *)&a0->field_0) = *((int128_t *)&v3);
                    ::0x7a1b60::core::ptr::drop_in_place<std::io::error::Error>(&v0);
                    ::0x7a1b60::core::ptr::drop_in_place<std::io::error::Error>(&v24);
                    core::ptr::drop_in_place<scrap::common::x11::Capturer>(&(char)v33);
                    return a0;
                }
            }
            v50 = v2;
            v51 = v32;
            if (::0x7a20f0::core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hec4bd8d019e67a03E) >= 4)
            {
                v3 = &g_b0bb80;
                v8 = 1;
                v10 = 8;
                *((uint128_t *)&v11) = 0;
                v15 = "flealib::screenshotException while sleeping in thread";
                v16 = 19;
                v17 = "flealib::screenshotException while sleeping in thread";
                v18 = 19;
                v19 = log::__private_api::loc(&g_b0bbb8);
                log::__private_api::log(&(char)v3, 4, &v15);
            }
            v20 = v51 * v23 * 4.with_capacity_in(&g_b0bbd0);
            v21 = v52;
            v22 = 0;
            if (!v51)
                core::panicking::panic_const::panic_const_div_by_zero(&g_b0bbe8); /* do not return */
            if (v50 >> 32)
            {
                v31 = (unsigned long long)((0 CONCAT v50) % v51) CONCAT (unsigned long long)((0 CONCAT v50) / v51);
                if (!v23)
                    goto LABEL_7a4cbc;
LABEL_7a4ab0:
                v53 = 0;
                do
                {
                    v40 = v53.forward_unchecked();
                    v54 = v31 * v53;
                    v55 = 0;
                    do
                    {
                        v56 = v55.forward_unchecked();
                        v57 = v54 + v55 * 4 + 2;
                        if (v57 >= v50)
                            core::panicking::panic_bounds_check(v57, v50, &g_b0bc48); /* do not return */
                        v58 = v56;
                        v57 = v54 + v55 * 4;
                        v59 = v57 + 1;
                        if (v59 >= v50)
                            core::panicking::panic_bounds_check(v59, v50, &g_b0bc60); /* do not return */
                        if (v57 >= v50)
                            core::panicking::panic_bounds_check(v57, v50, &g_b0bc78); /* do not return */
                        v3 = *(2 + (char *)v49 + v57);
                        v6 = __ROL__(*((short *)((char *)v49 + v57)), 8);
                        v7 = 255;
                        v20.append_elements(&v3, 4, &g_b0bc90);
                        v55 = v58;
                    } while (v58 < v23);
                    v51 = v32;
                    v53 = v40;
                } while (v40 < v32);
            }
            else
            {
                v31 = ((unsigned int)((0 CONCAT (unsigned int)v50) % (v51 & 4294967295)) CONCAT (unsigned int)((0 CONCAT (unsigned int)v50) / (v51 & 4294967295))) & 4294967295;
                if (!(!v23))
                    goto LABEL_7a4ab0;
LABEL_7a4cbc:
                v61 = 0;
                do
                {
                    v61 = v61.forward_unchecked();
                } while (v61 < v51);
            }
            v3.create(a2, a3);
            v62 = repng::encode((unsigned int)v3.unwrap(), v23, v51 & 4294967295, v21, 0);
            if (v62)
            {
                v0 = v62;
                if (::0x7a20f0::core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hec4bd8d019e67a03E))
                {
                    v25.spec_to_string(&v0);
                    v1 = &v25;
                    v2 = <alloc::string::String as core::fmt::Display>::fmt;
                    v4 = &g_44fb30;
                    v8 = 1;
                    v12 = 0;
                    v10 = &v1;
                    v11 = 1;
                    v15 = "flealib::screenshotException while sleeping in thread";
                    v16 = 19;
                    v17 = "flealib::screenshotException while sleeping in thread";
                    v18 = 19;
                    v19 = log::__private_api::loc(&g_b0bc30);
                    log::__private_api::log(&v3, 1, &v15);
                    ::0x7a1b50::core::ptr::drop_in_place<alloc::string::String>(&v25);
                }
                v3.spec_to_string(&v0);
                a0->field_10 = v10;
                *((int128_t *)&a0->field_0) = *((int128_t *)&v3);
                ::0x7a1b60::core::ptr::drop_in_place<std::io::error::Error>(&v0);
                ::0x7a1be0::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v20);
                core::ptr::drop_in_place<scrap::common::x11::Capturer>(&(char)v33);
                return a0;
            }
            else
            {
                if (::0x7a20f0::core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hec4bd8d019e67a03E) > 3)
                {
                    v5 = &g_b0bb90;
                    v8 = 1;
                    v9 = 8;
                    *((uint128_t *)&v11) = 0;
                    v15 = "flealib::screenshotException while sleeping in thread";
                    v16 = 19;
                    v17 = "flealib::screenshotException while sleeping in thread";
                    v18 = 19;
                    v19 = log::__private_api::loc(&g_b0bc18);
                    log::__private_api::log(&v3, 4, &v15);
                }
                ::0x7a1be0::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v20);
                *((unsigned long long *)&a0->field_0) = 0x8000000000000000;
                core::ptr::drop_in_place<scrap::common::x11::Capturer>(&(char)v33);
                return a0;
            }
        }
    }
}
