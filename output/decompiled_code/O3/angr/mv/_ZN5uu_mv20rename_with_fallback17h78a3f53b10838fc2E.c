long long uu_mv::rename_with_fallback::h78a3f53b10838fc2(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    char v0;  // [bp-0x288]
    void* v1;  // [sp-0x278], Other Possible Types: char
    char v2;  // [bp-0x260]
    char v3;  // [bp-0x250]
    char v4;  // [bp-0x240]
    unsigned long long v5;  // [sp-0x230]
    void* v6;  // [sp-0x228]
    unsigned int v7;  // [sp-0x220]
    unsigned long v8;  // [sp-0x218], Other Possible Types: unsigned long long
    unsigned long long v9;  // [sp-0x210]
    unsigned long v10;  // [sp-0x208], Other Possible Types: unsigned long long
    unsigned long long v11;  // [sp-0x200]
    unsigned long v12;  // [sp-0x1f8], Other Possible Types: unsigned long long
    unsigned long long v13;  // [sp-0x1f0]
    int v14;  // [sp-0x1e8], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v15;  // [sp-0x1e0]
    int v16;  // [bp-0x1d8], Other Possible Types: char, unsigned long long
    unsigned long long v17;  // [sp-0x1d0]
    int v18;  // [bp-0x1c8], Other Possible Types: void*, char
    int v20;  // [sp-0x138], Other Possible Types: char
    int v21;  // [sp-0x128]
    int v22;  // [sp-0x118]
    unsigned long v23;  // [sp-0x108], Other Possible Types: unsigned long long
    unsigned long long v24;  // [sp-0x100]
    unsigned long long v25;  // [sp-0xf8]
    unsigned long long v26;  // [sp-0xf0]
    char v27;  // [bp-0xe8]
    char v28;  // [bp-0xd0]
    int v29;  // [bp-0xb8], Other Possible Types: char
    int v30;  // [sp-0xa8]
    int v31;  // [sp-0x98]
    unsigned long long v33;  // rbx
    unsigned long long v34;  // r14
    unsigned long long v35;  // r15
    unsigned long long v36;  // r12
    unsigned int v37;  // eax
    unsigned long long v39;  // rdx
    unsigned long long v40;  // rax
    unsigned long long v41;  // rdx
    void* v42;  // rax
    unsigned long long v43;  // rsi
    unsigned long long v44;  // rsi

    v33 = a3;
    v34 = a2;
    v35 = a1;
    v36 = a0;
    v8 = a0;
    v9 = a1;
    v10 = a2;
    v11 = a3;
    v14 = std::fs::rename::h5eaadd38387652a4(a0, a1, a2, a3);
    ::0x4e64f0::core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hcc065fcc4ac6952a(&v14);
    if (!v14)
        return 0;
    std::fs::symlink_metadata::h5e225869e7c96063(&v14, v36, v35);
    if ((int)v14 == 2)
        return v42;
    switch (v37)
    {
    case 16384:
        std::fs::metadata::ha7346a2a69513158(&v14, v34, v33);
        ::0x4e6710::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hf8d986ec6b24279b(&v14);
        if ((int)v14 != 2)
        {
            v42 = std::fs::remove_dir_all::h09c5115012922c62(v34, v33, v41);
            if (v42)
                return v42;
        }
        v7 = 0x10000;
        v5 = 0xfa00;
        v6 = 0;
        fs_extra::dir::get_size::haf5595285a54e8a5(&v14, v36, v35);
        if (v14 != 0x8000000000000000)
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$fs_extra..error..Error$GT$$GT$::hfdc2e2a94dbb16ea(&v14);
            goto LABEL_4eae3a;
        }
        else if (!a4)
        {
LABEL_4eae3a:
            v1 = 0;
            break;
        }
        else
        {
            indicatif::progress_bar::ProgressBar::new::haefb4e1b56f8434e(&v2, v15, v41);
            indicatif::style::ProgressStyle::with_template::hf3f5e5e18e71351f(&v14, "{msg}: [{elapsed_precise}] {wide_bar} {bytes:>7}/{total_bytes:7}", 64);
            core::result::Result$LT$T$C$E$GT$::unwrap::h00ffd49cc349a49a(&v29, &v14, &g_5874c0);
            indicatif::progress_bar::ProgressBar::with_style::hb9e195dcb73dee57(&v27, &v2, &v29);
            indicatif::multi::MultiProgress::add::he1be2a6de0ee983c(&v1, a4, &v27);
            break;
        }
        uucore::features::fsxattr::retrieve_xattrs::hde96095b23be5ed1(&v14, v36, v35);
        if (v14)
        {
            *((int128_t *)&v22) = *((int128_t *)&v18);
            *((int128_t *)&v21) = *((int128_t *)&v16);
            *((int128_t *)&v20) = *((int128_t *)&v14);
        }
        else
        {
            uu_mv::rename_with_fallback::_$u7b$$u7b$closure$u7d$$u7d$::h42826c627b573e21(&v20, v15, v41);
        }
        if (!v1)
            fs_extra::dir::move_dir::h47485e2b8b865b90(&v2, v36, v35, v34, v33, &v5);
        else
            fs_extra::dir::move_dir_with_progress::h908012d94be9766c(&v2, v36, v35, v34, v33, &v5, v0);
        v18 = v22;
        v16 = v21;
        v14 = v20;
        ::0x4e6bb0::core::result::Result$LT$T$C$E$GT$::unwrap::h0553f2aba90738cc(uucore::features::fsxattr::apply_xattrs::hc8142df663689c7e(v34, v33, &v14));
        if (*((long long *)&v2) == 0x8000000000000000)
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$fs_extra..error..Error$GT$$GT$::hfdc2e2a94dbb16ea(&v2);
            core::ptr::drop_in_place$LT$core..option..Option$LT$indicatif..progress_bar..ProgressBar$GT$$GT$::hd02d19bc3f5e5d4d(&v1, v43, v41);
        }
        else
        {
            *((int128_t *)&v30) = *((int128_t *)&v3);
            *((int128_t *)&v31) = *((int128_t *)&v4);
            *((int128_t *)&v29) = *((int128_t *)&v2);
            if ((long long)(&v30)[8] != 9223372036854775809)
            {
                v12 = &v29;
                v13 = _$LT$fs_extra..error..Error$u20$as$u20$core..fmt..Debug$GT$::fmt::h0e9a5eb8c4ccda25;
                v14 = &g_41c050;
                v15 = 1;
                v18 = 0;
                v16 = &v12;
                v17 = 1;
                ::0x4e6a60::core::option::Option$LT$T$GT$::map_or_else::h34501cc2a6e33d5f(&v28, &v14);
                v42 = std::io::error::Error::new::hbdde03795a1f64b1(39, &v28);
            }
            else
            {
                v42 = std::io::error::Error::new::h9c663fbcdb8c9096(1, "Permission deniedinter-device move failed: '' to ''; unable to remove target: ", 17);
            }
            core::ptr::drop_in_place$LT$fs_extra..error..Error$GT$::hb58488f93c7aa669(&v29);
            core::ptr::drop_in_place$LT$core..option..Option$LT$indicatif..progress_bar..ProgressBar$GT$$GT$::hd02d19bc3f5e5d4d(&v1, v44, v41);
            return v42;
        }
    case 40960:
        return uu_mv::rename_symlink_fallback::h660b7b06bb83800b(v36, v35, v34, v33);
    default:
        if (!(char)std::path::Path::is_symlink::h6ab8b58756c51c6b(v34, v33) || (v40 = std::fs::remove_file::hcb36427ac96e504f(v34, v33, v39), v23 = v34, v24 = v33, v25 = v36, v26 = v35, !v40))
        {
            if (std::fs::copy::h07117c8eb13b0ec3(v36, v35, v34, v33))
                return v42;
            v42 = uucore::features::fsxattr::copy_xattrs::h9de1747544180e8e(&v8, &v10, v39);
            if (v42)
                return v42;
            v42 = std::fs::remove_file::hcb36427ac96e504f(v36, v35, v39);
        }
        else
        {
            v42 = uu_mv::rename_with_fallback::_$u7b$$u7b$closure$u7d$$u7d$::h0d6257a989c7caca(&v23, v40);
        }
        return v42;
    }
}
