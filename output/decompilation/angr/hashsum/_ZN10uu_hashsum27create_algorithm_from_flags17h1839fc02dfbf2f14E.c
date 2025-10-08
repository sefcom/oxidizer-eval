long long uu_hashsum::create_algorithm_from_flags(void* a0, unsigned long long a1)
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
    if ((char)a1.get_flag("md5md5sumsha1sumsha224sha224sumsha256sha256sumsha384sha384sumsha512sha512sumb2sumb3sum(uutils coreutils) 0.0.30Compute and check message digests.{} --<digest> [OPTIONS]... [FILE]...binaryread in binary modecheckread hashsums from the FILEs and check themta", 3))
    {
        uucore::features::checksum::detect_algo(&v0, "md5sumsha1sumsha224sha224sumsha256sha256sumsha384sha384sumsha512sha512sumb2sumb3sum(uutils coreutils) 0.0.30Compute and check message digests.{} --<digest> [OPTIONS]... [FILE]...binaryread in binary modecheckread hashsums from the FILEs and check themtagcr", 6, 0, v14);
        v15 = v2;
        v16 = v3;
        if (!v1)
        {
            *((unsigned long long *)&a0[8]) = v15;
            *((unsigned long long *)&a0[16]) = v16;
            *((unsigned long long *)a0) = 0;
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
            *((unsigned long long *)&a0[8]) = v17;
            *((unsigned long long **)&a0[16]) = &g_551750;
            *((unsigned long long *)a0) = 0;
            core::ptr::drop_in_place<core::option::Option<uucore::features::checksum::HashAlgorithm>>(&v10);
            return a0;
        }
    }
    if ((char)a1.get_flag("sha1shimsysv", 4))
    {
        uucore::features::checksum::detect_algo(&v1, "sha1sumsha224sha224sumsha256sha256sumsha384sha384sumsha512sha512sumb2sumb3sum(uutils coreutils) 0.0.30Compute and check message digests.{} --<digest> [OPTIONS]... [FILE]...binaryread in binary modecheckread hashsums from the FILEs and check themtagcreate a", 7, 0, v14);
        v15 = v2;
        v16 = v3;
        if (!v1)
        {
            *((unsigned long long *)&a0[8]) = v15;
            *((unsigned long long *)&a0[16]) = v16;
            *((unsigned long long *)a0) = 0;
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
            *((unsigned long long *)&a0[8]) = v17;
            *((unsigned long long **)&a0[16]) = &g_551750;
            *((unsigned long long *)a0) = 0;
            core::ptr::drop_in_place<core::option::Option<uucore::features::checksum::HashAlgorithm>>(&v10);
            return a0;
        }
    }
    if ((char)a1.get_flag("sha224sha224sumsha256sha256sumsha384sha384sumsha512sha512sumb2sumb3sum(uutils coreutils) 0.0.30Compute and check message digests.{} --<digest> [OPTIONS]... [FILE]...binaryread in binary modecheckread hashsums from the FILEs and check themtagcreate a BSD-st", 6))
    {
        uucore::features::checksum::detect_algo(&v1, "sha224sumsha256sha256sumsha384sha384sumsha512sha512sumb2sumb3sum(uutils coreutils) 0.0.30Compute and check message digests.{} --<digest> [OPTIONS]... [FILE]...binaryread in binary modecheckread hashsums from the FILEs and check themtagcreate a BSD-style ch", 9, 0, v14);
        v15 = v2;
        v16 = v3;
        if (!v1)
        {
            *((unsigned long long *)&a0[8]) = v15;
            *((unsigned long long *)&a0[16]) = v16;
            *((unsigned long long *)a0) = 0;
            core::ptr::drop_in_place<core::option::Option<uucore::features::checksum::HashAlgorithm>>(&v10);
            return a0;
        }
        memcpy(&v9, &v4, 16);
        v6 = v1;
        v7 = v15;
        v8 = v16;
        v17 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v10, &v6);
        if (v17)
            goto LABEL_482553;
    }
    if ((char)a1.get_flag("sha256sha256sumsha384sha384sumsha512sha512sumb2sumb3sum(uutils coreutils) 0.0.30Compute and check message digests.{} --<digest> [OPTIONS]... [FILE]...binaryread in binary modecheckread hashsums from the FILEs and check themtagcreate a BSD-style checksumrea", 6))
    {
        uucore::features::checksum::detect_algo(&v1, "sha256sumsha384sha384sumsha512sha512sumb2sumb3sum(uutils coreutils) 0.0.30Compute and check message digests.{} --<digest> [OPTIONS]... [FILE]...binaryread in binary modecheckread hashsums from the FILEs and check themtagcreate a BSD-style checksumread in t", 9, 0, v14);
        v15 = v2;
        v16 = v3;
        if (!v1)
        {
            *((unsigned long long *)&a0[8]) = v15;
            *((unsigned long long *)&a0[16]) = v16;
            *((unsigned long long *)a0) = 0;
            core::ptr::drop_in_place<core::option::Option<uucore::features::checksum::HashAlgorithm>>(&v10);
            return a0;
        }
        memcpy(&v9, &v4, 16);
        v6 = v1;
        v7 = v15;
        v8 = v16;
        v17 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v10, &v6);
        if (!v17)
            goto LABEL_481fe7;
    }
    else
    {
LABEL_481fe7:
        if ((char)a1.get_flag("sha384sha384sumsha512sha512sumb2sumb3sum(uutils coreutils) 0.0.30Compute and check message digests.{} --<digest> [OPTIONS]... [FILE]...binaryread in binary modecheckread hashsums from the FILEs and check themtagcreate a BSD-style checksumread in text mode ", 6))
        {
            uucore::features::checksum::detect_algo(&v1, "sha384sumsha512sha512sumb2sumb3sum(uutils coreutils) 0.0.30Compute and check message digests.{} --<digest> [OPTIONS]... [FILE]...binaryread in binary modecheckread hashsums from the FILEs and check themtagcreate a BSD-style checksumread in text mode (defau", 9, 0, v14);
            v15 = v2;
            v16 = v3;
            if (!v1)
            {
                *((unsigned long long *)&a0[8]) = v15;
                *((unsigned long long *)&a0[16]) = v16;
                *((unsigned long long *)a0) = 0;
                core::ptr::drop_in_place<core::option::Option<uucore::features::checksum::HashAlgorithm>>(&v10);
                return a0;
            }
            memcpy(&v9, &v4, 16);
            v6 = v1;
            v7 = v15;
            v8 = v16;
            v17 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v10, &v6);
            if (!v17)
                goto LABEL_482062;
        }
        else
        {
LABEL_482062:
            if ((char)a1.get_flag("sha512sha512sumb2sumb3sum(uutils coreutils) 0.0.30Compute and check message digests.{} --<digest> [OPTIONS]... [FILE]...binaryread in binary modecheckread hashsums from the FILEs and check themtagcreate a BSD-style checksumread in text mode (default)quietd", 6))
            {
                uucore::features::checksum::detect_algo(&v1, "sha512sumb2sumb3sum(uutils coreutils) 0.0.30Compute and check message digests.{} --<digest> [OPTIONS]... [FILE]...binaryread in binary modecheckread hashsums from the FILEs and check themtagcreate a BSD-style checksumread in text mode (default)quietdon't p", 9, 0, v14);
                v15 = v2;
                v16 = v3;
                if (!v1)
                {
                    *((unsigned long long *)&a0[8]) = v15;
                    *((unsigned long long *)&a0[16]) = v16;
                    *((unsigned long long *)a0) = 0;
                    core::ptr::drop_in_place<core::option::Option<uucore::features::checksum::HashAlgorithm>>(&v10);
                    return a0;
                }
                memcpy(&v9, &v4, 16);
                v6 = v1;
                v7 = v15;
                v8 = v16;
                v17 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v10, &v6);
                if (!v17)
                    goto LABEL_4820dd;
            }
            else
            {
LABEL_4820dd:
                if ((char)a1.get_flag("b2sumb3sum(uutils coreutils) 0.0.30Compute and check message digests.{} --<digest> [OPTIONS]... [FILE]...binaryread in binary modecheckread hashsums from the FILEs and check themtagcreate a BSD-style checksumread in text mode (default)quietdon't print OK f", 5))
                {
                    uucore::features::checksum::detect_algo(&v1, "b2sumb3sum(uutils coreutils) 0.0.30Compute and check message digests.{} --<digest> [OPTIONS]... [FILE]...binaryread in binary modecheckread hashsums from the FILEs and check themtagcreate a BSD-style checksumread in text mode (default)quietdon't print OK f", 5, 0, v14);
                    v15 = v2;
                    v16 = v3;
                    if (!v1)
                    {
                        *((unsigned long long *)&a0[8]) = v15;
                        *((unsigned long long *)&a0[16]) = v16;
                        *((unsigned long long *)a0) = 0;
                        core::ptr::drop_in_place<core::option::Option<uucore::features::checksum::HashAlgorithm>>(&v10);
                        return a0;
                    }
                    memcpy(&v9, &v4, 16);
                    v6 = v1;
                    v7 = v15;
                    v8 = v16;
                    v17 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v10, &v6);
                    if (!v17)
                        goto LABEL_482158;
                }
                else
                {
LABEL_482158:
                    if ((char)a1.get_flag("b3sum(uutils coreutils) 0.0.30Compute and check message digests.{} --<digest> [OPTIONS]... [FILE]...binaryread in binary modecheckread hashsums from the FILEs and check themtagcreate a BSD-style checksumread in text mode (default)quietdon't print OK for ea", 5))
                    {
                        uucore::features::checksum::detect_algo(&v1, "b3sum(uutils coreutils) 0.0.30Compute and check message digests.{} --<digest> [OPTIONS]... [FILE]...binaryread in binary modecheckread hashsums from the FILEs and check themtagcreate a BSD-style checksumread in text mode (default)quietdon't print OK for ea", 5, 0, v14);
                        v15 = v2;
                        v16 = v3;
                        if (!v1)
                        {
                            *((unsigned long long *)&a0[8]) = v15;
                            *((unsigned long long *)&a0[16]) = v16;
                            *((unsigned long long *)a0) = 0;
                            core::ptr::drop_in_place<core::option::Option<uucore::features::checksum::HashAlgorithm>>(&v10);
                            return a0;
                        }
                        memcpy(&v9, &v4, 16);
                        v6 = v1;
                        v7 = v15;
                        v8 = v16;
                        v17 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v10, &v6);
                        if (!v17)
                            goto LABEL_4821d3;
                    }
                    else
                    {
LABEL_4821d3:
                        if ((char)a1.get_flag("sha3", 4))
                        {
                            v1.try_get_one(a1);
                            v18 = v1.unwrap();
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
                                *((unsigned long long *)&a0[8]) = v15;
                                *((unsigned long long *)&a0[16]) = v16;
                                *((unsigned long long *)a0) = 0;
                                core::ptr::drop_in_place<core::option::Option<uucore::features::checksum::HashAlgorithm>>(&v10);
                                return a0;
                            }
                            memcpy(&v9, &v4, 16);
                            v6 = v1;
                            v7 = v15;
                            v8 = v16;
                            v17 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v10, &v6);
                            if (!v17)
                                goto LABEL_482268;
                        }
                        else
                        {
LABEL_482268:
                            if ((char)a1.get_flag("sha3-224CommandsEALREADY0", 8))
                            {
                                v1 = "SHA3-224SHA3-256RgbColor        positionEL2NSYNCENOTCONNSHAKE256'; only ";
                                v2 = 8;
                                v3 = alloc::boxed::Box<T>::new();
                                v4 = &g_551670;
                                v5 = 224;
                                v17 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v10, &v1);
                                if (!v17)
                                    goto LABEL_4822cd;
                            }
                            else
                            {
LABEL_4822cd:
                                if ((char)a1.get_flag("sha3-256shake128deadlock", 8))
                                {
                                    v1 = "SHA3-256RgbColor        positionEL2NSYNCENOTCONNSHAKE256'; only ";
                                    v2 = 8;
                                    v3 = alloc::boxed::Box<T>::new();
                                    v4 = &g_5516a0;
                                    v5 = 0x100;
                                    v17 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v10, &v1);
                                    if (!v17)
                                        goto LABEL_482332;
                                }
                                else
                                {
LABEL_482332:
                                    if ((char)a1.get_flag("sha3-384SHA3_224SHA3_384@", 8))
                                    {
                                        v1 = "SHA3-384TrailingESTRPIPENotFoundTimedOut";
                                        v2 = 8;
                                        v3 = alloc::boxed::Box<T>::new();
                                        v4 = &g_5516d0;
                                        v5 = 384;
                                        v17 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v10, &v1);
                                        if (!v17)
                                            goto LABEL_482397;
                                    }
                                    else
                                    {
LABEL_482397:
                                        if ((char)a1.get_flag("sha3-512", 8))
                                        {
                                            v1 = "SHA3-512shake256\n       ";
                                            v2 = 8;
                                            v3 = alloc::boxed::Box<T>::new();
                                            v4 = &g_551700;
                                            v5 = 0x200;
                                            v17 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v10, &v1);
                                            if (!v17)
                                                goto LABEL_4823fc;
                                        }
                                        else
                                        {
LABEL_4823fc:
                                            if ((char)a1.get_flag("shake128deadlock", 8))
                                            {
                                                v1.try_get_one(a1);
                                                v21 = v1.unwrap();
                                                if (v21)
                                                {
                                                    v1 = "SHAKE128tagBLAKE2b ( (";
                                                    v2 = 8;
                                                    v3 = alloc::boxed::Box<T>::new();
                                                    v4 = &g_5517b8;
                                                    v5 = *(v21);
                                                    v17 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v10, &v1);
                                                    if (!v17)
                                                        goto LABEL_482483;
                                                }
                                                else
                                                {
                                                    v17 = 6.new();
                                                }
                                            }
                                            else
                                            {
LABEL_482483:
                                                if ((char)a1.get_flag("shake256\n       ", 8))
                                                {
                                                    v1.try_get_one(a1);
                                                    v22 = v1.unwrap();
                                                    if (v22)
                                                    {
                                                        v0 = "SHAKE256'; only ";
                                                        v2 = 8;
                                                        v3 = alloc::boxed::Box<T>::new();
                                                        v4 = &g_5517e8;
                                                        v5 = *(v22);
                                                        v17 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v10, &v0);
                                                        if (!v17)
                                                            goto LABEL_482506;
                                                    }
                                                    else
                                                    {
                                                        v17 = 7.new();
                                                    }
                                                }
                                                else
                                                {
LABEL_482506:
                                                    if (v10)
                                                    {
                                                        *((int128_t *)&a0[24]) = *((int128_t *)&v12);
                                                        a0[8] = v11;
                                                        *((void* *)a0) = v10;
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
LABEL_482553:
    *((unsigned long long *)&a0[8]) = v17;
    *((unsigned long long **)&a0[16]) = &g_551750;
    *((unsigned long long *)a0) = 0;
    core::ptr::drop_in_place<core::option::Option<uucore::features::checksum::HashAlgorithm>>(&v10);
    return a0;
}
