
  fn uu_tr::operation::Sequence::parse_char_range::h1d7a96cfefe74fe4(arg1: *mut i64) -> u32

{
    let mut r14: i64 = 1;
    let mut var_30: i32;
    let mut result: u32 = _$LT$nom..internal..And$LT$F$C$G$GT$$u20$as$u20$nom..internal..Parser$LT$I$GT$$GT$::process::hbd849b2fcb6d173d(&var_30);
    let var_20: i128;
    
    if var_30 != 3
    {
        let zmm0: i128 = var_30;
        *arg1.byte_offset(0x18) = var_20;
        *arg1.byte_offset(8) = zmm0;
    }
    else
    {
        result = *var_20[8];
        let rcx_1: u32 = *var_20[9];
        let mut rdi_1: i32;
        rdi_1 = result <= rcx_1;
        let mut result_1: u32 = (result << 8) + (rcx_1 << 0x10) + 1;
        
        if result > rcx_1
        {
            result_1 = result;
        }
        
        let var_28: i128;
        *arg1.byte_offset(8) = var_28;
        arg1[3] = rdi_1 * 2 + 0xa;
        *arg1.byte_offset(0x1c) = rcx_1;
        arg1[4] = result_1;
        r14 = 0;
    }
    *arg1 = r14;
    result
}
