long long fish::proc::ProcStatus::is_success(unsigned int a0[2])
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax

    if (a0[0] == 1)
    {
        v2 = a0[1] & 127;
        if (((char)a0[1] & 127))
            return 0;
    }
    v0 = v2;
    v3 = a0.exit_code();
    return v3 & 0xffffffffffffff00 | !(v3 & 255);
}
