
  fn uu_ls::sort_entries::h9b56d1e19b40eaef(arg1: *mut c_void, arg2: i64, arg3: *mut c_void) -> *mut c_void

{
    let rax: i64;
    let var_28: i64 = rax;
    let rbp: i8 = *arg3.byte_offset(0xf9);
    let mut result: *mut c_void = (&jump_table_4346d0)[rbp] + &jump_table_4346d0;
    
    if *arg3.byte_offset(0xe7) != 0
    {
        result = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::reverse::h25fb624f2918bbe9(arg1, arg2);
    }
    
    if rbp != 0 && *arg3.byte_offset(0xed) != 0
    {
        /* tailcall */
        return alloc::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::sort_by_key::hf757b3fe9a47c1ad(arg1, 
            arg2);
    }
    
    result
}
