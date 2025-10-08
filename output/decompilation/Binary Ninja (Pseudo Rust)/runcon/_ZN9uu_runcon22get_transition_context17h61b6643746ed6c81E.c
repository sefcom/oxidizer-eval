
  fn uu_runcon::get_transition_context::h61b6643746ed6c81(arg1: *mut i32, arg2: i64, arg3: i64) -> u64

{
    let mut result_1: i32;
    selinux::SecurityClass::from_name::h5c3f7ce53126572e(&result_1);
    let mut result: u64 = result_1;
    let var_ec: i16;
    let var_ea: i128;
    let var_da: i128;
    let var_ca: i128;
    
    if result != 0xa
    {
        let var_ba: i16;
        *arg1.byte_offset(0x36) = var_ba;
        *arg1.byte_offset(0x26) = var_ca;
        *arg1.byte_offset(0x16) = var_da;
        *arg1.byte_offset(6) = var_ea;
        *arg1 = result;
        arg1[1] = var_ec;
        *arg1.byte_offset(0x38) = "Getting process security classCo…";
        *arg1.byte_offset(0x40) = 0x1e;
    }
    else
    {
        selinux::SecurityContext::of_path::heca6cb6c406495b7(&result_1, arg2);
        
        if result_1 == 0xa
        {
            if *var_ea[2] == 2
            {
                return uu_runcon::errors::Error::from_io1::h2e5a1b363c345453(arg1, 
                    "getfileconGetting security conte…", 0xa, arg2, arg3, 0x3d00000002);
            }
            
            let var_a8_1: i128 = var_da;
            let mut var_b8: i128 = var_ea;
            selinux::SecurityContext::current::h79d84b1b82db0947(&result_1, 0);
            let result_2: i32 = result_1;
            
            if result_2 != 0xa
            {
                let rcx_4: i32 = *var_da[0xe];
                let var_98_1: i128 = var_ec;
                *arg1.byte_offset(0x28) = var_ca;
                let var_48_1: i128 = var_98_1;
                let var_38_1: i128 = var_ea;
                let var_28_1: i32 = rcx_4;
                arg1[9] = rcx_4;
                *arg1.byte_offset(0x14) = var_ea;
                *arg1.byte_offset(4) = var_98_1;
                *arg1 = result_2;
                *arg1.byte_offset(0x38) = "Getting security context of the …";
                *arg1.byte_offset(0x40) = 0x2f;
            }
            else
            {
                let mut var_68: i128 = var_ea;
                let var_58_1: i128 = var_da;
                selinux::SecurityContext::of_labeling_decision::hca9d9018d75f9852(&result_1, 
                    &var_68, &var_b8, var_ec, 1, 0);
                
                if result_1 != 0xa
                {
                    *arg1.byte_offset(0x30) = *var_ca[0xa];
                    let zmm0_4: i128 = result_1;
                    *arg1.byte_offset(0x20) = var_da;
                    *arg1.byte_offset(0x10) = var_ea;
                    *arg1 = zmm0_4;
                    *arg1.byte_offset(0x38) = "Computing result of process tran…";
                    *arg1.byte_offset(0x40) = 0x26;
                }
                else
                {
                    *arg1.byte_offset(0x18) = var_da;
                    *arg1.byte_offset(8) = var_ea;
                    *arg1 = 0x11;
                }
                
                core::ptr::drop_in_place$LT$selinux..SecurityContext$GT$::h1515c5d0d295c3c5();
            }
            
            return core::ptr::drop_in_place$LT$selinux..SecurityContext$GT$::h1515c5d0d295c3c5();
        }
        
        result = *var_ca[0xa];
        *arg1.byte_offset(0x30) = result;
        let zmm0_2: i128 = result_1;
        *arg1.byte_offset(0x20) = var_da;
        *arg1.byte_offset(0x10) = var_ea;
        *arg1 = zmm0_2;
        *arg1.byte_offset(0x38) = "Getting security context of comm…";
        *arg1.byte_offset(0x40) = 0x28;
    }
    result
}
