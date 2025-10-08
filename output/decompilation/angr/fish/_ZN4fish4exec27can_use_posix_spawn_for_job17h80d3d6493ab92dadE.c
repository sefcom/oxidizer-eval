long long fish::exec::can_use_posix_spawn_for_job(unsigned long long a0, unsigned int a1[2], unsigned long a2)
{
    unsigned int v1[2];  // r14
    unsigned int v2[2];  // r14
    unsigned int v3[2];  // r14
    unsigned long long v5;  // rax

    v1 = a1;
    if (!fish::env_dispatch::use_posix_spawn())
        return 0;
    if (a2)
    {
        v2 = v1;
        do
        {
            v3 = v2;
            if (v3[0] == v3[1])
                return 0;
            v2 = v3 + 1;
        } while (v2 != &v1[a2]);
    }
    v5 = a0.group().wants_terminal();
    return v5 & 0xffffffffffffff00 | (char)v5 ^ 1;
}
