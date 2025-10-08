long long uu_hashsum::uu_app_b3sum_opts(unsigned long long a0, void* a1)
{
    char v0;  // [bp-0x7e8]
    char v1;  // [bp-0x568]
    char v2;  // [bp-0x2a0]

    memcpy(&v1, a1, 712);
    v0.new("no-namesextern \"ENOTUNIQELIBEXECENOTSOCKsha3-512", 8);
    v2.long(&v0, "no-namesextern \"ENOTUNIQELIBEXECENOTSOCKsha3-512", 8);
    v0.help(&v2, "Omits filenames in the output (option not present in GNU/Coreutils)set the size of the output (only for SHAKE)work with MD5work with SHA1work with SHA3work with SHA3-224work with SHA3-256work with SHA3-384work with SHA3-512work with SHAKE128 using BITS for", 67);
    v2.action(&v0, 2);
    return a0.arg(&v1, &v2);
}
