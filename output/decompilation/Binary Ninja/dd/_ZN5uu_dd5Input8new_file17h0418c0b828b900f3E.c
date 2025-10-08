
  int64_t* uu_dd::Input::new_file::h0418c0b828b900f3(int64_t* arg1, int64_t arg2, int64_t arg3, void* arg4)

{
    int64_t var_48 = 0x1b600000000;
    int32_t var_40 = 0;
    int16_t var_3c = 0;
    var_40 = 1;
    char rax;
    int32_t rdx;
    rax = uu_dd::make_linux_iflags::h57fea4a25e7c1d02(arg4 + 0x40);
    
    if (rax & 1)
        var_48 = rdx;
    
    int32_t var_58;
    std::fs::OpenOptions::open::h8d324e17fb255e3b(&var_58, &var_48, arg2);
    int64_t var_38;
    _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hce41de670c7cb157(&var_38, &var_58);
    int64_t rax_1 = var_38;
    int32_t fd;
    
    if (!rax_1)
    {
        var_58 = 0;
        int64_t rsi_2 = *(arg4 + 0x80);
        int32_t rcx_3;
        
        if (!rsi_2)
        {
            rcx_3 = 0;
            label_48fc0b:
            arg1[1] = rcx_3;
            *(arg1 + 0xc) = fd;
            arg1[2] = arg4;
            *arg1 = 0;
        }
        else
        {
            if (!(uu_dd::Source::skip::h56a70907a2f0c0f8(&var_58, rsi_2) & 1))
            {
                rcx_3 = var_58;
                goto label_48fc0b;
            }
            
            arg1[1] = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
            arg1[2] = &data_53f218;
            *arg1 = 1;
            core::ptr::drop_in_place$LT$uu_dd..Source$GT$::h0f98b01c459a3648(fd);
        }
    }
    else
    {
        arg1[1] = rax_1;
        arg1[2] = fd;
        *arg1 = 1;
    }
    return arg1;
}
