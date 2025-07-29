long long uu_hashsum::uu_app_common(unsigned long long a0)
{
    char v0;  // [bp-0xad0]
    unsigned long long v1;  // [bp-0xac8]
    unsigned long long v2;  // [bp-0xac0]
    char v3;  // [bp-0xab8]
    char v4;  // [bp-0x838]
    unsigned long long v5;  // [bp-0x57c]
    unsigned int v6;  // [bp-0x574]
    char v7;  // [bp-0x570]
    unsigned long v8;  // [bp-0x2b4]
    unsigned int v9;  // [bp-0x2ac]
    char v10;  // [bp-0x2a8], Other Possible Types: unsigned long long
    unsigned long long v11;  // [bp-0x2a0]
    unsigned long long v12;  // [bp-0x298]
    unsigned long long v13;  // [bp-0x290]
    unsigned long long v16;  // rdx

    v4.new(uucore::util_name(), v16);
    v7.version(&v4, "(uutils coreutils) 0.1.0hashsum-abouthashsum-usagebinaryhashsum-help-binary-othercheckhashsum-help-checktaghashsum-help-text-otherquiethashsum-help-quietstatushashsum-help-statusstricthashsum-help-strictignore-missinghashsum-help-ignore-missinghashsum-help", 24);
    uucore::mods::locale::get_message(&v3, "hashsum-abouthashsum-usagebinaryhashsum-help-binary-othercheckhashsum-help-checktaghashsum-help-text-otherquiethashsum-help-quietstatushashsum-help-statusstricthashsum-help-strictignore-missinghashsum-help-ignore-missinghashsum-help-warnhashsum-help-zerole", 13);
    v4.about(&v7, &v3);
    uucore::mods::locale::get_message(&v0, "hashsum-usagebinaryhashsum-help-binary-othercheckhashsum-help-checktaghashsum-help-text-otherquiethashsum-help-quietstatushashsum-help-statusstricthashsum-help-strictignore-missinghashsum-help-ignore-missinghashsum-help-warnhashsum-help-zerolengthhashsum-h", 13);
    uucore::format_usage(&v3, v1, v2);
    v7.override_usage(&v4, &v3);
    memcpy(&v4, &v7, 700);
    v5 = 584115552392 | v8;
    v6 = v9;
    v7.new("binaryhashsum-help-binary-othercheckhashsum-help-checktaghashsum-help-text-otherquiethashsum-help-quietstatushashsum-help-statusstricthashsum-help-strictignore-missinghashsum-help-ignore-missinghashsum-help-warnhashsum-help-zerolengthhashsum-help-lengthhas", 6);
    v3.short(&v7, 98);
    v7.long(&v3, "binaryhashsum-help-binary-othercheckhashsum-help-checktaghashsum-help-text-otherquiethashsum-help-quietstatushashsum-help-statusstricthashsum-help-strictignore-missinghashsum-help-ignore-missinghashsum-help-warnhashsum-help-zerolengthhashsum-help-lengthhas", 6);
    uucore::mods::locale::get_message(&v10, "hashsum-help-binary-othercheckhashsum-help-checktaghashsum-help-text-otherquiethashsum-help-quietstatushashsum-help-statusstricthashsum-help-strictignore-missinghashsum-help-ignore-missinghashsum-help-warnhashsum-help-zerolengthhashsum-help-lengthhashsum-h", 25);
    v3.help(&v7, &v10);
    v10.action(&v3, 2);
    v7.arg(&v4, &v10);
    v4.new("checkhashsum-help-checktaghashsum-help-text-otherquiethashsum-help-quietstatushashsum-help-statusstricthashsum-help-strictignore-missinghashsum-help-ignore-missinghashsum-help-warnhashsum-help-zerolengthhashsum-help-lengthhashsum-help-no-nameshashsum-help-", 5);
    v3.short(&v4, 99);
    v4.long(&v3, "checkhashsum-help-checktaghashsum-help-text-otherquiethashsum-help-quietstatushashsum-help-statusstricthashsum-help-strictignore-missinghashsum-help-ignore-missinghashsum-help-warnhashsum-help-zerolengthhashsum-help-lengthhashsum-help-no-nameshashsum-help-", 5);
    uucore::mods::locale::get_message(&v10, "hashsum-help-checktaghashsum-help-text-otherquiethashsum-help-quietstatushashsum-help-statusstricthashsum-help-strictignore-missinghashsum-help-ignore-missinghashsum-help-warnhashsum-help-zerolengthhashsum-help-lengthhashsum-help-no-nameshashsum-help-bitsh", 18);
    v3.help(&v4, &v10);
    v4.action(&v3, 2);
    v3.conflicts_with(&v4, "taghashsum-help-text-otherquiethashsum-help-quietstatushashsum-help-statusstricthashsum-help-strictignore-missinghashsum-help-ignore-missinghashsum-help-warnhashsum-help-zerolengthhashsum-help-lengthhashsum-help-no-nameshashsum-help-bitshashsum-help-sha1ha", 3);
    v4.arg(&v7, &v3);
    v7.new("taghashsum-help-text-otherquiethashsum-help-quietstatushashsum-help-statusstricthashsum-help-strictignore-missinghashsum-help-ignore-missinghashsum-help-warnhashsum-help-zerolengthhashsum-help-lengthhashsum-help-no-nameshashsum-help-bitshashsum-help-sha1ha", 3);
    v3.long(&v7, "taghashsum-help-text-otherquiethashsum-help-quietstatushashsum-help-statusstricthashsum-help-strictignore-missinghashsum-help-ignore-missinghashsum-help-warnhashsum-help-zerolengthhashsum-help-lengthhashsum-help-no-nameshashsum-help-bitshashsum-help-sha1ha", 3);
    uucore::mods::locale::get_message(&v10, "hashsum-help-tag", 16);
    v7.help(&v3, &v10);
    v3.action(&v7, 2);
    v10.conflicts_with(&v3, "textSomedumb", 4);
    v7.arg(&v4, &v10);
    v4.new("textSomedumb", 4);
    v3.short(&v4, 116);
    v4.long(&v3, "textSomedumb", 4);
    uucore::mods::locale::get_message(&v10, "hashsum-help-text-otherquiethashsum-help-quietstatushashsum-help-statusstricthashsum-help-strictignore-missinghashsum-help-ignore-missinghashsum-help-warnhashsum-help-zerolengthhashsum-help-lengthhashsum-help-no-nameshashsum-help-bitshashsum-help-sha1hashs", 23);
    v3.help(&v4, &v10);
    v4.conflicts_with(&v3, "binaryhashsum-help-binary-othercheckhashsum-help-checktaghashsum-help-text-otherquiethashsum-help-quietstatushashsum-help-statusstricthashsum-help-strictignore-missinghashsum-help-ignore-missinghashsum-help-warnhashsum-help-zerolengthhashsum-help-lengthhas", 6);
    v3.action(&v4, 2);
    v4.arg(&v7, &v3);
    v7.new("quiethashsum-help-quietstatushashsum-help-statusstricthashsum-help-strictignore-missinghashsum-help-ignore-missinghashsum-help-warnhashsum-help-zerolengthhashsum-help-lengthhashsum-help-no-nameshashsum-help-bitshashsum-help-sha1hashsum-help-sha224hashsum-h", 5);
    v3.short(&v7, 113);
    v7.long(&v3, "quiethashsum-help-quietstatushashsum-help-statusstricthashsum-help-strictignore-missinghashsum-help-ignore-missinghashsum-help-warnhashsum-help-zerolengthhashsum-help-lengthhashsum-help-no-nameshashsum-help-bitshashsum-help-sha1hashsum-help-sha224hashsum-h", 5);
    uucore::mods::locale::get_message(&v10, "hashsum-help-quietstatushashsum-help-statusstricthashsum-help-strictignore-missinghashsum-help-ignore-missinghashsum-help-warnhashsum-help-zerolengthhashsum-help-lengthhashsum-help-no-nameshashsum-help-bitshashsum-help-sha1hashsum-help-sha224hashsum-help-s", 18);
    v3.help(&v7, &v10);
    v7.action(&v3, 2);
    v10 = "statushashsum-help-statusstricthashsum-help-strictignore-missinghashsum-help-ignore-missinghashsum-help-warnhashsum-help-zerolengthhashsum-help-lengthhashsum-help-no-nameshashsum-help-bitshashsum-help-sha1hashsum-help-sha224hashsum-help-sha256hashsum-help-";
    v11 = 6;
    v12 = "warnZeromany";
    v13 = 4;
    v3.overrides_with_all(&v7, &v10);
    v7.arg(&v4, &v3);
    v4.new("statushashsum-help-statusstricthashsum-help-strictignore-missinghashsum-help-ignore-missinghashsum-help-warnhashsum-help-zerolengthhashsum-help-lengthhashsum-help-no-nameshashsum-help-bitshashsum-help-sha1hashsum-help-sha224hashsum-help-sha256hashsum-help-", 6);
    v3.short(&v4, 115);
    v4.long(&v3, "statushashsum-help-statusstricthashsum-help-strictignore-missinghashsum-help-ignore-missinghashsum-help-warnhashsum-help-zerolengthhashsum-help-lengthhashsum-help-no-nameshashsum-help-bitshashsum-help-sha1hashsum-help-sha224hashsum-help-sha256hashsum-help-", 6);
    uucore::mods::locale::get_message(&v10, "hashsum-help-statusstricthashsum-help-strictignore-missinghashsum-help-ignore-missinghashsum-help-warnhashsum-help-zerolengthhashsum-help-lengthhashsum-help-no-nameshashsum-help-bitshashsum-help-sha1hashsum-help-sha224hashsum-help-sha256hashsum-help-sha384", 19);
    v3.help(&v4, &v10);
    v4.action(&v3, 2);
    v10 = "quiethashsum-help-quietstatushashsum-help-statusstricthashsum-help-strictignore-missinghashsum-help-ignore-missinghashsum-help-warnhashsum-help-zerolengthhashsum-help-lengthhashsum-help-no-nameshashsum-help-bitshashsum-help-sha1hashsum-help-sha224hashsum-h";
    v11 = 5;
    v12 = "warnZeromany";
    v13 = 4;
    v3.overrides_with_all(&v4, &v10);
    v4.arg(&v7, &v3);
    v7.new("stricthashsum-help-strictignore-missinghashsum-help-ignore-missinghashsum-help-warnhashsum-help-zerolengthhashsum-help-lengthhashsum-help-no-nameshashsum-help-bitshashsum-help-sha1hashsum-help-sha224hashsum-help-sha256hashsum-help-sha384hashsum-help-sha512", 6);
    v3.long(&v7, "stricthashsum-help-strictignore-missinghashsum-help-ignore-missinghashsum-help-warnhashsum-help-zerolengthhashsum-help-lengthhashsum-help-no-nameshashsum-help-bitshashsum-help-sha1hashsum-help-sha224hashsum-help-sha256hashsum-help-sha384hashsum-help-sha512", 6);
    uucore::mods::locale::get_message(&v10, "hashsum-help-strictignore-missinghashsum-help-ignore-missinghashsum-help-warnhashsum-help-zerolengthhashsum-help-lengthhashsum-help-no-nameshashsum-help-bitshashsum-help-sha1hashsum-help-sha224hashsum-help-sha256hashsum-help-sha384hashsum-help-sha512hashsu", 19);
    v7.help(&v3, &v10);
    v3.action(&v7, 2);
    v7.arg(&v4, &v3);
    v4.new("ignore-missinghashsum-help-ignore-missinghashsum-help-warnhashsum-help-zerolengthhashsum-help-lengthhashsum-help-no-nameshashsum-help-bitshashsum-help-sha1hashsum-help-sha224hashsum-help-sha256hashsum-help-sha384hashsum-help-sha512hashsum-help-sha3hashsum-", 14);
    v3.long(&v4, "ignore-missinghashsum-help-ignore-missinghashsum-help-warnhashsum-help-zerolengthhashsum-help-lengthhashsum-help-no-nameshashsum-help-bitshashsum-help-sha1hashsum-help-sha224hashsum-help-sha256hashsum-help-sha384hashsum-help-sha512hashsum-help-sha3hashsum-", 14);
    uucore::mods::locale::get_message(&v10, "hashsum-help-ignore-missinghashsum-help-warnhashsum-help-zerolengthhashsum-help-lengthhashsum-help-no-nameshashsum-help-bitshashsum-help-sha1hashsum-help-sha224hashsum-help-sha256hashsum-help-sha384hashsum-help-sha512hashsum-help-sha3hashsum-help-sha3-224h", 27);
    v4.help(&v3, &v10);
    v3.action(&v4, 2);
    v4.arg(&v7, &v3);
    v7.new("warnZeromany", 4);
    v3.short(&v7, 119);
    v7.long(&v3, "warnZeromany", 4);
    uucore::mods::locale::get_message(&v10, "hashsum-help-warnhashsum-help-zerolengthhashsum-help-lengthhashsum-help-no-nameshashsum-help-bitshashsum-help-sha1hashsum-help-sha224hashsum-help-sha256hashsum-help-sha384hashsum-help-sha512hashsum-help-sha3hashsum-help-sha3-224hashsum-help-sha3-256hashsum", 17);
    v3.help(&v7, &v10);
    v7.action(&v3, 2);
    v10 = "quiethashsum-help-quietstatushashsum-help-statusstricthashsum-help-strictignore-missinghashsum-help-ignore-missinghashsum-help-warnhashsum-help-zerolengthhashsum-help-lengthhashsum-help-no-nameshashsum-help-bitshashsum-help-sha1hashsum-help-sha224hashsum-h";
    v11 = 5;
    v12 = "statushashsum-help-statusstricthashsum-help-strictignore-missinghashsum-help-ignore-missinghashsum-help-warnhashsum-help-zerolengthhashsum-help-lengthhashsum-help-no-nameshashsum-help-bitshashsum-help-sha1hashsum-help-sha224hashsum-help-sha256hashsum-help-";
    v13 = 6;
    v3.overrides_with_all(&v7, &v10);
    v7.arg(&v4, &v3);
    v4.new("zeroAnsi -- ", 4);
    v3.short(&v4, 122);
    v4.long(&v3, "zeroAnsi -- ", 4);
    uucore::mods::locale::get_message(&v10, "hashsum-help-zerolengthhashsum-help-lengthhashsum-help-no-nameshashsum-help-bitshashsum-help-sha1hashsum-help-sha224hashsum-help-sha256hashsum-help-sha384hashsum-help-sha512hashsum-help-sha3hashsum-help-sha3-224hashsum-help-sha3-256hashsum-help-sha3-384has", 17);
    v3.help(&v4, &v10);
    v10.action(&v3, 2);
    v4.arg(&v7, &v10);
    v7.new("fileEDOMsizei128", 4);
    v3.index(&v7);
    v7.action(&v3, 1);
    v3.value_name(&v7, "fileEDOMsizei128");
    v7.value_hint(&v3, 3);
    v10 = 2;
    v3.value_parser(&v7, &v10);
    a0.arg(&v4, &v3);
    ::0x4ce0c0::core::ptr::drop_in_place<alloc::string::String>(&v0);
    return a0;
}
