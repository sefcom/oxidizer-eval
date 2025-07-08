
  fn uu_more::search_pattern_in_file::hc37280eeed50663d(arg1: size_t, arg2: i64, arg3: *mut i64) -> i64

{
    let mut var_38: i128;
    let mut var_28: size_t;
    let mut var_20: i128;
    let mut rax: size_t;
    
    if *arg3 != -0x8000000000000000
    {
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(
            &var_28, arg3);
        rax = var_28;
        var_38 = var_20;
    }
    else
    {
        var_38 = 1;
        *var_38[8] = 0;
        rax = 0;
    }
    
    let mut var_40: size_t = rax;
    let mut result: i64;
    
    if arg2 == 0 || *var_38[8] == 0
    {
        result = 0;
    }
    else
    {
        var_28 = arg1;
        var_20 = arg1 + arg2 * 0x18;
        *var_20[8] = 0;
        let mut i: i8;
        
        do
        {
            let mut rax_3: size_t;
            let mut rdx: *mut c_void;
            rax_3 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h718377d33ac374ce(&var_28);
            
            if rdx == 0
            {
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h1f03875085d5f083(&var_40);
                return 0;
            }
            
            i = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::hce6c1a51027c4ec5(var_38, *var_38[8], *rdx.byte_offset(8), *rdx.byte_offset(0x10));
        } while i == 0;
        result = 1;
    }
    
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h1f03875085d5f083(&var_40);
    result
}
