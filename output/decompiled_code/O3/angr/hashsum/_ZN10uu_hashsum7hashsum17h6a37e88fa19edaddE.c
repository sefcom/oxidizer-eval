long long uu_hashsum::hashsum::h6a37e88fa19edadd(struct_2 *a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    struct struct_0 **v0;  // [bp-0x170]
    struct struct_0 **v1;  // [sp-0x168], Other Possible Types: unsigned long long
    struct struct_0 **v2;  // [sp-0x160]
    struct struct_0 **v3;  // [bp-0x158], Other Possible Types: char, unsigned long long
    void* v4;  // [sp-0x150], Other Possible Types: struct struct_0 **
    struct struct_0 **v5;  // [sp-0x148], Other Possible Types: unsigned long long
    struct struct_0 **v6;  // [sp-0x140]
    struct struct_0 **v7;  // [sp-0x138]
    struct struct_1 **v8;  // [sp-0x130]
    struct struct_0 **v9;  // [bp-0x128], Other Possible Types: char
    struct struct_0 **v10;  // [sp-0x120]
    struct struct_0 **v11;  // [sp-0x118]
    struct struct_0 **v12;  // [sp-0x110], Other Possible Types: unsigned long long
    void* v13;  // [sp-0x108]
    struct_2 *v14;  // [sp-0xe8]
    struct struct_0 **v15;  // [sp-0xe0]
    struct struct_0 **v16;  // [sp-0xd8]
    struct struct_0 **v17;  // [sp-0xd0]
    int v18;  // [sp-0xc8]
    struct struct_0 **v19;  // [sp-0xb8]
    unsigned long v20;  // [sp-0xb0], Other Possible Types: unsigned long long
    unsigned long long v21;  // [sp-0xa8]
    unsigned long v22;  // [sp-0xa0], Other Possible Types: unsigned long long
    unsigned long long v23;  // [sp-0x98]
    unsigned long v24;  // [bp-0x90], Other Possible Types: unsigned long long
    unsigned long long v25;  // [sp-0x88]
    int v26;  // [sp-0x78]
    char v27;  // [bp-0x68]
    struct_2 *v29;  // r13
    unsigned long long v31;  // rax
    struct struct_0 **v33;  // rbp
    unsigned long long *v34;  // r15
    unsigned long long v36;  // rbx
    unsigned long long *v37;  // r15
    unsigned long long v38;  // rdx
    unsigned long long v39;  // rbx
    int v40;  // ymm0
    unsigned long long v41;  // rcx
    unsigned long long v42;  // r8
    unsigned long long v43;  // r9
    unsigned long long v44;  // rax
    unsigned long long v45;  // rcx
    struct struct_0 **v46;  // rbp
    unsigned long long *v47;  // r15
    int v48;  // xmm0
    int v49;  // xmm0
    struct_2 *v50;  // rax
    unsigned long long v51;  // rsi
    unsigned long long *v52;  // r15

    v29 = a0;
    *((int *)&v20) = (!a0->field_28 ? " *blake2bdescription() is deprecated; use DisplayUnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTYETXTBSYEFBIGENOSPCESPIPEEROFSEMLINKEPIPEERANGEEDEADLK" : "*blake2bdescription() is deprecated; use DisplayUnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTYETXTBSYEFBIGENOSPCESPIPEEROFSEMLINKEPIPEERANGEEDEADLKE");
    v21 = 1;
    v22 = "-b2sumbinarycheckstatusquietstrictignore-missing";
    v23 = 1;
    v31 = ::0x579d20::_$LT$core..iter..sources..once..Once$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0caeee1655188592(&v22);
    if (v31)
    {
        v8 = &a0->padding_10[8];
        v33 = &v9;
        v14 = a0;
        v34 = &a0->padding_10;
        do
        {
            v36 = v39;
            v37 = v34;
            std::path::Path::components::h4f3217acf0fc8653(&v9, v31, v36);
            std::path::Path::components::h4f3217acf0fc8653(&v0, "-b2sumbinarycheckstatusquietstrictignore-missing", 1);
            if ((char)::0x579a20::_$LT$std..path..Components$u20$as$u20$core..cmp..PartialEq$GT$::eq::h5cac1ec2999e76da(&v9, &v0, v38, v41, v42, v43))
            {
                v44 = alloc::boxed::Box$LT$T$GT$::new::h371a05b7099bb6c8(std::io::stdio::stdin::h7215cc131abb55d8());
                v45 = &g_73bbe8;
            }
            else
            {
                std::fs::File::open::hf67acec63d9b4762(&v0, v31, v36);
                _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h899c68cae0961182(&v9, &v0);
                v46 = v9;
                if (v46)
                {
                    core::ptr::drop_in_place$LT$uu_hashsum..Options$GT$::h786198480f8a4310(*(v52), *(v8));
                    return v46;
                }
                v44 = alloc::boxed::Box$LT$T$GT$::new::hc466181734c65edc((int)v10);
                v33 = &v9;
                v45 = &g_73bb90;
            }
            std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hb9a751f4ce087bfe(&v27, 0x2000, v44, v45);
            uucore::features::checksum::digest_reader::hc839b2e876c05e33(&v0, v37, &v27, v29->field_28, v29->field_20);
            _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h864ec134f8e6c354(v33, &v0);
            if (v15 == 0x8000000000000000)
            {
                core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$$GT$::h250a87cb04812376(&v27);
                core::ptr::drop_in_place$LT$uu_hashsum..Options$GT$::h786198480f8a4310(*(v52), *(v8));
                return v46;
            }
            v15 = v9;
            v16 = v10;
            v17 = v11;
            v47 = v37;
            uucore::features::checksum::escape_filename::hbc3241c83415153b(&v0, v31, v36);
            v33 = &v9;
            v19 = v2;
            v48 = *((int128_t *)&v0);
            v18 = v48;
            v49 = *((int128_t *)&v3);
            v40 = v40 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v48 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v49;
            v26 = v49;
            v50 = v14;
            if (!v50->field_29)
            {
                if (v50->field_2a)
                {
                    v9 = &v15;
                    v10 = &_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    v0 = &g_73b958;
                    v1 = 2;
                    v4 = 0;
                    v2 = &v9;
                    v3 = 1;
                    std::io::stdio::_print::he918bceb0c89db46(&v0, v51, v38);
                }
                else if (!v50->field_2b)
                {
                    v0 = &v26;
                    v1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h215de39c55175587;
                    v2 = &v15;
                    v3 = &_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    v4 = &v20;
                    v5 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h215de39c55175587;
                    v6 = &v18;
                    v7 = &_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    v9 = &g_73bb40;
                    v10 = 5;
                    v13 = 0;
                    v11 = &v0;
                    v12 = 4;
                    std::io::stdio::_print::he918bceb0c89db46(&v9, v51, &v20);
                }
                else
                {
                    v24 = v31;
                    v25 = v36;
                    v0 = &v15;
                    v1 = &_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    v2 = &v20;
                    v3 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h215de39c55175587;
                    v4 = &v24;
                    v5 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                    v9 = &g_73bb00;
                    v10 = 4;
                    v13 = 0;
                    v11 = &v0;
                    v12 = 3;
                    std::io::stdio::_print::he918bceb0c89db46(&v9, v51, v38);
                }
            }
            else
            {
                if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h1bae7f9ea29a26b8(v50->field_0, v50->field_8, "blake2bdescription() is deprecated; use DisplayUnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTYETXTBSYEFBIGENOSPCESPIPEEROFSEMLINKEPIPEERANGEEDEADLKEN", 7))
                {
                    alloc::str::_$LT$impl$u20$str$GT$::to_ascii_uppercase::h60b631a23b970e6a(&v24, v14->field_0, v14->field_8);
                    v0 = &v26;
                    v1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h215de39c55175587;
                    v2 = &v24;
                    v3 = &_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    v4 = &v18;
                    v5 = &_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    v6 = &v15;
                    v7 = &_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    v9 = &g_73bab0;
                    v10 = 5;
                    v13 = 0;
                    v11 = &v0;
                    v12 = 4;
                    std::io::stdio::_print::he918bceb0c89db46(&v9, v51, v38);
                    ::0x578970::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3e7a1bd31eb01303(&v24);
                }
                else if (*(v8)->field_30(*(v47)) == 0x200)
                {
                    v9 = &v18;
                    v10 = &_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    v11 = &v15;
                    v12 = &_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    v0 = &g_73ba40;
                    v1 = 3;
                    v4 = 0;
                    v2 = &v9;
                    v3 = 2;
                    std::io::stdio::_print::he918bceb0c89db46(&v0, v51, v38);
                }
                else
                {
                    v24 = *(v8)->field_30(*(v47));
                    v0 = &v24;
                    v1 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                    v2 = &v18;
                    v3 = &_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    v4 = &v15;
                    v5 = &_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    v9 = &g_73ba70;
                    v10 = 4;
                    v13 = 0;
                    v11 = &v0;
                    v12 = 3;
                    std::io::stdio::_print::he918bceb0c89db46(&v9, v51, v38);
                }
            }
            ::0x578970::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3e7a1bd31eb01303(&v18);
            ::0x578970::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3e7a1bd31eb01303(&v15);
            core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$$GT$::h250a87cb04812376(&v27);
            v29 = v14;
            v31 = ::0x579d20::_$LT$core..iter..sources..once..Once$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0caeee1655188592(&v22);
        } while (v31);
    }
    v52 = &v29->padding_10;
    v8 = &v29->padding_10[8];
    core::ptr::drop_in_place$LT$uu_hashsum..Options$GT$::h786198480f8a4310(*(v52), *(v8));
    return 0;
}
