char fish::proc::Job::has_external_proc(unsigned long long a0[5])
{
    unsigned long v0;  // [bp-0x10]
    unsigned long long v1;  // [bp-0x8]

    v0 = a0[3];
    v1 = a0[4] * 224 + a0[3];
    return v0.any();
}
