
  fn uu_cat::get_input_type::h6ff27855215d6960(arg1: *mut i64, arg2: i64, arg3: u64) -> *mut i128

{
    let mut result: *mut i128 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h09045d22b44111b2(arg2, arg3, "-src/uu/cat/src/cat.rs\t$\n^M^I^…", 1);
    
    if result == 0
    {
        let mut var_c8: i32;
        std::fs::metadata::h3e125373b8ea3fd1(&var_c8, arg2);
        let mut var_e0: i8;
        
        if var_c8 != 2
        {
            let var_90: i32;
            let mut var_e4: i32 = var_90;
            let rax_5: u64 = ((var_90 & 0xf000) - 0x1000) >> 0xc;
            
            if rax_5 > 0xb
            {
                'label_4af4c3:
                var_e0 = &var_e4;
                let var_d8_1: fn(arg1: i64, arg2: *mut c_void) -> i64 =
                    _$LT$std..fs..FileType$u20$as$u20$core..fmt..Debug$GT$::fmt::h1f46686f72d55e02;
                var_c8 = &data_414590;
                let var_c0_1: i64 = 1;
                let var_a8_1: i64 = 0;
                let var_b8_1: *mut i8 = &var_e0;
                let var_b0_1: i64 = 1;
                return core::option::Option$LT$T$GT$::map_or_else::h4b4049542ff9b626(arg1, &var_c8);
            }
            
            result = jump_table_41cbac[rax_5] + &jump_table_41cbac;
            
            match result
            {
                0x4af492 =>
                {
                    arg1[1] = 6;
                }
                0x4af4be =>
                {
                    goto 'label_4af4c3;
                }
                0x4af517 =>
                {
                    arg1[1] = 3;
                }
                0x4af520 =>
                {
                    arg1[1] = 5;
                }
                0x4af529 =>
                {
                    arg1[1] = 7;
                }
                0x4af532 =>
                {
                    arg1[1] = 0;
                }
                0x4af53b =>
                {
                    arg1[1] = 4;
                }
                0x4af544 =>
                {
                    arg1[1] = 1;
                }
            }
            
            *arg1 = -0x7ffffffffffffffa;
        }
        else
        {
            let var_c0: i64;
            let mut var_d0: i64 = var_c0;
            std::io::error::repr_bitpacked::decode_repr::h387b6a13e4bd8d9a(&var_e0, var_c0);
            result = jump_table_41cbdc[var_e0] + &jump_table_41cbdc;
            let var_dc: i32;
            
            match result
            {
                0x4af49b =>
                {
                    if var_dc == 0x28
                    {
                        *arg1 = -0x7ffffffffffffffb;
                        return core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hf0d35f7c4ff0a311(&var_d0);
                    }
                }
            }
            
            *arg1 = -0x8000000000000000;
            arg1[1] = var_c0;
        }
    }
    else
    {
        arg1[1] = 2;
        *arg1 = -0x7ffffffffffffffa;
    }
    
    result
}
