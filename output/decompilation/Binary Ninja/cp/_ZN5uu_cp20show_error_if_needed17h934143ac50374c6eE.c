
  void* uu_cp::show_error_if_needed::h934143ac50374c6e(int64_t* arg1)

{
    int64_t* var_58 = arg1;
    void* result_1 = *arg1 - 2;
    void* result = 4;
    
    if (result_1 < 0xb)
        result = result_1;
    
    if (result == 3 || result == 6)
        return result;
    
    int64_t** rax;
    int64_t rdx_1;
    rax = uucore::util_name::h60d842bf27b05e82();
    int64_t** var_68 = rax;
    int64_t var_60_1 = rdx_1;
    int64_t*** var_20 = &var_68;
    int64_t (* var_18_1)(int64_t* arg1, int64_t arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h52491f3ba70e88c7;
    void* const var_50 = &data_5b5cc8;
    int64_t var_48_1 = 2;
    int64_t var_30_1 = 0;
    int64_t**** var_40_1 = &var_20;
    int64_t var_38_1 = 1;
    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_50);
    var_68 = &var_58;
    int64_t (* var_60_2)(int64_t* arg1, void* arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2064bcc4257d401d;
    var_50 = &data_5b5ce8;
    int64_t var_48_2 = 2;
    int64_t var_30_2 = 0;
    int64_t*** var_40_2 = &var_68;
    int64_t var_38_2 = 1;
    return std::io::stdio::_eprint::hcdfeec148c7134f7(&var_50);
}
