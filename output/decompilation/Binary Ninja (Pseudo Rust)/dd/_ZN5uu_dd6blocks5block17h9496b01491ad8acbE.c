
  fn uu_dd::blocks::block::h9496b01491ad8acb(arg1: *mut i128, arg2: i64, arg3: i64, arg4: i64, arg5: i8, arg6: *mut c_void) -> i64

{
    let mut var_48: i64 = arg4;
    let mut var_40: i64 = arg2;
    let var_38: i64 = arg3;
    let var_30: i8 = 0;
    let mut var_78: i64 = 0;
    let var_70: i64 = 8;
    let var_68: i64 = 0;
    let mut var_60: i128;
    core::iter::traits::iterator::Iterator::fold::h6a212979afd94415(&var_60, &var_40, &var_78, 
        &var_48, arg6.byte_offset(0x18));
    let mut result: i64;
    
    if result != 0 && (arg5 == 0 || *arg6.byte_offset(8) == 0)
    {
        let r14_1: i64 = *var_60[8];
        let r12_1: i64 = (result - 1) * 3;
        let rax_1: i64 = *(r14_1 + (r12_1 << 3) + 8);
        let rcx_2: i64 = *(r14_1 + (r12_1 << 3) + 0x10) + rax_1;
        var_78 = rax_1;
        let var_70_1: i64 = rcx_2;
        
        if _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::all::hf24369e89937bc37(&var_78) != 0
        {
            let rax_3: *mut i128 = r14_1 + (r12_1 << 3);
            result -= 1;
            let var_68_1: i64 = rax_3[1];
            var_78 = *rax_3;
            core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..vec..Vec$LT$u8$GT$$GT$$GT$::ha6c7b13acc23cf42(&var_78);
        }
    }
    
    arg1[1] = result;
    *arg1 = var_60;
    result
}
