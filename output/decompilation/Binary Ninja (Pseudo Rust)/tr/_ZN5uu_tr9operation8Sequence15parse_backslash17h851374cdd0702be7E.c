
  fn uu_tr::operation::Sequence::parse_backslash::h851374cdd0702be7(arg1: *mut i64) -> i64

{
    let mut var_28: i32;
    let rax: i64 = _$LT$nom..sequence..Preceded$LT$F$C$G$GT$$u20$as$u20$nom..internal..Parser$LT$I$GT$$GT$::process::h55052947dcf7abe7(&var_28);
    let var_18: i128;
    
    if var_28 != 3
    {
        let zmm0: i128 = var_28;
        *arg1.byte_offset(0x10) = var_18;
        *arg1 = zmm0;
        return rax;
    }
    
    let mut rdx_2: u32 = *var_18[8];
    let rsi_3: u64 = rdx_2 - 0x61;
    
    if rsi_3 <= 0x15
    {
        match rsi_3
        {
            0 =>
            {
                rdx_2 = 7;
            }
            1 =>
            {
                rdx_2 = 8;
            }
            5 =>
            {
                rdx_2 = 0xc;
            }
            0xd =>
            {
                rdx_2 = 0xa;
            }
            0x11 =>
            {
                rdx_2 = 0xd;
            }
            0x13 =>
            {
                rdx_2 = 9;
            }
            0x15 =>
            {
                rdx_2 = 0xb;
            }
        }
    }
    
    let var_20: i64;
    arg1[1] = var_20;
    arg1[2] = var_18;
    arg1[3] = rdx_2;
    *arg1 = 3;
    var_20
}
