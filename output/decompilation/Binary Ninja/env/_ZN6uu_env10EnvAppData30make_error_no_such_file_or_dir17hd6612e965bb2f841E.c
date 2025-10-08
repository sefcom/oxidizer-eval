
  uint64_t uu_env::EnvAppData::make_error_no_such_file_or_dir::hd6612e965bb2f841(char arg1)

{
    void** rax;
    int64_t rdx_1;
    rax = uucore::util_name::h074417a1e6395129();
    void** const var_50 = rax;
    int64_t var_48 = rdx_1;
    int64_t* var_60 = &var_50;
    int64_t (* var_58)(int64_t* arg1, int64_t arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h0c2ec06aa0838e92;
    void* const var_90 = &data_510958;
    int64_t var_88 = 2;
    int64_t var_70 = 0;
    int64_t** var_80 = &var_60;
    int64_t var_78 = 1;
    std::io::stdio::_eprint::h57899770eacec2ad(&var_90);
    var_50 = 1;
    int64_t rsi;
    int64_t var_48_1 = rsi;
    int64_t rdx;
    int64_t var_40 = rdx;
    char var_38 = 1;
    var_60 = &var_50;
    int64_t (* var_58_1)(int32_t* arg1, int64_t* arg2) =
        _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
    var_90 = &data_510a00;
    int64_t var_88_1 = 2;
    int64_t var_70_1 = 0;
    int64_t** var_80_1 = &var_60;
    int64_t var_78_1 = 1;
    std::io::stdio::_eprint::h57899770eacec2ad(&var_90);
    
    if (!(arg1 & 1))
    {
        void** rax_1;
        int64_t rdx_2;
        rax_1 = uucore::util_name::h074417a1e6395129();
        var_50 = rax_1;
        int64_t var_48_2 = rdx_2;
        var_60 = &var_50;
        int64_t (* var_58_2)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h0c2ec06aa0838e92;
        var_90 = &data_510958;
        int64_t var_88_2 = 2;
        int64_t var_70_2 = 0;
        int64_t** var_80_2 = &var_60;
        int64_t var_78_2 = 1;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_90);
        var_50 = &data_510a40;
        int64_t (* var_48_3)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h0c2ec06aa0838e92;
        var_90 = &data_510a20;
        int64_t var_88_3 = 2;
        int64_t var_70_3 = 0;
        void** const* var_80_3 = &var_50;
        int64_t var_78_3 = 1;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_90);
    }
    
    return uucore::mods::error::ExitCode::new::hdcf0963f6fc7caed(0x7f);
}
