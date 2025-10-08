
  fn uu_uname::UNameOutput::display::hd46e899639185bb3(arg1: *mut i128, arg2: *mut i64) -> *mut i128

{
    let mut rax: *mut i64 = arg2;
    
    if 0 + -(*arg2)
    {
        rax = nullptr;
    }
    
    let mut rcx: *mut c_void = &arg2[3];
    
    if 0 + -(arg2[3])
    {
        rcx = nullptr;
    }
    
    let mut var_a8: i64 = 0;
    let mut rdi: *mut c_void = &arg2[6];
    
    if 0 + -(arg2[6])
    {
        rdi = nullptr;
    }
    
    let mut r8: *mut c_void = &arg2[9];
    
    if 0 + -(arg2[9])
    {
        r8 = nullptr;
    }
    
    let mut r9: *mut c_void = &arg2[0xc];
    
    if 0 + -(arg2[0xc])
    {
        r9 = nullptr;
    }
    
    let var_a0: i64 = 1;
    let mut r10: *mut c_void = &arg2[0xf];
    
    if 0 + -(arg2[0xf])
    {
        r10 = nullptr;
    }
    
    let mut r11: *mut c_void = &arg2[0x12];
    
    if 0 + -(arg2[0x12])
    {
        r11 = nullptr;
    }
    
    let mut r14: *mut c_void = &arg2[0x15];
    
    if 0 + -(arg2[0x15])
    {
        r14 = nullptr;
    }
    
    let var_98: i64 = 0;
    let mut var_90: i64 = 1;
    let var_88: i64 = 0;
    let var_80: i64 = 8;
    let var_78: *mut i64 = rax;
    let var_70: *mut c_void = rcx;
    let var_68: *mut c_void = rdi;
    let var_60: *mut c_void = r8;
    let var_58: *mut c_void = r9;
    let var_50: *mut c_void = r10;
    let var_48: *mut c_void = r11;
    let var_40: *mut c_void = r14;
    let var_38: i64 = 0;
    let var_28: i64 = 0;
    
    loop
    {
        let rax_1: *mut c_void = _$LT$core..iter..adapters..flatten..FlattenCompat$LT$I$C$U$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h235ca32fda697424(&var_90);
        
        if rax_1 == 0
        {
            break;
        }
        
        let rsi: i64 = *rax_1.byte_offset(8);
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::hb3f89bf696acadb6(&var_a8, rsi, *rax_1.byte_offset(0x10) + rsi);
        alloc::string::String::push::h0ede46164189e411(&var_a8);
    }
    
    arg1[1] = var_98;
    *arg1 = var_a8;
    arg1
}
