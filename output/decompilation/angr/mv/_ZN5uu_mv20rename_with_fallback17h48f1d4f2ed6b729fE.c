long long uu_mv::rename_with_fallback::h48f1d4f2ed6b729f(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    char *v0;  // [sp-0x288]
    void* v1;  // [sp-0x278], Other Possible Types: char
    char v2;  // [bp-0x260]
    char v3;  // [bp-0x250]
    char v4;  // [bp-0x240]
    unsigned long long v5;  // [sp-0x230]
    void* v6;  // [sp-0x228]
    unsigned int v7;  // [sp-0x220]
    unsigned long v8;  // [sp-0x218]
    unsigned long long v9;  // [sp-0x210]
    unsigned long v10;  // [sp-0x208]
    unsigned long long v11;  // [sp-0x200]
    char *v12;  // [sp-0x1f8]
    unsigned long long v13;  // [sp-0x1f0]
    int v14;  // [bp-0x1e8], Other Possible Types: unsigned long
    unsigned long v15;  // [sp-0x1e0], Other Possible Types: unsigned long long
    int v16;  // [bp-0x1d8], Other Possible Types: struct struct_0 **, char
    unsigned long long v17;  // [sp-0x1d0]
    int v18;  // [bp-0x1c8], Other Possible Types: void*, char
    int v20;  // [sp-0x138], Other Possible Types: char
    int v21;  // [sp-0x128]
    int v22;  // [sp-0x118]
    unsigned long v23;  // [sp-0x108]
    unsigned long long v24;  // [sp-0x100]
    unsigned long long v25;  // [sp-0xf8]
    unsigned long long v26;  // [sp-0xf0]
    char v27;  // [bp-0xe8]
    char v28;  // [bp-0xd0]
    int v29;  // [bp-0xb8], Other Possible Types: char
    int v30;  // [sp-0xa8]
    int v31;  // [sp-0x98]
    void* v33;  // rbp
    unsigned int v34;  // eax
    unsigned long long v35;  // rax
    unsigned long long v37;  // rax
    unsigned long v38;  // rdx
    unsigned long long v39;  // rax

    v8 = a0;
    v9 = a1;
    v10 = a2;
    v11 = a3;
    v14 = std::fs::rename::hd948dfb1db41879e(a0, a1, a2, a3);
    ::0x4e7110::core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h5e1e22b88b1aa83a(&v14);
    if (!v14)
        return 0;
    std::fs::symlink_metadata::h7febb2c461a7cc90(&v14, a0, a1);
    if ((int)v14 == 2)
    {
        v33 = v15;
        return v33;
    }
    switch (v34)
    {
    case 16384:
        std::fs::metadata::h1d9ddf5324749f9a(&v14, a2, a3);
        ::0x4e7330::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h1a38c79198e9333e(&v14);
        if ((int)v14 != 2)
        {
            v33 = std::fs::remove_dir_all::heb08d5b595e80c8a(a2, a3);
            if (v33)
                return v33;
        }
        v7 = 0x10000;
        v5 = 0xfa00;
        v6 = 0;
        fs_extra::dir::get_size::hbbe91904dfa02d0c(&v14, a0, a1);
        if (v14 != 0x8000000000000000)
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$fs_extra..error..Error$GT$$GT$::hff1e9b61bee0c0a4(&v14);
            goto LABEL_4eba5a;
        }
        else if (!a4)
        {
LABEL_4eba5a:
            v1 = 0;
            break;
        }
        else
        {
            indicatif::progress_bar::ProgressBar::new::h3f65a405722ce42a(&v2, v15);
            indicatif::style::ProgressStyle::with_template::hadd9cefcdac397a1(&v14, "{msg}: [{elapsed_precise}] {wide_bar} {bytes:>7}/{total_bytes:7}");
            core::result::Result$LT$T$C$E$GT$::unwrap::h7d26c333f6a83544(&v29, &v14, &g_588250);
            indicatif::progress_bar::ProgressBar::with_style::hfb345490eb32754b(&v27, &v2, &v29);
            indicatif::multi::MultiProgress::add::h9f882db003b558ae(&v1, a4, &v27);
            break;
        }
        uucore::features::fsxattr::retrieve_xattrs::h93bd4c6665c83aa3(&v14, a0, a1);
        if (v14)
        {
            *((int128_t *)&v22) = *((int128_t *)&v18);
            *((int128_t *)&v21) = *((int128_t *)&v16);
            *((int128_t *)&v20) = *((int128_t *)&v14);
        }
        else
        {
            uu_mv::rename_with_fallback::_$u7b$$u7b$closure$u7d$$u7d$::h82d99eba55661758(&v20, v15);
        }
        if (!v1)
        {
            fs_extra::dir::move_dir::h895849f132645a29(&v2, a0, a1, a2, a3, &v5);
        }
        else
        {
            v0 = &v1;
            fs_extra::dir::move_dir_with_progress::hc90f1a00a6c1a6fa(&v2, a0, a1, a2, a3, &v5);
        }
        v18 = v22;
        v16 = v21;
        v14 = v20;
        ::0x4e77d0::core::result::Result$LT$T$C$E$GT$::unwrap::h925beb8dbedc658c(uucore::features::fsxattr::apply_xattrs::h5a1614cc87ee2729(a2, a3, &v14));
        if (*((long long *)&v2) == 0x8000000000000000)
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$fs_extra..error..Error$GT$$GT$::hff1e9b61bee0c0a4(&v2);
            core::ptr::drop_in_place$LT$core..option..Option$LT$indicatif..progress_bar..ProgressBar$GT$$GT$::h4962931619fca08b(&v1);
        }
        else
        {
            *((int128_t *)&v30) = *((int128_t *)&v3);
            *((int128_t *)&v31) = *((int128_t *)&v4);
            *((int128_t *)&v29) = *((int128_t *)&v2);
            if ((long long)(&v30)[8] != 9223372036854775809)
            {
                v12 = &v29;
                v13 = _$LT$fs_extra..error..Error$u20$as$u20$core..fmt..Debug$GT$::fmt::hd11c1069b969729b;
                v14 = &g_41c350;
                v15 = 1;
                v18 = 0;
                v16 = &v12;
                v17 = 1;
                ::0x4e7680::core::option::Option$LT$T$GT$::map_or_else::h70402eff178ea70d(&v28, &v14);
                v39 = std::io::error::Error::new::h3b474d96466fa494(39, &v28);
            }
            else
            {
                v39 = std::io::error::Error::new::h0657970bda442b78(1, "Permission deniedinter-device move failed: '' to ''; unable to remove target: ", 17);
            }
            v33 = v39;
            core::ptr::drop_in_place$LT$fs_extra..error..Error$GT$::hd05771686690bc86(&v29);
            core::ptr::drop_in_place$LT$core..option..Option$LT$indicatif..progress_bar..ProgressBar$GT$$GT$::h4962931619fca08b(&v1);
            return v33;
        }
    case 40960:
        v35 = uu_mv::rename_symlink_fallback::h50f184778666e82c(a0, a1, a2);
        goto LABEL_4ebadc;
    default:
        if ((char)std::path::Path::is_symlink::h6ab8b58756c51c6b(a2, a3))
        {
            v37 = std::fs::remove_file::hac48d4e29d9c97ea(a2, a3);
            v23 = a2;
            v24 = a3;
            v25 = a0;
            v26 = a1;
            if (v37)
            {
                v33 = uu_mv::rename_with_fallback::_$u7b$$u7b$closure$u7d$$u7d$::hc604898f20a204e8(&v23, v37);
                return v33;
            }
        }
        if (!std::fs::copy::h1bd7b955a3942b36(a0, a1, a2, a3))
        {
            v33 = uucore::features::fsxattr::copy_xattrs::hdfb623434415deaf(&v8, &v10);
            if (v33)
                return v33;
        }
        else
        {
            v33 = v38;
            if (v38)
                return v33;
        }
        v35 = std::fs::remove_file::hac48d4e29d9c97ea(a0, a1);
LABEL_4ebadc:
        v33 = v35;
        if (v35)
            return v33;
    }
}
