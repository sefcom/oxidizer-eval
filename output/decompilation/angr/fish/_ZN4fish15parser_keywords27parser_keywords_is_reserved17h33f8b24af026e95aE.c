long long fish::parser_keywords::parser_keywords_is_reserved(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax
    struct_0 *v3;  // rax

    v0 = v2;
    v3 = fish::parser_keywords::reserved_word(a0, a1);
    if (!v3)
        return 0;
    return v3->field_10;
}
