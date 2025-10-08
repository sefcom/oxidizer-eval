
  fn just::parser::Parser::next::h26f20bd451ef506f(arg1: *mut i128, arg2: *mut c_void) -> i64

{
    let mut rax: i64;
    let mut rdx: i64;
    rax = just::parser::Parser::rest::h006cb6290a6cc038(arg2);
    let mut var_d0: i64 = rax;
    let var_c8: i64 = rdx;
    let mut var_c0: i128;
    core::iter::traits::iterator::Iterator::try_fold::hc0d12f79d33f0a11(&var_c0, &var_d0);
    let var_b0: i128;
    let var_a0: i128;
    let var_90: i128;
    let var_80: i8;
    
    if var_80 != 0x25
    {
        let zmm0: i128 = var_c0;
        arg1[3] = var_90;
        arg1[2] = var_a0;
        arg1[1] = var_b0;
        *arg1 = zmm0;
        let var_7f: i32;
        *arg1.byte_offset(0x41) = var_7f;
        *arg1.byte_offset(0x44) = var_7f;
        arg1[4] = var_80;
        *arg1.byte_offset(0x48) = 0x25;
        return var_80;
    }
    
    let rax_2: i64 = just::parser::Parser::internal_error::ha5200abb7b463c9f(&var_c0, arg2);
    let var_78: i128;
    let var_28: i128 = var_78;
    let zmm1_1: i128 = var_c0;
    let var_38: i128 = var_90;
    let var_48: i128 = var_a0;
    let var_58: i128 = var_b0;
    let var_68: i128 = zmm1_1;
    arg1[4] = var_78;
    arg1[3] = var_90;
    arg1[2] = var_a0;
    arg1[1] = var_b0;
    *arg1 = zmm1_1;
    rax_2
}
