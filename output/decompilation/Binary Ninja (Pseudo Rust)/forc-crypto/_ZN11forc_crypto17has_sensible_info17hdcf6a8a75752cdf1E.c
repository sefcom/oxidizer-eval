
  fn forc_crypto::has_sensible_info::hdcf6a8a75752cdf1(arg1: i64) -> u64

{
    let mut var_48: i8;
    serde_json::value::to_value::hd8c76e686e47df0b(&var_48, arg1);
    let rax: u32 = var_48;
    let mut rbx: i64 = 0;
    
    if rax == 6
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$serde_json..value..Value$C$serde_json..error..Error$GT$$GT$::h8c3816a840eb2f41(&var_48);
    }
    else
    {
        if rax != 5
        {
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h05e5c3c511967cda(&var_48);
            return rbx;
        }
        
        let var_40: i128;
        let mut var_28: i128 = var_40;
        let var_30: i64;
        let var_18_1: i64 = var_30;
        let rax_2: i64 =
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::h1293bc298712dbcc(
            var_28, *var_28[8]);
        core::ptr::drop_in_place$LT$serde_json..map..Map$LT$alloc..string..String$C$serde_json..value..Value$GT$$GT$::hbfd65977d82915b4(&var_28);
        rbx = rax_2 != 0;
        let rax_3: u32 = var_48;
        
        if rax_3 != 5
        {
            if rax_3 != 6
            {
                core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h05e5c3c511967cda(
                    &var_48);
                return rbx;
            }
            
            core::ptr::drop_in_place$LT$core..result..Result$LT$serde_json..value..Value$C$serde_json..error..Error$GT$$GT$::h8c3816a840eb2f41(&var_48);
        }
    }
    
    rbx
}
