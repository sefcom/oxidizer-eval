long long uu_hashsum::uu_app_opt_bits(unsigned long long a0, void* a1)
{
    char v0;  // [bp-0x7e8]
    char v1;  // [bp-0x568]
    char v2;  // [bp-0x2e8]

    memcpy(&v2, a1, 712);
    v0.new("bitsBOLDBlue", 4);
    v1.long(&v0, "bitsBOLDBlue", 4);
    v0.help(&v1, "set the size of the output (only for SHAKE)work with MD5work with SHA1work with SHA3work with SHA3-224work with SHA3-256work with SHA3-384work with SHA3-512work with SHAKE128 using BITS for the output sizework with SHAKE256 using BITS for the output sizesh", 43);
    v1.value_name(&v0, &g_411dcc);
    v0.value_parser(&v1);
    return a0.arg(&v2, &v0);
}
