
  int64_t* uu_dd::Input::new_file::h22226df40ef2e7a0(int64_t* arg1, int64_t arg2, int64_t arg3, void* arg4)

{
    int64_t var_48 = 0x1b600000000;
    int32_t var_40 = 0;
    int16_t var_3c = 0;
    var_40 = 1;
    int32_t rax;
    int32_t rdx;
    rax = uu_dd::make_linux_iflags::hef93cf202b98b41f(arg4 + 0x40);
    
    if (rax == 1)
        var_48 = rdx;
    
    int32_t var_58;
    std::fs::OpenOptions::open::h1ecb7e9f905cf1c8(&var_58, &var_48, arg2);
    int64_t var_38;
    _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h24d6e52343c10c0c(&var_38, &var_58);
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
            label_4d6cfd:
            arg1[1] = rcx_3;
            *(arg1 + 0xc) = fd;
            arg1[2] = arg4;
            *arg1 = 0;
        }
        else
        {
            int64_t rax_3;
            int64_t rdx_3;
            rax_3 = uu_dd::Source::skip::hb4d238ded1ebd635(&var_58, rsi_2);
            
            if (!rax_3)
            {
                rcx_3 = var_58;
                goto label_4d6cfd;
            }
            
            arg1[1] = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
            arg1[2] = &data_562e90;
            *arg1 = 1;
            core::ptr::drop_in_place$LT$uu_dd..Source$GT$::hdffc88ceb2c212a0(fd);
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
