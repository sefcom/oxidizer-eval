long long fish::tokenizer::tok_is_string_character(unsigned int a0, unsigned int a1)
{
    unsigned long long v0;  // [bp-0x128]
    unsigned long v2;  // rax

    if (a0 <= 62)
    {
        v2 = a0;
        v0 = 6341068279632635393;
        if (!(*((char *)&v0 + ((v2 & 63) >> 3)) >> ((char)v2 & 63 & 7) & 1))
        {
            if (v2 != 38)
                goto LABEL_141d694;
            if ((fish::future_feature_flags::test(3) & a1 != 0x110000))
                return (unsigned long long)fish::tokenizer::tok_is_string_character::{{closure}}();
        }
    }
    else
    {
LABEL_141d694:
        if (a0 != 124)
            return v2 & 0xffffffffffffff00 | 1;
    }
    return 0;
}
