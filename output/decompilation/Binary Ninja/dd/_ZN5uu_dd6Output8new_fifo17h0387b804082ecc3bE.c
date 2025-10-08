
  char* uu_dd::Output::new_fifo::h0387b804082ecc3b(char* arg1, int64_t arg2, int64_t arg3, int32_t* arg4)

{
    void* r13 = *(arg4 + 0x88);
    
    if (!r13)
        goto label_490aac;
    
    char var_38;
    std::fs::File::open::h6f8eb2428e586d07(&var_38, arg2);
    
    if (var_38 & 1)
    {
        label_490b30:
        *(arg1 + 8) = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
        *(arg1 + 0x10) = &data_53f218;
        *arg1 = 4;
    }
    else
    {
        char var_48 = 2;
        int32_t var_34;
        
        if (!(uu_dd::Dest::seek::h5a64bc595251d974(&var_48, r13) & 1))
        {
            core::ptr::drop_in_place$LT$uu_dd..Dest$GT$::h46074e24ca5324af(var_48, var_34);
            label_490aac:
            
            if (*arg4 == 2 || *(arg4 + 8))
            {
                int64_t var_44_1 = 0x1b6;
                *var_44_1[5] = 1;
                char var_3c_1 = *(arg4 + 0x92) ^ 1;
                char var_3b_1 = *(arg4 + 0x91);
                *var_44_1[6] = *(arg4 + 0x96);
                char rax_7;
                int32_t rdx_1;
                rax_7 = uu_dd::make_linux_oflags::h8059fc6e2ea11e72(arg4 + 0x96);
                int32_t rcx = 0;
                
                if (rax_7 & 1)
                    rcx = rdx_1;
                
                var_48 = rcx;
                std::fs::OpenOptions::open::h8d324e17fb255e3b(&var_38, &var_48, arg2);
                
                if (var_38 & 1)
                    goto label_490b30;
                
                *arg1 = 2;
                *(arg1 + 4) = var_34;
                *(arg1 + 0x10) = arg4;
            }
            else
            {
                *arg1 = 3;
                *(arg1 + 0x10) = arg4;
            }
        }
        else
        {
            *(arg1 + 8) = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
            *(arg1 + 0x10) = &data_53f218;
            *arg1 = 4;
            core::ptr::drop_in_place$LT$uu_dd..Dest$GT$::h46074e24ca5324af(var_48, var_34);
        }
    }
    
    return arg1;
}
