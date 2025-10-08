
  fn uu_dd::blocks::block::h2c05bb6e2c97f889(arg1: *mut i128, arg2: i64, arg3: i64, arg4: i64, arg5: i8, arg6: *mut c_void) -> i64

{
    let mut var_60: i64 = arg4;
    let mut var_40: i64 = arg2;
    let var_38: i64 = arg3;
    let var_30: i8 = 0;
    let mut var_78: i64 = 0;
    let var_70: i64 = 8;
    let var_68: i64 = 0;
    let mut var_58: i128;
    core::iter::traits::iterator::Iterator::fold::hbe779d8b366e38de(&var_58, &var_40, &var_78, 
        &var_60, arg6.byte_offset(0x18));
    let mut result: i64;
    
    if result != 0 && (arg5 == 0 || *arg6.byte_offset(8) == 0)
    {
        let r12_1: i64 = *var_58[8];
        let rax_1: i64 = result * 3;
        let r14_1: i64 = *(r12_1 + (rax_1 << 3) - 0x10);
        let rax_3: i64 = *(r12_1 + (rax_1 << 3) - 8) + r14_1;
        var_78 = r14_1;
        let var_70_1: i64 = rax_3;
        
        if _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::all::ha95a2ca59d7da05b(&var_78) != 0
        {
            let result_1: i64 = result - 1;
            result = result_1;
            core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..vec..Vec$LT$u8$GT$$GT$$GT$::h130dd2a707481b7d(*(r12_1 + result_1 * 0x18), r14_1);
        }
    }
    
    arg1[1] = result;
    *arg1 = var_58;
    result
}
