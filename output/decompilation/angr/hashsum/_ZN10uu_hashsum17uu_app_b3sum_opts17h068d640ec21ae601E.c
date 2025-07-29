long long uu_hashsum::uu_app_b3sum_opts(unsigned long long a0, void* a1)
{
    char v0;  // [bp-0x7f0]
    char v1;  // [bp-0x7d8]
    char v2;  // [bp-0x558]
    char v3;  // [bp-0x2d8]

    memcpy(&v3, a1, 712);
    v2.new("no-names", 8);
    v1.long(&v2, "no-names", 8);
    uucore::mods::locale::get_message(&v0, "hashsum-help-no-nameshashsum-help-bitshashsum-help-sha1hashsum-help-sha224hashsum-help-sha256hashsum-help-sha384hashsum-help-sha512hashsum-help-sha3hashsum-help-sha3-224hashsum-help-sha3-256hashsum-help-sha3-384hashsum-help-sha3-512hashsum-help-shake128has", 21);
    v2.help(&v1, &v0);
    v1.action(&v2, 2);
    return a0.arg(&v3, &v1);
}
