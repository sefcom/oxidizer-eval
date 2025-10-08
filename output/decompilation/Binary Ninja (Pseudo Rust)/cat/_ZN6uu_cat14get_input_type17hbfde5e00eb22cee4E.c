
  fn uu_cat::get_input_type::hbfde5e00eb22cee4(arg1: *mut i64, arg2: *mut i8, arg3: i64) -> *mut i128

{
    let mut result: *mut i128 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h736b8881c243fae3(arg2, arg3);
    
    if result == 0
    {
        let mut var_c8: i32;
        std::fs::metadata::hb2e8532d2d3376be(&var_c8, arg2);
        let mut var_e0: i8;
        
        if var_c8 != 2
        {
            let var_90: i32;
            let mut var_e4: i32 = var_90;
            let rax_3: u64 = ((var_90 & 0xf000) - 0x1000) >> 0xc;
            
            if rax_3 > 0xb
            {
                'label_45e842:
                var_e0 = &var_e4;
                let var_d8_1: fn(arg1: i64, arg2: *mut i64) -> i64 =
                    _$LT$std..fs..FileType$u20$as$u20$core..fmt..Debug$GT$::fmt::h44181ef67d9b0947;
                var_c8 = &data_419be0;
                let var_c0_1: i64 = 1;
                let var_a8_1: i64 = 0;
                let var_b8_1: *mut i8 = &var_e0;
                let var_b0_1: i64 = 1;
                return core::option::Option$LT$T$GT$::map_or_else::hca5ca0cd9da1a1e1(arg1, &var_c8);
            }
            
            result = jump_table_41a77c[rax_3] + &jump_table_41a77c;
            
            match result
            {
                0x45e81c =>
                {
                    arg1[1] = 6;
                }
                0x45e83d =>
                {
                    goto 'label_45e842;
                }
                0x45e893 =>
                {
                    arg1[1] = 3;
                }
                0x45e89c =>
                {
                    arg1[1] = 5;
                }
                0x45e8a5 =>
                {
                    arg1[1] = 7;
                }
                0x45e8ae =>
                {
                    arg1[1] = 0;
                }
                0x45e8b7 =>
                {
                    arg1[1] = 4;
                }
                0x45e8c0 =>
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
            result =
                std::io::error::repr_bitpacked::decode_repr::h8d92c8d03cfdadcc(&var_e0, var_c0);
            let var_dc: i32;
            
            if var_e0 == 0 && var_dc == 0x28
            {
                *arg1 = -0x7ffffffffffffffb;
                return core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h22e0abbd25cf35a1(
                    &var_d0);
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
