
  int64_t just::config::Config::parse_module_path::hcb242e7462a07dcd(int64_t* arg1, int64_t* arg2)

{
    int128_t* r14 = arg2;
    int64_t var_80;
    int64_t rdx;
    _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h9ebfd47e6ccea710(&var_80, arg2, rdx);
    int64_t var_48 = *(r14 + 0x38);
    int128_t var_b0;
    core::iter::traits::iterator::Iterator::collect::hc68524829832dcca(&var_b0, &var_80);
    int64_t var_a0;
    int128_t var_98;
    int64_t var_88;
    int128_t var_70;
    int64_t rbp;
    
    if (var_a0 != 1)
    {
        label_65f6ac:
        var_88 = var_a0;
        var_98 = var_b0;
        rbp = 0;
    }
    else
    {
        int64_t* r15_1 = *var_b0[8];
        
        if (!_$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h822e1c3c690e59b6(0x20, *r15_1, r15_1[1]))
            goto label_65f6ac;
        
        int64_t r15_2 = r15_1[1];
        _$LT$core..str..pattern..MultiCharEqPattern$LT$C$GT$$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h46590bb9cc81fd74(&var_70, *r15_1, r15_2);
        var_80 = 0;
        int64_t var_78_1 = r15_2;
        var_48 = 1;
        core::iter::traits::iterator::Iterator::collect::h28126857f0c66fb6(&var_98, &var_80);
        rbp = 1;
    }
    
    int64_t* r15_3 = *var_98[8];
    _$LT$just..module_path..ModulePath$u20$as$u20$core..convert..TryFrom$LT$$RF$$u5b$$RF$str$u5d$$GT$$GT$::try_from::h48731c1f5c72278a(&var_80, r15_3, var_88);
    int64_t r12;
    
    if (!(0 + -(var_80)))
    {
        int128_t zmm0_2 = var_80;
        *(arg1 + 0x18) = var_70;
        *(arg1 + 8) = zmm0_2;
        r12 = -0x7ffffffffffffff9;
    }
    else
    {
        int128_t var_40;
        core::iter::traits::iterator::Iterator::collect::h72388a178414c52b(&var_40, r14);
        int64_t var_30;
        arg1[3] = var_30;
        *(arg1 + 8) = var_40;
        r12 = -0x7ffffffffffffffe;
    }
    
    *arg1 = r12;
    int64_t result = core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$similar..algorithms..utils..UniqueItem$LT$similar..algorithms..utils..OffsetLookup$LT$u32$GT$$GT$$GT$$GT$::h4d36ad61a40c2c34(var_98, r15_3);
    
    if (!rbp)
        return result;
    
    /* tailcall */
    return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$similar..algorithms..utils..UniqueItem$LT$similar..algorithms..utils..OffsetLookup$LT$u32$GT$$GT$$GT$$GT$::h4d36ad61a40c2c34(var_b0, *var_b0[8]);
}
