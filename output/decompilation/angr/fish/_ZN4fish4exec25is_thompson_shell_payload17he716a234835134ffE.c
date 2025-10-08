long long fish::exec::is_thompson_shell_payload(char *a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    char *v4;  // rax
    unsigned long long v5;  // rcx
    unsigned int v6;  // esi
    unsigned long long v7;  // rdx

    v0 = v2;
    v3 = ::0x12ad210::core::slice::memchr::memchr(0, a0, a1);
    if (v3 != 1)
    {
        return v3 & 0xffffffffffffff00 | 1;
    }
    else if (a1)
    {
        v4 = 0;
        v5 = 0;
        while (true)
        {
            v6 = *((char *)(a0 + v4));
            v7 = v7 & 0xffffffffffffff00 | 1;
            if ((v6 - 97 & 255) >= 26 && v6 != 36 && v6 != 96)
            {
                v7 = v5 & 4294967295;
                if ((v6 == 10 & (char)v5))
                    return v4 & 0xffffffffffffff00 | 1;
            }
            v4 += 1;
            v5 = v7 & 4294967295;
            if (a1 == v4)
                return 0;
        }
    }
    else
    {
        return 0;
    }
}
