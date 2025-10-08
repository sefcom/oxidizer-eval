long long fish::proc::Job::entitled_to_terminal(unsigned long long a0[5])
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]

    if (!a0.group().is_foreground())
        return 0;
    v0 = a0[3];
    v1 = a0[4] * 224 + a0[3];
    return v0.any();
}
