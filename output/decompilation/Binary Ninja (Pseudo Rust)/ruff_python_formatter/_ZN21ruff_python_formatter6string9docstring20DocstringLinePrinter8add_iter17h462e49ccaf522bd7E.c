
  fn ruff_python_formatter::string::docstring::DocstringLinePrinter::add_iter::h462e49ccaf522bd7(arg1: *mut i128, arg2: *mut i64, arg3: *mut i64) -> i64

{
    let mut i: i32;
    
    do
    {
        let mut rbx_1: i64 = arg3[1];
        let mut rbp_1: u64 = arg3[2];
        let cond:0_1: bool = (*arg3 & 1) != 0;
        *arg3 = 0;
        
        if !cond:0_1
        {
            let mut rax_1: i64;
            let mut rdx_1: u64;
            rax_1 = core::str::iter::SplitInternal$LT$P$GT$::next::h3fa9a8e3da590a31(&arg3[3]);
            rbx_1 = rax_1;
            rbp_1 = rdx_1;
        }
        
        if rbx_1 == 0
        {
            ruff_python_formatter::string::docstring::CodeExample::finish::hfd3e9aa3b4f5a7b9(
                &arg2[4], arg2);
            /* tailcall */
            return ruff_python_formatter::string::docstring::DocstringLinePrinter::run_action_queue::h5e595196a30effb1(arg1, arg2);
        }
        
        let r13_1: i32 = arg2[0x12];
        let zmm0_2: i128 = *core::option::Option$LT$T$GT$::get_or_insert_with::hfe9154ba007c2a9a(
            arg3, arg3.byte_offset(0x18));
        let mut var_58: i64 = rbx_1;
        let var_50_1: u64 = rbp_1;
        let var_38_1: i32 = r13_1;
        let var_48_1: i128 = zmm0_2;
        
        if rbp_1 >> 0x20 != 0
        {
            core::result::Result$LT$T$C$E$GT$::unwrap::h1e98140e442e0df8(1);
        }
        else
        {
            core::result::Result$LT$T$C$E$GT$::unwrap::h1e98140e442e0df8(0);
            rbp_1 = rbp_1 + 1;
        }
        
        core::result::Result$LT$T$C$E$GT$::unwrap::h1e98140e442e0df8(0);
        arg2[0x12] += rbp_1;
        ruff_python_formatter::string::docstring::DocstringLinePrinter::add_one::hae2c629763b1b7f5(
            &i, arg2, &var_58);
    } while i == 4;
    
    let result: i64;
    arg1[1] = result;
    *arg1 = i;
    result
}
