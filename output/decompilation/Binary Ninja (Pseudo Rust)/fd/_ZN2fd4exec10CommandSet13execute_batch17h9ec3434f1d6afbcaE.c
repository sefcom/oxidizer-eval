
  fn fd::exec::CommandSet::execute_batch::h9ec3434f1d6afbca(arg1: *mut *mut i64, arg2: i64, arg3: *mut i32, arg4: i64, arg5: i64, arg6: i64) -> u64

{
    let mut var_c8: i64 = arg4;
    let mut var_88: *mut *mut i64 = arg1;
    let var_80: *mut c_void = &arg1[arg2 * 3];
    let mut var_78: *mut i64 = &var_c8;
    let mut var_b8: i64;
    core::iter::traits::iterator::Iterator::collect::h7897225042ca8b4c(&var_b8, &var_88);
    
    if !(0 + -(var_b8))
    {
        let mut var_f8: i128 = var_b8;
        let var_38_1: i64 = *arg3.byte_offset(0x50);
        let var_48_1: i128 = *arg3.byte_offset(0x40);
        let var_58_1: i128 = *arg3.byte_offset(0x30);
        let var_68_1: i128 = *arg3.byte_offset(0x20);
        var_78 = *arg3.byte_offset(0x10);
        var_88 = *arg3;
        let var_a8: i64;
        let var_98: i64;
        let mut rcx: i64;
        
        loop
        {
            let mut var_a0: i64;
            _$LT$core..iter..adapters..filter_map..FilterMap$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0c91a6d5114509e0(&var_a0, &var_88);
            rcx = var_a0;
            
            if rcx == -0x8000000000000000
            {
                core::ptr::drop_in_place$LT$core..iter..adapters..filter_map..FilterMap$LT$core..iter..adapters..flatten..Flatten$LT$crossbeam_channel..channel..IntoIter$LT$fd..walk..Batch$GT$$GT$$C$fd..exec..job..batch$LT$core..iter..adapters..flatten..Flatten$LT$crossbeam_channel..channel..IntoIter$LT$fd..walk..Batch$GT$$GT$$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$::hc4dbdbefda5b3203(&var_88);
                let mut rbx_2: *mut c_void = *var_f8[8];
                
                if var_a8 != 0
                {
                    let mut i_1: i64 = var_a8 * 0x150;
                    let mut i: i64;
                    
                    do
                    {
                        let rax_7: *mut *mut i64 =
                            fd::exec::CommandBuilder::finish::hfc49bcefb3885af8(rbx_2);
                        var_88 = rax_7;
                        
                        if rax_7 != 0
                        {
                            fd::exec::command::handle_cmd_error::he0c689dc29352ec0(
                                rbx_2.byte_offset(0x50), rax_7);
                            goto 'label_5f3315;
                        }
                        
                        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hf603403cb1b5404d(&var_88);
                        rbx_2 += 0x150;
                        i = i_1;
                        i_1 -= 0x150;
                    } while i != 0x150;
                    rbx_2 = *var_f8[8];
                }
                
                let rax_9: i32 = fd::exit_codes::merge_exitcodes::h427ec0cdc6d6ee56(rbx_2);
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$fd..exec..CommandBuilder$GT$$GT$::hf9cab55349afe64a(&var_f8);
                return rax_9;
            }
            
            if var_a8 != 0
            {
                break;
            }
            
            'label_5f3238:
            core::mem::drop::h3eb21fab0c0d11e6(rcx, var_98);
        }
        
        let mut r15_1: *mut i32 = *var_f8[8];
        let var_d8_1: *mut i32 = r15_1;
        let mut rbx_1: i64 = 0;
        
        loop
        {
            let var_90: i64;
            let rax_5: *mut *mut i64 = fd::exec::CommandBuilder::push::hb7cae759d47c5e7a(r15_1, 
                var_98, var_90, arg5, arg6);
            let mut var_c0: *mut *mut i64 = rax_5;
            
            if rax_5 != 0
            {
                fd::exec::command::handle_cmd_error::he0c689dc29352ec0(
                    var_d8_1.byte_offset(-rbx_1).byte_offset(0x50), rax_5);
                core::mem::drop::h3eb21fab0c0d11e6(rcx, var_98);
                core::ptr::drop_in_place$LT$core..iter..adapters..filter_map..FilterMap$LT$core..iter..adapters..flatten..Flatten$LT$crossbeam_channel..channel..IntoIter$LT$fd..walk..Batch$GT$$GT$$C$fd..exec..job..batch$LT$core..iter..adapters..flatten..Flatten$LT$crossbeam_channel..channel..IntoIter$LT$fd..walk..Batch$GT$$GT$$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$::hc4dbdbefda5b3203(&var_88);
                'label_5f3315:
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$fd..exec..CommandBuilder$GT$$GT$::hf9cab55349afe64a(&var_f8);
                break;
            }
            
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hf603403cb1b5404d(&var_c0);
            rbx_1 -= 0x150;
            r15_1 = &r15_1[0x54];
            
            if var_a8 * -0x150 == rbx_1
            {
                goto 'label_5f3238;
            }
        }
    }
    else
    {
        let var_b0: *mut *mut i64;
        fd::exec::command::handle_cmd_error::he0c689dc29352ec0(nullptr, var_b0);
        core::ptr::drop_in_place$LT$core..iter..adapters..filter_map..FilterMap$LT$core..iter..adapters..flatten..Flatten$LT$crossbeam_channel..channel..IntoIter$LT$fd..walk..Batch$GT$$GT$$C$fd..exec..job..batch$LT$core..iter..adapters..flatten..Flatten$LT$crossbeam_channel..channel..IntoIter$LT$fd..walk..Batch$GT$$GT$$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$::hc4dbdbefda5b3203(arg3);
    }
    
    let mut result: u64;
    result = 4;
    result
}
