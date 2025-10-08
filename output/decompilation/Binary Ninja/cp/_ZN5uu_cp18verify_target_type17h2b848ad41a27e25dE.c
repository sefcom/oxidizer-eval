
  int64_t* uu_cp::verify_target_type::h2b848ad41a27e25d(int64_t* arg1, int64_t arg2, uint64_t arg3, char* arg4)

{
    int64_t r13 = -0x7ffffffffffffffd;
    char rax = std::path::Path::is_dir::h02edbc48c38d7d9e(arg2, arg3);
    int64_t* var_88;
    int64_t var_78;
    char const (** const rax_1)[0x63];
    
    if (*arg4 == 1)
    {
        if (rax)
        {
            var_78 = 1;
            int64_t var_70_1 = arg2;
            uint64_t var_68_1 = arg3;
            char var_60_1 = 1;
            var_88 = &var_78;
            int64_t (* var_80_1)(int32_t* arg1, int64_t* arg2) =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            rax_1 = &data_55eae8;
            goto label_4a55ee;
        }
        
        r13 = -0x7ffffffffffffff4;
    }
    else if (!rax)
    {
        var_78 = 1;
        int64_t var_70_2 = arg2;
        uint64_t var_68_2 = arg3;
        char var_60_2 = 1;
        var_88 = &var_78;
        int64_t (* var_80_2)(int32_t* arg1, int64_t* arg2) =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
        rax_1 = &data_55edb0;
        label_4a55ee:
        char const (** const var_58)[0x63] = rax_1;
        int64_t var_50_1 = 2;
        int64_t var_38_1 = 0;
        int64_t** var_48_1 = &var_88;
        int64_t var_40_1 = 1;
        core::option::Option$LT$T$GT$::map_or_else::ha891a5b84284deb4(&arg1[1], &var_58);
    }
    else
        r13 = -0x7ffffffffffffff4;
    *arg1 = r13;
    return arg1;
}
