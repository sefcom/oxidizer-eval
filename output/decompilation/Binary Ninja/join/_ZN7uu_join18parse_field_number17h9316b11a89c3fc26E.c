
  char* uu_join::parse_field_number::h9316b11a89c3fc26(int64_t* arg1, char* arg2, int64_t arg3)

{
    char var_a8;
    char* result = core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&var_a8, arg2, arg3);
    int64_t var_a0;
    
    if (var_a8)
    {
        char var_a7;
        
        if (var_a7 != 2)
            goto label_4c52fc;
        
        arg1[1] = -1;
        *arg1 = 0;
    }
    else if (!var_a0)
    {
        label_4c52fc:
        int64_t var_88 = 0;
        char* var_80_1 = arg2;
        int64_t var_78_1 = arg3;
        char var_70_1 = 1;
        int64_t* var_98 = &var_88;
        int64_t (* var_90_1)(void* arg1, void* arg2) =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        void** const var_68 = &data_5354b0;
        int64_t var_60_1 = 1;
        int64_t var_48_1 = 0;
        int64_t** var_58_1 = &var_98;
        int64_t var_50_1 = 1;
        void var_38;
        core::option::Option$LT$T$GT$::map_or_else::h84da32fb4d9c85b4(&var_38, &var_68);
        int32_t var_20_1 = 1;
        result = alloc::boxed::Box$LT$T$GT$::new::h7aaaeb17d3fe937d(&var_38);
        *arg1 = result;
        arg1[1] = &data_5352b8;
    }
    else
    {
        result = var_a0 - 1;
        arg1[1] = result;
        *arg1 = 0;
    }
    return result;
}
