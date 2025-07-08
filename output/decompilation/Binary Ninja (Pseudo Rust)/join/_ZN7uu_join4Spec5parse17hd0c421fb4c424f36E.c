
  fn uu_join::Spec::parse::hd0c421fb4c424f36(arg1: u64, arg2: i64, arg3: i64) -> *mut i128

{
    let mut var_80: i64 = arg2;
    let mut rax_1: i32;
    let mut rdx: i32;
    rax_1 = core::str::validations::next_code_point::hd261ae405076a208(&var_80, arg1);
    let mut rax_2: i32 = 0x110000;
    
    if rax_1 != 0
    {
        rax_2 = rdx;
    }
    
    let mut result: *mut i128;
    let mut var_b0: *mut i64;
    let mut var_a0: i64;
    let mut var_70: *mut *mut c_void;
    let mut var_40: ();
    let mut rax_5: *mut *mut c_void;
    let mut rax_7: *mut *mut c_void;
    
    if rax_2 == 0x30
    {
        if core::str::validations::next_code_point::hd261ae405076a208(&var_80, arg1) == 0
        {
            *(arg1 + 8) = 0;
            result = nullptr;
            *arg1 = result;
        }
        else
        {
            var_a0 = 0;
            let var_98_2: i64 = arg2;
            let var_90_2: i64 = arg3;
            let var_88_2: i8 = 1;
            var_b0 = &var_a0;
            let var_a8_2: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            rax_7 = &data_535260;
            'label_4c389e:
            var_70 = rax_7;
            let var_68_2: i64 = 1;
            let var_50_2: i64 = 0;
            let var_60_2: *mut *mut i64 = &var_b0;
            let var_58_2: i64 = 1;
            core::option::Option$LT$T$GT$::map_or_else::h84da32fb4d9c85b4(&var_40, &var_70);
            let var_28_2: i32 = 1;
            *(arg1 + 8) = alloc::boxed::Box$LT$T$GT$::new::h7aaaeb17d3fe937d(&var_40);
            rax_5 = &data_5352b8;
            'label_4c38f8:
            *(arg1 + 0x10) = rax_5;
            result = 1;
            *arg1 = result;
        }
    }
    else
    {
        let mut rbp: i64;
        
        if rax_2 == 0x31
        {
            rbp = 0;
        }
        else
        {
            if rax_2 != 0x32
            {
                var_a0 = 0;
                let var_98_3: i64 = arg2;
                let var_90_3: i64 = arg3;
                let var_88_3: i8 = 1;
                var_b0 = &var_a0;
                let var_a8_3: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                rax_7 = &data_535270;
                goto 'label_4c389e;
            }
            
            rbp = 1;
        }
        
        let mut rax_3: i32;
        let mut rdx_1: i32;
        rax_3 = core::str::validations::next_code_point::hd261ae405076a208(&var_80, arg1);
        
        if rax_3 == 0 || rdx_1 != 0x2e
        {
            var_a0 = 0;
            let var_98_1: i64 = arg2;
            let var_90_1: i64 = arg3;
            let var_88_1: i8 = 1;
            var_b0 = &var_a0;
            let var_a8_1: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            var_70 = &data_535260;
            let var_68_1: i64 = 1;
            let var_50_1: i64 = 0;
            let var_60_1: *mut *mut i64 = &var_b0;
            let var_58_1: i64 = 1;
            core::option::Option$LT$T$GT$::map_or_else::h84da32fb4d9c85b4(&var_40, &var_70);
            let var_28_1: i32 = 1;
            result = alloc::boxed::Box$LT$T$GT$::new::h7aaaeb17d3fe937d(&var_40);
            *(arg1 + 8) = result;
            *(arg1 + 0x10) = &data_5352b8;
            *arg1 = 1;
        }
        else
        {
            let mut rax_4: *mut i8;
            let mut rdx_2: i64;
            rax_4 = core::slice::iter::Iter$LT$T$GT$::make_slice::h63c620eea536cd3e(var_80, 
                arg2 + arg3);
            uu_join::parse_field_number::h9316b11a89c3fc26(&var_70, rax_4, rdx_2);
            let rcx_1: *mut *mut c_void = var_70;
            let var_68: *mut *mut c_void;
            rax_5 = var_68;
            
            if rcx_1 != 0
            {
                *(arg1 + 8) = rcx_1;
                goto 'label_4c38f8;
            }
            
            *(arg1 + 8) = 1;
            *(arg1 + 9) = rbp;
            *(arg1 + 0x10) = rax_5;
            result = nullptr;
            *arg1 = result;
        }
    }
    result
}
