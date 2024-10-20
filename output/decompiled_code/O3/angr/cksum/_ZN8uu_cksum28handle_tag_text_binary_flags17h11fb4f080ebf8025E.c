long long uu_cksum::handle_tag_text_binary_flags::h11fb4f080ebf8025(struct_2 *a0, unsigned long long a1)
{
    char v0;  // [bp-0x68]
    char v1;  // [bp-0x60]
    char v2;  // [bp-0x58]
    char v3;  // [bp-0x50]
    char v6;  // bpl
    char v7;  // al
    unsigned long long v8;  // r14
    unsigned long long v9;  // r12
    unsigned long long v10;  // rdx
    unsigned long long v11;  // rcx
    void* v12;  // rdi
    void* v13;  // rax
    unsigned long long v14;  // rdi
    void* v15;  // rsi
    void* v16;  // r8
    unsigned short *v17;  // r8
    unsigned long long v18;  // r9
    struct_0 *v20;  // r10
    struct_1 *v22;  // r11
    char v23;  // dl

    v6 = (char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(a1, "untagged0", 8) ^ 1 | (char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(a1, "tagbinary0.0.27{} [OPTIONS] [FILE]...algorithm", 3);
    v7 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(a1, "binary0.0.27{} [OPTIONS] [FILE]...algorithm", 6);
    std::env::args_os::h433b833009c91492(&v3);
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h0a794add71a4ec09(&v0, &v3);
    v8 = *((long long *)&v1);
    v9 = *((long long *)&v2);
    if (!v9)
    {
        v14 = 0;
        v15 = 0;
        v13 = 0;
        v11 = 0;
        v16 = 0;
    }
    v10 = v9 * 24;
    v11 = 0;
    v12 = 0;
    v13 = 0;
    do
    {
        v17 = *((long long *)(8 + v8 + (char *)v12));
        v18 = *((long long *)(16 + v8 + (char *)v12));
        if (v18 == 2)
        {
            if (!(*(v17) == 25133))
                continue;
            goto LABEL_560484;
        }
        else if (v18 == 8 && *((long long *)&v17) == 8751164152776633645)
        {
LABEL_560484:
            v11 = 1;
            break;
        }
    } while ((v13 += 1, v12 += 24, v10 != v12));
    v14 = 0;
    v15 = 0;
    do
    {
        if (*((long long *)(v8 + 0 + 16)) == 5 && !(v20->field_4 ^ 103) && !(v20->field_0 ^ 1635003693))
        {
            v14 = 1;
            break;
        }
    } while ((v13 += 1, v12 += 24, v10 != v12));
    v16 = 0;
    do
    {
        if (*((long long *)(v8 + 0 + 16)) == 10 && !(v22->field_8 ^ 25701) && !(v22->field_0 ^ 7451031261205048621))
            v23 = v10 | -0x100 | 1;
    } while ((v13 += 1, v12 += 24, v10 != v12));
}
