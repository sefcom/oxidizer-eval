long long fish::env::var::EnvVar::new_from_name_vec(void* a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax

    v0 = v2;
    a0.new_vec(a3, a1.flags_for(a2));
    return a0;
}
