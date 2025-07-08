
  int64_t uu_tee::process_error::hc119a53a6ae92dfc(char* arg1, int64_t arg2, void* arg3, int64_t* arg4)

{
    int64_t result = arg2;
    void* const var_90;
    int64_t* var_60;
    int64_t var_40;
    
    if (!arg1)
    {
        label_4b3801:
        
        if (std::io::error::Error::kind::hb2ff5fa058639b3d(arg2) == 0xb)
        {
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hb33ceb02c1cf9a1d(arg2);
            return 0;
        }
        
        int64_t rax_6;
        int64_t rdx_1;
        rax_6 = uucore::util_name::h60d842bf27b05e82();
        var_40 = rax_6;
        int64_t var_38_2 = rdx_1;
        var_60 = &var_40;
        int64_t (* var_58_3)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h845947ade0b20afc;
        var_90 = &data_51f9a8;
        int64_t var_88_3 = 2;
        int64_t var_70_3 = 0;
        int64_t** var_80_3 = &var_60;
        int64_t var_78_3 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_90);
        int128_t zmm0_2 = *(arg3 + 8);
        var_40 = 0;
        var_38_2 = zmm0_2;
        char var_28_2 = 0;
        var_60 = &var_40;
        int64_t (* var_58_4)(void* arg1, void* arg2) =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        int64_t* var_50_2 = &result;
        int64_t (* var_48_2)(int64_t* arg1, int64_t* arg2) =
            _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
        var_90 = &data_51f9c8;
        int64_t var_88_4 = 3;
        int64_t var_70_4 = 0;
        int64_t** var_80_4 = &var_60;
        int64_t var_78_4 = 2;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_90);
        goto label_4b38e3;
    }
    
    switch (jump_table_413afc[*arg1])
    {
        case 0x9fc28:
        {
            int64_t rax_4;
            int64_t rdx;
            rax_4 = uucore::util_name::h60d842bf27b05e82();
            var_40 = rax_4;
            int64_t var_38_1 = rdx;
            var_60 = &var_40;
            int64_t (* var_58_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h845947ade0b20afc;
            var_90 = &data_51f9a8;
            int64_t var_88_1 = 2;
            int64_t var_70_1 = 0;
            int64_t** var_80_1 = &var_60;
            int64_t var_78_1 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_90);
            int128_t zmm0_1 = *(arg3 + 8);
            var_40 = 0;
            var_38_1 = zmm0_1;
            char var_28_1 = 0;
            var_60 = &var_40;
            int64_t (* var_58_2)(void* arg1, void* arg2) =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            int64_t* var_50_1 = &result;
            int64_t (* var_48_1)(int64_t* arg1, int64_t* arg2) = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
            var_90 = &data_51f9c8;
            int64_t var_88_2 = 3;
            int64_t var_70_2 = 0;
            int64_t** var_80_2 = &var_60;
            int64_t var_78_2 = 2;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_90);
            label_4b38e3:
            *arg4 += 1;
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hb33ceb02c1cf9a1d(result);
            return 0;
            break;
        }
        case 0x9fd02:
        {
            goto label_4b3801;
        }
        case 0x9fdfd:
        {
            int64_t rax_8;
            int64_t rdx_2;
            rax_8 = uucore::util_name::h60d842bf27b05e82();
            var_40 = rax_8;
            int64_t var_38_3 = rdx_2;
            var_60 = &var_40;
            int64_t (* var_58_5)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h845947ade0b20afc;
            var_90 = &data_51f9a8;
            int64_t var_88_5 = 2;
            int64_t var_70_5 = 0;
            int64_t** var_80_5 = &var_60;
            int64_t var_78_5 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_90);
            int128_t zmm0_3 = *(arg3 + 8);
            var_40 = 0;
            var_38_3 = zmm0_3;
            char var_28_3 = 0;
            var_60 = &var_40;
            int64_t (* var_58_6)(void* arg1, void* arg2) =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            int64_t* var_50_3 = &result;
            int64_t (* var_48_3)(int64_t* arg1, int64_t* arg2) = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
            var_90 = &data_51f9c8;
            int64_t var_88_6 = 3;
            int64_t var_70_6 = 0;
            int64_t** var_80_6 = &var_60;
            int64_t var_78_6 = 2;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_90);
            return result;
            break;
        }
        case 0x9fed7:
        {
            if (std::io::error::Error::kind::hb2ff5fa058639b3d(arg2) == 0xb)
            {
                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hb33ceb02c1cf9a1d(arg2);
                return 0;
            }
            
            int64_t rax_10;
            int64_t rdx_3;
            rax_10 = uucore::util_name::h60d842bf27b05e82();
            var_40 = rax_10;
            int64_t var_38_4 = rdx_3;
            var_60 = &var_40;
            int64_t (* var_58_7)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h845947ade0b20afc;
            var_90 = &data_51f9a8;
            int64_t var_88_7 = 2;
            int64_t var_70_7 = 0;
            int64_t** var_80_7 = &var_60;
            int64_t var_78_7 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_90);
            int128_t zmm0_4 = *(arg3 + 8);
            var_40 = 0;
            var_38_4 = zmm0_4;
            char var_28_4 = 0;
            var_60 = &var_40;
            int64_t (* var_58_8)(void* arg1, void* arg2) =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            int64_t* var_50_4 = &result;
            int64_t (* var_48_4)(int64_t* arg1, int64_t* arg2) = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
            var_90 = &data_51f9c8;
            int64_t var_88_8 = 3;
            int64_t var_70_8 = 0;
            int64_t** var_80_8 = &var_60;
            int64_t var_78_8 = 2;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_90);
            return result;
            break;
        }
    }
}
