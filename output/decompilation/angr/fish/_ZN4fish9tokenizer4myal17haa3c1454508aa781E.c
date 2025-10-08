long long fish::tokenizer::myal(unsigned int a0)
{
    unsigned long long v1;  // rax

    v1 = "a".contains(a0);
    if (!(char)v1)
        return "A".contains(a0);
    return v1 & 0xffffffffffffff00 | 1;
}
