
  fn uu_tr::operation::Sequence::parse_backslash::h345c32065b0e9c92(arg1: *mut i64, arg2: i64, arg3: i64) -> *mut i64

{
    let mut var_18: *const i8 = "\src/uu/tr/src/operation.rs[*]*]…";
    let var_10: i64 = 1;
    let mut var_38: i32;
    let mut result: *mut i64 =
        nom::sequence::preceded::_$u7b$$u7b$closure$u7d$$u7d$::h15123993b9b8fd57(&var_38, &var_18, 
        arg2, arg3);
    let var_28: i128;
    
    if var_38 != 3
    {
        let zmm0_1: i128 = var_38;
        *arg1.byte_offset(0x10) = var_28;
        *arg1 = zmm0_1;
    }
    else
    {
        let result_1: *mut i64;
        result = result_1;
        let mut rdx_1: u32 = *var_28[8];
        let rsi_2: u64 = rdx_1 - 0x61;
        
        if rsi_2 <= 0x15
        {
            match rsi_2
            {
                0 =>
                {
                    rdx_1 = 7;
                }
                1 =>
                {
                    rdx_1 = 8;
                }
                5 =>
                {
                    rdx_1 = 0xc;
                }
                0xd =>
                {
                    rdx_1 = 0xa;
                }
                0x11 =>
                {
                    rdx_1 = 0xd;
                }
                0x13 =>
                {
                    rdx_1 = 9;
                }
                0x15 =>
                {
                    rdx_1 = 0xb;
                }
            }
        }
        
        arg1[1] = result;
        arg1[2] = var_28;
        arg1[3] = rdx_1;
        *arg1 = 3;
    }
    result
}
