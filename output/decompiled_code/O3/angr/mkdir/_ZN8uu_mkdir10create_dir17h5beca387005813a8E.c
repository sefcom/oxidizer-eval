long long uu_mkdir::create_dir::h5beca387005813a8(unsigned long long a0, unsigned long long a1, char a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
    unsigned int v0;  // [sp-0x21c]
    unsigned int v1;  // [sp-0x20c]
    unsigned long v2;  // [sp-0x200], Other Possible Types: unsigned long long
    unsigned long v3;  // [sp-0x1f8], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x1f0], Other Possible Types: char
    char v5;  // [bp-0x1ef]
    unsigned long long v6;  // [sp-0x1e8]
    char v7;  // [bp-0x1df]
    char v8;  // [bp-0x1d0]
    char v9;  // [bp-0x1c8]
    char v10;  // [bp-0x1c7]
    char v11;  // [bp-0x1c6]
    char v12;  // [bp-0x1c0], Other Possible Types: unsigned long long
    unsigned long long v13;  // [sp-0x1b8]
    unsigned long v14;  // [bp-0x1b0], Other Possible Types: char
    int v15;  // [bp-0x1af]
    char v16;  // [bp-0x1a8], Other Possible Types: unsigned int
    int v17;  // [bp-0x19f]
    unsigned long long v18;  // [sp-0x190]
    unsigned short v19;  // [sp-0x188]
    char v20;  // [sp-0x186]
    int v21;  // [sp-0x180], Other Possible Types: unsigned long long, unsigned long
    unsigned long v22;  // [sp-0x178], Other Possible Types: unsigned long long
    char v23;  // [bp-0x170]
    char v24;  // [bp-0x16f]
    char v25;  // [bp-0x15f]
    char v26;  // [bp-0x150]
    char v27;  // [bp-0x148]
    char v28;  // [bp-0x147]
    char v29;  // [bp-0x146]
    unsigned long long v30;  // [sp-0x140]
    char v31;  // [bp-0x138], Other Possible Types: unsigned int, unsigned long long, unsigned long
    char v32;  // [sp-0x134]
    unsigned long long v33;  // [sp-0x130]
    char v34;  // [bp-0x128], Other Possible Types: unsigned long
    int v35;  // [bp-0x127]
    unsigned long long v36;  // [sp-0x120]
    void* v37;  // [bp-0x118]
    int v38;  // [bp-0x117]
    unsigned long long v39;  // [sp-0x108]
    unsigned short v40;  // [sp-0x100]
    char v41;  // [sp-0xfe]
    int v42;  // [sp-0x88]
    int v43;  // [bp-0x78]
    unsigned long long v44;  // [sp-0x69]
    int v45;  // [sp-0x58]
    int v46;  // [bp-0x48]
    unsigned long long v47;  // [sp-0x39]
    unsigned long long v49;  // r12
    unsigned long long v50;  // rbx
    uint128_t v51[2];  // rax
    void* v52;  // rbp
    unsigned long v53;  // r12
    void* v54;  // r15
    unsigned long long v55;  // r13
    int v56;  // xmm0
    char v57;  // al
    char v58;  // cl
    char v59;  // al
    int v60;  // xmm0
    char v61;  // cl
    unsigned short v62;  // dx
    int v63;  // xmm1
    char v64;  // al
    unsigned long long v65;  // r14
    int v66;  // xmm0
    char v67;  // cl
    unsigned short v68;  // dx
    int v69;  // xmm1
    unsigned long long v70;  // r8
    unsigned long long v71;  // r9
    unsigned int v72;  // r13d
    unsigned long long v73;  // rdx
    unsigned long long v74;  // rcx
    unsigned long long v75;  // rax
    unsigned long long v76;  // rax
    unsigned long long v77;  // r12
    int v78;  // xmm0
    unsigned long long v79;  // rsi
    unsigned int v81;  // eax
    unsigned long long v82;  // rax

    std::sys::pal::unix::fs::stat::h84607eb26fae96a2(&v31, a0, a1);
    v49 = *((long long *)&v31);
    if (v49 == 2)
    {
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hc5e43710975c56f1(v33);
    }
    else if (!a2)
    {
        v2 = a0;
        v3 = a1;
        v21 = &v2;
        v22 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
        v31 = &g_4e5118;
        v33 = &g_0;
        v37 = &g_0;
        v34 = &v21;
        v36 = &g_0;
        alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v12, &v31);
        *((uint128_t **)&v16) = &g_0;
        v51 = __rust_alloc(32, 8);
        if (v51)
        {
            v56 = *((int128_t *)&v12);
            *((int128_t *)(v51 + &g_10)) = *((int128_t *)&v14);
            *((void*)&v51[0]) = v56;
            return v51;
        }
        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
    }
    v0 = a3;
    v30 = v49;
    v1 = a4;
    v50 = a1;
    std::path::Path::components::h4f3217acf0fc8653(&v21, a0, a1);
    std::path::Path::components::h4f3217acf0fc8653(&v2, 1, 0);
    v52 = v21;
    v53 = v22;
    v54 = v2;
    v55 = v3;
    if (v53 == v55 && v27 == v9 && v28 == 2 && v10 == 2)
    {
        v57 = v23;
        if (v57 != 6)
        {
            v58 = v4;
            if (v58 != 6 && !((v58 < &g_0 ^ v57 < &g_0)) && !(bcmp(v52, v54, v53)))
            {
LABEL_482a06:
                return &g_0;
            }
        }
    }
    v59 = v23;
    if (v14 != 6)
    {
        v44 = *((long long *)&v26);
        v60 = *((int128_t *)&v24);
        *((int128_t *)&v43) = *((int128_t *)&v25);
        v42 = v60;
    }
    v61 = v29;
    v62 = *((short *)&v27);
    v12 = v52;
    v13 = v53;
    v14 = v59;
    v63 = (int128_t)v43;
    v15 = v42;
    v17 = v63;
    v18 = v44;
    v19 = v62;
    v20 = v61;
    v64 = v4;
    v65 = a0;
    if (v34 != 6)
    {
        v47 = *((long long *)&v8);
        v66 = *((int128_t *)&v5);
        *((int128_t *)&v46) = *((int128_t *)&v7);
        v45 = v66;
    }
    v67 = v11;
    v68 = *((short *)&v9);
    v31 = v54;
    v33 = v55;
    v34 = v64;
    v69 = (int128_t)v46;
    v35 = v45;
    v38 = v69;
    v39 = v47;
    v40 = v68;
    v41 = v67;
    if (!(char)core::iter::traits::iterator::Iterator::eq_by::h20009cec7ddea3ba(&v12, &v31, v40, v41, v70, v71))
    {
        v72 = a5;
        if (a2)
        {
            v75 = std::path::Path::parent::h65c9a340a6266f2d(v65, v50, v73, v74);
            if (v75)
            {
                v51 = uu_mkdir::create_dir::h5beca387005813a8(v75, v73, &g_0, (char)v0, 1, a5);
                if (v51)
                    return v51;
            }
        }
        v31 = 511;
        *((uint128_t **)&v32) = &g_0;
        v76 = std::fs::DirBuilder::_create::h71276aa8883a3685(&v31, v65, v50);
        if (!v76)
        {
            if ((char)v0)
            {
                if (_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2)
                    once_cell::imp::OnceCell$LT$T$GT$::initialize::hf309a323f9c37110(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
                *((uint128_t *)&v21) = g_4e9fb0;
                v12 = &g_0;
                v13 = v65;
                v14 = v50;
                *((uint128_t **)&v16) = &g_0;
                v2 = &v21;
                v3 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hd506080ec407e424;
                v4 = &v12;
                v6 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                v31 = &g_4e51e0;
                v33 = &g_0;
                v37 = &g_0;
                v34 = &v2;
                v36 = &g_0;
                std::io::stdio::_print::he918bceb0c89db46(&v31, v79, v73);
            }
            if ((unsigned int)v30 == 2)
            {
                if ((char)v1)
                {
                    v81 = 5242912(&g_0);
                    5242912(v81);
                    v72 = v81 & 319 ^ 511;
                }
                v72 |= (int)uucore::features::fsxattr::get_acl_perm_bits_from_xattr::hd4d0377579f11bd8(v65, v50, v73);
            }
            v82 = std::sys::pal::unix::fs::set_perm::h50b7c529e6585f2e(v65, v50, v72);
            v51 = (v82 == &g_0 ? _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::h938fa9080ade6c1b(v82, v65, v50) : &g_0);
            return v51;
        }
        v77 = v76;
        if ((char)std::path::Path::is_dir::h9ac0db933706da51(v65, v50))
        {
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hc5e43710975c56f1(v77);
        }
        else
        {
            v31 = 0x8000000000000000;
            v36 = v77;
            v51 = __rust_alloc(32, 8);
            if (v51)
            {
                v78 = *((int128_t *)&v31);
                *((int128_t *)(v51 + &g_10)) = *((int128_t *)&v34);
                *((void*)&v51[0]) = v78;
                return v51;
            }
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        }
    }
    goto LABEL_482a06;
}
