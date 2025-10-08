
  int64_t uu_seq::split_short_args_with_value::hdae2cdacdc174560(int64_t* arg1, int64_t arg2)

{
    int64_t var_90 = 0;
    int64_t var_88 = 8;
    int64_t var_80 = 0;
    int64_t var_78 = arg2;
    int64_t rdx;
    int64_t var_70 = rdx;
    
    while (true)
    {
        int64_t var_68;
        _$LT$core..iter..adapters..cloned..Cloned$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hbe531c7145f633bd(&var_68, &var_78);
        int64_t r12_1 = var_68;
        
        if (-(r12_1) == -0x8000000000000000)
            break;
        
        int64_t var_d0;
        int64_t var_c0;
        int64_t var_60;
        int64_t var_58;
        
        if (var_58 > 2)
        {
            if (core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h4d9821dd0efab10f(var_60, 
                "-f-s-t/home/34r7hm4n/dev/oxidize…"))
            {
                label_46aece:
                int64_t var_50;
                core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::split_at_unchecked::hda5a3ca5c8bb6888(
                    &var_50, var_60, var_58);
                uint64_t var_48;
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h8638b58448d95b8c(&var_d0, var_50, var_48);
                int64_t var_a8_1 = var_c0;
                int128_t var_b8 = var_d0;
                alloc::vec::Vec$LT$T$C$A$GT$::push::hd09925dbeb462d0f(&var_90, &var_b8);
                int64_t var_40;
                uint64_t var_38;
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h8638b58448d95b8c(&var_d0, var_40, var_38);
                int64_t var_a8_2 = var_c0;
                var_b8 = var_d0;
                alloc::vec::Vec$LT$T$C$A$GT$::push::hd09925dbeb462d0f(&var_90, &var_b8);
                core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h47150904e9ede072(
                    r12_1, var_60);
                continue;
            }
            else
            {
                if (core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h4d9821dd0efab10f(
                        var_60, "-s-t/home/34r7hm4n/dev/oxidizer/…"))
                    goto label_46aece;
                
                if (core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h4d9821dd0efab10f(
                        var_60, "-t/home/34r7hm4n/dev/oxidizer/ox…"))
                    goto label_46aece;
            }
        }
        
        var_d0 = r12_1;
        int64_t var_c8_1 = var_60;
        var_c0 = var_58;
        alloc::vec::Vec$LT$T$C$A$GT$::push::hd09925dbeb462d0f(&var_90, &var_d0);
    }
    
    return _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h240593d533816d61(arg1, &var_90);
}
