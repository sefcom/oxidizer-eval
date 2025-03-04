long long uu_du::read_files_from::h6043d31ba0920720(unsigned long long a0[3], unsigned long long a1, unsigned long long a2)
{
    struct struct_0 **v0;  // [sp-0x168]
    struct struct_0 **v1;  // [bp-0x168]
    unsigned long long v2;  // [sp-0x160]
    struct struct_0 **v3;  // [sp-0x158], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0x150]
    void* v5;  // [sp-0x148]
    struct struct_0 **v6;  // [sp-0x138]
    struct struct_0 **v7;  // [sp-0x138], Other Possible Types: unsigned long long
    unsigned long long v8;  // [sp-0x130]
    struct struct_0 **v9;  // [sp-0x128]
    unsigned long long v10;  // [sp-0x120]
    unsigned long long v11[3];  // [sp-0x110]
    char v12;  // [bp-0x108], Other Possible Types: unsigned long
    char v13;  // [bp-0x104]
    struct struct_0 **v14;  // [sp-0x100], Other Possible Types: unsigned long long
    char v15;  // [sp-0xf8]
    void* v16;  // [sp-0xf0]
    struct struct_0 **v17;  // [sp-0xe8]
    unsigned long long v18;  // [sp-0xe0]
    struct struct_0 **v19;  // [sp-0xd8]
    char v20;  // [bp-0xc8]
    void* v21;  // [sp-0xb8]
    unsigned long long v22;  // [sp-0xb0]
    void* v23;  // [sp-0xa8]
    struct struct_0 **v24;  // [sp-0xa0], Other Possible Types: unsigned long
    unsigned long v25;  // [sp-0x98], Other Possible Types: unsigned long long
    char v26;  // [bp-0x90]
    char v27;  // [bp-0x88]
    unsigned long v28;  // [sp-0x80]
    unsigned long v29;  // [sp-0x78]
    unsigned long long v30;  // [sp-0x70]
    unsigned long long v31;  // [sp-0x68]
    char v32;  // [bp-0x60]
    char v33;  // [bp-0x48]
    unsigned long long v35[3];  // r15
    struct struct_0 **v36;  // xmm0
    int v37;  // ymm0
    int v38;  // ymm0
    unsigned long long v39;  // rax
    unsigned long long v40;  // rcx
    struct struct_0 **v41;  // rbx
    unsigned long long v42;  // rax
    unsigned long v44;  // rdx
    struct struct_0 **v45;  // xmm0
    struct struct_0 **v46;  // xmm0

    v35 = a0;
    if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb35b18b4f111dc4a(a1, a2, "-", 1))
    {
        v11[0] = a0;
        std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h4d636d06c0931382(&v1, 0x2000, std::io::stdio::stdin::h7215cc131abb55d8());
        v39 = alloc::boxed::Box$LT$T$GT$::new::hdb9fa66f67ecf04b(&v1);
        v40 = &g_5847b0;
        goto LABEL_4f3966;
    }
    std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v1, a1, a2);
    v9 = v3;
    v36 = *((int128_t *)&v1);
    v38 = v37 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v36;
    v7 = v36;
    if ((char)std::path::Path::is_dir::h9ac0db933706da51(v8, v3))
    {
        v24 = &v20;
        v25 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h6327d06d698acdd2;
        v0 = &g_584698;
        v2 = 2;
        v5 = 0;
        v3 = &v24;
        v4 = 1;
        ::0x4f08e0::core::option::Option$LT$T$GT$::map_or_else::he00bf600f5f44dbc(&v32, &v1);
        a0[1] = std::io::error::Error::new::hd0a0d6bee076b6f8(39, &v32);
        goto LABEL_4f3d09;
    }
    else
    {
        std::fs::File::open::h9cae249c916a6c96(&v12, a1, a2);
        if (!*((int *)&v12))
        {
            std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::ha4ed61db034c9bb6(&v1, 0x2000, *((int *)&v13));
            v39 = alloc::boxed::Box$LT$T$GT$::new::ha50a6ea0e0989317(&v1);
            v11[0] = a0;
            ::0x4ef6b0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hbd810d79ecac54ea(&v7);
            v40 = &g_584728;
LABEL_4f3966:
            v21 = 0;
            v22 = 8;
            v23 = 0;
            v12 = v39;
            v14 = v40;
            v15 = 0;
            v16 = 0;
            while (true)
            {
                _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h886d3813ac58f572(&v24, &v12);
                v42 = v25;
                if (v42 == 9223372036854775809)
                {
                    core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$std..io..Split$LT$alloc..boxed..Box$LT$dyn$u20$std..io..BufRead$GT$$GT$$GT$$GT$::h93c3737ff8ebef1f(v12, v14);
                    v35 = v11;
                    v35[2] = v23;
                    *((int128_t *)&v35[0]) = *((int128_t *)&v21);
                    return v35;
                }
                if (v42 == 0x8000000000000000)
                {
                    v35 = v11;
                    v35[1] = v30;
                    v35[0] = 0x8000000000000000;
                    core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$std..io..Split$LT$alloc..boxed..Box$LT$dyn$u20$std..io..BufRead$GT$$GT$$GT$$GT$::h93c3737ff8ebef1f(v12, v14);
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h16d3046407d1e07a(&v21);
                    return v35;
                }
                v29 = v42;
                v30 = *((long long *)&v26);
                v31 = *((long long *)&v27);
                if (!v31)
                {
                    v28 = v24 + 1;
                    v6 = uucore::util_name::h60d842bf27b05e82();
                    v8 = v44;
                    v17 = &v7;
                    v18 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h6327d06d698acdd2;
                    v0 = &g_5846d8;
                    v2 = 2;
                    v5 = 0;
                    v3 = &v17;
                    v4 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v1);
                    v7 = &v20;
                    v7 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h6327d06d698acdd2;
                    v9 = &v28;
                    v10 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                    v0 = &g_5846f8;
                    v2 = 3;
                    v5 = 0;
                    v3 = &v7;
                    v4 = 2;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v1);
                    uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
                }
                else
                {
                    alloc::string::String::from_utf8_lossy::hea505cf60d4f919b(&v1, v30, v31);
                    ::0x4f1550::_$LT$alloc..borrow..Cow$LT$str$GT$$u20$as$u20$alloc..string..ToString$GT$::to_string::ha2cb0370e40ab073(&v7, v2, v3);
                    v19 = v9;
                    v45 = *((int128_t *)&v7);
                    v38 = v38 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v45;
                    v17 = v45;
                    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h7fa1288604a001f4(&v1);
                    if ((char)_$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::hc0e47005068e24dd(&v17, v22, v23))
                    {
                        ::0x4ef6b0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hbd810d79ecac54ea(&v17);
                    }
                    else
                    {
                        v3 = v19;
                        v46 = *((int128_t *)&v17);
                        v38 = v38 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v46;
                        v0 = v46;
                        alloc::vec::Vec$LT$T$C$A$GT$::push::hcb430c3180ba1f0f(&v21, &v1);
                    }
                }
                ::0x4ef710::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hc287f1aab316582a(&v29);
            }
        }
        v41 = v14;
        if (!(char)::0x4eef60::std::io::error::Error::kind::hb2ff5fa058639b3d(v41))
        {
            v17 = v41;
            v24 = &v20;
            v25 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h6327d06d698acdd2;
            v0 = &g_5846b8;
            v2 = 2;
            v5 = 0;
            v3 = &v24;
            v4 = 1;
            ::0x4f08e0::core::option::Option$LT$T$GT$::map_or_else::he00bf600f5f44dbc(&v33, &v1);
            a0[1] = std::io::error::Error::new::hd0a0d6bee076b6f8(39, &v33);
            a0[0] = 0x8000000000000000;
            ::0x4ef6f0::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h3dad00d2d386d8f0(&v17);
        }
        else
        {
            a0[1] = v41;
LABEL_4f3d09:
            a0[0] = 0x8000000000000000;
        }
        ::0x4ef6b0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hbd810d79ecac54ea(&v7);
        return v35;
    }
}
