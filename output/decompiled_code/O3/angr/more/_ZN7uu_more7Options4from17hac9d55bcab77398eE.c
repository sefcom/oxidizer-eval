long long uu_more::Options::from::hac9d55bcab77398e(struct_0 *a0, unsigned long long a1)
{
    char v0;  // [sp-0x112]
    char v1;  // [sp-0x111]
    unsigned long v2;  // [sp-0x110], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0x108]
    unsigned int v4;  // [sp-0xfc]
    unsigned long v5;  // [sp-0xf8], Other Possible Types: unsigned long long
    unsigned long v6;  // [sp-0xf0], Other Possible Types: unsigned long long
    unsigned long v7;  // [sp-0xe8], Other Possible Types: unsigned long long
    unsigned long long v8;  // [sp-0xe0]
    void* v9;  // [sp-0xd8]
    unsigned long v10;  // [sp-0xc8], Other Possible Types: unsigned long long
    unsigned long long v11;  // [sp-0xc0]
    unsigned long long v12;  // [sp-0xb8]
    unsigned long long v13;  // [sp-0xb0]
    char v14;  // [bp-0xa8]
    char v15;  // [bp-0xa0]
    char v16;  // [bp-0x98]
    char v17;  // [bp-0x88]
    unsigned long long v18;  // [sp-0x80]
    int v19;  // [sp-0x78]
    int v20;  // [sp-0x68]
    unsigned long long v21;  // [sp-0x58]
    unsigned long long v22;  // [sp-0x50]
    unsigned long long v23;  // [sp-0x48]
    unsigned long long v24;  // [sp-0x40]
    unsigned short *v25;  // [sp-0x38]
    unsigned long long v26;  // [sp-0x30]
    unsigned long long v27;  // [sp-0x28]
    unsigned long long v28;  // [sp-0x20]
    unsigned long long v29;  // [sp-0x18]
    unsigned long long v30;  // [sp-0x10]
    unsigned long v32;  // r15
    unsigned long v33;  // r14
    unsigned long v34;  // r13
    unsigned long v35;  // r12
    unsigned long v36;  // rbx
    unsigned short *v37;  // r13
    unsigned long long v38;  // r12
    unsigned int v39;  // eax
    unsigned short *v40;  // rbp
    unsigned long long *v41;  // r13
    unsigned short v45;  // si
    unsigned short v46;  // cx
    unsigned long long v48;  // rdi
    unsigned long long *v49;  // rdx
    unsigned long long *v50;  // r13

    v30 = v32;
    v29 = v33;
    v28 = v34;
    v27 = v35;
    v26 = v36;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h2b1c9af6cf80b9cc(&v14, a1, "linesnumberfrom-linepatternclean-printprint-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...0.0.27", 5);
    v2 = "linesnumberfrom-linepatternclean-printprint-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...0.0.27";
    v3 = 5;
    if (*((int *)&v14) != 2)
    {
        v21 = *((long long *)&v17);
        *((int128_t *)&v20) = *((int128_t *)&v16);
        *((int128_t *)&v19) = *((int128_t *)&v14);
        v10 = &v2;
        v11 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h3137f0bf4e40f87e;
        v12 = &v19;
        v13 = _$LT$clap_builder..parser..error..MatchesError$u20$as$u20$core..fmt..Display$GT$::fmt::hfe760c2f953bc24d;
        v5 = &anon.d58bd02a723bd021606085005bc52729.7.llvm.16558445346262642515;
        v6 = 2;
        v9 = 0;
        v7 = &v10;
        v8 = 2;
        core::panicking::panic_fmt::he12d0d7468628bb4(&v5); /* do not return */
    }
    v37 = *((long long *)&v15);
    if (v37)
        v38 = *(v37);
    v39 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h2b1c9af6cf80b9cc(&v14, a1, "numberfrom-linepatternclean-printprint-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...0.0.27", 6);
    v2 = "numberfrom-linepatternclean-printprint-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...0.0.27";
    v3 = 6;
    if (*((int *)&v14) == 2)
    {
        v40 = *((long long *)&v15);
        if (v40)
            v39 = *(v40);
        v4 = v39;
        v25 = v37;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h80b980a139dde380(&v14, a1, "from-linepatternclean-printprint-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...0.0.27", 9);
        v2 = "from-linepatternclean-printprint-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...0.0.27";
        v3 = 9;
        if (*((int *)&v14) == 2)
        {
            v41 = *((long long *)&v15);
            if (v41)
                v23 = *(v41);
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h41f0d98f63350b06(&v14, a1, "patternclean-printprint-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...0.0.27", 7);
            v2 = "patternclean-printprint-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...0.0.27";
            v3 = 7;
            if (*((int *)&v14) == 2)
            {
                if (!*((long long *)&v15))
                    v5 = 0x8000000000000000;
                else
                    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v5, *((long long *)&v15));
                v1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(a1, "clean-printprint-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...0.0.27", 11);
                v18 = v5;
                v22 = v6;
                v24 = v7;
                v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(a1, "print-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...0.0.27", 10);
                v45 = v4;
                if (v25)
                    v46 = -0x100 | (v38 & 65535 & 65535);
                else
                    v46 = v45 & v40;
                v48 = v23;
                v49 = v48 - 1;
                if (2 > v48)
                    v49 = 0;
                a0->field_24 = v1;
                a0->field_18 = v50;
                a0->field_20 = v46;
                *((int *)&a0->field_22) = (!v25 ? v45 : (unsigned short)v38) + 1;
                a0->field_0 = v18;
                a0->field_8 = v22;
                a0->field_10 = v24;
                a0->field_25 = v0;
                a0->field_26 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(a1, "silentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...0.0.27", 6);
                a0->field_27 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(a1, "squeezeDisplay the contents of a text file{} [OPTIONS] FILE...0.0.27", 7);
                return a0;
            }
        }
    }
}
