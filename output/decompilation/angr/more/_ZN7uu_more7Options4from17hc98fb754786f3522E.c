double uu_more::Options::from::hc98fb754786f3522(long long a0, long long a1)
{
    char v0;  // [sp-0x91]
    unsigned int v1;  // [sp-0x90]
    unsigned int v2;  // [sp-0x8c]
    unsigned long long v3;  // [sp-0x88]
    unsigned short *v4;  // [sp-0x80]
    int v5;  // [bp-0x78], Other Possible Types: char
    unsigned long long v6;  // [sp-0x68]
    char v7;  // [bp-0x48], Other Possible Types: unsigned long long
    char v8;  // [bp-0x38]
    unsigned long long v9;  // [sp-0x30]
    unsigned long long v10;  // [sp-0x28]
    unsigned long long v11;  // [sp-0x20]
    unsigned long long v12;  // [sp-0x18]
    unsigned long long v13;  // [sp-0x10]
    unsigned long v15;  // r15
    unsigned long v16;  // r14
    unsigned long v17;  // r13
    unsigned long v18;  // r12
    unsigned long v19;  // rbx
    unsigned short *v20;  // rax
    unsigned short *v21;  // rax
    unsigned short *v22;  // r12
    unsigned long long *v23;  // r13
    unsigned long long v24;  // rax
    int v25;  // xmm0
    unsigned short v29;  // si
    unsigned short v30;  // di
    unsigned short v31;  // cx
    unsigned long long v33;  // r8
    unsigned long long *v34;  // rdx
    unsigned long long *v35;  // r13
    int v36;  // ymm0

    v13 = v15;
    v12 = v16;
    v11 = v17;
    v10 = v18;
    v9 = v19;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5faaeded7704dcb7(&v5, a1, "linesnumberfrom-linepatternclean-printprint-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...0.0.28Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and display textSqueeze", 5);
    v20 = clap_builder::parser::error::MatchesError::unwrap::h2202a89f344cb1a0("linesnumberfrom-linepatternclean-printprint-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...0.0.28Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and display textSqueeze", 5, &v5);
    v4 = v20;
    if (v20)
        v20 = *(v20);
    v2 = (unsigned int)v20;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5faaeded7704dcb7(&v5, a1, "numberfrom-linepatternclean-printprint-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...0.0.28Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and display textSqueeze mult", 6);
    v21 = clap_builder::parser::error::MatchesError::unwrap::h2202a89f344cb1a0("numberfrom-linepatternclean-printprint-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...0.0.28Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and display textSqueeze mult", 6, &v5);
    v22 = v21;
    if (v22)
        v21 = *(v22);
    v1 = (unsigned int)v21;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hc3ec2a4b53b285b0(&v5, a1, "from-linepatternclean-printprint-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...0.0.28Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and display textSqueeze multiple b", 9);
    v23 = clap_builder::parser::error::MatchesError::unwrap::hf31638e1afc90cd2("from-linepatternclean-printprint-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...0.0.28Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and display textSqueeze multiple b", 9, &v5);
    if (v23)
        v3 = *(v23);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0776bc345d7a7a82(&v5, a1, "patternclean-printprint-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...0.0.28Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and display textSqueeze multiple blank line", 7);
    v24 = clap_builder::parser::error::MatchesError::unwrap::h64788ee122c687a0("patternclean-printprint-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...0.0.28Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and display textSqueeze multiple blank line", 7, &v5);
    if (!v24)
        v7 = 0x8000000000000000;
    else
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v7, v24);
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "clean-printprint-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...0.0.28Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and display textSqueeze multiple blank lines into ", 11);
    v6 = *((long long *)&v8);
    v25 = *((int128_t *)&v7);
    v5 = v25;
    v29 = v1;
    v30 = v2;
    if (!v4)
        v31 = v29 & v22;
    else
        v31 = v30;
    v33 = v3;
    v34 = v33 - 1;
    if (2 > v33)
        v34 = 0;
    if (!v23)
        v35 = v23;
    else
        v35 = v34;
    a0->field_24 = v0;
    a0->field_18 = v35;
    a0->field_20 = v31;
    *((int *)&a0->field_22) = (!v4 ? v29 : v30) + 1;
    *((void*)&a0->field_0) = v5;
    a0->field_10 = v6;
    a0->field_25 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "print-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...0.0.28Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and display textSqueeze multiple blank lines into oneplainDis", 10);
    a0->field_26 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "silentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...0.0.28Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and display textSqueeze multiple blank lines into oneplainDisplay file ", 6);
    a0->field_27 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "squeezeDisplay the contents of a text file{} [OPTIONS] FILE...0.0.28Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and display textSqueeze multiple blank lines into oneplainDisplay file beginn", 7);
    return (unsigned long long)((v36 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v25) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v5);
}
