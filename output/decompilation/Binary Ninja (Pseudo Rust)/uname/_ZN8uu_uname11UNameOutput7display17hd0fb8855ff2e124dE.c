
  fn uu_uname::UNameOutput::display::hd0fb8855ff2e124d(arg1: *mut i128, arg2: *mut c_void) -> *mut i128

{
    let mut rcx: *mut c_void = arg2;
    
    if *arg2 == -0x8000000000000000
    {
        rcx = nullptr;
    }
    
    let mut rdx: *mut c_void = arg2.byte_offset(0x18);
    
    if *arg2.byte_offset(0x18) == -0x8000000000000000
    {
        rdx = nullptr;
    }
    
    let mut var_a8: i64 = 0;
    let mut r8: *mut c_void = arg2.byte_offset(0x30);
    
    if *arg2.byte_offset(0x30) == -0x8000000000000000
    {
        r8 = nullptr;
    }
    
    let mut r9: *mut c_void = arg2.byte_offset(0x48);
    
    if *arg2.byte_offset(0x48) == -0x8000000000000000
    {
        r9 = nullptr;
    }
    
    let mut r10: *mut c_void = arg2.byte_offset(0x60);
    
    if *arg2.byte_offset(0x60) == -0x8000000000000000
    {
        r10 = nullptr;
    }
    
    let var_a0: i64 = 1;
    let mut r11: *mut c_void = arg2.byte_offset(0x78);
    
    if *arg2.byte_offset(0x78) == -0x8000000000000000
    {
        r11 = nullptr;
    }
    
    let mut r14: *mut c_void = arg2.byte_offset(0x90);
    
    if *arg2.byte_offset(0x90) == -0x8000000000000000
    {
        r14 = nullptr;
    }
    
    let mut r15: *mut c_void = arg2.byte_offset(0xa8);
    
    if *arg2.byte_offset(0xa8) == -0x8000000000000000
    {
        r15 = nullptr;
    }
    
    let var_98: i64 = 0;
    let mut var_90: i64 = 1;
    let var_88: *mut c_void = rcx;
    let var_80: *mut c_void = rdx;
    let var_78: *mut c_void = r8;
    let var_70: *mut c_void = r9;
    let var_68: *mut c_void = r10;
    let var_60: *mut c_void = r11;
    let var_58: *mut c_void = r14;
    let var_50: *mut c_void = r15;
    let var_48: i64 = 0;
    let var_40: i64 = 8;
    let var_38: i64 = 0;
    let var_28: i64 = 0;
    
    loop
    {
        let rax_1: *mut c_void = _$LT$core..iter..adapters..flatten..FlattenCompat$LT$I$C$U$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he5291530aa6c89ad(&var_90);
        
        if rax_1 == 0
        {
            break;
        }
        
        let rdi_1: i64 = *rax_1.byte_offset(8);
        let mut rax_2: i64;
        let mut rdx_1: u64;
        rax_2 = core::slice::iter::Iter$LT$T$GT$::make_slice::h8a021e817a756358(rdi_1, 
            *rax_1.byte_offset(0x10) + rdi_1);
        alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h7d7b704ad484e1bb(&var_a8, rax_2, rdx_1);
        alloc::string::String::push::h859ae11851fd8b8e(&var_a8);
    }
    
    core::ptr::drop_in_place$LT$core..iter..adapters..flatten..Flatten$LT$core..array..iter..IntoIter$LT$core..option..Option$LT$$RF$alloc..string..String$GT$$C$8_usize$GT$$GT$$GT$::h58996adff40e52b0(&var_90);
    arg1[1] = var_98;
    *arg1 = var_a8;
    arg1
}
