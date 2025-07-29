long long uu_shred::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xab8]
    unsigned long long v1;  // [bp-0xab0]
    unsigned long long v2;  // [bp-0xaa8]
    char v3;  // [bp-0xaa0], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0xa98]
    unsigned long long v5;  // [bp-0xa90]
    unsigned long long v6;  // [bp-0xa88]
    unsigned long long v7;  // [bp-0xa80]
    unsigned long long v8;  // [bp-0xa78]
    unsigned int v9;  // [bp-0x828]
    unsigned int v10;  // [bp-0x824]
    char v11;  // [bp-0x820]
    unsigned int v12;  // [bp-0x5a8]
    char v13;  // [bp-0x5a4]
    unsigned long v14;  // [bp-0x564]
    unsigned int v15;  // [bp-0x55c]
    char v16;  // [bp-0x558]
    unsigned long long v17;  // [bp-0x29c]
    unsigned int v18;  // [bp-0x294]
    void* v19;  // [bp-0x290], Other Possible Types: char
    unsigned long long v20;  // [bp-0x288]
    char v21;  // [bp-0x280]
    unsigned long long v24;  // rdx

    v11.new(uucore::util_name(), v24);
    v16.version(&v11, "(uutils coreutils) 0.1.0shred-aboutshred-usageforceiterationsshred-iterations-helpNUMBER3Nshred-size-helpushred-deallocate-helpremoveHOWunlinkshred-remove-helpverboseshred-verbose-helpexactshred-zero-helprandom-sourceshred-random-source-help: \nshred-invali", 24);
    uucore::mods::locale::get_message(&v3, "shred-aboutshred-usageforceiterationsshred-iterations-helpNUMBER3Nshred-size-helpushred-deallocate-helpremoveHOWunlinkshred-remove-helpverboseshred-verbose-helpexactshred-zero-helprandom-sourceshred-random-source-help: \nshred-invalid-file-sizerandom", 11);
    v11.about(&v16, &v3);
    uucore::mods::locale::get_message(&v3, "shred-after-help", 16);
    v16.after_help(&v11, &v3);
    uucore::mods::locale::get_message(&v0, "shred-usageforceiterationsshred-iterations-helpNUMBER3Nshred-size-helpushred-deallocate-helpremoveHOWunlinkshred-remove-helpverboseshred-verbose-helpexactshred-zero-helprandom-sourceshred-random-source-help: \nshred-invalid-file-sizerandom", 11);
    uucore::format_usage(&v3, v1, v2);
    v11.override_usage(&v16, &v3);
    memcpy(&v16, &v11, 700);
    v17 = 549755814016 | v14;
    v18 = v15;
    v11.new("forceiterationsshred-iterations-helpNUMBER3Nshred-size-helpushred-deallocate-helpremoveHOWunlinkshred-remove-helpverboseshred-verbose-helpexactshred-zero-helprandom-sourceshred-random-source-help: \nshred-invalid-file-sizerandom", 5);
    v3.long(&v11, "forceiterationsshred-iterations-helpNUMBER3Nshred-size-helpushred-deallocate-helpremoveHOWunlinkshred-remove-helpverboseshred-verbose-helpexactshred-zero-helprandom-sourceshred-random-source-help: \nshred-invalid-file-sizerandom", 5);
    v11.short(&v3, 102);
    uucore::mods::locale::get_message(&v19, "shred-force-helphost unreachable", 16);
    v3.help(&v11, &v19);
    v19.action(&v3, 2);
    v11.arg(&v16, &v19);
    v16.new("iterationsshred-iterations-helpNUMBER3Nshred-size-helpushred-deallocate-helpremoveHOWunlinkshred-remove-helpverboseshred-verbose-helpexactshred-zero-helprandom-sourceshred-random-source-help: \nshred-invalid-file-sizerandom", 10);
    v3.long(&v16, "iterationsshred-iterations-helpNUMBER3Nshred-size-helpushred-deallocate-helpremoveHOWunlinkshred-remove-helpverboseshred-verbose-helpexactshred-zero-helprandom-sourceshred-random-source-help: \nshred-invalid-file-sizerandom", 10);
    v16.short(&v3, 110);
    uucore::mods::locale::get_message(&v19, "shred-iterations-helpNUMBER3Nshred-size-helpushred-deallocate-helpremoveHOWunlinkshred-remove-helpverboseshred-verbose-helpexactshred-zero-helprandom-sourceshred-random-source-help: \nshred-invalid-file-sizerandom", 21);
    v3.help(&v16, &v19);
    v16.value_name(&v3, "NUMBER3Nshred-size-helpushred-deallocate-helpremoveHOWunlinkshred-remove-helpverboseshred-verbose-helpexactshred-zero-helprandom-sourceshred-random-source-help: \nshred-invalid-file-sizerandom", 6);
    v3.default_value(&v16);
    v16.arg(&v11, &v3);
    v11.new("sizei128", 4);
    v3.long(&v11, "sizei128", 4);
    v11.short(&v3, 115);
    v3.value_name(&v11, "Nshred-size-helpushred-deallocate-helpremoveHOWunlinkshred-remove-helpverboseshred-verbose-helpexactshred-zero-helprandom-sourceshred-random-source-help: \nshred-invalid-file-sizerandom", 1);
    uucore::mods::locale::get_message(&v11, "shred-size-helpushred-deallocate-helpremoveHOWunlinkshred-remove-helpverboseshred-verbose-helpexactshred-zero-helprandom-sourceshred-random-source-help: \nshred-invalid-file-sizerandom", 15);
    v19.help(&v3, &v11);
    v11.arg(&v16, &v19);
    v16.new("ushred-deallocate-helpremoveHOWunlinkshred-remove-helpverboseshred-verbose-helpexactshred-zero-helprandom-sourceshred-random-source-help: \nshred-invalid-file-sizerandom", 1);
    v3.short(&v16, 117);
    uucore::mods::locale::get_message(&v19, "shred-deallocate-helpremoveHOWunlinkshred-remove-helpverboseshred-verbose-helpexactshred-zero-helprandom-sourceshred-random-source-help: \nshred-invalid-file-sizerandom", 21);
    v16.help(&v3, &v19);
    v3.action(&v16, 2);
    v16.arg(&v11, &v3);
    v11.new("removeHOWunlinkshred-remove-helpverboseshred-verbose-helpexactshred-zero-helprandom-sourceshred-random-source-help: \nshred-invalid-file-sizerandom", 6);
    v3.long(&v11, "removeHOWunlinkshred-remove-helpverboseshred-verbose-helpexactshred-zero-helprandom-sourceshred-random-source-help: \nshred-invalid-file-sizerandom", 6);
    v11.value_name(&v3, "HOWunlinkshred-remove-helpverboseshred-verbose-helpexactshred-zero-helprandom-sourceshred-random-source-help: \nshred-invalid-file-sizerandom", 3);
    v3 = "unlinkshred-remove-helpverboseshred-verbose-helpexactshred-zero-helprandom-sourceshred-random-source-help: \nshred-invalid-file-sizerandom";
    v4 = 6;
    v5 = "wipe";
    v6 = 4;
    v7 = "wipesync";
    v8 = 8;
    v19.from(&v3);
    v3.value_parser(&v11, &v19);
    v19 = 0;
    v20 = 1;
    v21 = 0;
    v11.num_args(&v3, &v19);
    memcpy(&v3, &v11, 632);
    v9 = 128 | v12;
    v10 = *((int *)&v13);
    v11.default_missing_value(&v3);
    uucore::mods::locale::get_message(&v19, "shred-remove-helpverboseshred-verbose-helpexactshred-zero-helprandom-sourceshred-random-source-help: \nshred-invalid-file-sizerandom", 17);
    v3.help(&v11, &v19);
    v19.action(&v3, 0);
    v11.arg(&v16, &v19);
    v16.new("verboseshred-verbose-helpexactshred-zero-helprandom-sourceshred-random-source-help: \nshred-invalid-file-sizerandom", 7);
    v3.long(&v16, "verboseshred-verbose-helpexactshred-zero-helprandom-sourceshred-random-source-help: \nshred-invalid-file-sizerandom", 7);
    v16.short(&v3, 118);
    uucore::mods::locale::get_message(&v19, "shred-verbose-helpexactshred-zero-helprandom-sourceshred-random-source-help: \nshred-invalid-file-sizerandom", 18);
    v3.help(&v16, &v19);
    v19.action(&v3, 2);
    v16.arg(&v11, &v19);
    v11.new("exactshred-zero-helprandom-sourceshred-random-source-help: \nshred-invalid-file-sizerandom", 5);
    v3.long(&v11, "exactshred-zero-helprandom-sourceshred-random-source-help: \nshred-invalid-file-sizerandom", 5);
    v11.short(&v3, 120);
    uucore::mods::locale::get_message(&v19, "shred-exact-helpshred-not-a-file", 16);
    v3.help(&v11, &v19);
    v19.action(&v3, 2);
    v11.arg(&v16, &v19);
    v16.new("zeroAnsi -- ", 4);
    v3.long(&v16, "zeroAnsi -- ", 4);
    v16.short(&v3, 122);
    uucore::mods::locale::get_message(&v19, "shred-zero-helprandom-sourceshred-random-source-help: \nshred-invalid-file-sizerandom", 15);
    v3.help(&v16, &v19);
    v19.action(&v3, 2);
    v16.arg(&v11, &v19);
    v11.new("random-sourceshred-random-source-help: \nshred-invalid-file-sizerandom", 13);
    v3.long(&v11, "random-sourceshred-random-source-help: \nshred-invalid-file-sizerandom", 13);
    uucore::mods::locale::get_message(&v19, "shred-random-source-help: \nshred-invalid-file-sizerandom", 24);
    v11.help(&v3, &v19);
    v3.value_hint(&v11, 3);
    v19.action(&v3, 0);
    v11.arg(&v16, &v19);
    v16.new("filesizei128", 4);
    v3.action(&v16, 1);
    v16.value_hint(&v3, 3);
    a0.arg(&v11, &v16);
    ::0x4aa180::core::ptr::drop_in_place<alloc::string::String>(&v0);
    return a0;
}
