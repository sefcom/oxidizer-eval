
  uint64_t fd::ensure_use_hidden_option_for_leading_dot_pattern::he1bd7dd292972766(char arg1, char const (** arg2)[0xbb], int64_t arg3)

{
    if (!(arg1 & 1))
        return 0;
    
    char const (** const var_30)[0xbb] = arg2;
    void* var_28 = &arg2[arg3 * 3];
    
    if (!_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::h97670d64b9b946ab(&var_30))
        return 0;
    
    var_30 = &data_802950;
    int64_t var_28_1 = 1;
    int64_t var_20 = 8;
    int128_t var_18 = {0};
    return anyhow::__private::format_err::hb7ed131eb83ec9a9(&var_30);
}
