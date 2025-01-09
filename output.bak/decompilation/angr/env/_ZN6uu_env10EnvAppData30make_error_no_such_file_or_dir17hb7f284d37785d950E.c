long long uu_env::EnvAppData::make_error_no_such_file_or_dir::hb7f284d37785d950(char a0, unsigned long a1, unsigned long a2)
{
    unsigned long v0;  // [sp-0x90], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x88]
    char *v2;  // [sp-0x80], Other Possible Types: struct struct_0 **
    unsigned long long v3;  // [sp-0x78]
    void* v4;  // [sp-0x70]
    char *v5;  // [sp-0x60]
    unsigned long long v6;  // [sp-0x58]
    unsigned long v7;  // [sp-0x50], Other Possible Types: unsigned long long
    unsigned long long v8;  // [sp-0x48]
    unsigned long long v9;  // [sp-0x40]
    char v10;  // [sp-0x38]
    unsigned long v12;  // rdx

    v7 = uucore::util_name::h60d842bf27b05e82();
    v8 = v12;
    v5 = &v7;
    v6 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h402b3702303fb18e;
    v0 = &g_548978;
    v1 = 2;
    v4 = 0;
    v2 = &v5;
    v3 = 1;
    std::io::stdio::_eprint::hcdfeec148c7134f7(&v0);
    v7 = 1;
    v8 = a1;
    v9 = a2;
    v10 = 1;
    v5 = &v7;
    v6 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
    v0 = &g_548a28;
    v1 = 2;
    v4 = 0;
    v2 = &v5;
    v3 = 1;
    std::io::stdio::_eprint::hcdfeec148c7134f7(&v0);
    if (a0)
        return uucore::mods::error::ExitCode::new::he6e429e301480307(127);
    v7 = uucore::util_name::h60d842bf27b05e82();
    v8 = v12;
    v5 = &v7;
    v6 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h402b3702303fb18e;
    v0 = &g_548978;
    v1 = 2;
    v4 = 0;
    v2 = &v5;
    v3 = 1;
    std::io::stdio::_eprint::hcdfeec148c7134f7(&v0);
    v7 = &g_548a68;
    v8 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h402b3702303fb18e;
    v0 = &g_548a48;
    v1 = 2;
    v4 = 0;
    v2 = &v7;
    v3 = 1;
    std::io::stdio::_eprint::hcdfeec148c7134f7(&v0);
}
