
  fn rg::flags::hiargs::suggest_multiline::h877188e632fbc6aa(arg1: *mut i128, arg2: *mut i64) -> i64

{
    let r15: *mut i8 = arg2[1];
    let r12: i64 = arg2[2];
    
    if _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::hff4183d19d767429(
        "the literalnot allowed\n\nConsid…", 0xb, r15, r12) != 0
    {
        let mut rax_1: i8;
        let mut rdx_2: u64;
        rax_1 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::hff4183d19d767429("not allowed\n\nConsider enabling…", 0xb, r15, r12);
        
        if rax_1 != 0
        {
            let mut var_78: *mut i64 = arg2;
            let var_70_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            let mut var_50: *mut c_void = &data_7eb428;
            let var_48_1: i64 = 2;
            let var_30_1: i64 = 0;
            let var_40_1: *mut *mut c_void = &var_78;
            let var_38_1: i64 = 1;
            let mut var_68: i128;
            core::option::Option$LT$T$GT$::map_or_else::hd29ff726b4b92504(&var_68, 0, rdx_2, 
                &var_50);
            let var_58: i64;
            arg1[1] = var_58;
            *arg1 = var_68;
            return core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(arg2);
        }
    }
    
    let result: i64 = arg2[2];
    arg1[1] = result;
    *arg1 = *arg2;
    result
}
