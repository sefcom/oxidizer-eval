
  fn uu_paste::InputSource::read_until::ha189b0ba8cf073bb(arg1: *mut *mut i128, arg2: *mut i64, arg3: i8, arg4: *mut i64) -> *mut i128

{
    let mut result: *mut i128;
    
    if *arg2 == 0
    {
        let mut rax_1: *mut i64;
        let mut rdx_2: *mut i64;
        rax_1 = core::cell::RefCell$LT$T$GT$::try_borrow::h959d5806e7d4e445(arg2[1] + 0x10);
        
        if rax_1 == 0
        {
            result =
                uu_paste::InputSource::read_until::_$u7b$$u7b$closure$u7d$$u7d$::h1211fc4f0eb61bc6(
                );
            *arg1 = result;
            arg1[1] = &data_5135a0;
        }
        else
        {
            let mut rax_2: *mut i32;
            let mut rdx_3: i8;
            rax_2 = std::io::stdio::Stdin::lock::h161a36d857331d7f(rax_1);
            let mut var_30: *mut i32 = rax_2;
            rdx_3 &= 1;
            let mut rax_3: i64;
            let mut rdx_5: i64;
            rax_3 = _$LT$std..io..stdio..StdinLock$u20$as$u20$std..io..BufRead$GT$::read_until::h22767f011618eb41(&var_30, arg3, arg4);
            
            if rax_3 == 0
            {
                result =
                    core::ptr::drop_in_place$LT$std..io..stdio..StdinLock$GT$::h4cb87d9107df2b81(
                    var_30, rdx_3);
                core::ptr::drop_in_place$LT$core..cell..Ref$LT$std..io..stdio..Stdin$GT$$GT$::h971a788c5bfdd900(rdx_2);
                arg1[1] = rdx_5;
                *arg1 = nullptr;
            }
            else
            {
                *arg1 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                arg1[1] = &data_513b28;
                result =
                    core::ptr::drop_in_place$LT$std..io..stdio..StdinLock$GT$::h4cb87d9107df2b81(
                    var_30, rdx_3);
                core::ptr::drop_in_place$LT$core..cell..Ref$LT$std..io..stdio..Stdin$GT$$GT$::h971a788c5bfdd900(rdx_2);
            }
        }
    }
    else
    {
        let mut rdx_1: i64;
        result = std::io::read_until::h3aa91410a41ab69d(arg2, arg3, arg4);
        
        if result == 0
        {
            arg1[1] = rdx_1;
            *arg1 = nullptr;
        }
        else
        {
            result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
            *arg1 = result;
            arg1[1] = &data_513b28;
        }
    }
    
    result
}
