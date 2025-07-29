long long uu_hashsum::create_algorithm_from_flags(struct_0 *a0, unsigned long long a1)
{
    char v0;  // [bp-0x90], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x90]
    unsigned long long v2;  // [sp-0x88]
    unsigned long long v3;  // [sp-0x80]
    char v4;  // [bp-0x78], Other Possible Types: unsigned long long
    unsigned long v5;  // [sp-0x70], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0x68]
    unsigned long long v7;  // [sp-0x60]
    unsigned long long v8;  // [bp-0x58]
    char v9;  // [bp-0x50]
    void* v10;  // [bp-0x40]
    int v11;  // [bp-0x38]
    char v12;  // [bp-0x28]
    unsigned long long v14;  // r8
    unsigned long long v15;  // rax
    unsigned long long v16;  // rcx
    unsigned long long v17;  // rax
    unsigned long long *v18;  // rax
    unsigned long long v19;  // rdx
    char v20;  // sil
    unsigned long long *v21;  // rax
    unsigned long long *v22;  // rax

    v10 = 0;
    if ((char)a1.get_flag("md5md5sumsha1sumsha224sha224sumsha256sha256sumsha384sha384sumsha512sha512sumb2sumb3sum(uutils coreutils) 0.1.0hashsum-abouthashsum-usagebinaryhashsum-help-binary-othercheckhashsum-help-checktaghashsum-help-text-otherquiethashsum-help-quietstatushashsum-hel", 3))
    {
        uucore::features::checksum::detect_algo(&v0, "md5sumsha1sumsha224sha224sumsha256sha256sumsha384sha384sumsha512sha512sumb2sumb3sum(uutils coreutils) 0.1.0hashsum-abouthashsum-usagebinaryhashsum-help-binary-othercheckhashsum-help-checktaghashsum-help-text-otherquiethashsum-help-quietstatushashsum-help-s", 6, 0, v14);
        v15 = v2;
        v16 = v3;
        if (!v1)
        {
            *((unsigned long long *)&a0->field_8) = v15;
            *((unsigned long long *)&a0->padding_9[7]) = v16;
            a0->field_0 = 0;
            core::ptr::drop_in_place<core::option::Option<uucore::features::checksum::HashAlgorithm>>(&v10);
            return a0;
        }
        memcpy(&v9, &v4, 16);
        v6 = v1;
        v7 = v15;
        v8 = v16;
        v17 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v10, &v6);
        if (v17)
        {
            *((unsigned long long *)&a0->field_8) = v17;
            *((char **)&a0->padding_9[7]) = &g_5f9108;
            a0->field_0 = 0;
            core::ptr::drop_in_place<core::option::Option<uucore::features::checksum::HashAlgorithm>>(&v10);
            return a0;
        }
    }
    if ((char)a1.get_flag("sha1shimsysvname", 4))
    {
        uucore::features::checksum::detect_algo(&v1, "sha1sumsha224sha224sumsha256sha256sumsha384sha384sumsha512sha512sumb2sumb3sum(uutils coreutils) 0.1.0hashsum-abouthashsum-usagebinaryhashsum-help-binary-othercheckhashsum-help-checktaghashsum-help-text-otherquiethashsum-help-quietstatushashsum-help-statuss", 7, 0, v14);
        v15 = v2;
        v16 = v3;
        if (!v1)
        {
            *((unsigned long long *)&a0->field_8) = v15;
            *((unsigned long long *)&a0->padding_9[7]) = v16;
            a0->field_0 = 0;
            core::ptr::drop_in_place<core::option::Option<uucore::features::checksum::HashAlgorithm>>(&v10);
            return a0;
        }
        memcpy(&v9, &v4, 16);
        v6 = v1;
        v7 = v15;
        v8 = v16;
        v17 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v10, &v6);
        if (v17)
        {
            *((unsigned long long *)&a0->field_8) = v17;
            *((char **)&a0->padding_9[7]) = &g_5f9108;
            a0->field_0 = 0;
            core::ptr::drop_in_place<core::option::Option<uucore::features::checksum::HashAlgorithm>>(&v10);
            return a0;
        }
    }
    if ((char)a1.get_flag("sha224sha224sumsha256sha256sumsha384sha384sumsha512sha512sumb2sumb3sum(uutils coreutils) 0.1.0hashsum-abouthashsum-usagebinaryhashsum-help-binary-othercheckhashsum-help-checktaghashsum-help-text-otherquiethashsum-help-quietstatushashsum-help-statusstrictha", 6))
    {
        uucore::features::checksum::detect_algo(&v1, "sha224sumsha256sha256sumsha384sha384sumsha512sha512sumb2sumb3sum(uutils coreutils) 0.1.0hashsum-abouthashsum-usagebinaryhashsum-help-binary-othercheckhashsum-help-checktaghashsum-help-text-otherquiethashsum-help-quietstatushashsum-help-statusstricthashsum-", 9, 0, v14);
        v15 = v2;
        v16 = v3;
        if (!v1)
        {
            *((unsigned long long *)&a0->field_8) = v15;
            *((unsigned long long *)&a0->padding_9[7]) = v16;
            a0->field_0 = 0;
            core::ptr::drop_in_place<core::option::Option<uucore::features::checksum::HashAlgorithm>>(&v10);
            return a0;
        }
        memcpy(&v9, &v4, 16);
        v6 = v1;
        v7 = v15;
        v8 = v16;
        v17 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v10, &v6);
        if (!(!v17))
            goto LABEL_4cfd17;
    }
    if ((char)a1.get_flag("sha256sha256sumsha384sha384sumsha512sha512sumb2sumb3sum(uutils coreutils) 0.1.0hashsum-abouthashsum-usagebinaryhashsum-help-binary-othercheckhashsum-help-checktaghashsum-help-text-otherquiethashsum-help-quietstatushashsum-help-statusstricthashsum-help-stri", 6))
    {
        uucore::features::checksum::detect_algo(&v1, "sha256sumsha384sha384sumsha512sha512sumb2sumb3sum(uutils coreutils) 0.1.0hashsum-abouthashsum-usagebinaryhashsum-help-binary-othercheckhashsum-help-checktaghashsum-help-text-otherquiethashsum-help-quietstatushashsum-help-statusstricthashsum-help-strictigno", 9, 0, v14);
        v15 = v2;
        v16 = v3;
        if (!v1)
        {
            *((unsigned long long *)&a0->field_8) = v15;
            *((unsigned long long *)&a0->padding_9[7]) = v16;
            a0->field_0 = 0;
            core::ptr::drop_in_place<core::option::Option<uucore::features::checksum::HashAlgorithm>>(&v10);
            return a0;
        }
        memcpy(&v9, &v4, 16);
        v6 = v1;
        v7 = v15;
        v8 = v16;
        v17 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v10, &v6);
        if (!v17)
            goto LABEL_4cf757;
    }
    else
    {
LABEL_4cf757:
        if ((char)a1.get_flag("sha384sha384sumsha512sha512sumb2sumb3sum(uutils coreutils) 0.1.0hashsum-abouthashsum-usagebinaryhashsum-help-binary-othercheckhashsum-help-checktaghashsum-help-text-otherquiethashsum-help-quietstatushashsum-help-statusstricthashsum-help-strictignore-missin", 6))
        {
            uucore::features::checksum::detect_algo(&v1, "sha384sumsha512sha512sumb2sumb3sum(uutils coreutils) 0.1.0hashsum-abouthashsum-usagebinaryhashsum-help-binary-othercheckhashsum-help-checktaghashsum-help-text-otherquiethashsum-help-quietstatushashsum-help-statusstricthashsum-help-strictignore-missinghashs", 9, 0, v14);
            v15 = v2;
            v16 = v3;
            if (!v1)
            {
                *((unsigned long long *)&a0->field_8) = v15;
                *((unsigned long long *)&a0->padding_9[7]) = v16;
                a0->field_0 = 0;
                core::ptr::drop_in_place<core::option::Option<uucore::features::checksum::HashAlgorithm>>(&v10);
                return a0;
            }
            memcpy(&v9, &v4, 16);
            v6 = v1;
            v7 = v15;
            v8 = v16;
            v17 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v10, &v6);
            if (!v17)
                goto LABEL_4cf7d2;
        }
        else
        {
LABEL_4cf7d2:
            if ((char)a1.get_flag("sha512sha512sumb2sumb3sum(uutils coreutils) 0.1.0hashsum-abouthashsum-usagebinaryhashsum-help-binary-othercheckhashsum-help-checktaghashsum-help-text-otherquiethashsum-help-quietstatushashsum-help-statusstricthashsum-help-strictignore-missinghashsum-help-i", 6))
            {
                uucore::features::checksum::detect_algo(&v1, "sha512sumb2sumb3sum(uutils coreutils) 0.1.0hashsum-abouthashsum-usagebinaryhashsum-help-binary-othercheckhashsum-help-checktaghashsum-help-text-otherquiethashsum-help-quietstatushashsum-help-statusstricthashsum-help-strictignore-missinghashsum-help-ignore-", 9, 0, v14);
                v15 = v2;
                v16 = v3;
                if (!v1)
                {
                    *((unsigned long long *)&a0->field_8) = v15;
                    *((unsigned long long *)&a0->padding_9[7]) = v16;
                    a0->field_0 = 0;
                    core::ptr::drop_in_place<core::option::Option<uucore::features::checksum::HashAlgorithm>>(&v10);
                    return a0;
                }
                memcpy(&v9, &v4, 16);
                v6 = v1;
                v7 = v15;
                v8 = v16;
                v17 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v10, &v6);
                if (!v17)
                    goto LABEL_4cf84d;
            }
            else
            {
LABEL_4cf84d:
                if ((char)a1.get_flag("b2sumb3sum(uutils coreutils) 0.1.0hashsum-abouthashsum-usagebinaryhashsum-help-binary-othercheckhashsum-help-checktaghashsum-help-text-otherquiethashsum-help-quietstatushashsum-help-statusstricthashsum-help-strictignore-missinghashsum-help-ignore-missingha", 5))
                {
                    uucore::features::checksum::detect_algo(&v1, "b2sumb3sum(uutils coreutils) 0.1.0hashsum-abouthashsum-usagebinaryhashsum-help-binary-othercheckhashsum-help-checktaghashsum-help-text-otherquiethashsum-help-quietstatushashsum-help-statusstricthashsum-help-strictignore-missinghashsum-help-ignore-missingha", 5, 0, v14);
                    v15 = v2;
                    v16 = v3;
                    if (!v1)
                    {
                        *((unsigned long long *)&a0->field_8) = v15;
                        *((unsigned long long *)&a0->padding_9[7]) = v16;
                        a0->field_0 = 0;
                        core::ptr::drop_in_place<core::option::Option<uucore::features::checksum::HashAlgorithm>>(&v10);
                        return a0;
                    }
                    memcpy(&v9, &v4, 16);
                    v6 = v1;
                    v7 = v15;
                    v8 = v16;
                    v17 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v10, &v6);
                    if (!v17)
                        goto LABEL_4cf8c8;
                }
                else
                {
LABEL_4cf8c8:
                    if ((char)a1.get_flag("b3sum(uutils coreutils) 0.1.0hashsum-abouthashsum-usagebinaryhashsum-help-binary-othercheckhashsum-help-checktaghashsum-help-text-otherquiethashsum-help-quietstatushashsum-help-statusstricthashsum-help-strictignore-missinghashsum-help-ignore-missinghashsum", 5))
                    {
                        uucore::features::checksum::detect_algo(&v1, "b3sum(uutils coreutils) 0.1.0hashsum-abouthashsum-usagebinaryhashsum-help-binary-othercheckhashsum-help-checktaghashsum-help-text-otherquiethashsum-help-quietstatushashsum-help-statusstricthashsum-help-strictignore-missinghashsum-help-ignore-missinghashsum", 5, 0, v14);
                        v15 = v2;
                        v16 = v3;
                        if (!v1)
                        {
                            *((unsigned long long *)&a0->field_8) = v15;
                            *((unsigned long long *)&a0->padding_9[7]) = v16;
                            a0->field_0 = 0;
                            core::ptr::drop_in_place<core::option::Option<uucore::features::checksum::HashAlgorithm>>(&v10);
                            return a0;
                        }
                        memcpy(&v9, &v4, 16);
                        v6 = v1;
                        v7 = v15;
                        v8 = v16;
                        v17 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v10, &v6);
                        if (!v17)
                            goto LABEL_4cf943;
                    }
                    else
                    {
LABEL_4cf943:
                        if ((char)a1.get_flag("sha3", 4))
                        {
                            v1.try_get_one(a1, "bitsBOLDBlue", 4);
                            v18 = "bitsBOLDBlue".unwrap(4, &v1);
                            if (v18)
                            {
                                v19 = *(v18);
                                v20 = 1;
                            }
                            else
                            {
                                v20 = 0;
                            }
                            uucore::features::checksum::create_sha3(&v1, v20, v19);
                            v15 = v2;
                            v16 = v3;
                            if (!v1)
                            {
                                *((unsigned long long *)&a0->field_8) = v15;
                                *((unsigned long long *)&a0->padding_9[7]) = v16;
                                a0->field_0 = 0;
                                core::ptr::drop_in_place<core::option::Option<uucore::features::checksum::HashAlgorithm>>(&v10);
                                return a0;
                            }
                            memcpy(&v9, &v4, 16);
                            v6 = v1;
                            v7 = v15;
                            v8 = v16;
                            v17 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v10, &v6);
                            if (!v17)
                                goto LABEL_4cf9f4;
                        }
                        else
                        {
LABEL_4cf9f4:
                            if ((char)a1.get_flag("sha3-224", 8))
                            {
                                v1 = "SHA3-224SHA3-256RgbColortrue";
                                v2 = 8;
                                v3 = alloc::boxed::Box<T>::new();
                                v4 = &g_5f9028;
                                v5 = 224;
                                v17 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v10, &v1);
                                if (!v17)
                                    goto LABEL_4cfa59;
                            }
                            else
                            {
LABEL_4cfa59:
                                if ((char)a1.get_flag("sha3-256shake128deadlock", 8))
                                {
                                    v1 = "SHA3-256RgbColortrue";
                                    v2 = 8;
                                    v3 = alloc::boxed::Box<T>::new();
                                    v4 = &g_5f9058;
                                    v5 = 0x100;
                                    v17 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v10, &v1);
                                    if (!v17)
                                        goto LABEL_4cfabe;
                                }
                                else
                                {
LABEL_4cfabe:
                                    if ((char)a1.get_flag("sha3-384SHA3_224@", 8))
                                    {
                                        v1 = "SHA3-384TrailingESTRPIPE";
                                        v2 = 8;
                                        v3 = alloc::boxed::Box<T>::new();
                                        v4 = &g_5f9088;
                                        v5 = 384;
                                        v17 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v10, &v1);
                                        if (!v17)
                                            goto LABEL_4cfb23;
                                    }
                                    else
                                    {
LABEL_4cfb23:
                                        if ((char)a1.get_flag("sha3-512", 8))
                                        {
                                            v1 = "SHA3-512shake256";
                                            v2 = 8;
                                            v3 = alloc::boxed::Box<T>::new();
                                            v4 = &g_5f90b8;
                                            v5 = 0x200;
                                            v17 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v10, &v1);
                                            if (!v17)
                                                goto LABEL_4cfb88;
                                        }
                                        else
                                        {
LABEL_4cfb88:
                                            if ((char)a1.get_flag("shake128deadlock", 8))
                                            {
                                                v1.try_get_one(a1, "bitsBOLDBlue", 4);
                                                v21 = "bitsBOLDBlue".unwrap(4, &v1);
                                                if (v21)
                                                {
                                                    v1 = "SHAKE128tag/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rsBLAKE2b ( ( *blake2bdescription() is deprecated; use Display/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unkn";
                                                    v2 = 8;
                                                    v3 = alloc::boxed::Box<T>::new();
                                                    v4 = &g_5f9170;
                                                    v5 = *(v21);
                                                    v17 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v10, &v1);
                                                    if (!v17)
                                                        goto LABEL_4cfc2b;
                                                }
                                                else
                                                {
                                                    v17 = 6.new();
                                                }
                                            }
                                            else
                                            {
LABEL_4cfc2b:
                                                if ((char)a1.get_flag("shake256", 8))
                                                {
                                                    v1.try_get_one(a1, "bitsBOLDBlue", 4);
                                                    v22 = "bitsBOLDBlue".unwrap(4, &v1);
                                                    if (v22)
                                                    {
                                                        v0 = "SHAKE256'; only all-args";
                                                        v2 = 8;
                                                        v3 = alloc::boxed::Box<T>::new();
                                                        v4 = &g_5f91a0;
                                                        v5 = *(v22);
                                                        v17 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v10, &v0);
                                                        if (!v17)
                                                            goto LABEL_4cfcca;
                                                    }
                                                    else
                                                    {
                                                        v17 = 7.new();
                                                    }
                                                }
                                                else
                                                {
LABEL_4cfcca:
                                                    if (v10)
                                                    {
                                                        *((int128_t *)&(&a0->padding_9)[1]) = *((int128_t *)&v12);
                                                        *((void*)&a0->field_8) = v11;
                                                        a0->field_0 = v10;
                                                        return a0;
                                                    }
                                                    v17 = 14.new();
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
LABEL_4cfd17:
    *((unsigned long long *)&a0->field_8) = v17;
    *((char **)&a0->padding_9[7]) = &g_5f9108;
    a0->field_0 = 0;
    core::ptr::drop_in_place<core::option::Option<uucore::features::checksum::HashAlgorithm>>(&v10);
    return a0;
}
