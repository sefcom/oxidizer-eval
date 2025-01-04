long long uu_expand::expand::h37655ff09ea44da5(unsigned long long a0[6])
{
    int v0;  // [sp-0x138], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v1;  // [sp-0x130]
    int v2;  // [sp-0x128], Other Possible Types: struct struct_3 **, struct_1 *, struct struct_1 **
    unsigned long long v3;  // [sp-0x120]
    int v4;  // [bp-0x118], Other Possible Types: void*
    unsigned long long v5;  // [sp-0x108]
    struct_1 *v6;  // [sp-0xf8]
    unsigned long long v7;  // [sp-0xf0]
    int v8;  // [sp-0xe8]
    unsigned long long v9[3];  // [sp-0xd0]
    void* v10;  // [sp-0xc8]
    unsigned long long v11;  // [sp-0xc0]
    void* v12;  // [sp-0xb8]
    unsigned long v13;  // [sp-0xb0], Other Possible Types: unsigned long long
    unsigned long long v14;  // [sp-0xa8]
    struct struct_0 **v15;  // [sp-0xa0], Other Possible Types: unsigned long
    unsigned long long v16;  // [sp-0x98]
    char v17;  // [bp-0x90]
    char v18;  // [bp-0x80]
    char v19;  // [bp-0x70]
    struct struct_1 **v20;  // [sp-0x68]
    unsigned long long v21;  // [sp-0x60]
    unsigned long long v22[3];  // [bp-0x58]
    unsigned long long *v24;  // r14
    unsigned long long v25;  // r15
    unsigned long long v26[3];  // rax
    int v27;  // ymm0
    int v28;  // ymm1
    int v29;  // ymm2
    unsigned long long v30;  // rsi
    int v31;  // xmm0
    int v32;  // xmm1
    int v33;  // xmm2
    int v34;  // xmm0
    unsigned long long v35;  // rax
    unsigned long long v36;  // rdx
    void* v38;  // rax

    std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::h8dc6b6dd87838119(v22, 0x2000, std::io::stdio::stdout::h077da66234850927());
    v24 = a0[4];
    v25 = a0[5];
    v10 = 0;
    v11 = 1;
    v12 = 0;
    v13 = a0[1];
    v14 = v13 + a0[2] * 24;
    v26 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h790f73d862f3e3c5(&v13);
    if (v26)
    {
        do
        {
            v9[0] = v26;
            if ((char)std::path::Path::is_dir::h9ac0db933706da51(v9[1], v9[2]))
            {
                v15 = uucore::util_name::h60d842bf27b05e82();
                v16 = v36;
                v6 = &v15;
                v7 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h8e3d2bc035467f54;
                v0 = &g_51cfa8;
                v1 = 2;
                v4 = 0;
                v2 = &v6;
                v3 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v0, v30, v36);
                v15 = &v9[0];
                v16 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::had14ffb2923220a0;
                v0 = &g_51cfc8;
                v1 = 2;
                v4 = 0;
                v2 = &v15;
                v3 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v0, v30, v36);
                uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0();
            }
            else
            {
                uu_expand::open::h447e326a625c2cbf(&v15, v9[1], v9[2]);
                if (!v15)
                {
                    v34 = *((int128_t *)&(&v15)[1]);
                    v27 = v27 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v34;
                    v8 = v34;
                    v6 = uucore::util_name::h60d842bf27b05e82();
                    v7 = v36;
                    v20 = &v6;
                    v21 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h8e3d2bc035467f54;
                    v0 = &g_51cfa8;
                    v1 = 2;
                    v4 = 0;
                    v2 = &v20;
                    v3 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v0, v30, v36);
                    v6 = &v8;
                    v7 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::he448dbddafa64936;
                    v0 = &g_51cfe8;
                    v1 = 2;
                    v4 = 0;
                    v2 = &v6;
                    v3 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v0, v30, v36);
                    uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0();
                    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::h235298a4064923ef((long long)v8, (long long)(&v8)[8]);
                }
                else
                {
                    v5 = *((long long *)&v19);
                    v31 = *((int128_t *)&v15);
                    v27 = v27 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v31;
                    v32 = *((int128_t *)&v17);
                    v28 = v28 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v32;
                    v33 = *((int128_t *)&v18);
                    v29 = v29 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v33;
                    v4 = v33;
                    v2 = v32;
                    v0 = v31;
                    while (true)
                    {
                        v35 = std::io::read_until::h4bbf6f5e97af4fae(&v0, 10, &v10);
                        if (!(v35 ? (char)((-0x100 | !v12) & 4294967295 & 4294967295) : (char)((-0x100 | v36) & 4294967295 & 4294967295)))
                            break;
                        core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hce1404ba8c518a6f(v35, v36);
                        v38 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h402a94e6eef7bc71(uu_expand::expand_line::h40856abb6fde71c0(&v10, v22, v24, v25, a0));
                        if (v38)
                        {
                            core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$$GT$::hd7062a474f5e767b(&v0);
                            ::0x4afc80::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h6ec78bf7a3f927d3(&v10);
                            core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..Stdout$GT$$GT$::h4862c1d11376e6d0(v22);
                            return v38;
                        }
                    }
                    core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hce1404ba8c518a6f(v35, v36);
                    core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$$GT$::hd7062a474f5e767b(&v0);
                }
            }
        } while ((v26 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h790f73d862f3e3c5(&v13), v26));
    }
    ::0x4afc80::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h6ec78bf7a3f927d3(&v10);
    core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..Stdout$GT$$GT$::h4862c1d11376e6d0(v22);
    return 0;
}
