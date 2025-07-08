
  int32_t* uu_env::EnvAppData::make_error_no_such_file_or_dir::hb7f284d37785d950(char arg1)

{
    void** rax;
    int64_t rdx_1;
    rax = uucore::util_name::h60d842bf27b05e82();
    void** const var_50 = rax;
    int64_t var_48 = rdx_1;
    int64_t* var_60 = &var_50;
    int64_t (* var_58)(int64_t* arg1, int64_t arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h402b3702303fb18e;
    void* const var_90 = &data_548978;
    int64_t var_88 = 2;
    int64_t var_70 = 0;
    int64_t** var_80 = &var_60;
    int64_t var_78 = 1;
    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_90);
    var_50 = 1;
    int64_t rsi;
    int64_t var_48_1 = rsi;
    int64_t rdx;
    int64_t var_40 = rdx;
    char var_38 = 1;
    var_60 = &var_50;
    int64_t (* var_58_1)(void* arg1, void* arg2) =
        _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
    var_90 = &data_548a28;
    int64_t var_88_1 = 2;
    int64_t var_70_1 = 0;
    int64_t** var_80_1 = &var_60;
    int64_t var_78_1 = 1;
    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_90);
    
    if (!arg1)
    {
        void** rax_1;
        int64_t rdx_2;
        rax_1 = uucore::util_name::h60d842bf27b05e82();
        var_50 = rax_1;
        int64_t var_48_2 = rdx_2;
        var_60 = &var_50;
        int64_t (* var_58_2)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h402b3702303fb18e;
        var_90 = &data_548978;
        int64_t var_88_2 = 2;
        int64_t var_70_2 = 0;
        int64_t** var_80_2 = &var_60;
        int64_t var_78_2 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_90);
        var_50 = &data_548a68;
        int64_t (* var_48_3)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h402b3702303fb18e;
        var_90 = &data_548a48;
        int64_t var_88_3 = 2;
        int64_t var_70_3 = 0;
        void** const* var_80_3 = &var_50;
        int64_t var_78_3 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_90);
    }
    
    return uucore::mods::error::ExitCode::new::he6e429e301480307(0x7f);
}
