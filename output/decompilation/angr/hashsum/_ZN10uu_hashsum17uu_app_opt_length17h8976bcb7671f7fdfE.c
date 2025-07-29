long long uu_hashsum::uu_app_opt_length(unsigned long long a0, void* a1)
{
    unsigned long long v0;  // [bp-0x7f0]
    unsigned long long v1;  // [bp-0x7e8]
    unsigned long long v2;  // [bp-0x7e0]
    char v3;  // [bp-0x7d8]
    char v4;  // [bp-0x558]
    char v5;  // [bp-0x2d8]

    memcpy(&v5, a1, 712);
    v4.new("lengthhashsum-help-lengthhashsum-help-no-nameshashsum-help-bitshashsum-help-sha1hashsum-help-sha224hashsum-help-sha256hashsum-help-sha384hashsum-help-sha512hashsum-help-sha3hashsum-help-sha3-224hashsum-help-sha3-256hashsum-help-sha3-384hashsum-help-sha3-51", 6);
    v3.long(&v4, "lengthhashsum-help-lengthhashsum-help-no-nameshashsum-help-bitshashsum-help-sha1hashsum-help-sha224hashsum-help-sha256hashsum-help-sha384hashsum-help-sha512hashsum-help-sha3hashsum-help-sha3-224hashsum-help-sha3-256hashsum-help-sha3-384hashsum-help-sha3-51", 6);
    v0 = 4;
    v1 = ::0x4ceef0::alloc::boxed::Box<T>::new();
    v2 = &g_5f9380;
    v4.value_parser(&v3, &v0);
    v3.short(&v4, 108);
    uucore::mods::locale::get_message(&v0, "hashsum-help-lengthhashsum-help-no-nameshashsum-help-bitshashsum-help-sha1hashsum-help-sha224hashsum-help-sha256hashsum-help-sha384hashsum-help-sha512hashsum-help-sha3hashsum-help-sha3-224hashsum-help-sha3-256hashsum-help-sha3-384hashsum-help-sha3-512hashs", 19);
    v4.help(&v3, &v0);
    v3.overrides_with(&v4, "lengthhashsum-help-lengthhashsum-help-no-nameshashsum-help-bitshashsum-help-sha1hashsum-help-sha224hashsum-help-sha256hashsum-help-sha384hashsum-help-sha512hashsum-help-sha3hashsum-help-sha3-224hashsum-help-sha3-256hashsum-help-sha3-384hashsum-help-sha3-51", 6);
    v4.action(&v3, 0);
    return a0.arg(&v5, &v4);
}
