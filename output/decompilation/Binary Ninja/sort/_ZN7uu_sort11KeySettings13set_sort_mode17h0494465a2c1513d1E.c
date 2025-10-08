
  int128_t* uu_sort::KeySettings::set_sort_mode::h0494465a2c1513d1(int64_t* arg1, void* arg2, bool arg3)

{
    uint64_t rax = *(arg2 + 5);
    char const (** const var_68)[0x34];
    
    if (!(rax != 6 & rax != arg3))
    {
        int128_t* result = uu_sort::KeySettings::check_compatibility::hffc9b72d1f0610fb(&var_68, 
            arg3, *(arg2 + 3), *(arg2 + 2));
        
        if (!(0 + -(var_68)))
        {
            int128_t* result_1;
            result = result_1;
            arg1[2] = result;
            *arg1 = var_68;
        }
        else
        {
            *(arg2 + 5) = arg3;
            *arg1 = -0x8000000000000000;
        }
        
        return result;
    }
    
    int32_t var_70 = (*U"nhgMVR")[rax];
    int32_t var_6c = (*U"nhgMVR")[arg3];
    int32_t* var_38 = &var_70;
    int64_t (* var_30_1)(int32_t* arg1, int64_t* arg2) =
        _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::h0215b7857ad55b0c;
    int32_t* var_28_1 = &var_6c;
    int64_t (* var_20_1)(int32_t* arg1, int64_t* arg2) =
        _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::h0215b7857ad55b0c;
    var_68 = &data_58cdc0;
    int64_t var_60_1 = 3;
    int64_t var_48_1 = 0;
    int32_t** var_58 = &var_38;
    int64_t var_50_1 = 2;
    return core::option::Option$LT$T$GT$::map_or_else::h9f6bdb3fe8306f69(arg1, &var_68);
}
