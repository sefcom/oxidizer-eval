long long fish::text_face::TextStyling::difference_prefer_empty(unsigned long a0, unsigned long a1)
{
    unsigned long long v1;  // rax

    v1 = 21474836481 & a1 ^ 1;
    if (!((char)a0 & 1))
        v1 = 0x500000000;
    return v1 | (!((unsigned int)a1 & 0x10000) & (char)((unsigned int)a0 >> 16)) * 0x10000 | (!((unsigned int)a1 & &g_1000000) & (char)((unsigned int)a0 >> 24)) * &g_1000000 | (!((unsigned int)a1 & 0x100) & (char)((unsigned int)a0 >> 8)) * 0x100;
}
