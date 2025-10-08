
  uint64_t uu_paste::InputSource::read_until::hee62e15140cd6647(uint64_t* arg1, int64_t* arg2, char arg3, int64_t* arg4)

{
    uint64_t result;
    
    if (!*arg2)
    {
        void* rdi_1 = arg2[1];
        int64_t rax_1 = *(rdi_1 + 0x10);
        
        if (rax_1 <= 0x7ffffffffffffffe)
        {
            *(rdi_1 + 0x10) = rax_1 + 1;
            int32_t* rax_3;
            char rdx_2;
            rax_3 = std::io::stdio::Stdin::lock::h8b2bf765bae79e2f(rdi_1 + 0x18);
            int32_t* var_30 = rax_3;
            rdx_2 &= 1;
            char rax_4;
            int64_t rdx_4;
            rax_4 = _$LT$std..io..stdio..StdinLock$u20$as$u20$std..io..BufRead$GT$::read_until::hc4dcd49adc43842d(&var_30, arg3, arg4);
            
            if (!(rax_4 & 1))
            {
                result =
                    core::ptr::drop_in_place$LT$std..io..stdio..StdinLock$GT$::h06b5396e228f8c46(
                    var_30, rdx_2);
                core::ptr::drop_in_place$LT$core..cell..Ref$LT$std..io..stdio..Stdin$GT$$GT$::hd490dcf690ae2af4(rdi_1 + 0x10);
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
                core::ptr::drop_in_place$LT$core..cell..Ref$LT$std..io..stdio..Stdin$GT$$GT$::hd490dcf690ae2af4(rdi_1 + 0x10);
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
        int64_t rdx_1;
        result = std::io::read_until::h9513ee7dd612d999(arg2, arg3, arg4);
        
        if (!(result & 1))
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
    
    return result;
}
