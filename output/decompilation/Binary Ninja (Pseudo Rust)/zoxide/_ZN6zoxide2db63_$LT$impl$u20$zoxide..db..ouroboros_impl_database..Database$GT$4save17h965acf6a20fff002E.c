
  fn zoxide::db::_$LT$impl$u20$zoxide..db..ouroboros_impl_database..Database$GT$::save::h965acf6a20fff002(arg1: *mut c_void) -> i64

{
    if *arg1.byte_offset(0x38) != 1
    {
        return 0;
    }
    
    *arg1.byte_offset(0x10);
    let mut var_38: i64;
    zoxide::db::_$LT$impl$u20$zoxide..db..ouroboros_impl_database..Database$GT$::serialize::h481efb032ccf3bd4(&var_38, *arg1.byte_offset(8));
    let rcx: i64 = var_38;
    let result_1: i64;
    let mut result: i64 = result_1;
    
    if -(rcx) != -0x8000000000000000
    {
        let mut var_20: i64 = rcx;
        let result_2: i64 = result;
        let var_28: i64;
        let var_10_1: i64 = var_28;
        result = anyhow::context::_$LT$impl$u20$anyhow..Context$LT$T$C$E$GT$$u20$for$u20$core..result..Result$LT$T$C$E$GT$$GT$::context::h36cd762370f4003e(zoxide::util::write::hfde126fc3b935f00(arg1.byte_offset(0x18), &var_20), 
            "could not write to databasesrc/d…");
        
        if result == 0
        {
            *arg1.byte_offset(0x38) = 0;
            return 0;
        }
    }
    
    result
}
