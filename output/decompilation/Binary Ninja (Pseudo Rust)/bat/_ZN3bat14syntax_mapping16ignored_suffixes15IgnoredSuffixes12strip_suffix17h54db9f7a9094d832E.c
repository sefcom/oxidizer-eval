
  fn bat::syntax_mapping::ignored_suffixes::IgnoredSuffixes::strip_suffix::h54db9f7a9094d832(arg1: *mut c_void, arg2: i64, arg3: i64) -> i64

{
    let r12: i64 = *arg1.byte_offset(0x10);
    
    if r12 == 0
    {
        return 0;
    }
    
    let mut r13_1: *mut i64 = *arg1.byte_offset(8);
    let mut result: i64;
    
    loop
    {
        result = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_suffix_of::ha48df28aef4c1d38(*r13_1, r13_1[1], arg2, arg3);
        
        if result != 0
        {
            break;
        }
        
        r13_1 = &r13_1[2];
        
        if r13_1 == &r13_1[r12 * 2]
        {
            return 0;
        }
    }
    
    result
}
