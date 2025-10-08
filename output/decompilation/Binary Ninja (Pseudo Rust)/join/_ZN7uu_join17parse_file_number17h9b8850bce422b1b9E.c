
  fn uu_join::parse_file_number::h9b8850bce422b1b9(arg1: *mut i64, arg2: i64, arg3: u64) -> u64

{
    let mut result: u64 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h40620c7a8dc116e5(arg2, arg3, "12itoenocheck-ordercheck-orderhe…", 1);
    
    if result == 0
    {
        result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h40620c7a8dc116e5(arg2, arg3, "2itoenocheck-ordercheck-orderhea…", 1);
        
        if result == 0
        {
            let mut var_88: i64 = 0;
            let var_80_1: i64 = arg2;
            let var_78_1: u64 = arg3;
            let var_70_1: i8 = 1;
            let mut var_98: *mut i64 = &var_88;
            let var_90_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            let mut var_68: *mut *mut c_void = &data_4fe5a8;
            let var_60_1: i64 = 1;
            let var_48_1: i64 = 0;
            let var_58_1: *mut *mut i64 = &var_98;
            let var_50_1: i64 = 1;
            let mut var_38: ();
            core::option::Option$LT$T$GT$::map_or_else::h9a77d6fb89838746(&var_38, &var_68);
            let var_20_1: i32 = 1;
            result = alloc::boxed::Box$LT$T$GT$::new::h6838e3ae00012226(&var_38);
            *arg1 = result;
            arg1[1] = &data_4fe360;
        }
        else
        {
            arg1[1] = 1;
            *arg1 = 0;
        }
    }
    else
    {
        arg1[1] = 0;
        *arg1 = 0;
    }
    
    result
}
