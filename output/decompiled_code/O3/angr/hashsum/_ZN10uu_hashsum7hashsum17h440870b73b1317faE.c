long long uu_hashsum::hashsum::h440870b73b1317fa(struct_2 *a0, uint128_t a1[4], unsigned long long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    struct struct_0 **v0;  // [bp-0x1a8]
    struct struct_0 **v1;  // [sp-0x1a0], Other Possible Types: unsigned long long
    struct struct_0 **v2;  // [sp-0x198]
    struct struct_0 **v3;  // [bp-0x190], Other Possible Types: char, unsigned long long
    void* v4;  // [sp-0x188], Other Possible Types: struct struct_0 **
    struct struct_0 **v5;  // [sp-0x180], Other Possible Types: unsigned long long
    struct struct_0 **v6;  // [sp-0x178]
    struct struct_0 **v7;  // [sp-0x170]
    struct struct_0 **v8;  // [sp-0x160]
    struct struct_0 **v9;  // [sp-0x158]
    struct struct_0 **v10;  // [sp-0x150]
    struct struct_0 **v11;  // [sp-0x148], Other Possible Types: unsigned long long
    void* v12;  // [sp-0x140]
    struct struct_0 **v13;  // [sp-0x120]
    struct struct_0 **v14;  // [sp-0x118]
    struct struct_0 **v15;  // [sp-0x110]
    int v16;  // [sp-0x108]
    struct struct_0 **v17;  // [sp-0xf8]
    char v18;  // [bp-0xf0], Other Possible Types: unsigned long long
    unsigned long long v19;  // [sp-0xe8]
    unsigned long long v20;  // [sp-0xd8]
    unsigned long v21;  // [sp-0xd0], Other Possible Types: unsigned long long
    unsigned long long v22;  // [sp-0xc8]
    int v23;  // [sp-0xc0]
    char v24;  // [bp-0xb0]
    int v25;  // [sp-0x78]
    int v26;  // [sp-0x68]
    int v27;  // [sp-0x58]
    int v28;  // [sp-0x48]
    int v31;  // xmm0
    int v32;  // ymm0
    int v33;  // ymm0
    struct struct_0 **v34;  // r13
    struct_2 *v38;  // rbx
    unsigned long long v39;  // r15
    unsigned long long v40;  // rdx
    unsigned long long v41;  // rcx
    unsigned long long v42;  // r8
    unsigned long long v43;  // r9
    unsigned long long v44;  // rax
    unsigned long long v45;  // rcx
    struct struct_0 **v46;  // r13
    int v47;  // xmm0
    int v48;  // xmm0
    unsigned long long v49;  // rsi

    *((int *)&v21) = (!a0->field_28 ? " *blake2bdescription() is deprecated; use DisplayUnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTYETXTBSYEFBIGENOSPCESPIPEEROFSEMLINKEPIPEERANGEEDEADLK" : "*blake2bdescription() is deprecated; use DisplayUnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTYETXTBSYEFBIGENOSPCESPIPEEROFSEMLINKEPIPEERANGEEDEADLKE");
    v22 = 1;
    v31 = a1[0];
    v33 = v32 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v31;
    *((uint128_t *)&v28) = a1[3];
    *((uint128_t *)&v27) = a1[2];
    *((uint128_t *)&v26) = a1[1];
    v25 = v31;
    v20 = &a0->field_10;
    v34 = &v0;
    while (true)
    {
        v39 = _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h4412e25fb3900246(&v25, a1, a2);
        if (!v39)
        {
            v46 = 0;
            break;
        }
        else
        {
            std::path::Path::components::h4f3217acf0fc8653(&v8, v39, v40);
            std::path::Path::components::h4f3217acf0fc8653(&v0, "-b2sumbinarycheckstatusquietstrictignore-missing", 1);
            if ((char)::0x579a20::_$LT$std..path..Components$u20$as$u20$core..cmp..PartialEq$GT$::eq::h5cac1ec2999e76da(&v8, &v0, v40, v41, v42, v43))
            {
                v44 = alloc::boxed::Box$LT$T$GT$::new::h371a05b7099bb6c8(std::io::stdio::stdin::h7215cc131abb55d8());
                v45 = &g_73bbe8;
            }
            else
            {
                std::fs::File::open::hf67acec63d9b4762(&v0, v39, v40);
                _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h899c68cae0961182(&v8, &v0);
                v46 = v8;
                if (!v46)
                {
                    v44 = alloc::boxed::Box$LT$T$GT$::new::hc466181734c65edc((int)v9);
                    v34 = &v0;
                    v45 = &g_73bb90;
                }
                else
                {
                    break;
                }
            }
            std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hb9a751f4ce087bfe(&v24, 0x2000, v44, v45);
            uucore::features::checksum::digest_reader::hc839b2e876c05e33(v34, v20, &v24, v38->field_28, v38->field_20);
            _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h864ec134f8e6c354(&v8, v34);
            v46 = v9;
            if (v13 != 0x8000000000000000)
            {
                v13 = v8;
                v14 = v46;
                v15 = v10;
                v34 = &v0;
                uucore::features::checksum::escape_filename::hbc3241c83415153b(&v0, v39, v40);
                v17 = v2;
                v47 = *((int128_t *)&v0);
                v16 = v47;
                v48 = *((int128_t *)&v3);
                v33 = v33 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v47 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v48;
                v23 = v48;
                if (a0->field_29)
                {
                    if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h1bae7f9ea29a26b8(a0->field_0, a0->field_8, "blake2bdescription() is deprecated; use DisplayUnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTYETXTBSYEFBIGENOSPCESPIPEEROFSEMLINKEPIPEERANGEEDEADLKEN", 7))
                    {
                        alloc::str::_$LT$impl$u20$str$GT$::to_ascii_uppercase::h60b631a23b970e6a(&v18, a0->field_0, a0->field_8);
                        v0 = &v23;
                        v1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h215de39c55175587;
                        v2 = &v18;
                        v3 = &_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                        v4 = &v16;
                        v5 = &_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                        v6 = &v13;
                        v7 = &_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                        v8 = &g_73bab0;
                        v9 = 5;
                        v12 = 0;
                        v10 = &v0;
                        v11 = 4;
                        std::io::stdio::_print::he918bceb0c89db46(&v8, v49, v40);
                        ::0x578970::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3e7a1bd31eb01303(&v18);
                    }
                    else if (a0->field_18->field_30(a0->field_10) != 0x200)
                    {
                        v18 = a0->field_18->field_30(a0->field_10);
                        v0 = &v18;
                        v1 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                        v2 = &v16;
                        v3 = &_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                        v4 = &v13;
                        v5 = &_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                        v8 = &g_73ba70;
                        v9 = 4;
                        v12 = 0;
                        v10 = &v0;
                        v11 = 3;
                        std::io::stdio::_print::he918bceb0c89db46(&v8, v49, v40);
                    }
                    else
                    {
                        v8 = &v16;
                        v9 = &_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                        v10 = &v13;
                        v11 = &_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                        v0 = &g_73ba40;
                        v1 = 3;
                        v4 = 0;
                        v2 = &v8;
                        v3 = 2;
                        std::io::stdio::_print::he918bceb0c89db46(&v0, v49, v40);
                    }
                }
                else
                {
                    if (a0->field_2a)
                    {
                        v8 = &v13;
                        v9 = &_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                        v0 = &g_73b958;
                        v1 = 2;
                        v4 = 0;
                        v2 = &v8;
                        v3 = 1;
                        std::io::stdio::_print::he918bceb0c89db46(&v0, v49, v40);
                    }
                    else if (a0->field_2b)
                    {
                        v18 = v39;
                        v19 = v40;
                        v0 = &v13;
                        v1 = &_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                        v2 = &v21;
                        v3 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h215de39c55175587;
                        v4 = &v18;
                        v5 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                        v8 = &g_73bb00;
                        v9 = 4;
                        v12 = 0;
                        v10 = &v0;
                        v11 = 3;
                        std::io::stdio::_print::he918bceb0c89db46(&v8, v49, v40);
                    }
                    else
                    {
                        v0 = &v23;
                        v1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h215de39c55175587;
                        v2 = &v13;
                        v3 = &_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                        v4 = &v21;
                        v5 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h215de39c55175587;
                        v6 = &v16;
                        v7 = &_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                        v8 = &g_73bb40;
                        v9 = 5;
                        v12 = 0;
                        v10 = &v0;
                        v11 = 4;
                        std::io::stdio::_print::he918bceb0c89db46(&v8, v49, &v21);
                    }
                }
                ::0x578970::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3e7a1bd31eb01303(&v16);
                ::0x578970::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3e7a1bd31eb01303(&v13);
                core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$$GT$::h250a87cb04812376(&v24);
                v38 = a0;
            }
            else
            {
                core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$$GT$::h250a87cb04812376(&v24);
                break;
            }
        }
    }
    core::ptr::drop_in_place$LT$uu_hashsum..Options$GT$::h786198480f8a4310(a0->field_10, a0->field_18);
    return v46;
}
