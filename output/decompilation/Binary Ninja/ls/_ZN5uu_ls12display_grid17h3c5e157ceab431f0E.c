
  int128_t* uu_ls::display_grid::h3c5e157ceab431f0(int128_t* arg1, int16_t arg2, char arg3, int64_t arg4, char arg5)

{
    int64_t var_150;
    int64_t var_140;
    int128_t var_138;
    int128_t var_118;
    int128_t* const var_e8;
    int128_t* result;
    
    if (!arg2)
    {
        int128_t var_108_1 = arg1[1];
        var_118 = *arg1;
        _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd7a5e426642ce2a7(&var_150, &var_118);
        
        if (var_150 != -0x8000000000000000)
        {
            int64_t var_128_2 = var_140;
            var_138 = var_150;
            int64_t rax_9;
            
            while (true)
            {
                int128_t* var_60 = &var_138;
                int64_t (* var_58_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                var_e8 = &data_423c10;
                int64_t var_e0_2 = 1;
                int64_t var_c8_1 = 0;
                int128_t** var_d8_1 = &var_60;
                int64_t var_d0_1 = 1;
                int128_t* result_1;
                
                if (std::io::Write::write_fmt::h51abc44b465d2e67(arg4, &var_e8))
                    result_1 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                else
                {
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(
                        &var_138);
                    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd7a5e426642ce2a7(&var_150, &var_118);
                    
                    if (var_150 == -0x8000000000000000)
                    {
                        core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::h7998da7d166a96bf(&var_118);
                        var_e8 = &data_6125b8;
                        int64_t var_e0_4 = 1;
                        int64_t var_d8_3 = 8;
                        var_d0_1 = {0};
                        rax_9 = std::io::Write::write_fmt::h51abc44b465d2e67(arg4, &var_e8);
                        break;
                    }
                    
                    int64_t var_128_3 = var_140;
                    var_138 = var_150;
                    var_e8 = &data_612688;
                    int64_t var_e0_3 = 1;
                    int64_t var_d8_2 = 8;
                    var_d0_1 = {0};
                    
                    if (!std::io::Write::write_fmt::h51abc44b465d2e67(arg4, &var_e8))
                        continue;
                    else
                        result_1 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                }
                
                result = result_1;
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_138);
                core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::h7998da7d166a96bf(&var_118);
                goto label_52a4ae_1;
            }
            
            if (rax_9)
            {
                result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                label_52a4ae:
                return result;
            }
        }
        else
            core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::h7998da7d166a96bf(&var_118);
    }
    else
    {
        if (!arg5)
            core::iter::traits::iterator::Iterator::collect::hd9d48ed126578877(&var_150, arg1);
        else
        {
            void var_50;
            core::iter::traits::iterator::Iterator::map::hb476dda254653927(&var_50, arg1);
            alloc::vec::in_place_collect::_$LT$impl$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$u20$for$u20$alloc..vec..Vec$LT$T$GT$$GT$::from_iter::h0bf662e477722034(&var_150, &var_50);
        }
        
        int128_t* var_148;
        var_e8 = var_148;
        void* var_e0_1 = var_148 + var_140 * 0x18;
        void* rax_2 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::h2bc0af22b69decc2(&var_e8);
        int128_t zmm0_2;
        
        if (!rax_2)
            zmm0_2 = data_423ad0[0x10][0];
        else
        {
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h09d6369a280ff05a(
                &var_e8, "\t?????????+bd-cannot access a T…", 1);
            zmm0_2 = var_e8;
            void* var_d8;
            rax_2 = var_d8;
        }
        
        int64_t var_128_1 = var_140;
        var_138 = var_150;
        char var_f8_1 = arg3;
        var_118 = zmm0_2;
        int128_t var_108;
        var_108 = rax_2;
        *var_108[8] = arg2;
        term_grid::Grid$LT$T$GT$::new::he78d9ee35961568e(&var_e8, &var_138, &var_118);
        var_138 = &var_e8;
        *var_138[8] =
            _$LT$term_grid..Grid$LT$T$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h7f040c401bf95897;
        var_118 = &data_423c10;
        *var_118[8] = 1;
        var_f8_1 = 0;
        var_108 = &var_138;
        *var_108[8] = 1;
        
        if (std::io::Write::write_fmt::h51abc44b465d2e67(arg4, &var_118))
        {
            result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
            core::ptr::drop_in_place$LT$term_grid..Grid$LT$alloc..string..String$GT$$GT$::he436f5c930c56467(&var_e8);
            label_52a4ae_1:
            return result;
        }
        
        core::ptr::drop_in_place$LT$term_grid..Grid$LT$alloc..string..String$GT$$GT$::he436f5c930c56467(&var_e8);
    }
    return nullptr;
}
