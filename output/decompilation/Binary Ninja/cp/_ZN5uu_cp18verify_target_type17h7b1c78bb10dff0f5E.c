
  int64_t* uu_cp::verify_target_type::h7b1c78bb10dff0f5(int64_t* arg1, char* arg2, uint64_t arg3, char* arg4)

{
    char rax = std::path::Path::is_dir::h9ac0db933706da51(arg2, arg3);
    int64_t rcx;
    int64_t* var_80;
    int64_t var_70;
    char const (** const rax_1)[0x93];
    
    if (!*arg4)
    {
        rcx = 0xd;
        
        if (!rax)
        {
            var_70 = 1;
            char* var_68_2 = arg2;
            uint64_t var_60_2 = arg3;
            char var_58_2 = 1;
            var_80 = &var_70;
            int64_t (* var_78_2)(void* arg1, void* arg2) =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            rax_1 = &data_5b60b0;
            label_5088ac:
            char const (** const var_50)[0x93] = rax_1;
            int64_t var_48_1 = 2;
            int64_t var_30_1 = 0;
            int64_t** var_40_1 = &var_80;
            int64_t var_38_1 = 1;
            core::option::Option$LT$T$GT$::map_or_else::h805a87bba4bea7c2(&arg1[1], &var_50);
            rcx = 4;
        }
    }
    else
    {
        rcx = 0xd;
        
        if (rax)
        {
            var_70 = 1;
            char* var_68_1 = arg2;
            uint64_t var_60_1 = arg3;
            char var_58_1 = 1;
            var_80 = &var_70;
            int64_t (* var_78_1)(void* arg1, void* arg2) =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            rax_1 = &data_5b5db8;
            goto label_5088ac;
        }
    }
    *arg1 = rcx;
    return arg1;
}
