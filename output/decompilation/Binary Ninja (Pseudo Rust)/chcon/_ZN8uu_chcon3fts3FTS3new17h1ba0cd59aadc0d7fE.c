
  fn uu_chcon::fts::FTS::new::h1ba0cd59aadc0d7f(arg1: *mut i32, arg2: i64, arg3: i64, arg4: i32) -> i64

{
    let mut rax: i64;
    let mut rdx: i64;
    rax = core::iter::traits::iterator::Iterator::map::h25589f7664dffb69(arg2);
    let mut result_1: i32;
    core::iter::traits::iterator::Iterator::collect::hbb008879b6ab862c(&result_1, 
        core::iter::traits::iterator::Iterator::map::h25589f7664dffb69(rax));
    let result: i32 = result_1;
    let mut var_98: i128;
    let var_5c: i128;
    
    if result != 0x12
    {
        var_98 = var_5c;
        let var_20: i64;
        *arg1.byte_offset(0x40) = var_20;
        let var_30: i128;
        *arg1.byte_offset(0x30) = var_30;
        let var_40: i128;
        *arg1.byte_offset(0x20) = var_40;
        *arg1.byte_offset(0x10) = var_5c;
        *arg1.byte_offset(4) = var_98;
        *arg1 = result;
        return result;
    }
    
    let mut var_78: i128 = var_5c;
    let var_48: i64;
    let var_68_1: i64 = var_48;
    
    if var_48 == 0
    {
        *arg1 = 0x10;
        *arg1.byte_offset(8) = "FTS::new()fts_open()fts_read()FT…";
        *arg1.byte_offset(0x10) = 0xa;
        *arg1.byte_offset(0x18) = 0x1400000003;
    }
    else
    {
        let rsi_3: i64 = *var_78[8];
        core::iter::traits::iterator::Iterator::chain::h75d240e117d26bc3(&result_1, rsi_3, 
            (var_48 << 4) + rsi_3);
        core::iter::traits::iterator::Iterator::collect::hf56f411ed6263585(&var_98, &result_1);
        let argv: *mut *mut i8 = *var_98[8];
        let rax_2: *mut FTS = fts_open(argv, arg4, nullptr);
        
        if rax_2 == 0
        {
            let rax_6: i64 = *__errno_location() << 0x20 | 2;
            *arg1 = 0x10;
            *arg1.byte_offset(8) = "fts_open()fts_read()FTS::set()ft…";
            *arg1.byte_offset(0x10) = 0xa;
            *arg1.byte_offset(0x18) = rax_6;
        }
        else
        {
            *arg1.byte_offset(8) = rax_2;
            *arg1.byte_offset(0x10) = 0;
            *arg1 = 0x12;
        }
        
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$BP$const$u20$i8$GT$$GT$::h8450a7eb13650f71(
            var_98, argv);
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..ffi..c_str..CString$GT$$GT$::h9525a83a75566948(&var_78)
}
