long long fish::parser_keywords::parser_keywords_is_subcommand(unsigned long long a0)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rdx
    struct_0 *v4;  // rax

    v0 = v2;
    v4 = fish::parser_keywords::reserved_word(a0.as_ref(), v3);
    if (!v4)
        return 0;
    return v4->field_11;
}
