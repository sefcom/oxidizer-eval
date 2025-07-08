
  int128_t* uu_paste::InputSource::read_until::ha189b0ba8cf073bb(int128_t** arg1, int64_t* arg2, char arg3, int64_t* arg4)

{
    int128_t* result;
    
    if (!*arg2)
    {
        int64_t* rax_1;
        int64_t* rdx_2;
        rax_1 = core::cell::RefCell$LT$T$GT$::try_borrow::h959d5806e7d4e445(arg2[1] + 0x10);
        
        if (!rax_1)
        {
            result =
                uu_paste::InputSource::read_until::_$u7b$$u7b$closure$u7d$$u7d$::h1211fc4f0eb61bc6(
                );
            *arg1 = result;
            arg1[1] = &data_5135a0;
        }
        else
        {
            int32_t* rax_2;
            char rdx_3;
            rax_2 = std::io::stdio::Stdin::lock::h161a36d857331d7f(rax_1);
            int32_t* var_30 = rax_2;
            rdx_3 &= 1;
            int64_t rax_3;
            int64_t rdx_5;
            rax_3 = _$LT$std..io..stdio..StdinLock$u20$as$u20$std..io..BufRead$GT$::read_until::h22767f011618eb41(&var_30, arg3, arg4);
            
            if (!rax_3)
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
        int64_t rdx_1;
        result = std::io::read_until::h3aa91410a41ab69d(arg2, arg3, arg4);
        
        if (!result)
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
    
    return result;
}
