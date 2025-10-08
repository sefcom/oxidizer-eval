
  fn uu_seq::split_short_args_with_value::hdae2cdacdc174560(arg1: *mut i64, arg2: i64) -> i64

{
    let mut var_90: i64 = 0;
    let var_88: i64 = 8;
    let var_80: i64 = 0;
    let mut var_78: i64 = arg2;
    let rdx: i64;
    let var_70: i64 = rdx;
    
    loop
    {
        let mut var_68: i64;
        _$LT$core..iter..adapters..cloned..Cloned$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hbe531c7145f633bd(&var_68, &var_78);
        let r12_1: i64 = var_68;
        
        if -(r12_1) == -0x8000000000000000
        {
            break;
        }
        
        let mut var_d0: i64;
        let mut var_c0: i64;
        let var_60: i64;
        let var_58: i64;
        
        if var_58 > 2
        {
            if core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h4d9821dd0efab10f(var_60, 
                "-f-s-t/home/34r7hm4n/dev/oxidize…") != 0
            {
                'label_46aece:
                let mut var_50: i64;
                core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::split_at_unchecked::hda5a3ca5c8bb6888(
                    &var_50, var_60, var_58);
                let var_48: u64;
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h8638b58448d95b8c(&var_d0, var_50, var_48);
                let var_a8_1: i64 = var_c0;
                let mut var_b8: i128 = var_d0;
                alloc::vec::Vec$LT$T$C$A$GT$::push::hd09925dbeb462d0f(&var_90, &var_b8);
                let var_40: i64;
                let var_38: u64;
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h8638b58448d95b8c(&var_d0, var_40, var_38);
                let var_a8_2: i64 = var_c0;
                var_b8 = var_d0;
                alloc::vec::Vec$LT$T$C$A$GT$::push::hd09925dbeb462d0f(&var_90, &var_b8);
                core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h47150904e9ede072(
                    r12_1, var_60);
                continue;
            }
            else
            {
                if core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h4d9821dd0efab10f(
                    var_60, "-s-t/home/34r7hm4n/dev/oxidizer/…") != 0
                {
                    goto 'label_46aece;
                }
                
                if core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h4d9821dd0efab10f(
                    var_60, "-t/home/34r7hm4n/dev/oxidizer/ox…") != 0
                {
                    goto 'label_46aece;
                }
            }
        }
        
        var_d0 = r12_1;
        let var_c8_1: i64 = var_60;
        var_c0 = var_58;
        alloc::vec::Vec$LT$T$C$A$GT$::push::hd09925dbeb462d0f(&var_90, &var_d0);
    }
    
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h240593d533816d61(arg1, &var_90)
}
