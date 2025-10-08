
  fn just::config::Config::parse_module_path::hcb242e7462a07dcd(arg1: *mut i64, arg2: *mut i64) -> i64

{
    let r14: *mut i128 = arg2;
    let mut var_80: i64;
    let rdx: i64;
    _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h9ebfd47e6ccea710(&var_80, arg2, rdx);
    let mut var_48: i64 = *r14.byte_offset(0x38);
    let mut var_b0: i128;
    core::iter::traits::iterator::Iterator::collect::hc68524829832dcca(&var_b0, &var_80);
    let var_a0: i64;
    let mut var_98: i128;
    let mut var_88: i64;
    let mut var_70: i128;
    let mut rbp: i64;
    
    if var_a0 != 1
    {
        'label_65f6ac:
        var_88 = var_a0;
        var_98 = var_b0;
        rbp = 0;
    }
    else
    {
        let r15_1: *mut i64 = *var_b0[8];
        
        if _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h822e1c3c690e59b6(
            0x20, *r15_1, r15_1[1]) == 0
        {
            goto 'label_65f6ac;
        }
        
        let r15_2: i64 = r15_1[1];
        _$LT$core..str..pattern..MultiCharEqPattern$LT$C$GT$$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h46590bb9cc81fd74(&var_70, *r15_1, r15_2);
        var_80 = 0;
        let var_78_1: i64 = r15_2;
        var_48 = 1;
        core::iter::traits::iterator::Iterator::collect::h28126857f0c66fb6(&var_98, &var_80);
        rbp = 1;
    }
    
    let r15_3: *mut i64 = *var_98[8];
    _$LT$just..module_path..ModulePath$u20$as$u20$core..convert..TryFrom$LT$$RF$$u5b$$RF$str$u5d$$GT$$GT$::try_from::h48731c1f5c72278a(&var_80, r15_3, var_88);
    let mut r12: i64;
    
    if !(0 + -(var_80))
    {
        let zmm0_2: i128 = var_80;
        *arg1.byte_offset(0x18) = var_70;
        *arg1.byte_offset(8) = zmm0_2;
        r12 = -0x7ffffffffffffff9;
    }
    else
    {
        let mut var_40: i128;
        core::iter::traits::iterator::Iterator::collect::h72388a178414c52b(&var_40, r14);
        let var_30: i64;
        arg1[3] = var_30;
        *arg1.byte_offset(8) = var_40;
        r12 = -0x7ffffffffffffffe;
    }
    
    *arg1 = r12;
    let result: i64 = core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$similar..algorithms..utils..UniqueItem$LT$similar..algorithms..utils..OffsetLookup$LT$u32$GT$$GT$$GT$$GT$::h4d36ad61a40c2c34(var_98, r15_3);
    
    if rbp == 0
    {
        return result;
    }
    
    /* tailcall */
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$similar..algorithms..utils..UniqueItem$LT$similar..algorithms..utils..OffsetLookup$LT$u32$GT$$GT$$GT$$GT$::h4d36ad61a40c2c34(var_b0, *var_b0[8])
}
