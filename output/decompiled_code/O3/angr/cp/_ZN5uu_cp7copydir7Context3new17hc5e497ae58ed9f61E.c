long long uu_cp::copydir::Context::new::hc5e497ae58ed9f61(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    unsigned long v0;  // [sp-0x128], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x120]
    unsigned long long v2;  // [sp-0x118]
    char v3;  // [bp-0x110]
    char v4;  // [bp-0x108]
    char v5;  // [bp-0x100]
    int v6;  // [sp-0xf8]
    char v7;  // [bp-0xe0]
    char v8;  // [bp-0xd8]
    char v9;  // [bp-0xd0]
    unsigned long long v11;  // rbp
    unsigned long long v12;  // rax
    unsigned long long v15;  // rsi
    unsigned long long v16;  // rdx
    unsigned long long v17;  // rcx
    unsigned long long v18;  // rax

    v11 = 0x8000000000000000;
    std::env::current_dir::h8e5fbaefdf378c8c(&v7);
    v12 = *((long long *)&v7);
    if (v0 == 0x8000000000000000)
    {
        *((unsigned long long *)&a0->padding_8[0]) = v1;
        a0->field_0 = 0x8000000000000000;
        return v12;
    }
    v0 = v12;
    v1 = *((long long *)&v8);
    v2 = *((long long *)&v9);
    std::path::Path::join::had13380324e00d87(&v3, v1, v2, a1, a2);
    std::fs::metadata::hb89aa4d693159f5b(&v7, a3, a4);
    v15 = *((long long *)&v8);
    if (*((long long *)&v7) == 2)
    {
        ::0x50cd60::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hf5a3bed3556a31f4(2, v15);
    }
    else
    {
        ::0x50cd60::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hf5a3bed3556a31f4(*((long long *)&v7), v15);
        std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&v7, a1, a2);
        if (*((long long *)&v7))
        {
            core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
        }
        else if (!(char)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::h06f0cf9cb26fe1e1(*((long long *)&v8), *((long long *)&v9), "/.src/uu/cp/src/copydir.rsFailed to create directory: \n", 2))
        {
            v18 = std::path::Path::parent::h65c9a340a6266f2d(*((long long *)&v4), *((long long *)&v5), v16, v17);
            if (v18)
            {
                std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&v7, v18, v16);
                v11 = *((long long *)&v7);
                *((int128_t *)&v6) = *((int128_t *)&v8);
            }
            a0->field_10 = v2;
            *((int128_t *)&a0->field_0) = *((int128_t *)&v0);
            a0->field_18 = v11;
            *((void*)&a0->field_20) = v6;
            a0->field_30 = a3;
            a0->field_38 = a4;
            a0->field_40 = a1;
            a0->field_48 = a2;
            v12 = ::0x50ca30::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h9cfa7825114f203e(&v3);
            return v12;
        }
    }
    v12 = *((long long *)&v3);
    a0->field_10 = v2;
    *((int128_t *)&a0->field_0) = *((int128_t *)&v0);
    a0->field_18 = v12;
    a0->field_20 = *((int128_t *)&v4);
    a0->field_30 = a3;
    a0->field_38 = a4;
    a0->field_40 = a1;
    a0->field_48 = a2;
    return v12;
}
