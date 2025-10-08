long long bat::output::OutputType::try_pager(void* a0, char a1, char a2, unsigned long long a3, unsigned long long a4)
{
    int v0;  // [bp-0x1d8], Other Possible Types: char
    unsigned long long v1;  // [bp-0x1d8]
    char v2;  // [bp-0x1d0], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x1c8]
    unsigned long long v4;  // [bp-0x1c0]
    unsigned int v5;  // [bp-0x1b8]
    unsigned long v6;  // [bp-0x1b4]
    unsigned int v7;  // [bp-0x1ac]
    unsigned long v8;  // [bp-0x1a8]
    unsigned long long v9;  // [bp-0x1a0]
    unsigned long long v10;  // [bp-0x198]
    unsigned long long v11;  // [bp-0x190]
    int v12;  // [bp-0x188]
    int v13;  // [bp-0x178]
    char v14;  // [bp-0x170]
    int v15;  // [bp-0x168]
    unsigned long long v16;  // [bp-0x158]
    unsigned int v17;  // [bp-0x14c]
    int v18;  // [bp-0x148]
    unsigned long long v19;  // [bp-0x138]
    char v20;  // [bp-0x128], Other Possible Types: unsigned long long
    unsigned long long v21;  // [bp-0x120]
    char v22;  // [bp-0x118], Other Possible Types: unsigned long long
    char v23;  // [bp-0x110]
    char v24;  // [sp-0x108]
    char v25;  // [bp-0x100]
    char v26;  // [bp-0xf8]
    int v27;  // [bp-0x48], Other Possible Types: char
    char v28;  // [bp-0x38]
    unsigned long v30;  // rax
    int v31;  // xmm0
    int v32;  // xmm1
    unsigned int v33;  // eax
    int v34;  // xmm0
    int v35;  // xmm1
    int v36;  // xmm0
    int v37;  // xmm1
    unsigned long long v38;  // rax
    char v39;  // bpl
    unsigned long v40;  // rdx
    unsigned long long v41;  // rsi
    char v42;  // dl
    int v43;  // xmm0

    bat::pager::get_pager(&v20, a3, a4);
    if (v20 == 9223372036854775809)
        return a0.from("Could not parse pager command.-R-F-S-K--no-initLESSCHARSETUTF-8Could not open stdin for pagersrc/output.rs", 30);
    memcpy(&v27, &v23, 16);
    memcpy(&v28, &v25, 16);
    if (v20 == 0x8000000000000000)
    {
        v20.stdout();
        v30 = *((long long *)&v26);
        *((unsigned long *)&a0[56]) = v30;
        v31 = *((int128_t *)&v20);
        v32 = *((int128_t *)&v22);
        *((int128_t *)&a0[40]) = *((int128_t *)&v24);
        a0[24] = v32;
        a0[8] = v31;
        *((char *)a0) = 13;
        return v30;
    }
    v9 = v20;
    v10 = v21;
    v11 = v22;
    *((int128_t *)&v13) = *((int128_t *)&v28);
    v12 = v27;
    v33 = (char)(&v13)[9];
    switch (v33)
    {
    case 0:
        *((char *)a0) = 10;
        break;
    case 4:
        v20.new();
        *((long long *)&a0[56]) = *((long long *)&v26);
        v34 = *((int128_t *)&v20);
        v35 = *((int128_t *)&v22);
        *((int128_t *)&a0[40]) = *((int128_t *)&v24);
        a0[24] = v35;
        a0[8] = v34;
        *((char *)a0) = 13;
        break;
    default:
        grep_cli::decompress::resolve_binary(&v0, &v9);
        if (v1 == 1)
        {
            v20.stdout();
            *((long long *)&a0[56]) = *((long long *)&v26);
            v36 = *((int128_t *)&v20);
            v37 = *((int128_t *)&v22);
            *((int128_t *)&a0[40]) = *((int128_t *)&v24);
            a0[24] = v37;
            a0[8] = v36;
            *((char *)a0) = 13;
            core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,grep_cli::process::CommandError>>(&v0);
        }
        else
        {
            v16 = v4;
            *((int128_t *)&v15) = *((int128_t *)&v2);
            v20.new(&(char)v15);
            v19 = (long long)v13;
            v18 = v12;
            if ((char)(&v13)[9] == 1)
            {
                if (v14 != 2 && v19)
                {
                    v3 = (long long)v13;
                    v0 = v12;
                    v20.args(&v0);
                }
                else
                {
                    v20.arg("-R-F-S-K--no-initLESSCHARSETUTF-8Could not open stdin for pagersrc/output.rs", 2);
                    if (!a1)
                        v20.arg("-F-S-K--no-initLESSCHARSETUTF-8Could not open stdin for pagersrc/output.rs", 2);
                    if (a2 != 2 && (a2 & 1))
                        v20.arg("-S-K--no-initLESSCHARSETUTF-8Could not open stdin for pagersrc/output.rs", 2);
                    v20.arg("-K--no-initLESSCHARSETUTF-8Could not open stdin for pagersrc/output.rs", 2);
                    v38 = bat::less::retrieve_less_version(&v9);
                    v39 = 1;
                    if (!((530 <= v40 | (char)v38) & v38 != 2))
                        v20.arg("--no-initLESSCHARSETUTF-8Could not open stdin for pagersrc/output.rs", 9);
                }
                v20.env();
            }
            else
            {
                v3 = (long long)v13;
                v0 = v12;
                v20.args(&v0);
            }
            v20.stdin(v41, v42);
            (char)v15.spawn(&v20);
            if ((int)v15 == 1)
            {
                bat::output::OutputType::try_pager::{{closure}}(&v0, (long long)(&v15)[8]);
            }
            else
            {
                memcpy(&v3, &(char)v15, 16);
                v5 = v17;
                v1 = 3;
                v2 = (long long)(&v15)[4];
            }
            *((unsigned long *)&a0[56]) = v8;
            v43 = *((int128_t *)&v3);
            *((unsigned int *)&a0[40]) = v5;
            *((unsigned long *)&a0[44]) = v6;
            *((unsigned int *)&a0[52]) = v7;
            a0[24] = v43;
            *((unsigned long long *)&a0[8]) = v1;
            *((unsigned long long *)&a0[16]) = v2;
            *((char *)a0) = 13;
            if (v39)
                core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v18);
            core::ptr::drop_in_place<std::process::Command>(&v20);
            return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&v9);
        }
    }
    return (unsigned long long)core::ptr::drop_in_place<bat::pager::Pager>(&v9);
}
