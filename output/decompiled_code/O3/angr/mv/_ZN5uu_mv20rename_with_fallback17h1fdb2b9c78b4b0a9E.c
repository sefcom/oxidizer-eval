int uu_mv::rename_with_fallback::h1fdb2b9c78b4b0a9()
{
    unsigned long long v0;  // [sp-0x298]
    unsigned long long v1;  // [bp-0x290]
    void* v2;  // [sp-0x288]
    unsigned int v3;  // [sp-0x280]
    void* v4;  // [bp-0x278], Other Possible Types: char
    unsigned long v5;  // [sp-0x260], Other Possible Types: unsigned long long
    unsigned long long v6;  // [sp-0x258]
    unsigned long long v7;  // [sp-0x250]
    char v8;  // [bp-0x248]
    char v9;  // [bp-0x238]
    char v10;  // [bp-0x228]
    unsigned long v11;  // [sp-0x218], Other Possible Types: unsigned long long
    unsigned long long v12;  // [sp-0x210], Other Possible Types: unsigned long
    char v13;  // [bp-0x20c]
    char v14;  // [bp-0x20b]
    unsigned long long v15;  // [sp-0x208]
    char v16;  // [bp-0x204]
    unsigned long long v17;  // [sp-0x200]
    void* v18;  // [bp-0x1f8], Other Possible Types: char
    int v20;  // [sp-0x168]
    int v21;  // [sp-0x158]
    int v22;  // [bp-0x148], Other Possible Types: unsigned long long
    unsigned long long v23;  // [sp-0x140]
    unsigned long v24;  // [sp-0x138], Other Possible Types: unsigned long long
    unsigned long long v25;  // [sp-0x130]
    unsigned long v26;  // [sp-0x128], Other Possible Types: unsigned long long
    unsigned long long v27;  // [sp-0x120]
    int v28;  // [bp-0x118], Other Possible Types: char, unsigned int, unsigned long long, unsigned long
    char v29;  // [sp-0x114]
    unsigned int v30;  // [bp-0x110], Other Possible Types: unsigned long
    char v31;  // [sp-0x10c]
    unsigned long long v32;  // [bp-0x10b]
    int v33;  // [bp-0x108]
    unsigned int v34;  // [sp-0x104]
    int v35;  // [sp-0xf8]
    int v36;  // [sp-0x68]
    unsigned long long v37;  // [sp-0x58]
    char v38;  // [bp-0x48]
    unsigned long long v40;  // rdi
    unsigned long long v41;  // rsi
    unsigned long long v42;  // rdx
    unsigned long long v43;  // rcx
    unsigned int v44;  // eax
    unsigned long long v45;  // r14
    unsigned long long v46;  // rax
    unsigned long long v48;  // rax
    unsigned long long *v49;  // r8
    unsigned long long v50;  // rdx
    unsigned int v51;  // ecx
    char v52;  // al
    int v53;  // xmm0
    int v54;  // xmm1
    struct struct_0 **v55;  // fs
    unsigned long long v56[3];  // rax
    unsigned long long v57;  // r14
    unsigned long long v58[3];  // rax
    unsigned long long v59;  // rax
    int v60;  // xmm0
    int v61;  // xmm2

    v24 = v40;
    v25 = v41;
    v26 = v42;
    v27 = v43;
    v11 = std::sys::pal::unix::fs::rename::he356589d9e8dc32c(v40, v41, v42, v43);
    if (!v11)
        return;
    ::0x49ec20::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h5905b32231466f9a(&v11);
    std::sys::pal::unix::fs::lstat::hbbeb53ede4a4ae6e(&v11, v40, v41);
    if ((int)v11 == 2)
        return;
    switch (v44)
    {
    case 16384:
        std::sys::pal::unix::fs::stat::h84607eb26fae96a2(&v11, v42, v43);
        if ((int)v11 == 2)
        {
            v30 = v12;
            v28 = 2;
            goto LABEL_4a6ef0;
        }
        memcpy(&v28, &v11, 176);
        if (v28 == 2)
        {
LABEL_4a6ef0:
            ::0x49ec20::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h5905b32231466f9a(&v30);
            goto LABEL_4a6efd;
        }
        if (std::sys::pal::unix::fs::remove_dir_impl::remove_dir_all::h1a7f3e92f19c2463(v42, v43))
            return;
LABEL_4a6efd:
        v3 = 0x10000;
        v1 = 0xfa00;
        v2 = 0;
        fs_extra::dir::get_size::h7f38a00db313ef3d(&v11, v40, v41);
        if (v11 != 0x8000000000000000)
        {
            core::ptr::drop_in_place$LT$fs_extra..error..Error$GT$::h25b8443e9ebefc50(&v11);
            goto LABEL_4a708d;
        }
        if (!v49)
        {
LABEL_4a708d:
            v4 = 0;
        }
        else
        {
            indicatif::draw_target::ProgressDrawTarget::stderr::h4a66a105bd7b0684(&v11, v41, v42);
            indicatif::progress_bar::ProgressBar::with_draw_target::h56a557ce18c94842(&v8, 1, v12, &v11);
            _ZN9indicatif5style8Template8from_str17h5ab5ab07129954d3E.llvm.7449428882404917472(&v11, "{msg}: [{elapsed_precise}] {wide_bar} {bytes:>7}/{total_bytes:7}Permission deniedinter-device move failed: '' to ''; unable to remove target: ", 64);
            v50 = v11;
            v51 = v12;
            v52 = v13;
            if (v50 == 0x8000000000000000)
            {
                v28 = v51;
                v29 = v52;
                core::result::unwrap_failed::h39784290e544308e(); /* do not return */
            }
            v34 = *((int *)&v16);
            v32 = *((long long *)&v14);
            v28 = v50;
            v30 = v51;
            v31 = v52;
            _ZN9indicatif5style13ProgressStyle3new17he63c0f651a0a86f8E.llvm.7449428882404917472(&v11, &v28);
            if (v11 == 0x8000000000000000)
            {
                vvar_725{stack -280} = v51;
                vvar_726{stack -276} = v52;
                core::result::unwrap_failed::h39784290e544308e(); /* do not return */
            }
            memcpy(&v28, &v11, 136);
            indicatif::progress_bar::ProgressBar::set_style::ha2f60e08e54542c2(&v8, &v28);
            v37 = *((long long *)&v9);
            *((int128_t *)&v36) = *((int128_t *)&v8);
            _ZN9indicatif5multi13MultiProgress11internalize17h03a75050af0b4f55E.llvm.3185967499565818134(&v4, *(v49), 0, v43, &v36);
        }
        uucore::features::fsxattr::retrieve_xattrs::hb595375568633b6c(&v11, v40, v41);
        if (v11)
        {
            v53 = *((int128_t *)&v11);
            v54 = *((int128_t *)&v15);
            *((int128_t *)&v22) = *((int128_t *)&v18);
            v21 = v54;
            v20 = v53;
        }
        else
        {
            v28 = v12;
            if (*((long long *)&*(v55)->padding_-28[40]))
            {
                v56 = &*(v55)->padding_-28[40];
                v57 = v56[1];
                v7 = v56[2];
            }
            else
            {
                v57 = std::sys::pal::unix::rand::hashmap_random_keys::h37536acea0ea3646();
                v58 = &*(v55)->padding_-28[40];
                v58[0] = 1;
                v58[1] = v57;
                v7 = v42;
                v58[2] = v42;
            }
            *((unsigned long long *)&*(v55)->padding_-28[32]) = v57 + 1;
            *((uint128_t *)&v20) = g_530ce8;
            *((uint128_t *)&v21) = g_530cf8;
            v22 = v57;
            v23 = v7;
            ::0x49ec20::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h5905b32231466f9a(&v28);
        }
        if (!v4)
        {
            fs_extra::dir::move_dir::h992c03e981304677(&v8, v40, v41, v42, v43, &v1);
        }
        else
        {
            v0 = &v4;
            fs_extra::dir::move_dir_with_progress::h6f80300b0bffc758(&v8, v40, v41, v42, v43, &v1);
        }
        v59 = uucore::features::fsxattr::apply_xattrs::h44b1018c7cbe7638(v42, v43, &v20);
        if (v59)
        {
            v11 = v59;
            core::result::unwrap_failed::h39784290e544308e(); /* do not return */
        }
        if (*((long long *)&v8) != 0x8000000000000000)
        {
            v60 = *((int128_t *)&v8);
            v61 = *((int128_t *)&v10);
            *((int128_t *)&v33) = *((int128_t *)&v9);
            v35 = v61;
            v28 = v60;
            if ((long long)(&v33)[8] != 9223372036854775809)
            {
                v5 = &v28;
                v6 = _$LT$fs_extra..error..Error$u20$as$u20$core..fmt..Debug$GT$::fmt::h0e9a5eb8c4ccda25;
                v11 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
                v12 = 1;
                v18 = 0;
                v15 = &v5;
                v17 = 1;
                alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v38, &v11);
                std::io::error::Error::new::h03b120fead9f3de2(39, &v38);
            }
            else
            {
                std::io::error::Error::new::hc754441dbe4d926c(1, "Permission deniedinter-device move failed: '' to ''; unable to remove target: ", 17);
            }
            core::ptr::drop_in_place$LT$fs_extra..error..Error$GT$::h25b8443e9ebefc50(&v28);
            if (v4)
                core::ptr::drop_in_place$LT$indicatif..progress_bar..ProgressBar$GT$::h64312e3ef4a4f3ed(&v4, v41, v42);
            break;
        }
        else if (v4)
        {
            core::ptr::drop_in_place$LT$indicatif..progress_bar..ProgressBar$GT$::h64312e3ef4a4f3ed(&v4, v41, v42);
        }
    case 40960:
        std::sys::pal::unix::fs::readlink::ha3dd542a872ee689(&v11, v40, v41);
        v45 = v11;
        v46 = v12;
        if (v45 != 0x8000000000000000)
        {
            if (v45)
                __rust_dealloc(v46);
            if (!std::sys::pal::unix::fs::symlink::h11d0a05d1a49fd8c(v46, v15, v42, v43))
            {
                std::sys::pal::unix::fs::unlink::h9e34f634412c6081(v40, v41);
                return;
            }
        }
        break;
    default:
        if ((char)std::path::Path::is_symlink::h6ab8b58756c51c6b(v42, v43))
        {
            v48 = std::sys::pal::unix::fs::unlink::h9e34f634412c6081(v42, v43);
            if (v48)
            {
                v5 = v48;
                std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(&v1, v42, v43);
                std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(&v4, v40, v41);
                goto *((int *)(4327304 + (vvar_219{reg 16} & 3) * 4)) + 4327304;
            }
        }
        if (std::sys::pal::unix::fs::copy::h1e127c57175e5969(v40, v41, v42, v43))
        {
            break;
        }
        else if (!uucore::features::fsxattr::copy_xattrs::hbdf43d08b2209c64(&v24, &v26))
        {
            std::sys::pal::unix::fs::unlink::h9e34f634412c6081(v40, v41);
            break;
        }
    }
}
