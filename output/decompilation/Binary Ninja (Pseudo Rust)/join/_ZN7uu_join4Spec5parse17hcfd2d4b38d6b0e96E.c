
  fn uu_join::Spec::parse::hcfd2d4b38d6b0e96(arg1: u64, arg2: *mut i8, arg3: i64) -> i64

{
    let mut var_80: *mut i8 = arg2;
    let mut rax_1: i8;
    let mut rdx: i32;
    rax_1 = core::str::validations::next_code_point::h0099d433804eecaf(&var_80, arg1);
    let mut rax_2: i32 = 0x110000;
    
    if (rax_1 & 1) != 0
    {
        rax_2 = rdx;
    }
    
    let mut result: i64;
    let mut var_b0: *mut i64;
    let mut var_a0: i64;
    let mut var_70: *mut *mut [i8; 0xda];
    let mut rax_7: *mut *mut [i8; 0xda];
    
    if rax_2 == 0x30
    {
        if (core::str::validations::next_code_point::h0099d433804eecaf(&var_80, arg1) & 1) != 0
        {
            'label_46d1bd:
            var_a0 = 0;
            let var_98_1: *mut i8 = arg2;
            let var_90_1: i64 = arg3;
            let var_88_1: i8 = 1;
            var_b0 = &var_a0;
            let var_a8_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            rax_7 = &data_4fe320;
            'label_46d229:
            var_70 = rax_7;
            let var_68_1: i64 = 1;
            let var_50_1: i64 = 0;
            let var_60_1: *mut *mut i64 = &var_b0;
            let var_58_1: i64 = 1;
            let mut var_40: ();
            core::option::Option$LT$T$GT$::map_or_else::h9a77d6fb89838746(&var_40, &var_70);
            let var_28_1: i32 = 1;
            *(arg1 + 8) = alloc::boxed::Box$LT$T$GT$::new::h6838e3ae00012226(&var_40);
            *(arg1 + 0x10) = &data_4fe360;
            result = 1;
        }
        else
        {
            *(arg1 + 8) = 0;
            result = 0;
        }
    }
    else
    {
        let mut rbp: i64;
        let mut rdx_1: i32;
        
        if rax_2 == 0x31
        {
            rbp = 0;
            let mut rax_4: i8;
            rax_4 = core::str::validations::next_code_point::h0099d433804eecaf(&var_80, arg1);
            
            if (rax_4 & 1) == 0 || rdx_1 != 0x2e
            {
                goto 'label_46d1bd;
            }
        }
        else
        {
            if rax_2 != 0x32
            {
                var_a0 = 0;
                let var_98_2: *mut i8 = arg2;
                let var_90_2: i64 = arg3;
                let var_88_2: i8 = 1;
                var_b0 = &var_a0;
                let var_a8_2: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                rax_7 = &data_4fe330;
                goto 'label_46d229;
            }
            
            rbp = 1;
            let mut rax_3: i8;
            rax_3 = core::str::validations::next_code_point::h0099d433804eecaf(&var_80, arg1);
            
            if (rax_3 & 1) == 0 || rdx_1 != 0x2e
            {
                goto 'label_46d1bd;
            }
        }
        let rsi: *mut i8 = var_80;
        uu_join::parse_field_number::h7876c58ca785f0e6(&var_70, rsi, 
            (&arg2[arg3]).byte_offset(-rsi));
        let rcx_1: *mut *mut [i8; 0xda] = var_70;
        let var_68: *mut *mut c_void;
        
        if rcx_1 == 0
        {
            *(arg1 + 8) = 1;
            *(arg1 + 9) = rbp;
            *(arg1 + 0x10) = var_68;
            result = 0;
        }
        else
        {
            *(arg1 + 8) = rcx_1;
            *(arg1 + 0x10) = var_68;
            result = 1;
        }
    }
    *arg1 = result;
    result
}
