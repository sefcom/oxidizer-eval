
  fn just::parser::Parser::advance::ha6fdbb87ccd3a5f7(arg1: *mut i128, arg2: *mut c_void) -> *mut i128

{
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::clear::hb16502b534c65091(arg2.
        byte_offset(0x38));
    let rsi: i64 = *arg2.byte_offset(0x20);
    let rdi_1: i64 = *arg2.byte_offset(0x58);
    
    if rdi_1 > rsi
    {
        core::slice::index::slice_start_index_len_fail::h5fe115fcacae7da6(rdi_1, rsi);
        /* no return */
    }
    
    if rdi_1 != rsi
    {
        let rax_1: *mut i128 = *arg2.byte_offset(0x18);
        let mut i: i64 = rdi_1 * 0x48;
        let mut rdx_1: i64 = 0;
        
        do
        {
            if *rax_1.byte_offset(i).byte_offset(0x40) != 0x24
            {
                *arg2.byte_offset(0x58) = rdi_1 - rdx_1 + 1;
                arg1[4] = *rax_1.byte_offset(i).byte_offset(0x40);
                let zmm0: i128 = *rax_1.byte_offset(i);
                let zmm1: i128 = *rax_1.byte_offset(i).byte_offset(0x10);
                let zmm2: i128 = *rax_1.byte_offset(i).byte_offset(0x20);
                arg1[3] = *rax_1.byte_offset(i).byte_offset(0x30);
                arg1[2] = zmm2;
                arg1[1] = zmm1;
                *arg1 = zmm0;
                *arg1.byte_offset(0x48) = 0x25;
                return rax_1;
            }
            
            i += 0x48;
            rdx_1 -= 1;
        } while rsi * 0x48 != i;
        
        *arg2.byte_offset(0x58) = rdi_1 - rdx_1;
    }
    
    let mut var_d0: ();
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_d0, "`Parser::advance()` advanced pas…", 0x35);
    let mut var_d8: i64 = -0x7fffffffffffffd8;
    let mut var_68: ();
    let rax_2: i64 = just::parser::Parser::error::hcfcee5ba02637174(&var_68, arg2, &var_d8);
    let var_20: i128;
    let var_98: i128 = var_20;
    let var_30: i128;
    let var_a8: i128 = var_30;
    let var_40: i128;
    let var_b8: i128 = var_40;
    let var_50: i128;
    let var_c8: i128 = var_50;
    let var_60: i128;
    var_d8 = var_60;
    arg1[4] = var_20;
    arg1[3] = var_30;
    arg1[2] = var_40;
    arg1[1] = var_50;
    *arg1 = var_60;
    rax_2
}
