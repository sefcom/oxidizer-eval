
  uint64_t check_docs::check_validity_of_anchor_pair::hd8345c0881509e49(void* arg1, void* arg2)

{
    void* var_60 = arg1;
    void* var_58 = arg2;
    
    if (*(arg1 + 0x30) <= *(arg2 + 0x30))
        return 0;
    
    void** var_50 = &var_58;
    int64_t (* var_48)(int64_t* arg1, int64_t* arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Debug$GT$::fmt::h2ac00105f5211f10;
    int64_t* var_40 = &var_60;
    int64_t (* var_38)(int64_t* arg1, int64_t* arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Debug$GT$::fmt::h2ac00105f5211f10;
    char const (** const var_30)[0xc7] = &data_5d3568;
    int64_t var_28 = 2;
    int64_t var_10 = 0;
    void*** var_20 = &var_50;
    int64_t var_18 = 2;
    return anyhow::__private::format_err::hd87f3faee3401bd9(&var_30);
}
