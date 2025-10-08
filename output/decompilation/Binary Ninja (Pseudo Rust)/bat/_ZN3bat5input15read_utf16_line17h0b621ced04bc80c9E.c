
  fn bat::input::read_utf16_line::h0b621ced04bc80c9(arg1: *mut i8, arg2: i64, arg3: *mut c_void, arg4: *mut i64, arg5: i8, arg6: i8) -> *mut i8

{
    let mut var_58: i64;
    let mut var_50_1: i64;
    let mut rbp_1: i64;
    
    loop
    {
        var_58 = 0;
        var_50_1 = 1;
        let var_48_1: i64 = 0;
        let mut rax_1: i8;
        let mut rdx_1: i64;
        rax_1 = std::io::impls::_$LT$impl$u20$std..io..BufRead$u20$for$u20$alloc..boxed..Box$LT$B$GT$$GT$::read_until::hc140cba533622c8b(arg2, arg3, arg5, &var_58);
        
        if (rax_1 & 1) != 0
        {
            *arg1.byte_offset(8) = rdx_1;
            *arg1 = 1;
            return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h1e41457799ed3462(
                var_58, var_50_1);
        }
        
        if rdx_1 == 0
        {
            rbp_1 = arg4[2];
            break;
        }
        
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h30747c9efb6a6381(arg4, var_50_1, var_48_1 + var_50_1);
        rbp_1 = arg4[2];
        
        if rbp_1 >= 2
        {
            let rax_2: i64 = arg4[1];
            
            if *(rax_2 + rbp_1 - 2) == arg6 && *(rax_2 + rbp_1 - 1) == arg5
            {
                break;
            }
        }
        
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h1e41457799ed3462(var_58, 
            var_50_1);
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h1e41457799ed3462(var_58, var_50_1);
    arg1[1] = rbp_1 != 0;
    *arg1 = 0;
    arg1
}
