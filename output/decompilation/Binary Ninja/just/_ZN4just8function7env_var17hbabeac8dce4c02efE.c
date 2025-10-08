
  int64_t* just::function::env_var::hbabeac8dce4c02ef(int64_t* arg1, int64_t* arg2, int64_t arg3, uint64_t arg4)

{
    int64_t var_d8 = arg3;
    uint64_t var_d0 = arg4;
    int64_t* rax_1 = *(*arg2 + 8);
    void* rax_2 = alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::h7621d24a43012b45(
        *rax_1, rax_1[1], arg3, arg4);
    
    if (!rax_2)
    {
        char var_40;
        uint64_t rdx_1 = std::env::var::haeedb8a63b9509fb(&var_40, arg3);
        int128_t var_38;
        int64_t var_28;
        
        if (!(var_40 & 1))
        {
            arg1[3] = var_28;
            *(arg1 + 8) = var_38;
            *arg1 = 0;
        }
        else
        {
            char const (** const var_c8)[0xa0];
            int64_t* var_98;
            
            if (!(0 + -(var_38)))
            {
                int64_t var_68_1 = var_28;
                int128_t var_78 = var_38;
                var_98 = &var_d8;
                int64_t (* var_90_2)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcd9ad0a553cee1ef;
                int128_t* var_88_1 = &var_78;
                int64_t (* var_80_1)(void* arg1, int64_t* arg2) =
                    _$LT$std..path..PathBuf$u20$as$u20$core..fmt..Debug$GT$::fmt::h56ce33c072e686b1;
                var_c8 = &data_82fe68;
                int64_t var_c0_2 = 2;
                int64_t var_a8_2 = 0;
                int64_t** var_b8_2 = &var_98;
                int64_t var_b0_2 = 2;
                int128_t var_58;
                core::option::Option$LT$T$GT$::map_or_else::h4ceadf09b7aa2c32(&var_58, 0, rdx_1, 
                    &var_c8);
                int64_t var_48;
                arg1[3] = var_48;
                *(arg1 + 8) = var_58;
                *arg1 = 1;
                core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::hb5088e4c98ca9abd(
                    &var_78);
            }
            else
            {
                var_98 = &var_d8;
                int64_t (* var_90_1)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcd9ad0a553cee1ef;
                var_c8 = &data_82fe48;
                int64_t var_c0_1 = 2;
                int64_t var_a8_1 = 0;
                int64_t** var_b8_1 = &var_98;
                int64_t var_b0_1 = 1;
                core::option::Option$LT$T$GT$::map_or_else::h4ceadf09b7aa2c32(&arg1[1], 0, rdx_1, 
                    &var_c8);
                *arg1 = 1;
            }
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
