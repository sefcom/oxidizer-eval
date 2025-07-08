
  fn uu_join::parse_print_settings::h7df2ac24ec40344e(arg1: *mut *mut c_void, arg2: *mut c_void) -> *mut c_void

{
    let mut var_b0: ();
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hdf06f95a7b97cd47(
        &var_b0, arg2, "vaj12itoenocheck-ordercheck-orde…", 1);
    let mut var_f0: i64;
    clap_builder::parser::error::MatchesError::unwrap::h1dd9f4a8c089b7df(&var_f0, 
        "vaj12itoenocheck-ordercheck-orde…", 1, &var_b0);
    let rax: i64 = var_f0;
    let mut var_1b8: fn() -> !;
    
    if rax == 0
    {
        var_1b8 = core::ops::function::FnOnce::call_once::hd000ac33043b820c;
        let var_1b0_1: *const i8 = "a Display implementation returne…";
        let var_1a8_1: *const i8 = "a Display implementation returne…";
        let var_1a0_1: i64 = 0;
        let var_190_1: i64 = 0;
        let var_180_1: i64 = 0;
    }
    else
    {
        let var_c0: i128;
        let var_188_1: i128 = var_c0;
        let var_d0: i128;
        let var_198_1: i128 = var_d0;
        let mut var_1a8: i64;
        let var_e0: i128;
        var_1a8 = var_e0;
        var_1b8 = var_f0;
    }
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hdf06f95a7b97cd47(
        &var_b0, arg2, "aj12itoenocheck-ordercheck-order…", 1);
    let mut i_1: *mut c_void;
    clap_builder::parser::error::MatchesError::unwrap::h1dd9f4a8c089b7df(&i_1, 
        "aj12itoenocheck-ordercheck-order…", 1, &var_b0);
    let mut var_178: fn() -> !;
    
    if i_1 == 0
    {
        var_178 = core::ops::function::FnOnce::call_once::hd000ac33043b820c;
        let var_170_1: *const i8 = "a Display implementation returne…";
        let var_168_1: *const i8 = "a Display implementation returne…";
        let var_160_1: i64 = 0;
        let var_150_1: i64 = 0;
        let var_140_1: i64 = 0;
    }
    else
    {
        let var_100: i128;
        let var_148_1: i128 = var_100;
        let var_110: i128;
        let var_158_1: i128 = var_110;
        let mut var_168: i64;
        let var_120: i128;
        var_168 = var_120;
        var_178 = i_1;
    }
    
    core::iter::traits::iterator::Iterator::chain::h151f974d6a98c263(&var_b0, &var_1b8, &var_178);
    let mut var_70: ();
    let mut i: *mut c_void = core::option::Option$LT$T$GT$::or_else::h73b79e6fbab2ae65(
        core::iter::adapters::chain::and_then_or_clear::hd7f35116e82399f1(&var_b0), &var_70);
    let mut rbp: i8;
    let mut r13: i8;
    
    if i == 0
    {
        r13 = 0;
        rbp = 0;
    }
    else
    {
        rbp = 0;
        r13 = 0;
        
        do
        {
            uu_join::parse_file_number::h95ac4b0d73e9ada5(&i_1, *i.byte_offset(8), 
                *i.byte_offset(0x10));
            i = i_1;
            let var_128: i64;
            
            if i != 0
            {
                *arg1 = i;
                arg1[1] = var_128;
                goto 'label_4c3f9e;
            }
            
            let temp0_1: i8 = var_128;
            
            if temp0_1 == 0
            {
                r13 = 1;
            }
            
            if temp0_1 != 0
            {
                rbp = 1;
            }
            
            i = core::option::Option$LT$T$GT$::or_else::h73b79e6fbab2ae65(
                core::iter::adapters::chain::and_then_or_clear::hd7f35116e82399f1(&var_b0), 
                &var_70);
        } while i != 0;
        
        r13 &= 1;
        rbp &= 1;
    }
    
    arg1[1] = rax == 0;
    *arg1.byte_offset(9) = r13;
    *arg1.byte_offset(0xa) = rbp;
    *arg1 = nullptr;
    'label_4c3f9e:
    i
}
