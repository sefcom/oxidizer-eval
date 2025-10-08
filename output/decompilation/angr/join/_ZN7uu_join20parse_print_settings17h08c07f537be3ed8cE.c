long long uu_join::parse_print_settings(unsigned long a0, unsigned long long a1)
{
    void* v0;  // [bp-0x1c8]
    unsigned long long v1;  // [bp-0x1c0]
    int v2;  // [bp-0x1b8]
    unsigned long long v3;  // [bp-0x1b8]
    unsigned long long v4;  // [bp-0x1b0]
    int v5;  // [bp-0x1a8], Other Possible Types: unsigned long long
    void* v6;  // [bp-0x1a0]
    int v7;  // [bp-0x198]
    void* v8;  // [bp-0x190]
    int v9;  // [bp-0x188]
    void* v10;  // [bp-0x180]
    int v11;  // [bp-0x178]
    unsigned long long v12;  // [bp-0x178]
    unsigned long long v13;  // [bp-0x170]
    int v14;  // [bp-0x168], Other Possible Types: unsigned long long
    void* v15;  // [bp-0x160]
    int v16;  // [bp-0x158]
    void* v17;  // [bp-0x150]
    int v18;  // [bp-0x148]
    void* v19;  // [bp-0x140]
    unsigned long long v21;  // [bp-0x130]
    unsigned long long v22;  // [bp-0x128]
    int v23;  // [bp-0x120]
    int v24;  // [bp-0x110]
    int v25;  // [bp-0x100]
    int v26;  // [bp-0xf0], Other Possible Types: char
    int v27;  // [bp-0xe0]
    int v28;  // [bp-0xd0]
    int v29;  // [bp-0xc0]
    char v30;  // [bp-0xb0]
    char v31;  // [bp-0x70]
    int v33;  // xmm0
    unsigned long long v34[3];  // rax
    void* v35;  // rbp
    void* v36;  // r13

    v30.try_get_many(a1, "vaj12itoenocheck-ordercheck-orderheaderz(uutils coreutils) 0.0.30For each pair of input lines with identical join fields, write a line to\nstandard output. The default join field is the first, delimited by blanks.\n\nWhen `FILE1` or `FILE2` (not both) is `-`,");
    v26.unwrap("vaj12itoenocheck-ordercheck-orderheaderz(uutils coreutils) 0.0.30For each pair of input lines with identical join fields, write a line to\nstandard output. The default join field is the first, delimited by blanks.\n\nWhen `FILE1` or `FILE2` (not both) is `-`,", &v30);
    v1 = *((long long *)&v26);
    if (*((long long *)&v26))
    {
        v9 = v29;
        v7 = v28;
        v5 = v27;
        v2 = v26;
    }
    else
    {
        v3 = core::ops::function::FnOnce::call_once;
        v4 = "/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.38/src/parser/matches/matched_arg.rsinternal error: entered unreachable code: `to_long` always has the flag specified/home/34r7hm4n/.cargo/registry/src/index.crates.io-194";
        v5 = "/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.38/src/parser/matches/matched_arg.rsinternal error: entered unreachable code: `to_long` always has the flag specified/home/34r7hm4n/.cargo/registry/src/index.crates.io-194";
        v6 = 0;
        v8 = 0;
        v10 = 0;
    }
    v30.try_get_many(a1, "aj12itoenocheck-ordercheck-orderheaderz(uutils coreutils) 0.0.30For each pair of input lines with identical join fields, write a line to\nstandard output. The default join field is the first, delimited by blanks.\n\nWhen `FILE1` or `FILE2` (not both) is `-`, ");
    (char)v21.unwrap("aj12itoenocheck-ordercheck-orderheaderz(uutils coreutils) 0.0.30For each pair of input lines with identical join fields, write a line to\nstandard output. The default join field is the first, delimited by blanks.\n\nWhen `FILE1` or `FILE2` (not both) is `-`, ", &v30);
    if (v21)
    {
        v33 = *((int128_t *)&v21);
        v18 = v25;
        v16 = v24;
        v14 = v23;
        v11 = v33;
    }
    else
    {
        v12 = core::ops::function::FnOnce::call_once;
        v13 = "/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.38/src/parser/matches/matched_arg.rsinternal error: entered unreachable code: `to_long` always has the flag specified/home/34r7hm4n/.cargo/registry/src/index.crates.io-194";
        v14 = "/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.38/src/parser/matches/matched_arg.rsinternal error: entered unreachable code: `to_long` always has the flag specified/home/34r7hm4n/.cargo/registry/src/index.crates.io-194";
        v15 = 0;
        v17 = 0;
        v19 = 0;
    }
    v30.chain(&(char)v3, &(char)v11);
    if (core::iter::adapters::chain::and_then_or_clear(&v30).or_else(&v31))
    {
        v35 = 0;
        v36 = 0;
        do
        {
            uu_join::parse_file_number(&(char)v21, v34[1], v34[2]);
            if (v21)
            {
                *((unsigned long long *)v0) = v21;
                *((unsigned long long *)&v0[8]) = v22;
                return v21;
            }
            v36 = ((char)v22 ? 1 : v36 & 4294967295);
            v35 = (!(char)v22 ? 1 : v35 & 4294967295);
            v34 = core::iter::adapters::chain::and_then_or_clear(&v30).or_else(&v31);
        } while (v34);
    }
    else
    {
        v36 = 0;
        v35 = 0;
    }
    *((char *)&v0[8]) = !v1;
    *((char *)&v0[9]) = (char)v35;
    *((char *)&v0[10]) = (char)v36;
    *((unsigned long long *)v0) = 0;
    return a0;
}
