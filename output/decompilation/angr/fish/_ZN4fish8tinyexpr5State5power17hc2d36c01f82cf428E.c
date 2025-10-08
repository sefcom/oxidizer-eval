double fish::tinyexpr::State::power(long long a0)
{
    uint128_t v0;  // [bp-0x18]
    int v2;  // xmm0
    unsigned int v3;  // eax

    if (a0->field_0 == 11)
    {
        v0 = 0x3ff0000000000000;
        do
        {
            v3 = a0->field_8;
            if (!v3)
                continue;
            if (v3 != 1)
                break;
            v2 = v0 ^ 0x80000000000000008000000000000000;
            *((void*)&v0) = v2;
            a0.next_token();
        } while (a0->field_0 == 11);
    }
    else
    {
        v0 = 0x3ff0000000000000;
    }
    a0.base();
    return (unsigned long long)(MulV(v2, (unsigned long long)v0));
}
