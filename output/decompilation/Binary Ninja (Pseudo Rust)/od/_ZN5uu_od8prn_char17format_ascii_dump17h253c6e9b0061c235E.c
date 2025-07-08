
  fn uu_od::prn_char::format_ascii_dump::h253c6e9b0061c235(arg1: *mut i128, arg2: i64, arg3: i64) -> *mut i128

{
    let mut var_48: i64 = 0;
    let var_40: i64 = 1;
    let var_38: i64 = 0;
    alloc::string::String::push::h859ae11851fd8b8e(&var_48, 0x3e);
    let mut var_30: i64 = arg2;
    let var_28: i64 = arg3 + arg2;
    
    for let mut i: *mut i8 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hacde45113f50203e(&var_30); i != 0; i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hacde45113f50203e(&var_30)
    {
        let rax: u32 = *i;
        
        if rax - 0x20 >= 0x5f
        {
            alloc::string::String::push::h859ae11851fd8b8e(&var_48, 0x2e);
        }
        else
        {
            let rax_1: u64 = rax << 4;
            let rdi_4: i64 = *(rax_1 + &uu_od::prn_char::C_CHARS::h05ab81629a83a794);
            let mut rax_2: i64;
            let mut rdx: u64;
            rax_2 = core::slice::iter::Iter$LT$T$GT$::make_slice::h2f8c5b40bc40bd5d(rdi_4, 
                *(rax_1 + 0x5428a0) + rdi_4);
            alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h35da95ead3d0349f(&var_48, rax_2, rdx);
        }
    }
    
    alloc::string::String::push::h859ae11851fd8b8e(&var_48, 0x3c);
    arg1[1] = var_38;
    *arg1 = var_48;
    arg1
}
