
  int64_t* uu_dd::Input::new_fifo::hf14f96568a514b5d(int64_t* arg1, int64_t arg2, int64_t arg3, void* arg4)

{
    int64_t var_2c = 0x1b6;
    int16_t var_24 = 0;
    *var_2c[4] = 1;
    char rax;
    int32_t rdx;
    rax = uu_dd::make_linux_iflags::h57fea4a25e7c1d02(arg4 + 0x40);
    int32_t rcx = 0;
    
    if (rax & 1)
        rcx = rdx;
    
    int32_t var_30 = rcx;
    int32_t var_40;
    std::fs::OpenOptions::open::h8d324e17fb255e3b(&var_40, &var_30, arg2);
    
    if (var_40 != 1)
    {
        var_40 = 2;
        int64_t rsi_1 = *(arg4 + 0x80);
        int32_t fd;
        int32_t rcx_2;
        
        if (!rsi_1)
        {
            rcx_2 = 2;
            label_48fda4:
            arg1[1] = rcx_2;
            *(arg1 + 0xc) = fd;
            arg1[2] = arg4;
            *arg1 = 0;
        }
        else
        {
            if (!(uu_dd::Source::skip::h56a70907a2f0c0f8(&var_40, rsi_1) & 1))
            {
                rcx_2 = var_40;
                goto label_48fda4;
            }
            
            arg1[1] = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
            arg1[2] = &data_53f218;
            *arg1 = 1;
            core::ptr::drop_in_place$LT$uu_dd..Source$GT$::h0f98b01c459a3648(fd);
        }
    }
    else
    {
        arg1[1] = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
        arg1[2] = &data_53f218;
        *arg1 = 1;
    }
    
    return arg1;
}
