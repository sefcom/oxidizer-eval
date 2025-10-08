long long fish::tokenizer::is_path_component_character(unsigned int a0)
{
    unsigned long v0;  // [bp-0x8]
    unsigned int v1;  // [bp-0x4]
    unsigned long v3;  // rax
    unsigned long long v4;  // rax

    v0 = v3;
    v1 = a0;
    if (!(char)fish::tokenizer::tok_is_string_character(a0, 0x110000))
        return 0;
    v4 = v1.slice_contains("/", 10);
    return v4 & 0xffffffffffffff00 | (char)v4 ^ 1;
}
