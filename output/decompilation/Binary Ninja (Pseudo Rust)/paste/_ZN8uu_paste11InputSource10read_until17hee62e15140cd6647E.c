
  fn uu_paste::InputSource::read_until::hee62e15140cd6647(arg1: *mut u64, arg2: *mut i64, arg3: i8, arg4: *mut i64) -> u64

{
    let mut result: u64;
    
    if *arg2 == 0
    {
        let rdi_1: *mut c_void = arg2[1];
        let rax_1: i64 = *rdi_1.byte_offset(0x10);
        
        if rax_1 <= 0x7ffffffffffffffe
        {
            *rdi_1.byte_offset(0x10) = rax_1 + 1;
            let mut rax_3: *mut i32;
            let mut rdx_2: i8;
            rax_3 = std::io::stdio::Stdin::lock::h8b2bf765bae79e2f(rdi_1.byte_offset(0x18));
            let mut var_30: *mut i32 = rax_3;
            rdx_2 &= 1;
            let mut rax_4: i8;
            let mut rdx_4: i64;
            rax_4 = _$LT$std..io..stdio..StdinLock$u20$as$u20$std..io..BufRead$GT$::read_until::hc4dcd49adc43842d(&var_30, arg3, arg4);
            
            if (rax_4 & 1) == 0
            {
                result =
                    core::ptr::drop_in_place$LT$std..io..stdio..StdinLock$GT$::h06b5396e228f8c46(
                    var_30, rdx_2);
                core::ptr::drop_in_place$LT$core..cell..Ref$LT$std..io..stdio..Stdin$GT$$GT$::hd490dcf690ae2af4(rdi_1.byte_offset(0x10));
                arg1[1] = rdx_4;
                *arg1 = 0;
            }
            else
            {
                *arg1 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                arg1[1] = &data_4df680;
                result =
                    core::ptr::drop_in_place$LT$std..io..stdio..StdinLock$GT$::h06b5396e228f8c46(
                    var_30, rdx_2);
                core::ptr::drop_in_place$LT$core..cell..Ref$LT$std..io..stdio..Stdin$GT$$GT$::hd490dcf690ae2af4(rdi_1.byte_offset(0x10));
            }
        }
        else
        {
            result =
                uu_paste::InputSource::read_until::_$u7b$$u7b$closure$u7d$$u7d$::hbb47ba783e9932d7(
                );
            *arg1 = result;
            arg1[1] = &data_4decf0;
        }
    }
    else
    {
        let mut rdx_1: i64;
        result = std::io::read_until::h9513ee7dd612d999(arg2, arg3, arg4);
        
        if (result & 1) == 0
        {
            arg1[1] = rdx_1;
            *arg1 = 0;
        }
        else
        {
            result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
            *arg1 = result;
            arg1[1] = &data_4df680;
        }
    }
    
    result
}
