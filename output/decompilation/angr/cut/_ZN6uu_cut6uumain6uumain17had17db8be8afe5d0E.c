long long uu_cut::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x4b9]
    char v1;  // [bp-0x4b8], Other Possible Types: unsigned long long
    int v2;  // [bp-0x4b0], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x4a8]
    unsigned long long v4;  // [bp-0x4a0]
    unsigned long long v5;  // [bp-0x498]
    char v6;  // [bp-0x490]
    char v7;  // [bp-0x488]
    int v8;  // [bp-0x480]
    unsigned long long v9;  // [bp-0x470]
    int v10;  // [bp-0x468], Other Possible Types: char
    unsigned long long v11;  // [bp-0x468]
    unsigned long long v12;  // [bp-0x460]
    int v13;  // [bp-0x460]
    int v14;  // [bp-0x458], Other Possible Types: char, unsigned long long
    unsigned long long v15;  // [bp-0x458]
    unsigned long long v16;  // [bp-0x450]
    int v17;  // [bp-0x448], Other Possible Types: char
    int v18;  // [bp-0x438], Other Possible Types: char
    int v19;  // [bp-0x428], Other Possible Types: char
    unsigned long long v20;  // [bp-0x410]
    unsigned long long v21;  // [bp-0x408]
    unsigned long long v22;  // [bp-0x400]
    unsigned long long v23;  // [bp-0x3f8]
    char v24;  // [bp-0x3f0]
    char v25;  // [bp-0x3e0]
    unsigned long long v26;  // [bp-0x3d0]
    unsigned long long v27;  // [bp-0x3c8]
    int v28;  // [bp-0x3c0], Other Possible Types: char
    unsigned long long v29;  // [bp-0x3b0]
    int v30;  // [bp-0x3a8], Other Possible Types: char
    unsigned long long v31;  // [bp-0x3a0]
    unsigned long long v32;  // [bp-0x398]
    int v33;  // [bp-0x388]
    unsigned long long v34;  // [bp-0x378]
    void* v35;  // [bp-0x370]
    char v36;  // [bp-0x368]
    void* v37;  // [bp-0x350]
    unsigned long long v38;  // [bp-0x348]
    int v39;  // [bp-0x340]
    unsigned long long v40;  // [bp-0x330]
    unsigned long long v41;  // [bp-0x328]
    unsigned long long v42;  // [bp-0x320]
    unsigned long long v43;  // [bp-0x318]
    int v44;  // [bp-0x310]
    unsigned long long v45;  // [bp-0x300]
    int v46;  // [sp-0x2f8], Other Possible Types: char
    int v47;  // [bp-0x2f8]
    int v48;  // [bp-0x2f8]
    unsigned long long v49;  // [bp-0x2f0]
    int v50;  // [sp-0x2e8], Other Possible Types: unsigned long long
    int v51;  // [bp-0x2e8]
    int v52;  // [bp-0x2e0], Other Possible Types: char, unsigned int
    int v53;  // [sp-0x2d8], Other Possible Types: char
    unsigned long long v54;  // [bp-0x2d0]
    int v55;  // [bp-0x2c8], Other Possible Types: unsigned long long
    void* v56;  // [bp-0x2c0]
    unsigned long long v57;  // [bp-0x2b8]
    unsigned long long v60;  // rdx
    unsigned long long v61;  // rdi
    unsigned int v62;  // ebp
    char v64;  // r14b
    int v65;  // xmm0
    int v66;  // xmm1
    unsigned long long v67;  // r15
    unsigned long long v68[3];  // r12
    unsigned long long v69[3];  // r13
    unsigned long long v70[3];  // rax
    char v71;  // al
    int v72;  // xmm0
    unsigned long long v73;  // rax
    unsigned long long v74;  // rcx
    uint128_t v75;  // xmm0
    void* v76;  // rdx
    void* v77;  // rbx
    int v78;  // xmm0
    int v79;  // xmm1

    v36.collect(a0.map(a1), v60);
    uu_cut::uu_app(&(char)v46);
    v10.try_get_matches_from(&(char)v46, &v36);
    v61 = v12;
    if ((char)(((0 ^ v11) & (0 ^ -(v11))) >> 63))
        return v23.from();
    v26 = *((long long *)&v18);
    memcpy(&v25, &v17, 16);
    memcpy(&v24, &v14, 16);
    v22 = v11;
    v23 = v12;
    v62 = v22.get_flag("complementonly-delimitedzero-terminatedbytescharactersfieldsdelimiterwhitespace-delimited-d=--delimiter==USimpleErrormessage/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsError flushing stdout: ", 10);
    v0 = v22.get_flag("only-delimitedzero-terminatedbytescharactersfieldsdelimiterwhitespace-delimited-d=--delimiter==USimpleErrormessage/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsError flushing stdout: ", 14);
    uu_cut::get_delimiters(&(char)v46, &v22);
    if (*((int *)&v46) == 1)
    {
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v22);
        return v49;
    }
    v27 = v50;
    v20 = *((long long *)&v52);
    v21 = *((long long *)&v53);
    v64 = ((char)v22.get_flag("zero-terminatedbytescharactersfieldsdelimiterwhitespace-delimited-d=--delimiter==USimpleErrormessage/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsError flushing stdout: ", 15) ? 0 : 10);
    v30.indices_of(&v22, "bytescharactersfieldsdelimiterwhitespace-delimited-d=--delimiter==USimpleErrormessage/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsError flushing stdout: ", 5);
    v1.indices_of(&v22, "charactersfieldsdelimiterwhitespace-delimited-d=--delimiter==USimpleErrormessage/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsError flushing stdout: ", 10);
    v10.indices_of(&v22, "fieldsdelimiterwhitespace-delimited-d=--delimiter==USimpleErrormessage/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsError flushing stdout: ", 6);
    v50 = v32;
    v65 = *((int128_t *)&v30);
    v46 = v65;
    *((int128_t *)&v52) = *((int128_t *)&v1);
    v54 = v3;
    v66 = *((int128_t *)&v11);
    v55 = v66;
    v57 = v14;
    v39 = v65;
    v44 = v66;
    v45 = v57;
    v40 = v50;
    v41 = (long long)v52;
    v42 = (long long)(&v52)[8];
    v43 = v54;
    v37 = 0;
    v38 = 3;
    v67 = v37.fold();
    (char)v46.try_get_one(&v22, "bytescharactersfieldsdelimiterwhitespace-delimited-d=--delimiter==USimpleErrormessage/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsError flushing stdout: ", 5);
    v68 = "bytescharactersfieldsdelimiterwhitespace-delimited-d=--delimiter==USimpleErrormessage/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsError flushing stdout: ".unwrap(5, &(char)v46);
    (char)v46.try_get_one(&v22, "charactersfieldsdelimiterwhitespace-delimited-d=--delimiter==USimpleErrormessage/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsError flushing stdout: ", 10);
    v69 = "charactersfieldsdelimiterwhitespace-delimited-d=--delimiter==USimpleErrormessage/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsError flushing stdout: ".unwrap(10, &(char)v46);
    (char)v46.try_get_one(&v22, "fieldsdelimiterwhitespace-delimited-d=--delimiter==USimpleErrormessage/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsError flushing stdout: ", 6);
    v70 = "fieldsdelimiterwhitespace-delimited-d=--delimiter==USimpleErrormessage/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsError flushing stdout: ".unwrap(6, &(char)v46);
    if (v67)
    {
        if (v67 != 1)
        {
            (char)v46.to_vec("invalid usage: expects no more than one of --fields (-f), --chars (-c) or --bytes (-b)invalid input: The '--delimiter' ('-d') option only usable if printing a sequence of fieldsinvalid input: The '-w' option only usable if printing a sequence of fieldsinva", 86);
            goto LABEL_46012b;
        }
        if (v68)
        {
            if (v69 || v70)
                goto LABEL_460112;
            uu_cut::list_to_ranges(&(char)v46, v68[1], v68[2], v62);
            if ((int)v46 == 1)
                goto LABEL_460073;
            v9 = (long long)v52;
            *((int128_t *)&v8) = (int128_t)(&v46)[8];
            v2 = v20;
            v3 = v21;
            v6 = 2;
            v7 = v64;
            v1 = 0;
            if (!(0))
                goto LABEL_460097;
        }
        else if (v69)
        {
            if (v70)
                goto LABEL_460112;
            uu_cut::list_to_ranges(&(char)v46, v69[1], v69[2], v62);
            if ((int)v46 == 1)
                goto LABEL_460073;
            v9 = (long long)v52;
            *((int128_t *)&v8) = (int128_t)(&v46)[8];
            v2 = v20;
            v3 = v21;
            v6 = 2;
            v7 = v64;
            v1 = 1;
            if (!(0))
                goto LABEL_460097;
        }
        else
        {
            if (!v70)
                goto LABEL_460112;
            uu_cut::list_to_ranges(&(char)v46, v70[1], v70[2], v62);
            if (*((int *)&v46) == 1)
            {
LABEL_460073:
                v4 = (long long)v52;
                *((int128_t *)&v2) = (int128_t)(&v46)[8];
                v1 = 3;
                if (!(1))
                    goto LABEL_460097;
            }
            else
            {
                v9 = (long long)v52;
                *((int128_t *)&v8) = (int128_t)(&v46)[8];
                v2 = v20;
                v3 = v21;
                v4 = v49;
                v5 = v27;
                v6 = v0;
                v7 = v64;
                v1 = 2;
LABEL_460097:
                if (v1)
                {
                    if (v1 != 1)
                        goto LABEL_4604a9;
                    if ((char)v22.contains_id("delimiterwhitespace-delimited-d=--delimiter==USimpleErrormessage/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsError flushing stdout: ", 9))
                        goto LABEL_460386;
                    if ((char)v22.get_flag("whitespace-delimited-d=--delimiter==USimpleErrormessage/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsError flushing stdout: ", 20))
                        goto LABEL_460425;
                    v71 = v22.get_flag("only-delimitedzero-terminatedbytescharactersfieldsdelimiterwhitespace-delimited-d=--delimiter==USimpleErrormessage/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsError flushing stdout: ", 14);
                    goto LABEL_46045a;
                }
                if ((char)v22.contains_id("delimiterwhitespace-delimited-d=--delimiter==USimpleErrormessage/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsError flushing stdout: ", 9))
                {
LABEL_460386:
                    (char)v46.to_vec("invalid input: The '--delimiter' ('-d') option only usable if printing a sequence of fieldsinvalid input: The '-w' option only usable if printing a sequence of fieldsinvalid input: The '--only-delimited' ('-s') option only usable if printing a sequence of ", 91);
                    goto LABEL_460477;
                }
                if ((char)v22.get_flag("whitespace-delimited-d=--delimiter==USimpleErrormessage/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsError flushing stdout: ", 20))
                {
LABEL_460425:
                    (char)v46.to_vec("invalid input: The '-w' option only usable if printing a sequence of fieldsinvalid input: The '--only-delimited' ('-s') option only usable if printing a sequence of fieldscomplementonly-delimitedzero-terminatedbytescharactersfieldsdelimiterwhitespace-delim", 75);
                    goto LABEL_460477;
                }
                else
                {
                    v71 = v22.get_flag("only-delimitedzero-terminatedbytescharactersfieldsdelimiterwhitespace-delimited-d=--delimiter==USimpleErrormessage/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsError flushing stdout: ", 14);
LABEL_46045a:
                    if (v71)
                    {
                        (char)v46.to_vec("invalid input: The '--only-delimited' ('-s') option only usable if printing a sequence of fieldscomplementonly-delimitedzero-terminatedbytescharactersfieldsdelimiterwhitespace-delimited-d=--delimiter==USimpleErrormessage/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsError flushing stdout: ", 96);
LABEL_460477:
                        v16 = v50;
                        *((int128_t *)&v13) = (int128_t)v46;
                        v11 = 3;
                        core::ptr::drop_in_place<uu_cut::Mode>(&v1);
                        goto LABEL_46019d;
                    }
                    else
                    {
LABEL_4604a9:
                        memcpy(&v19, &v8, 16);
                        v72 = *((int128_t *)&v1);
                        v66 = *((int128_t *)&v3);
                        memcpy(&v18, &v7, 16);
                        memcpy(&v17, &v5, 16);
                        v14 = v66;
                        v10 = v72;
                        goto LABEL_46019d;
                    }
                }
            }
        }
    }
    else
    {
LABEL_460112:
        (char)v46.to_vec("invalid usage: expects one of --fields (-f), --chars (-c) or --bytes (-b)invalid usage: expects no more than one of --fields (-f), --chars (-c) or --bytes (-b)invalid input: The '--delimiter' ('-d') option only usable if printing a sequence of fieldsinvali", 73);
LABEL_46012b:
        v4 = v50;
        memcpy(&v1, &(char)v46, 16);
        v1 = 3;
    }
    memcpy(&v19, &v8, 16);
    v66 = *((int128_t *)&v7);
    v18 = v66;
    memcpy(&v17, &v5, 16);
    v15 = v3;
    v16 = v4;
    v11 = v1;
    v12 = v2;
LABEL_46019d:
    (char)v46.try_get_many(&v22);
    v30.unwrap(&(char)v46);
    v73 = *((long long *)&v30);
    if (*((long long *)&v30))
    {
        v74 = v31;
        v66 = *((int128_t *)&v32);
        v75 = v33;
        v76 = v35;
    }
    else
    {
        v75 = 0;
        v74 = "/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.38/src/parser/matches/matched_arg.rsinternal error: entered unreachable code: `to_long` always has the flag specified/home/34r7hm4n/.cargo/registry/src/index.crates.io-194";
        v73 = core::ops::function::FnOnce::call_once;
        v76 = 0;
    }
    *((unsigned long long *)&v47) = v73;
    v49 = v74;
    v51 = v66;
    *((uint128_t *)&v53) = v75;
    v55 = v34;
    v56 = v76;
    v28.collect(&(unsigned long long)v47);
    if ((int)v11 == 3)
    {
        v50 = v16;
        *((int128_t *)&v47) = (int128_t)v13;
        v52 = 1;
        v77 = (unsigned long long)v47.new();
        core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v28);
    }
    else
    {
        memcpy(&v57, &v19, 16);
        v78 = *((int128_t *)&v11);
        v79 = (int128_t)(&v13)[8];
        v55 = v18;
        v53 = v17;
        v50 = v79;
        v48 = v78;
        v32 = v29;
        v30 = v28;
        uu_cut::cut_files(&v30, &(unsigned long long)v47);
        core::ptr::drop_in_place<uu_cut::Mode>(&v11);
        v77 = 0;
    }
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v22);
    return v77;
}
