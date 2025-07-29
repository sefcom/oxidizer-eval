long long uu_hashsum::uu_app_opt_bits(unsigned long long a0, void* a1)
{
    char v0;  // [bp-0x7e8]
    char v1;  // [bp-0x7d0]
    char v2;  // [bp-0x550]
    char v3;  // [bp-0x2d0]

    memcpy(&v3, a1, 712);
    v1.new("bitsBOLDBlue", 4);
    v2.long(&v1, "bitsBOLDBlue", 4);
    uucore::mods::locale::get_message(&v0, "hashsum-help-bitshashsum-help-sha1hashsum-help-sha224hashsum-help-sha256hashsum-help-sha384hashsum-help-sha512hashsum-help-sha3hashsum-help-sha3-224hashsum-help-sha3-256hashsum-help-sha3-384hashsum-help-sha3-512hashsum-help-shake128hashsum-help-shake256has", 17);
    v1.help(&v2, &v0);
    v2.value_name(&v1, &g_434bc8);
    v1.value_parser(&v2);
    return a0.arg(&v3, &v1);
}
