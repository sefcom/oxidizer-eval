
  fn alacritty::migrate::move_value::ha75dcc59eab66952(arg1: *mut i64, arg2: *mut i64, arg3: *mut i64, arg4: i64) -> *mut i64

{
    let mut r14: *mut i64 = arg2;
    let rax_1: i64 = *arg2 - 8;
    let mut rcx: i64 = 1;
    
    if rax_1 < 4
    {
        rcx = rax_1;
    }
    
    let mut var_240: *mut *mut c_void;
    let mut rax_2: *mut *mut c_void;
    let mut rdi: *mut i64;
    
    if rcx == 2
    {
        rdi = &r14[1];
        rax_2 = &data_c83620;
    }
    else
    {
        if rcx != 1 || rax_1 >= -6
        {
            var_240 = &data_c83540;
            let var_238_1: i64 = 1;
            let var_230_1: i64 = 8;
            let var_228_1: i128 = {0};
            core::panicking::panic_fmt::h96f341d36638c225(&var_240);
            /* no return */
        }
        
        rax_2 = &data_c83560;
        rdi = r14;
    }
    
    let mut result: *mut i64;
    let mut rdx_1: *mut i32;
    result = rax_2[0xd](rdi, *arg3, arg3[1]);
    
    if result == 0
    {
        *arg1 = -0x8000000000000000;
    }
    else
    {
        let r12_1: *mut i64 = rdx_1;
        
        if *rdx_1 == 0xa
        {
            r12_1[0x15] = 1;
        }
        
        let mut var_2a0: i64;
        alacritty::migrate::move_value::_$u7b$$u7b$closure$u7d$$u7d$::hec025e6fa515b142(&var_2a0, 
            result, rdx_1);
        let mut var_190: ();
        memcpy(&var_190, r12_1, 0xb0);
        *r12_1 = 8;
        memcpy(&r12_1[1], &var_240, 0xa8);
        let mut var_320: i64 = arg4;
        let var_318_1: i64 = arg4 + 0x20;
        let var_310_1: i64 = 0;
        let mut rax_3: i64;
        let mut rdx_2: *mut i64;
        rax_3 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h013b43a415d12e5f(&var_320);
        let mut var_270: i128;
        
        if rdx_2 == 0
        {
            'label_8605ac:
            *arg1 = -0x8000000000000000;
            result =
                core::ptr::drop_in_place$LT$toml_edit..item..Item$GT$::hf5a3277b0f9450bc(&var_190);
            'label_860723:
            
            if var_2a0 != -0x7ffffffffffffffc
            {
                core::ptr::drop_in_place$LT$toml_edit..repr..Decor$GT$::hb42f26b80888f4bb(&var_2a0);
                return core::ptr::drop_in_place$LT$toml_edit..repr..Decor$GT$::hb42f26b80888f4bb(
                    &var_270);
            }
        }
        else
        {
            let mut rbp_1: *mut *mut c_void;
            let mut r13_1: *mut c_void;
            
            loop
            {
                let rcx_2: i64 = *r14 - 8;
                let mut rsi_4: i64 = 1;
                
                if rcx_2 < 4
                {
                    rsi_4 = rcx_2;
                }
                
                if rsi_4 == 1
                {
                    r13_1 = r14;
                    rbp_1 = &data_c83560;
                    
                    if rcx_2 >= -6
                    {
                        'label_86076f:
                        var_240 = &data_c83550;
                        let var_238: i64 = 1;
                        let var_230: i64 = 8;
                        let var_228: i128 = {0};
                        core::panicking::panic_fmt::h96f341d36638c225(&var_240);
                        /* no return */
                    }
                }
                else
                {
                    if rsi_4 != 2
                    {
                        goto 'label_86076f;
                    }
                    
                    r13_1 = &r14[1];
                    rbp_1 = &data_c83620;
                }
                
                if rax_3 == 1
                {
                    break;
                }
                
                let rax_4: *mut i32 = toml_edit::index::_$LT$impl$u20$core..ops..index..IndexMut$LT$I$GT$$u20$for$u20$toml_edit..item..Item$GT$::index_mut::h8dd559c352e0eb4a(r14, rdx_2);
                toml_edit::item::table::hd1abaff1c38d3b6a(&var_240);
                r14 = toml_edit::item::Item::or_insert::hed790d3213bb5c8e(rax_4, &var_240);
                rax_3 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h013b43a415d12e5f(&var_320);
                
                if rdx_2 == 0
                {
                    goto 'label_8605ac;
                }
            }
            
            let r14_2: i64 = *rdx_2;
            let r15_2: i64 = rdx_2[1];
            memcpy(&var_240, &var_190, 0xb0);
            let mut var_e0: ();
            rbp_1[0xf](&var_e0, r13_1, r14_2, r15_2, &var_240);
            core::ptr::drop_in_place$LT$core..option..Option$LT$toml_edit..item..Item$GT$$GT$::h96144d7d1d680041(&var_e0);
            let temp0_1: i64 = var_2a0;
            
            if temp0_1 != -0x7ffffffffffffffc
            {
                let zmm3_1: i128 = var_270;
                let var_308_1: i128 = var_2a0;
                let rax_8: *mut c_void = rbp_1[0x17](r13_1, *rdx_2, rdx_2[1]);
                
                if rax_8 == 0
                {
                    core::option::unwrap_failed::h893f57cb7db71cb7();
                    /* no return */
                }
                
                core::ptr::drop_in_place$LT$toml_edit..repr..Decor$GT$::hb42f26b80888f4bb(rax_8.
                    byte_offset(0x30));
                let var_280: i128;
                *rax_8.byte_offset(0x50) = var_280;
                let var_290: i128;
                *rax_8.byte_offset(0x40) = var_290;
                *rax_8.byte_offset(0x30) = var_308_1;
                core::ptr::drop_in_place$LT$toml_edit..repr..Decor$GT$::hb42f26b80888f4bb(rax_8.
                    byte_offset(0x60));
                let var_250: i128;
                *rax_8.byte_offset(0x80) = var_250;
                let var_260: i128;
                *rax_8.byte_offset(0x70) = var_260;
                *rax_8.byte_offset(0x60) = zmm3_1;
            }
            
            result = arg1;
            *result = -0x8000000000000000;
            
            if temp0_1 != -0x7ffffffffffffffc == 0
            {
                goto 'label_860723;
            }
        }
    }
    
    result
}
