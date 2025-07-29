long long uu_paste::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xab8]
    unsigned long long v1;  // [bp-0xab0]
    unsigned long long v2;  // [bp-0xaa8]
    char v3;  // [bp-0xaa0]
    unsigned int v4;  // [bp-0x828]
    unsigned int v5;  // [bp-0x824]
    char v6;  // [bp-0x820]
    unsigned long long v7;  // [bp-0x564]
    unsigned int v8;  // [bp-0x55c]
    char v9;  // [bp-0x558]
    unsigned long v10;  // [bp-0x29c]
    unsigned int v11;  // [bp-0x294]
    char v12;  // [bp-0x290]
    unsigned int v13;  // [bp-0x18]
    unsigned int v14;  // [bp-0x14]
    unsigned long long v17;  // rdx

    v6.new(uucore::util_name(), v17);
    v9.version(&v6, "(uutils coreutils) 0.1.0paste-aboutpaste-usageserialpaste-help-serialdelimiterspaste-help-delimiter\t-zero-terminatedpaste-help-zero-terminatedsrc/uu/paste/src/paste.rs", 24);
    uucore::mods::locale::get_message(&v3, "paste-aboutpaste-usageserialpaste-help-serialdelimiterspaste-help-delimiter\t-zero-terminatedpaste-help-zero-terminatedsrc/uu/paste/src/paste.rs", 11);
    v6.about(&v9, &v3);
    uucore::mods::locale::get_message(&v0, "paste-usageserialpaste-help-serialdelimiterspaste-help-delimiter\t-zero-terminatedpaste-help-zero-terminatedsrc/uu/paste/src/paste.rs", 11);
    uucore::format_usage(&v3, v1, v2);
    v9.override_usage(&v6, &v3);
    memcpy(&v6, &v9, 700);
    v7 = 549755814016 | v10;
    v8 = v11;
    v9.new("serialpaste-help-serialdelimiterspaste-help-delimiter\t-zero-terminatedpaste-help-zero-terminatedsrc/uu/paste/src/paste.rs", 6);
    v3.long(&v9, "serialpaste-help-serialdelimiterspaste-help-delimiter\t-zero-terminatedpaste-help-zero-terminatedsrc/uu/paste/src/paste.rs", 6);
    v9.short(&v3, 115);
    uucore::mods::locale::get_message(&v12, "paste-help-serialdelimiterspaste-help-delimiter\t-zero-terminatedpaste-help-zero-terminatedsrc/uu/paste/src/paste.rs", 17);
    v3.help(&v9, &v12);
    v12.action(&v3, 2);
    v9.arg(&v6, &v12);
    v6.new("delimiterspaste-help-delimiter\t-zero-terminatedpaste-help-zero-terminatedsrc/uu/paste/src/paste.rs", 10);
    v3.long(&v6, "delimiterspaste-help-delimiter\t-zero-terminatedpaste-help-zero-terminatedsrc/uu/paste/src/paste.rs", 10);
    v6.short(&v3, 100);
    uucore::mods::locale::get_message(&v12, "paste-help-delimiter\t-zero-terminatedpaste-help-zero-terminatedsrc/uu/paste/src/paste.rs", 20);
    v3.help(&v6, &v12);
    v6.value_name(&v3, "LISTkindAuto/");
    v3.default_value(&v6, "\t-zero-terminatedpaste-help-zero-terminatedsrc/uu/paste/src/paste.rs");
    memcpy(&v12, &v3, 632);
    v13 = 0x400 | v4;
    v14 = v5;
    v6.arg(&v9, &v12);
    v9.new("filesizei128", 4);
    v3.value_name(&v9, "FILEchar");
    v9.action(&v3, 1);
    v3.default_value(&v9, "-zero-terminatedpaste-help-zero-terminatedsrc/uu/paste/src/paste.rs");
    v12.value_hint(&v3, 3);
    v9.arg(&v6, &v12);
    v6.new("zero-terminatedpaste-help-zero-terminatedsrc/uu/paste/src/paste.rs", 15);
    v3.long(&v6, "zero-terminatedpaste-help-zero-terminatedsrc/uu/paste/src/paste.rs", 15);
    v6.short(&v3, 122);
    uucore::mods::locale::get_message(&v12, "paste-help-zero-terminatedsrc/uu/paste/src/paste.rs", 26);
    v3.help(&v6, &v12);
    v6.action(&v3, 2);
    a0.arg(&v9, &v6);
    ::0x498580::core::ptr::drop_in_place<alloc::string::String>(&v0);
    return a0;
}
