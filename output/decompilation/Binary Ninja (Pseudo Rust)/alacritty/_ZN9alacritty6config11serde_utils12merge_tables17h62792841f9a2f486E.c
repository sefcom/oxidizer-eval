
  fn alacritty::config::serde_utils::merge_tables::h62792841f9a2f486(arg1: *mut i128, arg2: *mut i64, arg3: *mut i64) -> *mut i128

{
    let mut var_98: ();
    _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h3660a1ff1c76042d(&var_98, arg3);
    
    loop
    {
        let mut var_130: i64;
        _$LT$alloc..collections..btree..map..IntoIter$LT$K$C$V$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h26fba69c3db90331(&var_130, &var_98);
        
        if 0 + -(var_130)
        {
            break;
        }
        
        let var_108: i128;
        let var_e8_1: i128 = var_108;
        let mut var_118: i128;
        let var_f8_1: i128 = var_118;
        let var_128: i64;
        let var_120: u64;
        let mut var_b8: ();
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::remove::hef2b787fcb76ca87(
            &var_b8, arg2, var_128, var_120);
        let mut var_d8: i128;
        let var_9e: i8;
        
        if var_9e != 8
        {
            alacritty::config::serde_utils::merge::h0b6a4a70fea81bc1(&var_d8, &var_b8, &var_118);
        }
        else
        {
            let var_c8_1: i128 = var_108;
            var_d8 = var_118;
        }
        
        let mut var_50: ();
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hdc2767978468d877(
            &var_50, arg2, &var_130, &var_d8);
        core::ptr::drop_in_place$LT$core..option..Option$LT$toml..value..Value$GT$$GT$::he5352179733f92bc(&var_50);
    }
    
    core::ptr::drop_in_place$LT$toml..map..IntoIter$LT$alloc..string..String$C$toml..value..Value$GT$$GT$::h8ef1736ec8838e4c(&var_98);
    let zmm0_3: i128 = *arg2;
    arg1[1] = *arg2.byte_offset(0x10);
    *arg1 = zmm0_3;
    arg1
}
