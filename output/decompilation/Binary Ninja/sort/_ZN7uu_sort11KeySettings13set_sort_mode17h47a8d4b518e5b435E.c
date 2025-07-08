
  int128_t* uu_sort::KeySettings::set_sort_mode::h47a8d4b518e5b435(int128_t* arg1, void* arg2, char arg3)

{
    uint64_t rax = *(arg2 + 5);
    char const (** const var_70)[0x35];
    
    if (rax == 6 || rax == arg3)
    {
        int64_t* r15_1 = arg1;
        int128_t* result = uu_sort::KeySettings::check_compatibility::hd03ca512104bcd48(&var_70, 
            arg3, *(arg2 + 3), *(arg2 + 2));
        
        if (var_70 != -0x8000000000000000)
        {
            int128_t* result_1;
            result = result_1;
            r15_1[2] = result;
            *r15_1 = var_70;
        }
        else
        {
            *(arg2 + 5) = arg3;
            *r15_1 = -0x8000000000000000;
        }
        
        return result;
    }
    
    int32_t var_78 = *("n" + (rax << 2));
    int32_t var_74 = *("n" + (arg3 << 2));
    int32_t* var_40 = &var_78;
    int64_t (* var_38_1)(int32_t* arg1, int64_t* arg2) =
        _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::hfe75cd72bcd9c522;
    int32_t* var_30_1 = &var_74;
    int64_t (* var_28_1)(int32_t* arg1, int64_t* arg2) =
        _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::hfe75cd72bcd9c522;
    var_70 = &data_5ff878;
    int64_t var_68_1 = 3;
    int64_t var_50_1 = 0;
    int32_t** var_60 = &var_40;
    int64_t var_58_1 = 2;
    return core::option::Option$LT$T$GT$::map_or_else::h391d7c162d69f44b(arg1, &var_70);
}
