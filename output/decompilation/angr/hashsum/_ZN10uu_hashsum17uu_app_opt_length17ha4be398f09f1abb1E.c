long long uu_hashsum::uu_app_opt_length(unsigned long long a0, void* a1)
{
    unsigned long long v0;  // [bp-0x7f8]
    unsigned long long v1;  // [bp-0x7f0]
    unsigned long long v2;  // [bp-0x7e8]
    char v3;  // [bp-0x7e0]
    char v4;  // [bp-0x560]
    char v5;  // [bp-0x2e0]

    memcpy(&v5, a1, 712);
    v4.new("lengthdigest length in bits; must not exceed the max for the blake2 algorithm and must be a multiple of 8Omits filenames in the output (option not present in GNU/Coreutils)set the size of the output (only for SHAKE)work with MD5work with SHA1work with SHA3", 6);
    v3.long(&v4, "lengthdigest length in bits; must not exceed the max for the blake2 algorithm and must be a multiple of 8Omits filenames in the output (option not present in GNU/Coreutils)set the size of the output (only for SHAKE)work with MD5work with SHA1work with SHA3", 6);
    v0 = 4;
    v1 = core::num::<impl core::str::traits::FromStr for usize>::from_str.new();
    v2 = &g_5515d8;
    v4.value_parser(&v3, &v0);
    v3.short(&v4, 108);
    v4.help(&v3, "digest length in bits; must not exceed the max for the blake2 algorithm and must be a multiple of 8Omits filenames in the output (option not present in GNU/Coreutils)set the size of the output (only for SHAKE)work with MD5work with SHA1work with SHA3work w", 99);
    v3.overrides_with(&v4);
    v4.action(&v3, 0);
    return a0.arg(&v5, &v4);
}
