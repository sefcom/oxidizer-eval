
  int64_t* uu_rm::remove_dir::h7d132cab7d9f675c(int64_t arg1, int64_t arg2, void* arg3)

{
    if (uu_rm::prompt_dir::h3ebab050e61d8097(arg1, arg2, *(arg3 + 6)))
    {
        int64_t var_58;
        std::fs::read_dir::h67bbb91b5f22fd39(&var_58, arg1);
        void* const var_c8;
        int64_t var_98;
        int64_t* var_78;
        char var_50;
        int64_t* result;
        
        if (var_50 == 2)
        {
            int64_t rax_1;
            int64_t rdx_2;
            rax_1 = uucore::util_name::h60d842bf27b05e82();
            var_98 = rax_1;
            int64_t var_90_1 = rdx_2;
            var_78 = &var_98;
            int64_t (* var_70_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h051bb22b4e362819;
            var_c8 = &data_527970;
            int64_t var_c0_1 = 2;
            int64_t var_a8_1 = 0;
            int64_t** var_b8_1 = &var_78;
            int64_t var_b0_1 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_c8);
            var_98 = 1;
            int64_t var_90_2 = arg1;
            int64_t var_88_1 = arg2;
            char var_80_1 = 1;
            var_78 = &var_98;
            int64_t (* var_70_2)(void* arg1, void* arg2) =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            var_c8 = &data_527aa8;
            int64_t var_c0_2 = 2;
            int64_t var_a8_2 = 0;
            int64_t** var_b8_2 = &var_78;
            int64_t var_b0_2 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_c8);
            
            if (var_50 != 2)
            {
                core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h5145ffa430dccd8e(&var_58);
                result = 1;
                return result;
            }
            
            label_4b8332:
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..ReadDir$C$std..io..error..Error$GT$$GT$::hfd9476c8e1bbd8eb(&var_58);
            result = 1;
            return result;
        }
        
        int64_t var_38 = var_58;
        char var_30_1 = var_50;
        
        if (!(*(arg3 + 4) | *(arg3 + 3)))
        {
            int64_t rax_4;
            int64_t rdx_3;
            rax_4 = uucore::util_name::h60d842bf27b05e82();
            var_98 = rax_4;
            int64_t var_90_3 = rdx_3;
            var_78 = &var_98;
            int64_t (* var_70_3)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h051bb22b4e362819;
            var_c8 = &data_527970;
            int64_t var_c0_3 = 2;
            int64_t var_a8_3 = 0;
            int64_t** var_b8_3 = &var_78;
            int64_t var_b0_3 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_c8);
            var_98 = 1;
            int64_t var_90_4 = arg1;
            int64_t var_88_2 = arg2;
            char var_80_2 = 1;
            var_78 = &var_98;
            int64_t (* var_70_4)(void* arg1, void* arg2) =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            var_c8 = &data_527a50;
            int64_t var_c0_4 = 2;
            int64_t var_a8_4 = 0;
            int64_t** var_b8_4 = &var_78;
            int64_t var_b0_4 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_c8);
            label_4b8321:
            core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h5145ffa430dccd8e(&var_38);
            
            if (var_50 == 2)
                goto label_4b8332;
            
            result = 1;
            return result;
        }
        
        _$LT$std..fs..ReadDir$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h153c1e0177592fe2(&var_c8, &var_38);
        
        if (var_c8)
        {
            core::ptr::drop_in_place$LT$core..option..Option$LT$core..result..Result$LT$std..fs..DirEntry$C$std..io..error..Error$GT$$GT$$GT$::hef23df45bf09fd2e(&var_c8);
            int64_t rax_5;
            int64_t rdx_4;
            rax_5 = uucore::util_name::h60d842bf27b05e82();
            var_98 = rax_5;
            int64_t var_90_5 = rdx_4;
            var_78 = &var_98;
            int64_t (* var_70_5)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h051bb22b4e362819;
            var_c8 = &data_527970;
            int64_t var_c0_5 = 2;
            int64_t var_a8_5 = 0;
            int64_t** var_b8_5 = &var_78;
            int64_t var_b0_5 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_c8);
            var_98 = 1;
            int64_t var_90_6 = arg1;
            int64_t var_88_3 = arg2;
            char var_80_3 = 1;
            var_78 = &var_98;
            int64_t (* var_70_6)(void* arg1, void* arg2) =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            var_c8 = &data_527aa8;
            int64_t var_c0_6 = 2;
            int64_t var_a8_6 = 0;
            int64_t** var_b8_6 = &var_78;
            int64_t var_b0_6 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_c8);
            goto label_4b8321;
        }
        
        core::ptr::drop_in_place$LT$core..option..Option$LT$core..result..Result$LT$std..fs..DirEntry$C$std..io..error..Error$GT$$GT$$GT$::hef23df45bf09fd2e(&var_c8);
        int64_t* rax_6 = std::fs::remove_dir::h3ace2cb00c00de8e(arg1);
        int64_t* var_48;
        
        if (rax_6)
        {
            var_48 = rax_6;
            
            if (std::io::error::Error::kind::hb2ff5fa058639b3d(rax_6) != 1)
            {
                int64_t rax_9;
                int64_t rdx_7;
                rax_9 = uucore::util_name::h60d842bf27b05e82();
                var_98 = rax_9;
                int64_t var_90_9 = rdx_7;
                var_78 = &var_98;
                int64_t (* var_70_9)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h051bb22b4e362819;
                var_c8 = &data_527970;
                int64_t var_c0_10 = 2;
                int64_t var_a8_10 = 0;
                int64_t** var_b8_10 = &var_78;
                int64_t var_b0_10 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_c8);
                var_98 = 1;
                int64_t var_90_10 = arg1;
                int64_t var_88_5 = arg2;
                char var_80_6 = 1;
                var_78 = &var_98;
                int64_t (* var_70_10)(void* arg1, void* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                int64_t* var_68_1 = &var_48;
                int64_t (* var_60_1)(int64_t* arg1, int64_t* arg2) = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                var_c8 = &data_5279d0;
                int64_t var_c0_11 = 3;
                int64_t var_a8_11 = 0;
                int64_t** var_b8_11 = &var_78;
                int64_t var_b0_11 = 2;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_c8);
            }
            else
            {
                int64_t rax_8;
                int64_t rdx_5;
                rax_8 = uucore::util_name::h60d842bf27b05e82();
                var_98 = rax_8;
                int64_t var_90_7 = rdx_5;
                var_78 = &var_98;
                int64_t (* var_70_7)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h051bb22b4e362819;
                var_c8 = &data_527970;
                int64_t var_c0_7 = 2;
                int64_t var_a8_7 = 0;
                int64_t** var_b8_7 = &var_78;
                int64_t var_b0_7 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_c8);
                var_98 = 1;
                int64_t var_90_8 = arg1;
                int64_t var_88_4 = arg2;
                char var_80_4 = 1;
                var_78 = &var_98;
                int64_t (* var_70_8)(void* arg1, void* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                var_c8 = &data_5279b0;
                int64_t var_c0_8 = 2;
                int64_t var_a8_8 = 0;
                int64_t** var_b8_8 = &var_78;
                int64_t var_b0_8 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_c8);
            }
            
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h333f14ee3ed91a78(&var_48);
            goto label_4b8321;
        }
        
        if (*(arg3 + 5))
        {
            uu_rm::normalize::hc5c72b2dd9f7b482(&var_78, arg1);
            var_98 = 1;
            int64_t var_90;
            int64_t var_70;
            var_90 = var_70;
            char var_80_5 = 1;
            var_48 = &var_98;
            int64_t (* var_40_1)(void* arg1, void* arg2) =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            var_c8 = &data_527a88;
            int64_t var_c0_9 = 2;
            int64_t var_a8_9 = 0;
            int64_t** var_b8_9 = &var_48;
            int64_t var_b0_9 = 1;
            std::io::stdio::_print::he918bceb0c89db46(&var_c8);
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h7c5c2bfda3b8aa48(&var_78);
        }
        
        core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h5145ffa430dccd8e(&var_38);
        
        if (var_50 == 2)
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..ReadDir$C$std..io..error..Error$GT$$GT$::hfd9476c8e1bbd8eb(&var_58);
    }
    
    return nullptr;
}
