
  fn uu_df::blocks::block_size_from_env::h0875cabe2802aae1() -> i64

{
    let mut var_78: *const i8 = "DF_BLOCK_SIZEBLOCK_SIZEBLOCKSIZE…";
    let var_70: i64 = 0xd;
    let var_68: *const i8 = "BLOCK_SIZEBLOCKSIZEsrc/uu/df/src…";
    let var_60: i64 = 0xa;
    let var_58: *const i8 = "BLOCKSIZEsrc/uu/df/src/columns.r…";
    let var_50: i64 = 9;
    let var_48: i64 = 0;
    let var_40: i64 = 3;
    let mut var_b8: i64;
    
    loop
    {
        let rax_1: i64 = _$LT$core..array..iter..IntoIter$LT$T$C$_$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hcf71787afda94e57(&var_78);
        
        if rax_1 == 0
        {
            core::ptr::drop_in_place$LT$core..array..iter..IntoIter$LT$$RF$str$C$3_usize$GT$$GT$::h810d07154baeed19();
            return 0;
        }
        
        std::env::var::hec353e942184343c(&var_b8, rax_1);
        
        if var_b8 == 0
        {
            break;
        }
        
        core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h122bc1b4c76f4cd7(&var_b8);
    }
    
    let var_a0: u64;
    let var_88_1: u64 = var_a0;
    let var_b0: i128;
    let mut var_98: i128 = var_b0;
    let mut var_38: i32;
    uucore::parser::parse_size::parse_size_u64::h6825c2c9656edafa(&var_38, *var_98[8], var_a0);
    let mut rbp: i64;
    rbp = var_38 == 3;
    core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$uucore..parser..parse_size..ParseSizeError$GT$$GT$::hc8411f64556cc8d7(&var_38);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4c5421f62a6f6c4d(&var_98);
    
    if var_b8 != 0
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h122bc1b4c76f4cd7(&var_b8);
    }
    
    let mut result: i64;
    result = rbp;
    core::ptr::drop_in_place$LT$core..array..iter..IntoIter$LT$$RF$str$C$3_usize$GT$$GT$::h810d07154baeed19();
    result
}
