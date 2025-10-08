char uu_tail::args::Settings::has_only_stdin(unsigned long long a0[6])
{
    unsigned long v0;  // [bp-0x10]
    unsigned long long v1;  // [bp-0x8]

    v0 = a0[4];
    v1 = a0[5] * 48 + a0[4];
    return v0.all();
}
