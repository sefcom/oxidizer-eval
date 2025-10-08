long long fish::screen::try_sequence(char *a0, unsigned long a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0x38]
    unsigned long long v2;  // rax
    char *v3;  // r13
    unsigned int v4;  // eax

    v0 = v2;
    if (a1)
    {
        v3 = 0;
        while (true)
        {
            v4 = a2.char_at(a3, v3);
            if (v4 != *((char *)(a0 + v3)))
                break;
            v3 += 1;
            if (a1 == v3)
                return a1;
        }
    }
    return 0;
}
