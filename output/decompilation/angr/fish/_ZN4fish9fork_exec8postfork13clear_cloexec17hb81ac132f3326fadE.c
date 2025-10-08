long long fish::fork_exec::postfork::clear_cloexec(unsigned int a0)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    unsigned int v3;  // eax

    v0 = v2;
    v3 = fcntl(a0, 1);
    if (v3 < 0)
    {
        return 4294967295;
    }
    else if (v3 != (v3 & 2147483646))
    {
        return fcntl(a0, 2);
    }
    else
    {
        return 0;
    }
}
