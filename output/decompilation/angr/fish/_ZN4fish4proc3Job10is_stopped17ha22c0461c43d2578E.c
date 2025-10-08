long long fish::proc::Job::is_stopped(void* a0)
{
    unsigned long long v0;  // [bp-0x38]
    unsigned long long v2;  // rax
    unsigned long v3;  // r14
    unsigned long long v4;  // r15
    unsigned long long v5;  // rbx
    char v6;  // bl
    unsigned long long v7;  // r15

    v0 = v2;
    if ((long long)a0[32])
    {
        v3 = (long long)a0[24];
        v4 = (long long)a0[32] * 224;
        v5 = 0;
        while (true)
        {
            v7 = v4;
            if (!v3.is_completed() && !v3.is_stopped())
                break;
            v6 |= v3.is_stopped();
            v5 = v5 & 0xffffffffffffff00 | v6;
            v3 += 224;
            v4 = v7 - 224;
            if (v7 == 224)
                return ((unsigned int)v5 & 0xffffff00 | v6) & 0xffffff00 | v6 & 1;
        }
    }
    return v6 & 1;
}
