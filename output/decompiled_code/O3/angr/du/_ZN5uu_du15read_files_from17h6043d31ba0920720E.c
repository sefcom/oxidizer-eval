long long uu_du::read_files_from::h6043d31ba0920720(unsigned long long a0[3], unsigned long long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    struct struct_0 **v0;  // [bp-0x168]
    unsigned long long v1;  // [sp-0x160]
    struct struct_0 **v2;  // [sp-0x158], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0x150]
    void* v4;  // [sp-0x148]
    struct struct_0 **v5;  // [bp-0x138]
    unsigned long long v6;  // [sp-0x130]
    struct struct_0 **v7;  // [sp-0x128]
    unsigned long long v8;  // [sp-0x120]
    unsigned long long v9[3];  // [sp-0x110]
    char v10;  // [bp-0x108], Other Possible Types: unsigned long long
    char v11;  // [bp-0x104]
    struct struct_0 **v12;  // [sp-0x100], Other Possible Types: unsigned long long
    char v13;  // [sp-0xf8]
    void* v14;  // [sp-0xf0]
    struct struct_0 **v15;  // [sp-0xe8]
    unsigned long long v16;  // [sp-0xe0]
    struct struct_0 **v17;  // [sp-0xd8]
    char v18;  // [bp-0xc8]
    unsigned long long v19;  // [sp-0xc0]
    void* v20;  // [sp-0xb8]
    unsigned long long v21;  // [sp-0xb0]
    void* v22;  // [sp-0xa8]
    struct struct_0 **v23;  // [sp-0xa0], Other Possible Types: unsigned long
    unsigned long v24;  // [sp-0x98], Other Possible Types: unsigned long long
    char v25;  // [bp-0x90]
    char v26;  // [bp-0x88]
    unsigned long v27;  // [sp-0x80], Other Possible Types: unsigned long long
    unsigned long v28;  // [sp-0x78], Other Possible Types: unsigned long long
    unsigned long long v29;  // [sp-0x70]
    unsigned long long v30;  // [sp-0x68]
    char v31;  // [bp-0x60]
    char v32;  // [bp-0x48]
    unsigned long long v34;  // rbx
    struct struct_0 **v35;  // xmm0
    int v36;  // ymm0
    int v37;  // ymm0
    unsigned long long v38;  // rax
    unsigned long long v39;  // rcx
    struct struct_0 **v40;  // rbx
    unsigned long long v41;  // rax
    unsigned long long v43;  // rsi
    struct struct_0 **v44;  // xmm0
    unsigned long long v45;  // rcx
    unsigned long long v46;  // r8
    unsigned long long v47;  // r9
    struct struct_0 **v48;  // xmm0
    unsigned long long v49;  // rdx

    v34 = a2;
    v19 = a2;
    if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb35b18b4f111dc4a(a1, v34, "-", 1))
    {
        v9[0] = a0;
        std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h4d636d06c0931382(&v0, 0x2000, std::io::stdio::stdin::h7215cc131abb55d8());
        v38 = alloc::boxed::Box$LT$T$GT$::new::hdb9fa66f67ecf04b(&v0);
        v39 = &g_5847b0;
        goto LABEL_4f3966;
    }
    std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v0, a1, v34);
    v7 = v2;
    v35 = *((int128_t *)&v0);
    v37 = v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v35;
    v5 = v35;
    if ((char)std::path::Path::is_dir::h9ac0db933706da51(v6, v2))
    {
        v23 = &v18;
        v24 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h6327d06d698acdd2;
        v0 = &g_584698;
        v1 = 2;
        v4 = 0;
        v2 = &v23;
        v3 = 1;
        ::0x4f08e0::core::option::Option$LT$T$GT$::map_or_else::he00bf600f5f44dbc(&v31, &v0);
        a0[1] = std::io::error::Error::new::hd0a0d6bee076b6f8(39, &v31);
        goto LABEL_4f3d09;
    }
    else
    {
        std::fs::File::open::h9cae249c916a6c96(&v10, a1, v19);
        if (!*((int *)&v10))
        {
            std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::ha4ed61db034c9bb6(&v0, 0x2000, *((int *)&v11));
            v38 = alloc::boxed::Box$LT$T$GT$::new::ha50a6ea0e0989317(&v0);
            v9[0] = a0;
            ::0x4ef6b0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hbd810d79ecac54ea(&v5);
            v39 = &g_584728;
LABEL_4f3966:
            v20 = 0;
            v21 = 8;
            v22 = 0;
            v10 = v38;
            v12 = v39;
            v13 = 0;
            v14 = 0;
            while (true)
            {
                _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h886d3813ac58f572(&v23, &v10);
                v41 = v24;
                if (v41 == 9223372036854775809)
                {
                    core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$std..io..Split$LT$alloc..boxed..Box$LT$dyn$u20$std..io..BufRead$GT$$GT$$GT$$GT$::h93c3737ff8ebef1f(v10, v12);
                    a0 = v9;
                    a0[2] = v22;
                    *((int128_t *)&a0[0]) = *((int128_t *)&v20);
                    return a0;
                }
                if (v41 == 0x8000000000000000)
                {
                    a0 = v9;
                    a0[1] = v29;
                    a0[0] = 0x8000000000000000;
                    core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$std..io..Split$LT$alloc..boxed..Box$LT$dyn$u20$std..io..BufRead$GT$$GT$$GT$$GT$::h93c3737ff8ebef1f(v10, v12);
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h16d3046407d1e07a(&v20);
                    return a0;
                }
                v28 = v41;
                v29 = *((long long *)&v25);
                v30 = *((long long *)&v26);
                if (!v30)
                {
                    v27 = v23 + 1;
                    v5 = uucore::util_name::h60d842bf27b05e82();
                    v6 = v49;
                    v15 = &v5;
                    v16 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h6327d06d698acdd2;
                    v0 = &g_5846d8;
                    v1 = 2;
                    v4 = 0;
                    v2 = &v15;
                    v3 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v0, v43, v49);
                    v5 = &v18;
                    v6 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h6327d06d698acdd2;
                    v7 = &v27;
                    v8 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                    v0 = &g_5846f8;
                    v1 = 3;
                    v4 = 0;
                    v2 = &v5;
                    v3 = 2;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v0, v43, v49);
                    uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0();
                }
                else
                {
                    alloc::string::String::from_utf8_lossy::hea505cf60d4f919b(&v0, v29, v30);
                    ::0x4f1550::_$LT$alloc..borrow..Cow$LT$str$GT$$u20$as$u20$alloc..string..ToString$GT$::to_string::ha2cb0370e40ab073(&v5, v1, v2);
                    v17 = v7;
                    v44 = *((int128_t *)&v5);
                    v37 = v37 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v44;
                    v15 = v44;
                    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h7fa1288604a001f4(&v0);
                    if ((char)_$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::hc0e47005068e24dd(&v15, v21, v22, v45, v46, v47))
                    {
                        ::0x4ef6b0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hbd810d79ecac54ea(&v15);
                    }
                    else
                    {
                        v2 = v17;
                        v48 = *((int128_t *)&v15);
                        v37 = v37 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v48;
                        v0 = v48;
                        alloc::vec::Vec$LT$T$C$A$GT$::push::hcb430c3180ba1f0f(&v20, &v0, v49);
                    }
                }
                ::0x4ef710::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hc287f1aab316582a(&v28);
            }
        }
        v40 = v12;
        if (!(char)::0x4eef60::std::io::error::Error::kind::hb2ff5fa058639b3d(v40))
        {
            v15 = v40;
            v23 = &v18;
            v24 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h6327d06d698acdd2;
            v0 = &g_5846b8;
            v1 = 2;
            v4 = 0;
            v2 = &v23;
            v3 = 1;
            ::0x4f08e0::core::option::Option$LT$T$GT$::map_or_else::he00bf600f5f44dbc(&v32, &v0);
            a0[1] = std::io::error::Error::new::hd0a0d6bee076b6f8(39, &v32);
            a0[0] = 0x8000000000000000;
            ::0x4ef6f0::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h3dad00d2d386d8f0(&v15);
        }
        else
        {
            a0[1] = v40;
LABEL_4f3d09:
            a0[0] = 0x8000000000000000;
        }
        ::0x4ef6b0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hbd810d79ecac54ea(&v5);
        return a0;
    }
}
