
  int128_t* uu_expand::expand_shortcuts::haabb6e34bcaf3b4a(int128_t* arg1, int64_t* arg2)

{
    int64_t rax;
    int64_t rdx;
    rax =
        alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::h3a04b6f3747c6499(arg2[2], 8, 0x18);
    int64_t var_d0 = rax;
    int64_t var_c8 = rdx;
    int64_t var_c0 = 0;
    void var_98;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hd4209ef595d64ce3(&var_98, arg2);
    int64_t i_1;
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h99ef4437e2b6ac53(&i_1, &var_98);
    int64_t i = i_1;
    
    if (-(i) != -0x8000000000000000)
    {
        do
        {
            int32_t var_e8;
            char* var_a8;
            int64_t var_a0;
            core::str::converts::from_utf8::h8a6dc80f786921e0(&var_e8, var_a8, var_a0);
            char* var_e0;
            int64_t var_d8;
            
            if (var_e8 == 1)
            {
                label_45cb90:
                var_e8 = i;
                var_e0 = var_a8;
                var_d8 = var_a0;
                alloc::vec::Vec$LT$T$C$A$GT$::push::hba119dc25a31f021(&var_d0, &var_e8);
            }
            else
            {
                var_e8 = 0;
                
                if (!core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::ha15791ca10e43217(
                        var_e0, var_d8, 
                        core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x2d, &var_e8)))
                    goto label_45cb90;
                
                void* rax_6;
                int64_t rdx_4;
                rax_6 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(var_e0, var_d8);
                
                if (!rax_6)
                {
                    core::str::slice_error_fail::h1a2885084e28d077(var_e0, var_d8, 1, var_d8);
                    /* no return */
                }
                
                var_e8 = rax_6;
                var_e0 = rax_6 + rdx_4;
                
                if (!_$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::hbc39697378e83443(core::iter::traits::iterator::Iterator::try_fold::hc58996b470739c76(&var_e8)))
                    goto label_45cb90;
                
                void var_68;
                _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h19abee4db16fb58d(&var_68, rax_6, rdx_4);
                int64_t var_78 = 0;
                int64_t var_70_1 = rdx_4;
                int16_t var_38_1 = 1;
                core::iter::traits::iterator::Iterator::fold::hd515e644e31ad2c8(&var_78, &var_d0);
                core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h4c6d08edf5c75529(i, 
                    var_a8);
            }
            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h99ef4437e2b6ac53(&i_1, &var_98);
            i = i_1;
        } while (i != -0x8000000000000000);
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$std..ffi..os_str..OsString$GT$$GT$::h3e5317089b1282c8(&var_98);
    arg1[1] = var_c0;
    *arg1 = var_d0;
    return arg1;
}
