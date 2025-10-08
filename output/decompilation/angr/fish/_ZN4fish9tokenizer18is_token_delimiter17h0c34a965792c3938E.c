char fish::tokenizer::is_token_delimiter(unsigned int a0, unsigned int a1)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long v2;  // rax

    if (a0 == 40)
        return 1;
    v0 = v2 & 0xffffffffffffff00 | 1;
    return (char)fish::tokenizer::tok_is_string_character(a0, a1) ^ 1;
}
