
  fn uu_sort::GlobalSettings::parse_byte_count::hefc4d5693dca0b97(arg1: *mut *mut i64, arg2: i64, arg3: i64) -> *mut *mut i64

{
    let mut var_58: i16 = 0;
    let mut var_78: *mut *mut [i8; 0x43] = &data_58ccc0;
    let var_70: i64 = 0x10;
    let var_68: *const i8 = "KBuffer size  does not fit in ad…";
    let var_60: i64 = 1;
    let var_56: i8 = 1;
    let mut rax: *mut c_void;
    let mut rdx: u64;
    rax = core::str::_$LT$impl$u20$str$GT$::trim_matches::ha7c02580526c77a6(arg2, arg3);
    let mut var_48: *mut i64;
    uucore::features::parser::parse_size::Parser::parse::h125c9f8b8f190c20(&var_48, &var_78, rax, 
        rdx);
    let rax_1: *mut i64 = var_48;
    let mut var_40: i128;
    let var_30: i64;
    
    if rax_1 != 4
    {
        *arg1 = rax_1;
        *arg1.byte_offset(8) = var_40;
        arg1[3] = var_30;
    }
    else
    {
        let rax_2: i64 = *var_40[8];
        let var_20_1: i64 = var_30;
        let mut var_28: i64 = rax_2;
        let mut rax_3: *mut i64;
        
        if var_30 == 0
        {
            arg1[1] = rax_2;
            rax_3 = 4;
        }
        else
        {
            var_48 = &var_28;
            var_40 = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::hf75db8903b60bf5d;
            var_78 = &data_58cca0;
            let var_70_1: i64 = 2;
            var_58 = 0;
            let var_68_1: *mut *mut i64 = &var_48;
            let var_60_1: i64 = 1;
            core::option::Option$LT$T$GT$::map_or_else::h9f6bdb3fe8306f69(&arg1[1], &var_78);
            rax_3 = 2;
        }
        
        *arg1 = rax_3;
    }
    arg1
}
