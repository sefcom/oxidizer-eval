
  fn uu_tr::operation::Sequence::parse_char_range::h5ec19fc784f30684(arg1: *mut i64, arg2: i64, arg3: i64) -> i64

{
    let mut var_18: *mut c_void = "-' are in reverse collating sequ…";
    let var_10: i64 = 1;
    let mut var_38: i32;
    nom::sequence::separated_pair::_$u7b$$u7b$closure$u7d$$u7d$::h10f375dd8b7b174e(&var_38, 
        &var_18, arg2, arg3);
    let mut result: i64;
    let var_28: i128;
    
    if var_38 != 3
    {
        let zmm0: i128 = var_38;
        *arg1.byte_offset(0x18) = var_28;
        *arg1.byte_offset(8) = zmm0;
        result = 1;
    }
    else
    {
        let rax: u32 = *var_28[8];
        let rcx_1: u32 = *var_28[9];
        let mut r8_1: i64 = -0x7ffffffffffffff5;
        let mut rdx_3: u32 = (rax << 8) + (rcx_1 << 0x10) + 1;
        
        if rax > rcx_1
        {
            r8_1 = -0x7ffffffffffffff6;
        }
        
        if rax > rcx_1
        {
            rdx_3 = rcx_1;
        }
        
        let var_30: i128;
        *arg1.byte_offset(8) = var_30;
        arg1[3] = r8_1;
        arg1[4] = rdx_3;
        *arg1.byte_offset(0x24) = rax;
        result = 0;
    }
    *arg1 = result;
    result
}
