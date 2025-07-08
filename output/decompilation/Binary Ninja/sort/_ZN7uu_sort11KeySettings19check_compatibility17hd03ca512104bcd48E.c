
  void uu_sort::KeySettings::check_compatibility::hd03ca512104bcd48(int128_t* arg1, char arg2, char arg3, char arg4)

{
    if (arg2 <= 3)
    {
        int32_t var_54;
        char const* const rax_2;
        
        if (arg4)
        {
            var_54 = *("n" + (arg2 << 2));
            rax_2 = "d";
            label_51e86a:
            char const* const var_50 = rax_2;
            int64_t (* var_48)(int32_t* arg1, int64_t* arg2) =
                _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::hfe75cd72bcd9c522;
            int32_t* var_40 = &var_54;
            int64_t (* var_38)(int32_t* arg1, int64_t* arg2) =
                _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::hfe75cd72bcd9c522;
            char const (** const var_30)[0x35] = &data_5ff878;
            int64_t var_28 = 3;
            int64_t var_10 = 0;
            char const* const* var_20 = &var_50;
            int64_t var_18 = 2;
            core::option::Option$LT$T$GT$::map_or_else::h391d7c162d69f44b(arg1, &var_30);
            return;
        }
        
        if (arg3)
        {
            var_54 = *("n" + (arg2 << 2));
            rax_2 = "i";
            goto label_51e86a;
        }
    }
    
    *arg1 = -0x8000000000000000;
}
