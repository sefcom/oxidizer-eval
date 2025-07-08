
  char* uu_dd::Output::new_fifo::h5805a896b59d1442(char* arg1, int64_t arg2, int64_t arg3, int64_t* arg4)

{
    void* r13 = arg4[0x11];
    
    if (!r13)
        goto label_4d7a7d;
    
    int32_t var_38;
    std::fs::File::open::h7106e998c3d1654b(&var_38, arg2);
    
    if (var_38)
    {
        label_4d7b03:
        *(arg1 + 8) = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
        *(arg1 + 0x10) = &data_562e90;
        *arg1 = 4;
    }
    else
    {
        char var_48 = 2;
        int64_t rax_2;
        int64_t rdx_1;
        rax_2 = uu_dd::Dest::seek::hf206f28f02b500d6(&var_48, r13);
        int32_t var_34;
        
        if (!rax_2)
        {
            core::ptr::drop_in_place$LT$uu_dd..Dest$GT$::h3e1c9cbf5a8b743c(var_48, var_34);
            label_4d7a7d:
            int64_t rax_4 = *arg4;
            
            if (!rax_4)
            {
                if (arg4[1])
                    goto label_4d7a9f;
                
                *arg1 = 3;
                *(arg1 + 0x10) = arg4;
            }
            else if (rax_4 != 1 || arg4[1])
            {
                label_4d7a9f:
                int32_t var_44;
                var_44 = 0x100000001b6;
                char var_3c_1 = *(arg4 + 0x92) ^ 1;
                char var_3b_1 = *(arg4 + 0x91);
                char var_3e_1 = *(arg4 + 0x96);
                int32_t rax_8;
                int32_t rdx_2;
                rax_8 = uu_dd::make_linux_oflags::hc5c67f9cb15d8524(arg4 + 0x96);
                
                if (!rax_8)
                    rdx_2 = rax_8;
                
                var_48 = rdx_2;
                std::fs::OpenOptions::open::h1ecb7e9f905cf1c8(&var_38, &var_48, arg2);
                
                if (var_38)
                    goto label_4d7b03;
                
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
            *(arg1 + 8) = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
            *(arg1 + 0x10) = &data_562e90;
            *arg1 = 4;
            core::ptr::drop_in_place$LT$uu_dd..Dest$GT$::h3e1c9cbf5a8b743c(var_48, var_34);
        }
    }
    
    return arg1;
}
