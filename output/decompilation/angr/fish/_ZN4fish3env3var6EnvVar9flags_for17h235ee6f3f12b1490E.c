char fish::env::var::EnvVar::flags_for(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax

    v0 = v2;
    return (char)fish::env::var::is_read_only(a0, a1) * 2;
}
