
  fn uu_du::read_block_size::hba09d611c2cef060(arg1: *mut u64, arg2: *mut c_void, arg3: u64) -> *mut u64

{
    if arg2 == 0
    {
        let mut var_b0: i64 = 0;
        let var_a8_1: i64 = 3;
        let var_a0_1: *const i8 = "DU_BLOCK_SIZEBLOCK_SIZEBLOCKSIZE…";
        let var_98_1: i64 = 0xd;
        let var_90_1: *const i8 = "BLOCK_SIZEBLOCKSIZEPOSIXLY_CORRE…";
        let var_88_1: i64 = 0xa;
        let var_80_1: *mut c_void = "BLOCKSIZEPOSIXLY_CORRECTblock-si…";
        let var_78_1: i64 = 9;
        let mut rax_1: i64 = core::array::iter::iter_inner::PolymorphicIter$LT$$u5b$core..mem..maybe_uninit..MaybeUninit$LT$T$GT$$u5d$$GT$::next::hd8fd032b1ad3245f(&var_b0);
        
        if rax_1 == 0
        {
            'label_49680a:
            std::env::var::h7ee537fe83ab501a(&var_b0, "POSIXLY_CORRECTblock-size ignore…");
            let rbp_1: i8 = var_b0;
            core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h96b9c4a0e931651b(&var_b0);
            
            if (rbp_1 & 1) == 0
            {
                arg1[1] = 0x200;
                *arg1 = 0;
            }
            else
            {
                arg1[1] = 0x400;
                *arg1 = 0;
            }
        }
        else
        {
            loop
            {
                let mut var_d0: i64;
                std::env::var::h7ee537fe83ab501a(&var_d0, rax_1);
                
                if var_d0 != 0
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h96b9c4a0e931651b(&var_d0);
                    rax_1 = core::array::iter::iter_inner::PolymorphicIter$LT$$u5b$core..mem..maybe_uninit..MaybeUninit$LT$T$GT$$u5d$$GT$::next::hd8fd032b1ad3245f(&var_b0);
                    
                    if rax_1 == 0
                    {
                        goto 'label_49680a;
                    }
                }
                else
                {
                    let var_c0: *mut c_void;
                    let var_b8: u64;
                    let mut var_50: i32;
                    uucore::features::parser::parse_size::parse_size_u64::hcabf5090504a6d94(
                        &var_50, var_c0, var_b8);
                    let mut var_c8: ();
                    
                    if var_50 == 4
                    {
                        let var_48: i64;
                        arg1[1] = var_48;
                        *arg1 = 0;
                        core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$uucore..features..parser..parse_size..ParseSizeError$GT$$GT$::hcc1c8ea971724a57(&var_50);
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4aad5465963d35b9(
                            &var_c8);
                        break;
                    }
                    
                    core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$uucore..features..parser..parse_size..ParseSizeError$GT$$GT$::hcc1c8ea971724a57(&var_50);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4aad5465963d35b9(
                        &var_c8);
                    rax_1 = core::array::iter::iter_inner::PolymorphicIter$LT$$u5b$core..mem..maybe_uninit..MaybeUninit$LT$T$GT$$u5d$$GT$::next::hd8fd032b1ad3245f(&var_b0);
                    
                    if rax_1 == 0
                    {
                        goto 'label_49680a;
                    }
                }
            }
        }
    }
    else
    {
        let mut var_70: i32;
        uucore::features::parser::parse_size::parse_size_u64::hcabf5090504a6d94(&var_70, arg2, 
            arg3);
        let mut rax: u64;
        let mut rcx_1: *mut *mut c_void;
        
        if var_70 != 4
        {
            rax = uu_du::read_block_size::_$u7b$$u7b$closure$u7d$$u7d$::h5d9afd330ddffbba(arg2, 
                arg3, &var_70);
            rcx_1 = &data_545bc0;
        }
        else
        {
            let var_68: *mut *mut c_void;
            rcx_1 = var_68;
            rax = 0;
        }
        
        arg1[1] = rcx_1;
        *arg1 = rax;
    }
    
    arg1
}
