
  fn uu_ls::TimeStyler::format::hbbf46b74a2bc22e6(arg1: *mut i128, arg2: *mut i64, arg3: *mut i32) -> i64

{
    let mut var_58: i32;
    let mut rax: i64;
    let mut rcx: i64;
    
    if !(0 + -(arg2[3]))
    {
        let rax_1: i32 = arg2[6];
        
        if rax_1 == 0
        {
            core::option::unwrap_failed::h893f57cb7db71cb7();
            /* no return */
        }
        
        var_58 = rax_1;
        let var_54_1: i64 = *arg2.byte_offset(0x34);
        let var_4c_1: i32 = *arg2.byte_offset(0x3c);
        let rax_4: i8 = _$LT$chrono..naive..datetime..NaiveDateTime$u20$as$u20$core..cmp..PartialOrd$GT$::partial_cmp::had3cc123e5b71e62(arg3, &var_58);
        rax = 0x20;
        
        if rax_4 <= 0
        {
            rax = 8;
        }
        
        rcx = 0x28;
        
        if rax_4 <= 0
        {
            rcx = 0x10;
        }
    }
    else
    {
        rcx = 0x10;
        rax = 8;
    }
    
    let rdx: i64 = *arg2.byte_offset(rax);
    chrono::datetime::DateTime$LT$Tz$GT$::format_with_items::hf434d3eacd276ff5(&var_58, arg3, rdx, 
        rdx + *arg2.byte_offset(rcx) * 0x18);
    _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h6c5b53b2ff865619(arg1, 
        &var_58);
    core::ptr::drop_in_place$LT$chrono..format..formatting..DelayedFormat$LT$core..slice..iter..Iter$LT$chrono..format..Item$GT$$GT$$GT$::h44deda9718cd4b84(&var_58)
}
