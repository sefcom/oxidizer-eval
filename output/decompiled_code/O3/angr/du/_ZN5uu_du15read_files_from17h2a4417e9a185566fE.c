long long uu_du::read_files_from::h2a4417e9a185566f(unsigned long long a0[3], unsigned long long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    int v0;  // [bp-0x168], Other Possible Types: char, unsigned long long
    unsigned long long v1;  // [sp-0x160]
    unsigned long v2;  // [sp-0x158], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0x150]
    void* v4;  // [sp-0x148]
    int v5;  // [bp-0x138], Other Possible Types: unsigned long long
    unsigned long long v6;  // [sp-0x130]
    unsigned long long v7;  // [sp-0x128]
    unsigned long long v8;  // [sp-0x120]
    unsigned long long v9[3];  // [sp-0x110]
    char v10;  // [bp-0x108], Other Possible Types: unsigned long long
    char v11;  // [bp-0x104]
    unsigned long v12;  // [sp-0x100], Other Possible Types: unsigned long long
    char v13;  // [sp-0xf8]
    void* v14;  // [sp-0xf0]
    int v15;  // [sp-0xe8], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v16;  // [sp-0xe0]
    unsigned long long v17;  // [sp-0xd8]
    char v18;  // [bp-0xc8]
    unsigned long long v19;  // [sp-0xc0]
    void* v20;  // [sp-0xb8]
    unsigned long long v21;  // [sp-0xb0]
    void* v22;  // [sp-0xa8]
    unsigned long v23;  // [sp-0xa0], Other Possible Types: unsigned long long
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
    int v35;  // xmm0
    int v36;  // ymm0
    int v37;  // ymm0
    unsigned long long v38;  // rax
    unsigned long long v39;  // rcx
    unsigned long long v40;  // rbx
    unsigned long long v41;  // rax
    unsigned long long v43;  // rsi
    int v44;  // xmm0
    unsigned long long v45;  // rcx
    unsigned long long v46;  // r8
    unsigned long long v47;  // r9
    int v48;  // xmm0
    unsigned long long v49;  // rdx

    v34 = a2;
    v19 = a2;
    if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h8a11194562092a9a(a1, v34, "-cannot open '' for reading: No such file or directory: read error: Is a directory:", 1))
    {
        v9[0] = a0;
        std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hcf686f46bc7d79b8(&v0, 0x2000, std::io::stdio::stdin::h7215cc131abb55d8());
        v38 = alloc::boxed::Box$LT$T$GT$::new::h59134d76e6bc57ac(&v0);
        v39 = &g_584200;
        goto LABEL_4f3596;
    }
    std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v0, a1, v34);
    v7 = v2;
    v35 = *((int128_t *)&v0);
    v37 = v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v35;
    v5 = v35;
    if ((char)std::path::Path::is_dir::h9ac0db933706da51(v6, v2))
    {
        v23 = &v18;
        v24 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he6e66823d969d841;
        v0 = &g_5841e0;
        v1 = 2;
        v4 = 0;
        v2 = &v23;
        v3 = 1;
        ::0x4f0510::core::option::Option$LT$T$GT$::map_or_else::hcc0378dc9a42486f(&v31, &v0);
        a0[1] = std::io::error::Error::new::h1a447b14b401eaeb(39, &v31);
        goto LABEL_4f3939;
    }
    else
    {
        std::fs::File::open::ha00ae7516873f034(&v10, a1, v19);
        if (!*((int *)&v10))
        {
            std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h7acf8aed51dd223c(&v0, 0x2000, *((int *)&v11));
            v38 = alloc::boxed::Box$LT$T$GT$::new::h3712580eaed0bb74(&v0);
            v9[0] = a0;
            ::0x4ef2e0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h593e56a2ffd0e1a6(&v5);
            v39 = &g_584138;
LABEL_4f3596:
            v20 = 0;
            v21 = 8;
            v22 = 0;
            v10 = v38;
            v12 = v39;
            v13 = 0;
            v14 = 0;
            while (true)
            {
                _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha4f83ea4b127a8df(&v23, &v10);
                v41 = v24;
                if (v41 == 9223372036854775809)
                {
                    core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$std..io..Split$LT$alloc..boxed..Box$LT$dyn$u20$std..io..BufRead$GT$$GT$$GT$$GT$::ha3beaa1388b6d515(v10, v12);
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
                    core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$std..io..Split$LT$alloc..boxed..Box$LT$dyn$u20$std..io..BufRead$GT$$GT$$GT$$GT$::ha3beaa1388b6d515(v10, v12);
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h339e6bbe016836d6(&v20);
                    return a0;
                }
                v28 = v41;
                v29 = *((long long *)&v25);
                v30 = *((long long *)&v26);
                if (!v30)
                {
                    v27 = v23 + 1;
                    v5 = uucore::util_name::h412db5e565a079f3();
                    v6 = v49;
                    v15 = &v5;
                    v16 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he6e66823d969d841;
                    v0 = &g_584288;
                    v1 = 2;
                    v4 = 0;
                    v2 = &v15;
                    v3 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v0, v43, v49);
                    v5 = &v18;
                    v6 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he6e66823d969d841;
                    v7 = &v27;
                    v8 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                    v0 = &g_5842a8;
                    v1 = 3;
                    v4 = 0;
                    v2 = &v5;
                    v3 = 2;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v0, v43, v49);
                    uucore::mods::error::set_exit_code::h6705c4226a43fa90();
                }
                else
                {
                    alloc::string::String::from_utf8_lossy::hea505cf60d4f919b(&v0, v29, v30);
                    ::0x4f1180::_$LT$alloc..borrow..Cow$LT$str$GT$$u20$as$u20$alloc..string..ToString$GT$::to_string::ha2cb0370e40ab073(&v5, v1, v2);
                    v17 = v7;
                    v44 = (int128_t)v5;
                    v37 = v37 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v44;
                    v15 = v44;
                    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::hdcb10f0a33c3a19b(&v0);
                    if (!(char)_$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::h46b5593fe652276b(&v15, v21, v22, v45, v46, v47))
                    {
                        v2 = v17;
                        v48 = (int128_t)v15;
                        v37 = v37 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v48;
                        v0 = v48;
                        alloc::vec::Vec$LT$T$C$A$GT$::push::h5607e4dbf433fc8e(&v20, &v0, v49);
                    }
                    else
                    {
                        ::0x4ef2e0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h593e56a2ffd0e1a6(&v15);
                    }
                }
                ::0x4ef340::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h31a4c3c0f84fa4b3(&v28);
            }
        }
        v40 = v12;
        if (!(char)::0x4eeb90::std::io::error::Error::kind::hb2ff5fa058639b3d(v40))
        {
            v15 = v40;
            v23 = &v18;
            v24 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he6e66823d969d841;
            v0 = &g_5841c0;
            v1 = 2;
            v4 = 0;
            v2 = &v23;
            v3 = 1;
            ::0x4f0510::core::option::Option$LT$T$GT$::map_or_else::hcc0378dc9a42486f(&v32, &v0);
            a0[1] = std::io::error::Error::new::h1a447b14b401eaeb(39, &v32);
            a0[0] = 0x8000000000000000;
            ::0x4ef320::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h6d7d34ba63d77523(&v15);
        }
        else
        {
            a0[1] = v40;
LABEL_4f3939:
            a0[0] = 0x8000000000000000;
        }
        ::0x4ef2e0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h593e56a2ffd0e1a6(&v5);
        return a0;
    }
}
