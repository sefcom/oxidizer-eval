
  fn bat::assets::asset_from_cache::h3795340a0ae6536f(arg1: *mut i8, arg2: i64) -> i64

{
    let mut var_f8: *const i8 = "theme setsyntax setacknowledgeme…";
    let var_f0: i64 = 9;
    let mut var_e8: i64;
    std::fs::read::h93dd606058041d1c(&var_e8, arg2);
    let mut var_d0: i64 = arg2;
    let rdx: i64;
    let var_c8: i64 = rdx;
    let var_c0: *const *const i8 = &var_f8;
    let r15_1: i64 = var_e8;
    let var_e0: i64;
    let mut var_b8: i128;
    let result: i64;
    
    if -(r15_1) == -0x8000000000000000
    {
        bat::assets::asset_from_cache::_$u7b$$u7b$closure$u7d$$u7d$::h8a94705fbd0f6edf(&var_b8, 
            &var_d0, var_e0);
        let zmm0: i128 = var_b8;
        *arg1 = 0xb;
        *arg1.byte_offset(8) = zmm0;
        *arg1.byte_offset(0x18) = result;
        return result;
    }
    
    let var_d8: i64;
    let mut var_68: i8;
    bat::assets::asset_from_contents::h9aebca1bb60e2b9a(&var_68, var_e0, var_d8, 
        "theme setsyntax setacknowledgeme…");
    let mut zmm0_1: i128;
    let mut zmm1_1: i128;
    let mut zmm2_1: i128;
    let mut zmm3_1: i128;
    
    if var_68 != 0xd
    {
        bat::assets::asset_from_cache::_$u7b$$u7b$closure$u7d$$u7d$::h324a9a628ccba514(&var_b8, 
            &var_f8, &var_68);
        let var_78: i128;
        *arg1.byte_offset(0x40) = var_78;
        zmm0_1 = var_b8;
        zmm1_1 = result;
        let var_98: i128;
        zmm2_1 = var_98;
        let var_88: i128;
        zmm3_1 = var_88;
    }
    else
    {
        let var_28: i128;
        *arg1.byte_offset(0x40) = var_28;
        zmm0_1 = var_68;
        let var_58: i128;
        zmm1_1 = var_58;
        let var_48: i128;
        zmm2_1 = var_48;
        let var_38: i128;
        zmm3_1 = var_38;
    }
    
    *arg1.byte_offset(0x30) = zmm3_1;
    *arg1.byte_offset(0x20) = zmm2_1;
    *arg1.byte_offset(0x10) = zmm1_1;
    *arg1 = zmm0_1;
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h1e41457799ed3462(r15_1, var_e0)
}
