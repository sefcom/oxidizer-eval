long long starship::modules::rust::RustToolingEnvironmentInfo::get_env_toolchain_override(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax
    unsigned long long v3[2];  // rcx

    v0 = v2;
    v3 = a0 + 128.get_or_try_init(a1, a0);
    if ((char)(((0 ^ v3[0]) & (0 ^ -(v3[0]))) >> 63))
        return 0;
    return v3[1];
}
