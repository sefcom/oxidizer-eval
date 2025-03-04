long long uu_hashsum::hashsum::h6a37e88fa19edadd(struct_1 *a0)
{
    struct struct_0 **v0;  // [bp-0x170]
    struct struct_0 **v1;  // [sp-0x170]
    struct struct_0 **v2;  // [sp-0x168], Other Possible Types: unsigned long long
    struct struct_0 **v3;  // [sp-0x160]
    char v4;  // [bp-0x158]
    struct struct_0 **v5;  // [sp-0x158], Other Possible Types: unsigned long long
    void* v6;  // [sp-0x150], Other Possible Types: struct struct_0 **
    struct struct_0 **v7;  // [sp-0x148], Other Possible Types: unsigned long long
    struct struct_0 **v8;  // [sp-0x140]
    struct struct_0 **v9;  // [sp-0x138]
    struct struct_2 **v10;  // [sp-0x130]
    struct struct_0 **v12;  // [sp-0x128]
    struct struct_0 **v13;  // [sp-0x120]
    struct struct_0 **v14;  // [sp-0x118]
    struct struct_0 **v15;  // [sp-0x110], Other Possible Types: unsigned long long
    void* v16;  // [sp-0x108]
    struct_1 *v17;  // [sp-0xe8]
    struct struct_0 **v18;  // [sp-0xe0]
    struct struct_0 **v19;  // [sp-0xd8]
    struct struct_0 **v20;  // [sp-0xd0]
    int v21;  // [sp-0xc8]
    struct struct_0 **v22;  // [sp-0xb8]
    unsigned long v23;  // [sp-0xb0]
    unsigned long long v24;  // [sp-0xa8]
    unsigned long v25;  // [sp-0xa0]
    unsigned long long v26;  // [sp-0x98]
    char v27;  // [bp-0x90], Other Possible Types: unsigned long
    unsigned long long v28;  // [sp-0x88]
    int v29;  // [sp-0x78]
    char v30;  // [bp-0x68]
    struct_1 *v32;  // r13
    unsigned long long v34;  // rax
    unsigned long long v35;  // r12
    unsigned long v36;  // rdx
    unsigned long long v37;  // rbx
    unsigned long long *v38;  // r15
    struct struct_0 **v39;  // rbp
    int v40;  // ymm0
    unsigned long long v41;  // rax
    unsigned long long v42;  // rcx
    struct struct_0 **v43;  // rbp
    unsigned long long *v44;  // r13
    int v45;  // xmm0
    int v46;  // xmm0
    struct_1 *v47;  // rax
    struct struct_2 **v48;  // r14

    v32 = a0;
    *((int *)&v23) = (!a0->field_28 ? " *blake2bdescription() is deprecated; use DisplayUnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTYETXTBSYEFBIGENOSPCESPIPEEROFSEMLINKEPIPEERANGEEDEADLK" : "*blake2bdescription() is deprecated; use DisplayUnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTYETXTBSYEFBIGENOSPCESPIPEEROFSEMLINKEPIPEERANGEEDEADLKE");
    v24 = 1;
    v25 = "-b2sumbinarycheckstatusquietstrictignore-missing";
    v26 = 1;
    v34 = ::0x579d20::_$LT$core..iter..sources..once..Once$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0caeee1655188592(&v25);
    if (v34)
    {
        v35 = v34;
        v37 = v36;
        v38 = &a0->padding_10;
        v10 = &a0->padding_10[8];
        v39 = &v12;
        v17 = a0;
        do
        {
            std::path::Path::components::h4f3217acf0fc8653(&v12, v35, v37);
            std::path::Path::components::h4f3217acf0fc8653(&v0, "-b2sumbinarycheckstatusquietstrictignore-missing", 1);
            if (::0x579a20::_$LT$std..path..Components$u20$as$u20$core..cmp..PartialEq$GT$::eq::h5cac1ec2999e76da(&v12, &v0))
            {
                v41 = alloc::boxed::Box$LT$T$GT$::new::h371a05b7099bb6c8(std::io::stdio::stdin::h7215cc131abb55d8());
                v42 = &g_73bbe8;
            }
            else
            {
                std::fs::File::open::hf67acec63d9b4762(&v0, v35, v37);
                _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h899c68cae0961182(&v12, &v0);
                v43 = v12;
                if (v43)
                {
                    v44 = v38;
                    v48 = v10;
                    core::ptr::drop_in_place$LT$uu_hashsum..Options$GT$::h786198480f8a4310(*(v44), *(v48));
                    return v43;
                }
                v41 = alloc::boxed::Box$LT$T$GT$::new::hc466181734c65edc((int)v13);
                v39 = &v12;
                v42 = &g_73bb90;
            }
            std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hb9a751f4ce087bfe(&v30, 0x2000, v41, v42);
            uucore::features::checksum::digest_reader::hc839b2e876c05e33(&v0, v38, &v30, v32->field_28, v32->field_20);
            _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h864ec134f8e6c354(v39, &v0);
            if (v18 == 0x8000000000000000)
            {
                core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$$GT$::h250a87cb04812376(&v30);
                core::ptr::drop_in_place$LT$uu_hashsum..Options$GT$::h786198480f8a4310(*(v44), *(v48));
                return v43;
            }
            v18 = v12;
            v19 = v13;
            v20 = v14;
            uucore::features::checksum::escape_filename::hbc3241c83415153b(&v0, v35, v37);
            v39 = &v12;
            v22 = v3;
            v45 = *((int128_t *)&v0);
            v21 = v45;
            v46 = *((int128_t *)&v4);
            v40 = (v40 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v45) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v46;
            v29 = v46;
            v47 = v17;
            if (v47->field_29)
            {
                if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h1bae7f9ea29a26b8(v47->field_0, v47->field_8, "blake2bdescription() is deprecated; use DisplayUnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTYETXTBSYEFBIGENOSPCESPIPEEROFSEMLINKEPIPEERANGEEDEADLKEN", 7))
                {
                    alloc::str::_$LT$impl$u20$str$GT$::to_ascii_uppercase::h60b631a23b970e6a(&v27, v17->field_0, v17->field_8);
                    v1 = &v29;
                    v2 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h215de39c55175587;
                    v3 = &v27;
                    v5 = &_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    v6 = &v21;
                    v7 = &_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    v8 = &v18;
                    v9 = &_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    v12 = &g_73bab0;
                    v13 = 5;
                    v16 = 0;
                    v14 = &v0;
                    v15 = 4;
                    std::io::stdio::_print::he918bceb0c89db46(&v12);
                    ::0x578970::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3e7a1bd31eb01303(&v27);
                }
                else if (*(v10)->field_30(*(v38)) != 0x200)
                {
                    v27 = *(v10)->field_30(*(v38));
                    v1 = &v27;
                    v2 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                    v3 = &v21;
                    v5 = &_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    v6 = &v18;
                    v7 = &_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    v12 = &g_73ba70;
                    v13 = 4;
                    v16 = 0;
                    v14 = &v0;
                    v15 = 3;
                    std::io::stdio::_print::he918bceb0c89db46(&v12);
                }
                else
                {
                    v12 = &v21;
                    v13 = &_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    v14 = &v18;
                    v15 = &_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    v1 = &g_73ba40;
                    v2 = 3;
                    v6 = 0;
                    v3 = &v12;
                    v5 = 2;
                    std::io::stdio::_print::he918bceb0c89db46(&v0);
                }
            }
            else
            {
                if (v47->field_2a)
                {
                    v12 = &v18;
                    v13 = &_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    v1 = &g_73b958;
                    v2 = 2;
                    v6 = 0;
                    v3 = &v12;
                    v5 = 1;
                    std::io::stdio::_print::he918bceb0c89db46(&v0);
                }
                else if (!v47->field_2b)
                {
                    v1 = &v29;
                    v2 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h215de39c55175587;
                    v3 = &v18;
                    v5 = &_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    v6 = &v23;
                    v7 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h215de39c55175587;
                    v8 = &v21;
                    v9 = &_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    v12 = &g_73bb40;
                    v13 = 5;
                    v16 = 0;
                    v14 = &v0;
                    v15 = 4;
                    std::io::stdio::_print::he918bceb0c89db46(&v12);
                }
                else
                {
                    v27 = v35;
                    v28 = v37;
                    v1 = &v18;
                    v2 = &_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    v3 = &v23;
                    v5 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h215de39c55175587;
                    v6 = &v27;
                    v7 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                    v12 = &g_73bb00;
                    v13 = 4;
                    v16 = 0;
                    v14 = &v0;
                    v15 = 3;
                    std::io::stdio::_print::he918bceb0c89db46(&v12);
                }
            }
            ::0x578970::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3e7a1bd31eb01303(&v21);
            ::0x578970::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3e7a1bd31eb01303(&v18);
            core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$$GT$::h250a87cb04812376(&v30);
            v32 = v17;
            v35 = ::0x579d20::_$LT$core..iter..sources..once..Once$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0caeee1655188592(&v25);
            v37 = v36;
        } while (v35);
    }
    v44 = &v32->padding_10;
    v48 = &v32->padding_10[8];
    core::ptr::drop_in_place$LT$uu_hashsum..Options$GT$::h786198480f8a4310(*(v44), *(v48));
    return 0;
}
