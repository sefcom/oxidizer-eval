
  int128_t* uu_uniq::Uniq::print_line::h32e5970fdc1721c7(void* arg1, int64_t arg2, void* arg3, int64_t arg4, int64_t arg5, int64_t arg6, char arg7)

{
    int64_t var_b0 = arg6;
    char rbp = 0xa;
    
    if (*(arg1 + 0x35))
        rbp = 0;
    
    int128_t* result;
    int64_t var_e8;
    
    if (arg6 != 1)
    {
        label_470481:
        
        if (!*(arg1 + 0x33))
        {
            result = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h4767a6aafdc81322(std::io::impls::_$LT$impl$u20$std..io..Write$u20$for$u20$alloc..boxed..Box$LT$W$GT$$GT$::write_all::ha26dee22509071d6(arg2, arg3, arg4, arg5));
            
            if (!result)
            {
                var_e8 = rbp;
                return _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h7b8303005c683fae(std::io::impls::_$LT$impl$u20$std..io..Write$u20$for$u20$alloc..boxed..Box$LT$W$GT$$GT$::write_all::ha26dee22509071d6(arg2, arg3, &var_e8, 1));
            }
        }
        else
        {
            int64_t* var_90 = &var_b0;
            uint64_t (* var_88_1)(int64_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
            var_e8 = 2;
            int64_t var_d8_1 = 0;
            int64_t var_d0_1 = 7;
            int64_t var_c8_1 = 0;
            int64_t var_c0_1 = 0x20;
            char var_b8_1 = 3;
            void* const var_80 = &data_52d918;
            int64_t var_78_1 = 2;
            int64_t* var_60_1 = &var_e8;
            int64_t var_58_1 = 1;
            int64_t** var_70_1 = &var_90;
            int64_t var_68_1 = 1;
            void var_a8;
            core::option::Option$LT$T$GT$::map_or_else::hf9a5e71691484ed0(&var_a8, &var_80);
            int64_t var_a0;
            int64_t var_98;
            void var_50;
            core::iter::traits::iterator::Iterator::chain::hdcb7d762b52e317b(&var_50, var_a0, 
                var_98 + var_a0, arg4);
            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::hac39029f6d8a5f03(&var_e8, &var_50);
            int64_t var_e0;
            int64_t rax_5 = std::io::impls::_$LT$impl$u20$std..io..Write$u20$for$u20$alloc..boxed..Box$LT$W$GT$$GT$::write_all::ha26dee22509071d6(arg2, arg3, var_e0, var_d8_1);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h0b327608f4b568de(&var_e8);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h79de3313e0d66245(&var_a8);
            result = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h4767a6aafdc81322(rax_5);
            
            if (!result)
            {
                var_e8 = rbp;
                return _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h7b8303005c683fae(std::io::impls::_$LT$impl$u20$std..io..Write$u20$for$u20$alloc..boxed..Box$LT$W$GT$$GT$::write_all::ha26dee22509071d6(arg2, arg3, &var_e8, 1));
            }
        }
    }
    else
    {
        char rax_1 = *(arg1 + 0x36);
        
        if (rax_1 == 4 || (!arg7 && (rax_1 | 2) != 3))
            goto label_470481;
        
        var_e8 = rbp;
        result = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hfa9427f084ffcfe7(std::io::impls::_$LT$impl$u20$std..io..Write$u20$for$u20$alloc..boxed..Box$LT$W$GT$$GT$::write_all::ha26dee22509071d6(arg2, arg3, &var_e8, 1));
        
        if (!result)
            goto label_470481;
    }
    return result;
}
