long long uu_env::load_config_file::h0196c19fc75eeaa1(unsigned long long a0[3])
{
    char *v0;  // [sp-0x2a8], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x2a0]
    unsigned long v2;  // [sp-0x298]
    unsigned long long v3;  // [sp-0x290]
    char *v4;  // [sp-0x288]
    char *v5;  // [sp-0x280], Other Possible Types: unsigned long long
    struct_0 *v6;  // [sp-0x278]
    unsigned long long v7;  // [sp-0x268]
    char v8;  // [bp-0x260]
    char v9;  // [bp-0x258]
    char v10;  // [bp-0x250]
    char v11;  // [bp-0x248]
    char v12;  // [bp-0x240]
    char v13;  // [bp-0x230]
    unsigned long v14;  // [sp-0x228]
    char *v15;  // [bp-0x220]
    unsigned long long v16;  // [sp-0x218]
    char v17;  // [bp-0x210]
    char v18;  // [bp-0x1e8]
    char v19;  // [bp-0x1c8]
    char v20;  // [bp-0x1b8]
    struct_0 *v21;  // [bp-0x178]
    unsigned long long v22;  // [sp-0x170]
    struct_0 *v23;  // [sp-0x168]
    struct_0 *v24;  // [bp-0x160]
    unsigned long long v25;  // [sp-0x158]
    struct_0 *v26;  // [sp-0x150]
    struct_0 *v27;  // [sp-0x140]
    struct_0 *v28;  // [sp-0x130]
    struct_0 *v29;  // [sp-0x120]
    struct_0 *v30;  // [sp-0x110]
    struct_0 *v31;  // [sp-0x100]
    struct_0 *v32;  // [sp-0xf0]
    char v33;  // [bp-0xe0]
    char v34;  // [bp-0xc8]
    char v35;  // [bp-0xb8]
    char v36;  // [bp-0xb0]
    char v37;  // [bp-0xa0]
    char v38;  // [bp-0x90]
    char v39;  // [bp-0x80]
    char v40;  // [bp-0x70]
    char v41;  // [bp-0x60]
    char v42;  // [bp-0x50]
    char v43;  // [bp-0x40]
    unsigned long long v45[2];  // rax
    int v46;  // ymm1
    int v47;  // ymm2
    int v48;  // ymm3
    unsigned long long v49;  // r14
    unsigned long long v50;  // rbp
    char v51;  // dl
    unsigned long long v52;  // r14
    struct_0 *v53;  // xmm0
    struct_0 *v54;  // xmm0
    struct_0 *v55;  // xmm0
    struct_0 *v56;  // xmm0
    struct_0 *v57;  // xmm0
    struct_0 *v58;  // xmm0
    struct_0 *v59;  // xmm1
    struct_0 *v60;  // xmm2
    struct_0 *v61;  // xmm3
    struct_0 *v62;  // xmm0
    struct_0 *v63;  // rax
    unsigned long long v64;  // rdx
    struct_0 *v65;  // xmm0
    int v68;  // ymm0

    v2 = a0[1];
    v3 = a0[2] * 16 + v2;
    v45 = ::0x4cbf10::_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h4336037a61c6f015(&v2);
    if (!v45)
        return 0;
    do
    {
        v49 = v45[0];
        v50 = v45[1];
        v1 = v49;
        v0 = v50;
        if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h93758be011b95af6(v1, v0, "-: ", 1))
        {
            v21 = std::io::stdio::stdin::h7215cc131abb55d8();
            v14 = std::io::stdio::Stdin::lock::h161a36d857331d7f(&v21);
            *((char *)&v15) = v51 & 1;
            ini::Ini::read_from_opt::h195aa31934f88d20(&v33, &v14, 1, 1);
            core::ptr::drop_in_place$LT$std..io..stdio..StdinLock$GT$::h1864f028de0891ba(v14, (int)v15);
        }
        else
        {
            ini::Ini::load_from_file_opt::hd6c09423a76f6016(&v33, v1, v0, 1, 1);
        }
        v52 = *((long long *)&v33);
        if (v52 == 0x8000000000000000)
        {
            v7 = *((long long *)&v35);
            *((int128_t *)&v6) = *((int128_t *)&v34);
            v4 = v0;
            v5 = v1;
            return uu_env::load_config_file::_$u7b$$u7b$closure$u7d$$u7d$::h3c9173ecfcad8e32(v1, v0, &v4);
        }
        v23 = *((long long *)&v35);
        v53 = *((int128_t *)&v34);
        v21 = v53;
        v54 = *((int128_t *)&v43);
        v32 = v54;
        v55 = *((int128_t *)&v42);
        v31 = v55;
        v56 = *((int128_t *)&v41);
        v30 = v56;
        v57 = *((int128_t *)&v40);
        v29 = v57;
        v58 = *((int128_t *)&v36);
        v59 = *((int128_t *)&v37);
        v46 = v46 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v59;
        v60 = *((int128_t *)&v38);
        v47 = v47 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v60;
        v61 = *((int128_t *)&v39);
        v48 = v48 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v61;
        v28 = v61;
        v27 = v60;
        v26 = v59;
        v24 = v58;
        v1 = v5;
        v0 = v4;
        memcpy(&v17, &v21, 152);
        v14 = v52;
        v15 = v0;
        v16 = v1;
        v4 = &v14;
        v5 = &v18;
        v62 = *((int128_t *)&v19);
        v68 = ((((((v68 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v53) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v54) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v55) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v56) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v57) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v58) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v62;
        v6 = v62;
        v7 = *((long long *)&v20);
        while (true)
        {
            _$LT$ini..SectionIter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8b11506b46190202(&v12, &v4);
            v63 = *((long long *)&v13);
            if (!v63)
                break;
            v64 = v63->field_70;
            v21 = v63;
            v22 = &v63->padding_0[64];
            v65 = *((int128_t *)&v63->field_60);
            v68 = v68 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v65;
            v23 = v65;
            v25 = v64;
            while (true)
            {
                _$LT$ini..PropertyIter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hcf3320d67a61f47f(&v8, &v21);
                if (!*((long long *)&v8))
                    break;
                std::env::set_var::h7c2f382f05be9345(*((long long *)&v8), *((long long *)&v9), *((long long *)&v10), *((long long *)&v11));
            }
        }
        core::ptr::drop_in_place$LT$ini..Ini$GT$::h02eafa7b2766ffac(&v14);
        v45 = ::0x4cbf10::_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h4336037a61c6f015(&v2);
    } while (v45);
}
