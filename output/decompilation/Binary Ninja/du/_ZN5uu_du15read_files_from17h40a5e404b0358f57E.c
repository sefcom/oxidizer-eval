
  int64_t* uu_du::read_files_from::h40a5e404b0358f57(int64_t* arg1, int64_t arg2, uint64_t arg3)

{
    int64_t* result = arg1;
    int64_t var_b0 = arg2;
    uint64_t var_a8 = arg3;
    void* const var_148;
    int64_t* result_1;
    int32_t var_108;
    int64_t* var_e8;
    uint64_t var_d8;
    int64_t* var_c8;
    int64_t* var_88;
    uint64_t rax_1;
    void** const rcx_1;
    
    if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h99bb5143d53920f6(arg2, arg3, "-iso%Y-%m-%d %H:%M%Y-%m-%d %H:%M…", 1))
    {
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hac1b67b8d5e5f2cf(&var_e8, arg2, arg3);
        char* var_e0;
        
        if (!std::path::Path::is_dir::h02edbc48c38d7d9e(var_e0, var_d8))
        {
            std::fs::File::open::h980d6a34f4e65aa0(&var_108, var_b0);
            
            if (var_108 != 1)
            {
                int32_t var_104;
                std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h278545cd756cb2f0(
                    &var_148, var_104);
                uint64_t rax_14 = alloc::boxed::Box$LT$T$GT$::new::habc9403b5c01943a(&var_148);
                result_1 = result;
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hab61ff66151da0a3(&var_e8);
                rcx_1 = &data_545f58;
                rax_1 = rax_14;
                goto label_49832b;
            }
            
            int64_t* var_100;
            
            if (!std::io::error::Error::kind::h135fe00c4e7365f3(var_100))
            {
                var_c8 = var_100;
                var_88 = &var_b0;
                int64_t (* var_80_2)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hff9117abb4c135da;
                var_148 = &data_545ee8;
                int64_t var_140_3 = 2;
                int64_t var_128_4 = 0;
                int64_t** var_138_3 = &var_88;
                int64_t var_130_4 = 1;
                void var_48;
                core::option::Option$LT$T$GT$::map_or_else::hc02c35748679bc13(&var_48, &var_148);
                result[1] = std::io::error::Error::_new::hbf6e5d7f23cac6f9(0x28, 
                    alloc::boxed::Box$LT$T$GT$::new::h61e569ef930cd37d(&var_48), &data_546000);
                *result = -0x8000000000000000;
                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hd825320995beb979(&var_c8);
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hab61ff66151da0a3(&var_e8);
            }
            else
            {
                result[1] = var_100;
                *result = -0x8000000000000000;
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hab61ff66151da0a3(&var_e8);
            }
        }
        else
        {
            var_88 = &var_b0;
            int64_t (* var_80_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hff9117abb4c135da;
            var_148 = &data_545ec8;
            int64_t var_140_2 = 2;
            int64_t var_128_3 = 0;
            int64_t** var_138_2 = &var_88;
            int64_t var_130_3 = 1;
            void var_60;
            core::option::Option$LT$T$GT$::map_or_else::hc02c35748679bc13(&var_60, &var_148);
            result[1] = std::io::error::Error::_new::hbf6e5d7f23cac6f9(0x28, 
                alloc::boxed::Box$LT$T$GT$::new::h61e569ef930cd37d(&var_60), &data_546000);
            *result = -0x8000000000000000;
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hab61ff66151da0a3(&var_e8);
        }
    }
    else
    {
        result_1 = result;
        std::io::stdio::stdin::h9a05a2c3e7544b2a();
        std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h195202c034a40601(
            &var_148, &std::io::stdio::stdin::INSTANCE::heccb3522b341563b);
        rax_1 = alloc::boxed::Box$LT$T$GT$::new::hca69a254467451c0(&var_148);
        rcx_1 = &data_546058;
        label_49832b:
        int64_t var_a0 = 0;
        int64_t var_98_1 = 8;
        int64_t var_90_1 = 0;
        var_108 = rax_1;
        char var_f8_1 = 0;
        int64_t var_f0_1 = 0;
        
        while (true)
        {
            _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9cfe857fc1e43c14(&var_88, &var_108);
            int64_t var_80;
            
            if (var_80 == -0x7fffffffffffffff)
            {
                core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$std..io..Split$LT$alloc..boxed..Box$LT$dyn$u20$std..io..BufRead$GT$$GT$$GT$$GT$::h9d70051d6ef6c40f(var_108, rcx_1);
                result = result_1;
                result[2] = var_90_1;
                *result = var_a0;
                break;
            }
            
            int64_t var_78;
            
            if (var_80 == -0x8000000000000000)
            {
                result = result_1;
                result[1] = var_78;
                *result = -0x8000000000000000;
                core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$std..io..Split$LT$alloc..boxed..Box$LT$dyn$u20$std..io..BufRead$GT$$GT$$GT$$GT$::h9d70051d6ef6c40f(var_108, rcx_1);
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::heb31d09770f428f6(&var_a0);
                break;
            }
            
            uint64_t var_70;
            int64_t var_140;
            uint64_t var_138;
            
            if (!var_70)
            {
                void* var_68 = var_88 + 1;
                int64_t* rax_7;
                int64_t rdx_3;
                rax_7 = uucore::util_name::h074417a1e6395129();
                var_e8 = rax_7;
                int64_t var_e0_1 = rdx_3;
                var_c8 = &var_e8;
                int64_t (* var_c0_1)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hff9117abb4c135da;
                var_148 = &data_545f08;
                int64_t var_140_1 = 2;
                int64_t var_128_1 = 0;
                int64_t** var_138_1 = &var_c8;
                int64_t var_130_1 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_148);
                var_e8 = &var_b0;
                int64_t (* var_e0_2)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hff9117abb4c135da;
                var_d8 = &var_68;
                uint64_t (* var_d0_1)(int64_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
                var_148 = &data_545f28;
                var_140 = 3;
                int64_t var_128_2 = 0;
                var_138 = &var_e8;
                int64_t var_130_2 = 2;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_148);
                uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
            }
            else
            {
                alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_148, var_78, var_70);
                _$LT$alloc..borrow..Cow$LT$str$GT$$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::hf7c0e7c1e655e4a4(&var_e8, var_140, var_138);
                var_c8 = var_e8;
                core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::hd2b311ea2da27bf0(
                    &var_148);
                
                if (_$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::h5291ddcb580e955f(&var_c8, var_98_1, var_90_1))
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hab61ff66151da0a3(&var_c8);
                else
                {
                    var_138 = var_d8;
                    var_148 = var_c8;
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h606ac2565c1fed9c(&var_a0, &var_148);
                }
            }
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h9004fc21845d6fc2(var_80, 
                var_78);
        }
    }
    return result;
}
