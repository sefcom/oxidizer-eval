
  int64_t uu_tee::process_error::ha4eebf41bd63a2e6(char* arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t* arg5)

{
    int64_t result = arg2;
    void* const var_98;
    int64_t* var_68;
    int64_t var_48;
    
    if (!arg1)
    {
        label_45d53a:
        
        if (std::io::error::Error::kind::h135fe00c4e7365f3(arg2) == 0xb)
        {
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hc399f132f0256091(result);
            return 0;
        }
        
        int64_t rax_6;
        int64_t rdx_1;
        rax_6 = uucore::util_name::h074417a1e6395129();
        var_48 = rax_6;
        int64_t var_40_3 = rdx_1;
        var_68 = &var_48;
        int64_t (* var_60_3)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h0c0a48ca77de87af;
        var_98 = &data_4ea4f0;
        int64_t var_90_3 = 2;
        int64_t var_78_3 = 0;
        int64_t** var_88_3 = &var_68;
        int64_t var_80_3 = 1;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_98);
        var_48 = 0;
        int64_t var_40_4 = arg3;
        int64_t var_38_2 = arg4;
        char var_30_2 = 0;
        var_68 = &var_48;
        int64_t (* var_60_4)(int32_t* arg1, int64_t* arg2) =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
        int64_t* var_58_2 = &result;
        int64_t (* var_50_2)(int64_t* arg1, int64_t* arg2) =
            _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
        var_98 = &data_4ea510;
        int64_t var_90_4 = 3;
        int64_t var_78_4 = 0;
        int64_t** var_88_4 = &var_68;
        int64_t var_80_4 = 2;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_98);
        goto label_45d61f;
    }
    
    switch (jump_table_4191f8[*arg1])
    {
        case 0x44262:
        {
            int64_t rax_4;
            int64_t rdx;
            rax_4 = uucore::util_name::h074417a1e6395129();
            var_48 = rax_4;
            int64_t var_40_1 = rdx;
            var_68 = &var_48;
            int64_t (* var_60_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h0c0a48ca77de87af;
            var_98 = &data_4ea4f0;
            int64_t var_90_1 = 2;
            int64_t var_78_1 = 0;
            int64_t** var_88_1 = &var_68;
            int64_t var_80_1 = 1;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_98);
            var_48 = 0;
            int64_t var_40_2 = arg3;
            int64_t var_38_1 = arg4;
            char var_30_1 = 0;
            var_68 = &var_48;
            int64_t (* var_60_2)(int32_t* arg1, int64_t* arg2) =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            int64_t* var_58_1 = &result;
            int64_t (* var_50_1)(int64_t* arg1, int64_t* arg2) = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
            var_98 = &data_4ea510;
            int64_t var_90_2 = 3;
            int64_t var_78_2 = 0;
            int64_t** var_88_2 = &var_68;
            int64_t var_80_2 = 2;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_98);
            label_45d61f:
            *arg5 += 1;
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hc399f132f0256091(result);
            return 0;
            break;
        }
        case 0x4433f:
        {
            goto label_45d53a;
        }
        case 0x4443b:
        {
            int64_t rax_8;
            int64_t rdx_2;
            rax_8 = uucore::util_name::h074417a1e6395129();
            var_48 = rax_8;
            int64_t var_40_5 = rdx_2;
            var_68 = &var_48;
            int64_t (* var_60_5)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h0c0a48ca77de87af;
            var_98 = &data_4ea4f0;
            int64_t var_90_5 = 2;
            int64_t var_78_5 = 0;
            int64_t** var_88_5 = &var_68;
            int64_t var_80_5 = 1;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_98);
            var_48 = 0;
            int64_t var_40_6 = arg3;
            int64_t var_38_3 = arg4;
            char var_30_3 = 0;
            var_68 = &var_48;
            int64_t (* var_60_6)(int32_t* arg1, int64_t* arg2) =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            int64_t* var_58_3 = &result;
            int64_t (* var_50_3)(int64_t* arg1, int64_t* arg2) = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
            var_98 = &data_4ea510;
            int64_t var_90_6 = 3;
            int64_t var_78_6 = 0;
            int64_t** var_88_6 = &var_68;
            int64_t var_80_6 = 2;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_98);
            return result;
            break;
        }
        case 0x44518:
        {
            if (std::io::error::Error::kind::h135fe00c4e7365f3(arg2) == 0xb)
            {
                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hc399f132f0256091(result);
                return 0;
            }
            
            int64_t rax_10;
            int64_t rdx_3;
            rax_10 = uucore::util_name::h074417a1e6395129();
            var_48 = rax_10;
            int64_t var_40_7 = rdx_3;
            var_68 = &var_48;
            int64_t (* var_60_7)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h0c0a48ca77de87af;
            var_98 = &data_4ea4f0;
            int64_t var_90_7 = 2;
            int64_t var_78_7 = 0;
            int64_t** var_88_7 = &var_68;
            int64_t var_80_7 = 1;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_98);
            var_48 = 0;
            int64_t var_40_8 = arg3;
            int64_t var_38_4 = arg4;
            char var_30_4 = 0;
            var_68 = &var_48;
            int64_t (* var_60_8)(int32_t* arg1, int64_t* arg2) =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            int64_t* var_58_4 = &result;
            int64_t (* var_50_4)(int64_t* arg1, int64_t* arg2) = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
            var_98 = &data_4ea510;
            int64_t var_90_8 = 3;
            int64_t var_78_8 = 0;
            int64_t** var_88_8 = &var_68;
            int64_t var_80_8 = 2;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_98);
            return result;
            break;
        }
    }
}
