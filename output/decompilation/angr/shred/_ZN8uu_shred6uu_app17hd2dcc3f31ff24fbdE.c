long long uu_shred::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xab0], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0xaa8]
    unsigned long long v2;  // [bp-0xaa0]
    unsigned long long v3;  // [bp-0xa98]
    unsigned long long v4;  // [bp-0xa90]
    unsigned long long v5;  // [bp-0xa88]
    unsigned int v6;  // [bp-0x838]
    unsigned int v7;  // [bp-0x834]
    char v8;  // [bp-0x830]
    unsigned int v9;  // [bp-0x5b8]
    char v10;  // [bp-0x5b4]
    unsigned long v11;  // [bp-0x574]
    unsigned int v12;  // [bp-0x56c]
    char v13;  // [bp-0x568]
    unsigned long long v14;  // [bp-0x2ac]
    unsigned int v15;  // [bp-0x2a4]
    char v16;  // [bp-0x2a0]
    unsigned long long v19;  // rdx

    v8.new(uucore::util_name(), v19);
    v13.version(&v8);
    v8.about(&v13);
    v13.after_help(&v8);
    uucore::format_usage(&v0, "{} [OPTION]... FILE...forcechange permissions to allow writing if necessaryiterationsoverwrite N times instead of the default (3)NUMBER3Nshred this many bytes (suffixes like K, M, G accepted)udeallocate and remove file after overwritingremoveHOWunlinklike ", 22);
    v8.override_usage(&v13, &v0);
    memcpy(&v13, &v8, 700);
    v14 = 549755814016 | v11;
    v15 = v12;
    v8.new("forcechange permissions to allow writing if necessaryiterationsoverwrite N times instead of the default (3)NUMBER3Nshred this many bytes (suffixes like K, M, G accepted)udeallocate and remove file after overwritingremoveHOWunlinklike -u but give control on", 5);
    v0.long(&v8, "forcechange permissions to allow writing if necessaryiterationsoverwrite N times instead of the default (3)NUMBER3Nshred this many bytes (suffixes like K, M, G accepted)udeallocate and remove file after overwritingremoveHOWunlinklike -u but give control on", 5);
    v8.short(&v0, 102);
    v0.help(&v8, "change permissions to allow writing if necessaryiterationsoverwrite N times instead of the default (3)NUMBER3Nshred this many bytes (suffixes like K, M, G accepted)udeallocate and remove file after overwritingremoveHOWunlinklike -u but give control on HOW ", 48);
    v16.action(&v0, 2);
    v8.arg(&v13, &v16);
    v13.new("iterationsoverwrite N times instead of the default (3)NUMBER3Nshred this many bytes (suffixes like K, M, G accepted)udeallocate and remove file after overwritingremoveHOWunlinklike -u but give control on HOW to delete;  See belowverboseshow progressexactdo", 10);
    v0.long(&v13, "iterationsoverwrite N times instead of the default (3)NUMBER3Nshred this many bytes (suffixes like K, M, G accepted)udeallocate and remove file after overwritingremoveHOWunlinklike -u but give control on HOW to delete;  See belowverboseshow progressexactdo", 10);
    v13.short(&v0, 110);
    v0.help(&v13, "overwrite N times instead of the default (3)NUMBER3Nshred this many bytes (suffixes like K, M, G accepted)udeallocate and remove file after overwritingremoveHOWunlinklike -u but give control on HOW to delete;  See belowverboseshow progressexactdo not round", 44);
    v13.value_name(&v0, "NUMBER3Nshred this many bytes (suffixes like K, M, G accepted)udeallocate and remove file after overwritingremoveHOWunlinklike -u but give control on HOW to delete;  See belowverboseshow progressexactdo not round file sizes up to the next full block;\nthis ", 6);
    v0.default_value(&v13);
    v13.arg(&v8, &v0);
    v8.new("sizei128 as dyn ERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNG", 4);
    v0.long(&v8, "sizei128 as dyn ERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNG", 4);
    v8.short(&v0, 115);
    v0.value_name(&v8, "Nshred this many bytes (suffixes like K, M, G accepted)udeallocate and remove file after overwritingremoveHOWunlinklike -u but give control on HOW to delete;  See belowverboseshow progressexactdo not round file sizes up to the next full block;\nthis is the ", 1);
    v16.help(&v0, "shred this many bytes (suffixes like K, M, G accepted)udeallocate and remove file after overwritingremoveHOWunlinklike -u but give control on HOW to delete;  See belowverboseshow progressexactdo not round file sizes up to the next full block;\nthis is the d", 54);
    v8.arg(&v13, &v16);
    v13.new("udeallocate and remove file after overwritingremoveHOWunlinklike -u but give control on HOW to delete;  See belowverboseshow progressexactdo not round file sizes up to the next full block;\nthis is the default for non-regular filesadd a final overwrite with", 1);
    v0.short(&v13, 117);
    v13.help(&v0, "deallocate and remove file after overwritingremoveHOWunlinklike -u but give control on HOW to delete;  See belowverboseshow progressexactdo not round file sizes up to the next full block;\nthis is the default for non-regular filesadd a final overwrite with ", 44);
    v0.action(&v13, 2);
    v13.arg(&v8, &v0);
    v8.new("removeHOWunlinklike -u but give control on HOW to delete;  See belowverboseshow progressexactdo not round file sizes up to the next full block;\nthis is the default for non-regular filesadd a final overwrite with zeros to hide shredding: invalid file size: ", 6);
    v0.long(&v8, "removeHOWunlinklike -u but give control on HOW to delete;  See belowverboseshow progressexactdo not round file sizes up to the next full block;\nthis is the default for non-regular filesadd a final overwrite with zeros to hide shredding: invalid file size: ", 6);
    v8.value_name(&v0, "HOWunlinklike -u but give control on HOW to delete;  See belowverboseshow progressexactdo not round file sizes up to the next full block;\nthis is the default for non-regular filesadd a final overwrite with zeros to hide shredding: invalid file size: \n", 3);
    v0 = "unlinklike -u but give control on HOW to delete;  See belowverboseshow progressexactdo not round file sizes up to the next full block;\nthis is the default for non-regular filesadd a final overwrite with zeros to hide shredding: invalid file size: \n";
    v1 = 6;
    v2 = "wipe";
    v3 = 4;
    v4 = "wipesync";
    v5 = 8;
    v16.from(&v0);
    v0.value_parser(&v8, &v16);
    v8.num_args(&v0, 0, 1);
    memcpy(&v0, &v8, 632);
    v6 = 128 | v9;
    v7 = *((int *)&v10);
    v8.default_missing_value(&v0);
    v0.help(&v8, "like -u but give control on HOW to delete;  See belowverboseshow progressexactdo not round file sizes up to the next full block;\nthis is the default for non-regular filesadd a final overwrite with zeros to hide shredding: invalid file size: \n", 53);
    v16.action(&v0, 0);
    v8.arg(&v13, &v16);
    v13.new("verboseshow progressexactdo not round file sizes up to the next full block;\nthis is the default for non-regular filesadd a final overwrite with zeros to hide shredding: invalid file size: \n", 7);
    v0.long(&v13, "verboseshow progressexactdo not round file sizes up to the next full block;\nthis is the default for non-regular filesadd a final overwrite with zeros to hide shredding: invalid file size: \n", 7);
    v13.short(&v0, 118);
    v0.help(&v13, "show progressexactdo not round file sizes up to the next full block;\nthis is the default for non-regular filesadd a final overwrite with zeros to hide shredding: invalid file size: \n", 13);
    v16.action(&v0, 2);
    v13.arg(&v8, &v16);
    v8.new("exactdo not round file sizes up to the next full block;\nthis is the default for non-regular filesadd a final overwrite with zeros to hide shredding: invalid file size: \n", 5);
    v0.long(&v8, "exactdo not round file sizes up to the next full block;\nthis is the default for non-regular filesadd a final overwrite with zeros to hide shredding: invalid file size: \n", 5);
    v8.short(&v0, 120);
    v0.help(&v8, "do not round file sizes up to the next full block;\nthis is the default for non-regular filesadd a final overwrite with zeros to hide shredding: invalid file size: \n", 92);
    v16.action(&v0, 2);
    v8.arg(&v13, &v16);
    v13.new("zeroAnsi -- ", 4);
    v0.long(&v13, "zeroAnsi -- ", 4);
    v13.short(&v0, 122);
    v0.help(&v13, "add a final overwrite with zeros to hide shredding: invalid file size: \n", 50);
    v16.action(&v0, 2);
    v13.arg(&v8, &v16);
    v8.new("filesizei128 as dyn ERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNG", 4);
    v0.action(&v8, 1);
    v8.value_hint(&v0);
    a0.arg(&v13, &v8);
    return a0;
}
