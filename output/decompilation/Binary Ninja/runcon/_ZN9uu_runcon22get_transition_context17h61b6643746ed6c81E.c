
  uint64_t uu_runcon::get_transition_context::h61b6643746ed6c81(int32_t* arg1, int64_t arg2, int64_t arg3)

{
    int32_t result_1;
    selinux::SecurityClass::from_name::h5c3f7ce53126572e(&result_1);
    uint64_t result = result_1;
    int16_t var_ec;
    int128_t var_ea;
    int128_t var_da;
    int128_t var_ca;
    
    if (result != 0xa)
    {
        int16_t var_ba;
        *(arg1 + 0x36) = var_ba;
        *(arg1 + 0x26) = var_ca;
        *(arg1 + 0x16) = var_da;
        *(arg1 + 6) = var_ea;
        *arg1 = result;
        arg1[1] = var_ec;
        *(arg1 + 0x38) = "Getting process security classCo…";
        *(arg1 + 0x40) = 0x1e;
    }
    else
    {
        selinux::SecurityContext::of_path::heca6cb6c406495b7(&result_1, arg2);
        
        if (result_1 == 0xa)
        {
            if (*var_ea[2] == 2)
                return uu_runcon::errors::Error::from_io1::h2e5a1b363c345453(arg1, 
                    "getfileconGetting security conte…", 0xa, arg2, arg3, 0x3d00000002);
            
            int128_t var_a8_1 = var_da;
            int128_t var_b8 = var_ea;
            selinux::SecurityContext::current::h79d84b1b82db0947(&result_1, 0);
            int32_t result_2 = result_1;
            
            if (result_2 != 0xa)
            {
                int32_t rcx_4 = *var_da[0xe];
                int128_t var_98_1 = var_ec;
                *(arg1 + 0x28) = var_ca;
                int128_t var_48_1 = var_98_1;
                int128_t var_38_1 = var_ea;
                int32_t var_28_1 = rcx_4;
                arg1[9] = rcx_4;
                *(arg1 + 0x14) = var_ea;
                *(arg1 + 4) = var_98_1;
                *arg1 = result_2;
                *(arg1 + 0x38) = "Getting security context of the …";
                *(arg1 + 0x40) = 0x2f;
            }
            else
            {
                int128_t var_68 = var_ea;
                int128_t var_58_1 = var_da;
                selinux::SecurityContext::of_labeling_decision::hca9d9018d75f9852(&result_1, 
                    &var_68, &var_b8, var_ec, 1, 0);
                
                if (result_1 != 0xa)
                {
                    *(arg1 + 0x30) = *var_ca[0xa];
                    int128_t zmm0_4 = result_1;
                    *(arg1 + 0x20) = var_da;
                    *(arg1 + 0x10) = var_ea;
                    *arg1 = zmm0_4;
                    *(arg1 + 0x38) = "Computing result of process tran…";
                    *(arg1 + 0x40) = 0x26;
                }
                else
                {
                    *(arg1 + 0x18) = var_da;
                    *(arg1 + 8) = var_ea;
                    *arg1 = 0x11;
                }
                
                core::ptr::drop_in_place$LT$selinux..SecurityContext$GT$::h1515c5d0d295c3c5();
            }
            
            return core::ptr::drop_in_place$LT$selinux..SecurityContext$GT$::h1515c5d0d295c3c5();
        }
        
        result = *var_ca[0xa];
        *(arg1 + 0x30) = result;
        int128_t zmm0_2 = result_1;
        *(arg1 + 0x20) = var_da;
        *(arg1 + 0x10) = var_ea;
        *arg1 = zmm0_2;
        *(arg1 + 0x38) = "Getting security context of comm…";
        *(arg1 + 0x40) = 0x28;
    }
    return result;
}
