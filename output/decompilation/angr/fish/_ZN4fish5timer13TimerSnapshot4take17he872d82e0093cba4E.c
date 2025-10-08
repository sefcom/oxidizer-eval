long long fish::timer::TimerSnapshot::take(struct_0 *a0)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned int v4;  // edx

    v0 = v2;
    fish::nix::getrusage(a0, 0);
    fish::nix::getrusage(&a0->padding_0[144], 1);
    v3 = std::time::Instant::now();
    a0->field_120 = v3;
    a0->field_128 = v4;
    return v3;
}
