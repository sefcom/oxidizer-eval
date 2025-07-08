
  int64_t* uu_dd::Input::new_fifo::h35e5c2fb1b3ef304(int64_t* arg1, int64_t arg2, int64_t arg3, void* arg4)

{
    int64_t var_3c = 0x1b6;
    int16_t var_34 = 0;
    *var_3c[4] = 1;
    int32_t rax;
    int32_t rdx;
    rax = uu_dd::make_linux_iflags::hef93cf202b98b41f(arg4 + 0x40);
    
    if (!rax)
        rdx = rax;
    
    int32_t var_40 = rdx;
    int32_t var_30;
    std::fs::OpenOptions::open::h1ecb7e9f905cf1c8(&var_30, &var_40, arg2);
    
    if (!var_30)
    {
        int32_t var_48 = 2;
        int64_t rsi_1 = *(arg4 + 0x80);
        int32_t fd;
        int32_t rcx_1;
        
        if (!rsi_1)
        {
            rcx_1 = 2;
            label_4d6e0f:
            arg1[1] = rcx_1;
            *(arg1 + 0xc) = fd;
            arg1[2] = arg4;
            *arg1 = 0;
        }
        else
        {
            int64_t rax_3;
            int64_t rdx_2;
            rax_3 = uu_dd::Source::skip::hb4d238ded1ebd635(&var_48, rsi_1);
            
            if (!rax_3)
            {
                rcx_1 = var_48;
                goto label_4d6e0f;
            }
            
            arg1[1] = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
            arg1[2] = &data_562e90;
            *arg1 = 1;
            core::ptr::drop_in_place$LT$uu_dd..Source$GT$::hdffc88ceb2c212a0(fd);
        }
    }
    else
    {
        arg1[1] = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
        arg1[2] = &data_562e90;
        *arg1 = 1;
    }
    
    return arg1;
}
