long long uu_env::load_config_file::h2a4494190599b2f8(unsigned long long a0[3])
{
    unsigned long long v0;  // [sp-0x2a8]
    unsigned long long v1;  // [sp-0x2a0]
    unsigned long v2;  // [sp-0x298], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0x290]
    unsigned long v4;  // [sp-0x288], Other Possible Types: unsigned long long
    unsigned long long v5;  // [sp-0x280]
    int v6;  // [sp-0x278]
    unsigned long long v7;  // [sp-0x268]
    char v8;  // [bp-0x260]
    char v9;  // [bp-0x258]
    char v10;  // [bp-0x250]
    char v11;  // [bp-0x248]
    char v12;  // [bp-0x240]
    char v13;  // [bp-0x230]
    unsigned long v14;  // [sp-0x228], Other Possible Types: unsigned long long
    char v15;  // [bp-0x220], Other Possible Types: unsigned long
    unsigned long long v16;  // [sp-0x218]
    char v17;  // [bp-0x210]
    char v18;  // [bp-0x1e8]
    char v19;  // [bp-0x1c8]
    char v20;  // [bp-0x1b8]
    int v21;  // [sp-0x178], Other Possible Types: struct_0 *, unsigned long, unsigned long long
    unsigned long long v22;  // [sp-0x170]
    int v23;  // [sp-0x168], Other Possible Types: unsigned long long
    int v24;  // [bp-0x160]
    unsigned long long v25;  // [sp-0x158]
    int v26;  // [sp-0x150]
    int v27;  // [sp-0x140]
    int v28;  // [sp-0x130]
    int v29;  // [sp-0x120]
    int v30;  // [sp-0x110]
    int v31;  // [sp-0x100]
    int v32;  // [sp-0xf0]
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
    int v46;  // ymm0
    int v47;  // ymm1
    int v48;  // ymm2
    int v49;  // ymm3
    unsigned long long v50;  // r14
    unsigned long long v51;  // rbp
    char v52;  // dl
    unsigned long long v53;  // r14
    int v54;  // xmm0
    int v55;  // xmm0
    int v56;  // xmm0
    int v57;  // xmm0
    int v58;  // xmm0
    int v59;  // xmm0
    int v60;  // xmm1
    int v61;  // xmm2
    int v62;  // xmm3
    int v63;  // xmm0
    int v64;  // ymm0
    struct_0 *v65;  // rax
    unsigned long long v66;  // rdx
    int v67;  // xmm0

    v2 = a0[1];
    v3 = a0[2] * 16 + v2;
    v45 = ::0x4cc040::_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf5736879435dc993(&v2);
    if (!v45)
        return 0;
    do
    {
        v50 = v45[0];
        v51 = v45[1];
        v1 = v50;
        v0 = v51;
        if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::ha02c3d3e49b1cfb6(v1, v0, "-: ", 1))
        {
            v21 = std::io::stdio::stdin::h7215cc131abb55d8();
            v14 = std::io::stdio::Stdin::lock::h161a36d857331d7f(&v21);
            v15 = v52 & 1;
            ini::Ini::read_from_opt::h0e6c848de5492169(&v33, &v14, 1, 1);
            core::ptr::drop_in_place$LT$std..io..stdio..StdinLock$GT$::h16024e53fd7f2c48(v14, *((int *)&v15));
        }
        else
        {
            ini::Ini::load_from_file_opt::h591ee910bb6d1d11(&v33, v1, v0, 1, 1);
        }
        v53 = *((long long *)&v33);
        if (v53 == 0x8000000000000000)
        {
            v7 = *((long long *)&v35);
            *((int128_t *)&v6) = *((int128_t *)&v34);
            v4 = v0;
            v5 = v1;
            return uu_env::load_config_file::_$u7b$$u7b$closure$u7d$$u7d$::h0a2b32a9a2b78ceb(v1, v0, &v4);
        }
        v23 = *((long long *)&v35);
        v54 = *((int128_t *)&v34);
        v21 = v54;
        v55 = *((int128_t *)&v43);
        v32 = v55;
        v56 = *((int128_t *)&v42);
        v31 = v56;
        v57 = *((int128_t *)&v41);
        v30 = v57;
        v58 = *((int128_t *)&v40);
        v29 = v58;
        v59 = *((int128_t *)&v36);
        v60 = *((int128_t *)&v37);
        v47 = v47 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v60;
        v61 = *((int128_t *)&v38);
        v48 = v48 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v61;
        v62 = *((int128_t *)&v39);
        v49 = v49 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v62;
        v28 = v62;
        v27 = v61;
        v26 = v60;
        v24 = v59;
        v1 = v5;
        v0 = v4;
        memcpy(&v17, &v21, 152);
        v14 = v53;
        v15 = v0;
        v16 = v1;
        v4 = &v14;
        v5 = &v18;
        v63 = *((int128_t *)&v19);
        v64 = v46 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v54 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v55 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v56 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v57 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v58 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v59 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v63;
        v6 = v63;
        v7 = *((long long *)&v20);
        while (true)
        {
            _$LT$ini..SectionIter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1de0f34f78badf4c(&v12, &v4);
            v65 = *((long long *)&v13);
            if (!v65)
                break;
            v66 = v65->field_70;
            v21 = v65;
            v22 = &v65->padding_0[64];
            v67 = v65->field_60;
            v64 = v64 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v67;
            v23 = v67;
            v25 = v66;
            while (true)
            {
                _$LT$ini..PropertyIter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb523641822ae2278(&v8, &v21, v25);
                if (!*((long long *)&v8))
                    break;
                std::env::set_var::hfd06972ca3df0420(*((long long *)&v8), *((long long *)&v9), *((long long *)&v10), *((long long *)&v11));
            }
        }
        core::ptr::drop_in_place$LT$ini..Ini$GT$::h2a9ffff2b5e9e7df(&v14);
        v45 = ::0x4cc040::_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf5736879435dc993(&v2);
    } while (v45);
}
