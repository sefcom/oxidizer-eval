long long uu_fmt::FmtOptions::from_matches::h20b5fd4b4f758238(struct_1 *a0, struct_3 *a1)
{
    char v0;  // [sp-0x18e]
    char v1;  // [sp-0x18d]
    char v2;  // [sp-0x18c]
    char v3;  // [sp-0x18b]
    char v4;  // [sp-0x18a]
    char v5;  // [sp-0x189]
    unsigned int v27;  // [sp-0xd0]
    unsigned int v28;  // [sp-0xcc]
    struct struct_0 **v49;  // rbp
    unsigned long long v50;  // r13
    unsigned long long v51;  // rax
    struct struct_0 **v52;  // rcx
    struct_0 *v53;  // rsi
    struct_0 *v55;  // rdi

    v5 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(a1, "tagged-paragraph", 16);
    v2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(a1, "crown-marginuniform-spacingquicksplit-onlyexact-prefixskip-prefixprefixinvalid goal: ", 12);
    v4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(a1, "preserve-headersDOUBLE_UNDERLINE", 16);
    v3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(a1, "uniform-spacingquicksplit-onlyexact-prefixskip-prefixprefixinvalid goal: ", 15);
    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(a1, "quicksplit-onlyexact-prefixskip-prefixprefixinvalid goal: ", 5);
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(a1, "split-onlyexact-prefixskip-prefixprefixinvalid goal: ", 10);
    v49 = a1->field_8;
    v50 = a1->field_10;
    if (!v50)
        v28 = 0;
    v51 = v50 * 16;
    v52 = 0;
    do
    {
        if (*((long long *)(v49 + v52 + 8)) == 12 && !((unsigned int)v53->field_3 ^ 2020173413) && !(*((long long *)&v53->field_0) ^ 8246140895622166629))
        {
            v28 = v52 | -0x100 | 1;
            goto LABEL_482ef1;
        }
    } while ((v52 += 16, v51 != v52));
    v28 = 0;
LABEL_482ef1:
    do
    {
        if (v49[1] == 11 && !(*((long long *)((char *)&v55->field_0 + 3)) ^ 8676578743003655536) && !(*((long long *)&v55->field_0) ^ 7310028485637532531))
            v27 = v51 | -0x100 | 1;
    } while ((v52 += 16, v51 != v52));
}
