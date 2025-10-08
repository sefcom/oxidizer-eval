
  fn just::recipe::Recipe$LT$D$GT$::confirm::hf942a5381005005c(arg1: *mut i16, arg2: *mut c_void) -> *mut i64

{
    let result: *mut i64 =
        just::attribute_set::AttributeSet::get::h29ad4fd4e40977f3(arg2.byte_offset(0xd8), 0);
    
    if result == 0 || *result != -0x7fffffffffffffff
    {
        *arg1 = 0x138;
        return result;
    }
    
    let mut var_60: *mut c_void;
    let mut rax: *mut *mut [i8; 0x97];
    
    if result[1] != -0x8000000000000000
    {
        var_60 = &result[1];
        let var_58_2: fn(arg1: *mut c_void, arg2: i64) -> i64 =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        rax = &data_82ddb0;
    }
    else
    {
        var_60 = arg2.byte_offset(0x90);
        let var_58_1: fn(arg1: *mut c_void, arg2: *mut i64) -> i64 =
            _$LT$just..name..Name$u20$as$u20$core..fmt..Display$GT$::fmt::h235bf6517801ef05;
        rax = &data_830b50;
    }
    
    let mut var_48: *mut *mut [i8; 0x97] = rax;
    let var_40_1: i64 = 2;
    let var_28_1: i64 = 0;
    let var_38_1: *mut *mut c_void = &var_60;
    let var_30_1: i64 = 1;
    std::io::stdio::_eprint::h57899770eacec2ad(&var_48);
    var_60 = nullptr;
    let var_58_3: i64 = 1;
    let var_50_1: i64 = 0;
    std::io::stdio::stdin::h9a05a2c3e7544b2a();
    var_48 = &std::io::stdio::stdin::INSTANCE::heccb3522b341563b;
    let mut rax_2: i8;
    let mut rdx_1: i64;
    rax_2 = std::io::stdio::Stdin::read_line::h4f274dfaf65c22af(&var_48, &var_60);
    
    if (rax_2 & 1) == 0
    {
        let mut rax_3: *mut i8;
        let mut rdx_2: u64;
        rax_3 =
            core::str::_$LT$impl$u20$str$GT$::trim_matches::hfd0add22eadc0a63(var_58_3, var_50_1);
        alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::hb778be1bb3f3f772(&var_48, rax_3, rdx_2);
        let mut rax_4: i8 = 1;
        
        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(var_40_1, var_38_1, "y===> Running recipe `#### ] eva…", 1) == 0
        {
            rax_4 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(var_40_1, var_38_1, "yesAutomatically confirm all rec…", 3);
        }
        
        *arg1.byte_offset(1) = rax_4;
        *arg1 = 0x38;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(&var_48);
    }
    else
    {
        *arg1 = 0x1a;
        *arg1.byte_offset(8) = rdx_1;
    }
    
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(&var_60)
}
