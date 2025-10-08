
  int64_t* just::function::env_var_or_default::hb666ce340b10189a(int64_t* arg1, int64_t* arg2, int64_t arg3, uint64_t arg4, int64_t arg5, uint64_t arg6)

{
    int64_t var_c8 = arg3;
    uint64_t var_c0 = arg4;
    int64_t* rax_1 = *(*arg2 + 8);
    void* rax_2 = alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::h7621d24a43012b45(
        *rax_1, rax_1[1], arg3, arg4);
    
    if (!rax_2)
    {
        char var_50;
        uint64_t rdx_1 = std::env::var::haeedb8a63b9509fb(&var_50, arg3);
        int128_t var_48;
        int64_t var_38;
        
        if (!(var_50 & 1))
        {
            arg1[3] = var_38;
            *(arg1 + 8) = var_48;
            *arg1 = 0;
        }
        else if (!(0 + -(var_48)))
        {
            int64_t var_d8_1 = var_38;
            int128_t var_e8 = var_48;
            int64_t* var_b8 = &var_c8;
            int64_t (* var_b0_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcd9ad0a553cee1ef;
            int128_t* var_a8_1 = &var_e8;
            int64_t (* var_a0_1)(void* arg1, int64_t* arg2) =
                _$LT$std..path..PathBuf$u20$as$u20$core..fmt..Debug$GT$::fmt::h56ce33c072e686b1;
            char const (** const var_80)[0xa0] = &data_82fe68;
            int64_t var_78_1 = 2;
            int64_t var_60_1 = 0;
            int64_t** var_70_1 = &var_b8;
            int64_t var_68_1 = 2;
            int128_t var_98;
            core::option::Option$LT$T$GT$::map_or_else::h4ceadf09b7aa2c32(&var_98, 0, rdx_1, 
                &var_80);
            int64_t var_88;
            arg1[3] = var_88;
            *(arg1 + 8) = var_98;
            *arg1 = 1;
            core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::hb5088e4c98ca9abd(&var_e8);
        }
        else
        {
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&arg1[1], arg5, arg6);
            *arg1 = 0;
        }
    }
    else
    {
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(
            &arg1[1], rax_2);
        *arg1 = 0;
    }
    
    return arg1;
}
