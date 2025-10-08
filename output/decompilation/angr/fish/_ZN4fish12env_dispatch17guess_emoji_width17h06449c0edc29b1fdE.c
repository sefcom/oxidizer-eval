long long fish::env_dispatch::guess_emoji_width(unsigned long long a0)
{
    void* v0;  // [bp-0x130]
    unsigned long long v1;  // [bp-0x128]
    void* v2;  // [bp-0x120]
    void* v3;  // [bp-0x118]
    char v4;  // [bp-0x118]
    int v5;  // [bp-0x110], Other Possible Types: char
    int v6;  // [bp-0x108], Other Possible Types: char
    int v7;  // [bp-0xf8], Other Possible Types: char
    unsigned long long v8;  // [bp-0xe8]
    int v9;  // [bp-0xd8], Other Possible Types: void*
    int v10;  // [bp-0xd0], Other Possible Types: unsigned long long
    void* v11;  // [bp-0xc8], Other Possible Types: unsigned long long
    int v12;  // [bp-0xb8], Other Possible Types: char
    unsigned long long v13;  // [bp-0xa8]
    char v14;  // [bp-0xa0]
    char v15;  // [bp-0x88]
    char v16;  // [bp-0x70]
    char v17;  // [bp-0x58]
    char v18;  // [bp-0x40]
    char v19;  // [bp-0x28]
    unsigned long long v21;  // rax
    unsigned long v22;  // rdi
    unsigned long v23;  // rbx
    unsigned long long v24;  // rax
    void* v25;  // rdx
    unsigned long long v26;  // cc_ndep
    unsigned long v27;  // rdi
    uint128_t v28;  // xmm1
    int v29;  // ymm1
    uint256_t v30;  // ymm1
    int v31;  // ymm1
    int v33;  // xmm0
    int v34;  // xmm0
    unsigned int v35;  // ecx
    unsigned long long v36;  // rax

    v12.getf(a0, "f", 16, 0);
    if (*((long long *)&v12))
    {
        v11 = v13;
        v9 = v12;
        v4.as_string(&v12);
        v21 = fish::wutil::wcstoi::fish_wcstoi(*((long long *)&v5), *((long long *)&v6));
        v22 = (!((char)v21 & 1) ? v21 >> 32 : 1);
        v23 = (unsigned int)(!((char)v21 & 1) ? v21 >> 32 : 1).clamp();
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v4);
        core::sync::atomic::atomic_store(&_ZN4fish8fallback16FISH_EMOJI_WIDTH17h66c10587dd14d79aE, v23);
        if (!(char)core::sync::atomic::atomic_load(&g_15a9980, 0))
            return core::ptr::drop_in_place<fish::env::var::EnvVar>(&v12);
        v0 = 0;
        v1 = 1;
        v2 = 0;
        v7.to_flog_str(&g_15a9970);
        v4.into_iter(&v7);
        v0.spec_extend(&v4);
        v0.push(58, &g_14d6f60);
        v0.push(32, &g_14d6f60);
        v16.to_vec("Overriding default fish_emoji_width w/", 38);
        v4.into_iter(&v16);
        v0.spec_extend(&v4);
        v0.push(32, &g_14d6f60);
        v4.spec_to_string(v23);
        v8 = *((long long *)&v6);
        memcpy(&v7, &v4, 16);
        v4.into_iter(&v7);
        v0.spec_extend(&v4);
        v0.push(10, &g_14d6f60);
        fish::flog::flog_impl(v1, 0);
        core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v1);
        return core::ptr::drop_in_place<fish::env::var::EnvVar>(&v12);
    }
    else
    {
        core::ptr::drop_in_place<core::option::Option<fish::env::var::EnvVar>>(&v12);
        v14.getf(a0, "T", 12, 0);
        if (*((long long *)&v14))
        {
            fish::env_dispatch::init_locale::{{closure}}(&(char)v3, &v14);
            memcpy(&v7, &v5, 16);
            if ((char)(((0 ^ v3) & (0 ^ -(v3))) >> 63))
                goto LABEL_139b1be;
            v10 = v7;
            v9 = v3;
        }
        else
        {
LABEL_139b1be:
            v9 = 0;
            v10 = 4;
            v11 = 0;
        }
        v24 = fish::tty_handoff::xtversion();
        if (!v24)
            v25 = 0;
        v27 = (v24 ? v24 : 4);
        if ((v24 ? v24 : 4).starts_with(v25, "i", 7))
        {
            core::sync::atomic::atomic_store(&_ZN4fish8fallback16FISH_EMOJI_WIDTH17h66c10587dd14d79aE, 2);
            if (!(char)core::sync::atomic::atomic_load(&g_15a9980, 0))
                return (unsigned long long)core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v9);
            v0 = 0;
            v1 = 1;
            v2 = 0;
            v7.to_flog_str(&g_15a9970);
            (char)v3.into_iter(&v7);
            v0.spec_extend(&(char)v3);
            v0.push(58, &g_14d6fa8);
            v0.push(32, &g_14d6fa8);
            v17.to_vec(&g_54da48, 32);
            (char)v3.into_iter(&v17);
            v0.spec_extend(&(char)v3);
            v0.push(10, &g_14d6fa8);
            fish::flog::flog_impl(1, 0);
        }
        else if (v10.eq(v11, "Apple_Terminal", 14))
        {
            v15.getf(a0, "T", 20, 0);
            if (*((long long *)&v15))
            {
                fish::env_dispatch::init_locale::{{closure}}(&(char)v3, &v15);
                memcpy(&v7, &v5, 16);
                if ((char)(((0 ^ v3) & (0 ^ -(v3))) >> 63))
                    goto LABEL_139b3a7;
                v5 = v7;
                v28 = 0;
                v30 = v29 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                if (((char)fish::env_dispatch::guess_emoji_width::{{closure}}(&v3) & 1))
                {
                    v28 = v7;
                    v30 = v30 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v28;
                }
            }
            else
            {
LABEL_139b3a7:
                v28 = 0;
                v30 = v31 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
            }
            v33 = MaxV(v28, 0xc1e0000000000000);
            v34 = MinV(v33, 0x41dfffffffc00000);
            v35 = ((char)_ccall(11, 0, (unsigned long long)(CmpF((unsigned long long)v30, (unsigned long long)v30) & 69), 0, v26) ? (unsigned int)(MinV(v33, 0x41dfffffffc00000)) : 0);
            if (((char)_ccall(11, 0, (unsigned long long)(CmpF((unsigned long long)v30, (unsigned long long)v30) & 69), 0, v26) ? (unsigned int)(MinV(v33, 0x41dfffffffc00000)) : 0) < 400)
                goto LABEL_139b526;
            core::sync::atomic::atomic_store(&_ZN4fish8fallback16FISH_EMOJI_WIDTH17h66c10587dd14d79aE, 2);
            if (!(char)core::sync::atomic::atomic_load(&g_15a9980, 0))
                return (unsigned long long)core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v9);
            v0 = 0;
            v1 = 1;
            v2 = 0;
            v7.to_flog_str(&g_15a9970);
            v3.into_iter(&v7);
            v0.spec_extend(&v3);
            v0.push(58, &g_14d6f90);
            v0.push(32, &g_14d6f90);
            v18.to_vec("default emoji width: 2 forinclusiveIgnoring invalid $fish_read_limitxterm-16color256-color support determined by $fish_term256:$fish_term24bit preference: 24-bit colorenabledTrue-color support: disabled for screentruecolor24bitTrue-color supportper $COLORT", 26);
            v3.into_iter(&v18);
            v0.spec_extend(&v3);
            v0.push(32, &g_14d6f90);
            v7.to_flog_str(&v9);
            v3.into_iter(&v7);
            v0.spec_extend(&v3);
            v0.push(10, &g_14d6f90);
            fish::flog::flog_impl(1, 0);
        }
        else
        {
LABEL_139b526:
            v36 = fish::fallback::wcwidth().clamp();
            core::sync::atomic::atomic_store(&_ZN4fish8fallback16FISH_EMOJI_WIDTH17h66c10587dd14d79aE, v36);
            if (!(char)core::sync::atomic::atomic_load(&g_15a9980, 0))
                return (unsigned long long)core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v9);
            v0 = 0;
            v1 = 1;
            v2 = 0;
            v7.to_flog_str(&g_15a9970);
            (char)v3.into_iter(&v7);
            v0.spec_extend(&(char)v3);
            v0.push(58, &g_14d6f78);
            v0.push(32, &g_14d6f78);
            v19.to_vec("default emoji width:default emoji width: 2 forinclusiveIgnoring invalid $fish_read_limitxterm-16color256-color support determined by $fish_term256:$fish_term24bit preference: 24-bit colorenabledTrue-color support: disabled for screentruecolor24bitTrue-colo", 20);
            (char)v3.into_iter(&v19);
            v0.spec_extend(&(char)v3);
            v0.push(32, &g_14d6f78);
            (char)v3.spec_to_string(v36);
            v8 = (long long)v6;
            memcpy(&v7, &v4, 16);
            (char)v3.into_iter(&v7);
            v0.spec_extend(&(char)v3);
            v0.push(10, &g_14d6f78);
            fish::flog::flog_impl(1, 0);
        }
        core::ptr::drop_in_place<alloc::vec::Vec<i8>>(0, 1);
        return (unsigned long long)core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v9);
    }
}
