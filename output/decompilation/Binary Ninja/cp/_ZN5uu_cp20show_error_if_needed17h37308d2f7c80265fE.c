
  void* uu_cp::show_error_if_needed::h37308d2f7c80265f(int64_t* arg1)

{
    int64_t* var_58 = arg1;
    void* result = *arg1;
    
    if (result == -0x7ffffffffffffffc || result == -0x7ffffffffffffff9)
        return result;
    
    int64_t** rax;
    int64_t rdx_1;
    rax = uucore::util_name::h074417a1e6395129();
    int64_t** var_68 = rax;
    int64_t var_60_1 = rdx_1;
    int64_t*** var_20 = &var_68;
    int64_t (* var_18_1)(int64_t* arg1, int64_t arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::haac06c1252b30d1d;
    void* const var_50 = &data_55e700;
    int64_t var_48_1 = 2;
    int64_t var_30_1 = 0;
    int64_t**** var_40_1 = &var_20;
    int64_t var_38_1 = 1;
    std::io::stdio::_eprint::h57899770eacec2ad(&var_50);
    var_68 = &var_58;
    int64_t (* var_60_2)(int64_t* arg1, int64_t* arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h37de6691381edacb;
    var_50 = &data_55e620;
    int64_t var_48_2 = 2;
    int64_t var_30_2 = 0;
    int64_t*** var_40_2 = &var_68;
    int64_t var_38_2 = 1;
    return std::io::stdio::_eprint::h57899770eacec2ad(&var_50);
}
