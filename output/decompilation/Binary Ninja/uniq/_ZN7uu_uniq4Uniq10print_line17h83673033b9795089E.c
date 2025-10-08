
  int64_t uu_uniq::Uniq::print_line::h83673033b9795089(void* arg1, int64_t arg2, void* arg3, int64_t arg4, int64_t arg5, int64_t arg6, char arg7)

{
    int64_t r12 = arg4;
    void* rbp = arg3;
    int64_t var_78 = arg6;
    char rbx = 0xa;
    
    if (*(arg1 + 0x35))
        rbx = 0;
    
    uint32_t rax = *(arg1 + 0x36);
    arg4 = rax == 4;
    arg3 = arg6 != 1;
    arg3 |= arg4;
    int64_t result;
    void* const var_70;
    
    if (arg3 || (!arg7 && (rax | 2) != 3))
    {
        label_45ce71:
        
        if (!*(arg1 + 0x33))
        {
            result = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h8767c281263d92b0(std::io::impls::_$LT$impl$u20$std..io..Write$u20$for$u20$alloc..boxed..Box$LT$W$GT$$GT$::write_all::h6df7c91e7a49ffa3(arg2, rbp, r12, arg5));
            
            if (!result)
            {
                var_70 = rbx;
                return _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h6fd0b16c849806eb(std::io::impls::_$LT$impl$u20$std..io..Write$u20$for$u20$alloc..boxed..Box$LT$W$GT$$GT$::write_all::h6df7c91e7a49ffa3(arg2, rbp, &var_70, 1));
            }
        }
        else
        {
            int64_t* var_40 = &var_78;
            uint64_t (* var_38_1)(int64_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
            var_70 = &data_4f46e0;
            int64_t var_68_1 = 2;
            void* const var_50_1 = &data_419460;
            int64_t var_48_1 = 1;
            int64_t** var_60_1 = &var_40;
            int64_t var_58_1 = 1;
            int64_t var_98;
            core::option::Option$LT$T$GT$::map_or_else::h5c88071545ab2f48(&var_98, &var_70);
            int64_t rax_3 = var_98;
            int64_t var_90;
            int64_t var_88;
            core::iter::traits::iterator::Iterator::chain::h9a7e3a90ed01e4ce(&var_70, var_90, 
                var_88 + var_90, r12);
            core::iter::traits::iterator::Iterator::collect::h5ff8954b863752ae(&var_98, &var_70);
            int64_t rax_4 = std::io::impls::_$LT$impl$u20$std..io..Write$u20$for$u20$alloc..boxed..Box$LT$W$GT$$GT$::write_all::h6df7c91e7a49ffa3(arg2, rbp, var_90, var_88);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h3f599eadcec40bb4(var_98, 
                var_90);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h6d1453c045ffd4fd(rax_3, var_90);
            result = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h8767c281263d92b0(rax_4);
            
            if (!result)
            {
                var_70 = rbx;
                return _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h6fd0b16c849806eb(std::io::impls::_$LT$impl$u20$std..io..Write$u20$for$u20$alloc..boxed..Box$LT$W$GT$$GT$::write_all::h6df7c91e7a49ffa3(arg2, rbp, &var_70, 1));
            }
        }
    }
    else
    {
        var_70 = rbx;
        result = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h6fd0b16c849806eb(std::io::impls::_$LT$impl$u20$std..io..Write$u20$for$u20$alloc..boxed..Box$LT$W$GT$$GT$::write_all::h6df7c91e7a49ffa3(arg2, rbp, &var_70, 1));
        
        if (!result)
            goto label_45ce71;
    }
    return result;
}
