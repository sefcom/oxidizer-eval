long long fish::tinyexpr::State::next_token(unsigned long long a0[8])
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v1;  // [bp-0x20]
    char v2;  // [bp-0x18]
    unsigned long long v4;  // rax
    unsigned long long v5;  // rcx

    do
    {
        fish::tinyexpr::State::get_token();
        v4 = v1;
        if (v1 == 13)
        {
            v4 = 5;
            break;
        }
        if ((char)__CFADD__(v0, a0[7]))
            core::panicking::panic_const::panic_const_add_overflow(&g_14e38d8); /* do not return */
        v5 = *((long long *)&v2);
        a0[7] = v0 + a0[7];
    } while ((unsigned int)v1 == 12);
    a0[0] = v4;
    a0[1] = v5;
    return v4;
}
