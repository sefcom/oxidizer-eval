
  fn uu_stat::Stater::generate_tokens::hafb5d93f144f9d1e(arg1: *mut i128, arg2: *mut i8, arg3: u64, arg4: i8) -> i64

{
    let mut var_b8: i64 = 0;
    let var_b0: i64 = 8;
    let var_a8: i64 = 0;
    let mut var_70: i64;
    core::iter::traits::iterator::Iterator::collect::hc2256cc222372473(&var_70, arg2);
    let mut var_c0: i64 = 0;
    let mut var_98: i32;
    let var_68: i64;
    
    if arg3 != 0
    {
        let mut rdi_1: i64 = 0;
        
        do
        {
            let var_60: i64;
            
            if rdi_1 >= var_60
            {
                core::panicking::panic_bounds_check::h025cadc56a971af7(rdi_1, var_60);
                /* no return */
            }
            
            let rax_1: i32 = *(var_68 + (rdi_1 << 2));
            let mut var_90: i32;
            
            if rax_1 == 0x25
            {
                uu_stat::Stater::handle_percent_case::hcbef71a70831617c(&var_98, var_68, var_60, 
                    &var_c0, arg3, arg2, arg3);
                let rdx_5: i64 = var_98;
                let rax_2: i64 = var_90;
                let var_88: i64;
                
                if rdx_5 == 5
                {
                    *arg1.byte_offset(8) = rax_2;
                    arg1[1] = var_88;
                    *arg1 = -0x8000000000000000;
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$char$GT$$GT$::h0dbcc999510fd514(
                        var_70, var_68);
                    /* tailcall */
                    return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_stat..Token$GT$$GT$::h3cf71f1ca7f8d943(var_b8, var_b0);
                }
                
                let var_80: i128;
                let var_40_1: i128 = var_80;
                let mut var_58: i64 = rdx_5;
                let var_50_1: i64 = rax_2;
                let var_48_1: i64 = var_88;
                alloc::vec::Vec$LT$T$C$A$GT$::push::h67ea3e1d2f0918cb(&var_b8, &var_58);
            }
            else if rax_1 != 0x5c
            {
                var_90 = rax_1;
                var_98 = 3;
                alloc::vec::Vec$LT$T$C$A$GT$::push::h67ea3e1d2f0918cb(&var_b8, &var_98);
            }
            else if arg4 == 0
            {
                var_90 = 0x5c;
                var_98 = 3;
                alloc::vec::Vec$LT$T$C$A$GT$::push::h67ea3e1d2f0918cb(&var_b8, &var_98);
            }
            else
            {
                uu_stat::Stater::handle_escape_sequences::h968fffb30d055b36(&var_98, var_68, 
                    var_60, &var_c0, arg3, arg2, arg3);
                alloc::vec::Vec$LT$T$C$A$GT$::push::h67ea3e1d2f0918cb(&var_b8, &var_98);
            }
            rdi_1 = var_c0 + 1;
            var_c0 = rdi_1;
        } while rdi_1 < arg3;
    }
    
    if arg4 == 0
    {
        var_98 = 0;
        let mut rax_3: *mut i8;
        let mut rdx_8: u64;
        rax_3 = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0xa, &var_98);
        
        if core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::h1fce938563fb45ed(arg2, arg3, 
            rax_3, rdx_8) == 0
        {
            let var_90_1: i32 = 0xa;
            var_98 = 3;
            alloc::vec::Vec$LT$T$C$A$GT$::push::h67ea3e1d2f0918cb(&var_b8, &var_98);
        }
    }
    
    arg1[1] = var_a8;
    *arg1 = var_b8;
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$char$GT$$GT$::h0dbcc999510fd514(var_70, var_68)
}
