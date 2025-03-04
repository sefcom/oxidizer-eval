long long uu_hashsum::hashsum::h440870b73b1317fa(struct_2 *a0, uint128_t a1[4])
{
    struct struct_0 **v0;  // [sp-0x1a8], Other Possible Types: unsigned long
    struct struct_0 **v1;  // [bp-0x1a8]
    struct struct_0 **v2;  // [sp-0x1a0], Other Possible Types: unsigned long long
    struct struct_0 **v3;  // [sp-0x198]
    struct struct_0 **v5;  // [sp-0x190], Other Possible Types: unsigned long, unsigned long long
    void* v6;  // [sp-0x188], Other Possible Types: struct struct_0 **
    struct struct_0 **v7;  // [sp-0x180], Other Possible Types: unsigned long long
    struct struct_0 **v8;  // [sp-0x178]
    struct struct_0 **v9;  // [sp-0x170]
    struct struct_0 **v10;  // [sp-0x160]
    struct struct_0 **v11;  // [sp-0x158]
    struct struct_0 **v12;  // [sp-0x150]
    struct struct_0 **v13;  // [sp-0x148], Other Possible Types: unsigned long long
    void* v14;  // [sp-0x140]
    struct struct_0 **v15;  // [sp-0x120]
    struct struct_0 **v16;  // [sp-0x118]
    struct struct_0 **v17;  // [sp-0x110]
    int v18;  // [sp-0x108]
    struct struct_0 **v19;  // [sp-0xf8]
    char v20;  // [bp-0xf0], Other Possible Types: unsigned long
    unsigned long long v21;  // [sp-0xe8]
    unsigned long long v22;  // [sp-0xd8]
    unsigned long v23;  // [sp-0xd0]
    unsigned long long v24;  // [sp-0xc8]
    int v25;  // [sp-0xc0]
    char v26;  // [bp-0xb0]
    int v27;  // [sp-0x78]
    int v28;  // [sp-0x68]
    int v29;  // [sp-0x58]
    int v30;  // [sp-0x48]
    struct_2 *v32;  // rbx
    int v34;  // xmm0
    int v35;  // ymm0
    int v36;  // ymm0
    struct struct_0 **v37;  // r13
    unsigned long long v38;  // r15
    unsigned long long v39;  // rdx
    unsigned long long v40;  // rax
    unsigned long long v41;  // rcx
    struct struct_0 **v42;  // r13
    int v43;  // xmm0
    int v44;  // xmm0

    v32 = a0;
    *((int *)&v23) = (!a0->field_28 ? " *blake2bdescription() is deprecated; use DisplayUnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTYETXTBSYEFBIGENOSPCESPIPEEROFSEMLINKEPIPEERANGEEDEADLK" : "*blake2bdescription() is deprecated; use DisplayUnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTYETXTBSYEFBIGENOSPCESPIPEEROFSEMLINKEPIPEERANGEEDEADLKE");
    v24 = 1;
    v34 = a1[0];
    v36 = v35 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v34;
    *((uint128_t *)&v30) = a1[3];
    *((uint128_t *)&v29) = a1[2];
    *((uint128_t *)&v28) = a1[1];
    v27 = v34;
    v22 = &a0->field_10;
    v37 = &v1;
    while (true)
    {
        v38 = _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h4412e25fb3900246(&v27);
        if (!v38)
        {
            v42 = 0;
            break;
        }
        else
        {
            std::path::Path::components::h4f3217acf0fc8653(&v10, v38, v39);
            std::path::Path::components::h4f3217acf0fc8653(v37, "-b2sumbinarycheckstatusquietstrictignore-missing", 1);
            if (::0x579a20::_$LT$std..path..Components$u20$as$u20$core..cmp..PartialEq$GT$::eq::h5cac1ec2999e76da(&v10, v37))
            {
                v40 = alloc::boxed::Box$LT$T$GT$::new::h371a05b7099bb6c8(std::io::stdio::stdin::h7215cc131abb55d8());
                v41 = &g_73bbe8;
            }
            else
            {
                std::fs::File::open::hf67acec63d9b4762(v37, v38, v39);
                _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h899c68cae0961182(&v10, v37);
                v42 = v10;
                if (!v42)
                {
                    v40 = alloc::boxed::Box$LT$T$GT$::new::hc466181734c65edc((int)v11);
                    v37 = &v1;
                    v41 = &g_73bb90;
                }
                else
                {
                    break;
                }
            }
            std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hb9a751f4ce087bfe(&v26, 0x2000, v40, v41);
            uucore::features::checksum::digest_reader::hc839b2e876c05e33(v37, v22, &v26, v32->field_28, v32->field_20);
            _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h864ec134f8e6c354(&v10, v37);
            v42 = v11;
            if (v15 != 0x8000000000000000)
            {
                v15 = v10;
                v16 = v42;
                v17 = v12;
                v37 = &v1;
                v32 = a0;
                uucore::features::checksum::escape_filename::hbc3241c83415153b(&v1, v38, v39);
                v19 = v3;
                v43 = *((int128_t *)&v0);
                v18 = v43;
                v44 = *((int128_t *)&v5);
                v36 = (v36 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v43) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v44;
                v25 = v44;
                if (a0->field_29)
                {
                    if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h1bae7f9ea29a26b8(a0->field_0, a0->field_8, "blake2bdescription() is deprecated; use DisplayUnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTYETXTBSYEFBIGENOSPCESPIPEEROFSEMLINKEPIPEERANGEEDEADLKEN", 7))
                    {
                        alloc::str::_$LT$impl$u20$str$GT$::to_ascii_uppercase::h60b631a23b970e6a(&v20, a0->field_0, a0->field_8);
                        v0 = &v25;
                        v2 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h215de39c55175587;
                        v3 = &v20;
                        v5 = &_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                        v6 = &v18;
                        v7 = &_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                        v8 = &v15;
                        v9 = &_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                        v10 = &g_73bab0;
                        v11 = 5;
                        v14 = 0;
                        v12 = &v1;
                        v13 = 4;
                        std::io::stdio::_print::he918bceb0c89db46(&v10);
                        ::0x578970::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3e7a1bd31eb01303(&v20);
                    }
                    else if (a0->field_18->field_30(a0->field_10) != 0x200)
                    {
                        v20 = a0->field_18->field_30(a0->field_10);
                        v0 = &v20;
                        v2 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                        v3 = &v18;
                        v5 = &_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                        v6 = &v15;
                        v7 = &_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                        v10 = &g_73ba70;
                        v11 = 4;
                        v14 = 0;
                        v12 = &v1;
                        v13 = 3;
                        std::io::stdio::_print::he918bceb0c89db46(&v10);
                    }
                    else
                    {
                        v10 = &v18;
                        v11 = &_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                        v12 = &v15;
                        v13 = &_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                        v0 = &g_73ba40;
                        v2 = 3;
                        v6 = 0;
                        v3 = &v10;
                        v5 = 2;
                        std::io::stdio::_print::he918bceb0c89db46(&v1);
                    }
                }
                else
                {
                    if (a0->field_2a)
                    {
                        v10 = &v15;
                        v11 = &_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                        v0 = &g_73b958;
                        v2 = 2;
                        v6 = 0;
                        v3 = &v10;
                        v5 = 1;
                        std::io::stdio::_print::he918bceb0c89db46(&v1);
                    }
                    else if (a0->field_2b)
                    {
                        v20 = v38;
                        v21 = v39;
                        v0 = &v15;
                        v2 = &_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                        v3 = &v23;
                        v5 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h215de39c55175587;
                        v6 = &v20;
                        v7 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                        v10 = &g_73bb00;
                        v11 = 4;
                        v14 = 0;
                        v12 = &v1;
                        v13 = 3;
                        std::io::stdio::_print::he918bceb0c89db46(&v10);
                    }
                    else
                    {
                        v0 = &v25;
                        v2 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h215de39c55175587;
                        v3 = &v15;
                        v5 = &_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                        v6 = &v23;
                        v7 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h215de39c55175587;
                        v8 = &v18;
                        v9 = &_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                        v10 = &g_73bb40;
                        v11 = 5;
                        v14 = 0;
                        v12 = &v1;
                        v13 = 4;
                        std::io::stdio::_print::he918bceb0c89db46(&v10);
                    }
                }
                ::0x578970::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3e7a1bd31eb01303(&v18);
                ::0x578970::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3e7a1bd31eb01303(&v15);
                core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$$GT$::h250a87cb04812376(&v26);
            }
            else
            {
                core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$$GT$::h250a87cb04812376(&v26);
                break;
            }
        }
    }
    core::ptr::drop_in_place$LT$uu_hashsum..Options$GT$::h786198480f8a4310(a0->field_10, a0->field_18);
    return v42;
}
