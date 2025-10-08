
  fn ruff_python_formatter::string::docstring::DocstringLinePrinter::add_one::hae2c629763b1b7f5(arg1: *mut i32, arg2: *mut i64, arg3: *mut i128) -> i64

{
    let r12: *mut i64 = arg2[0x11];
    *r12;
    r12[1];
    
    if *ruff_formatter::formatter::Formatter$LT$Context$GT$::options::he55f9fce45a2dc4a().
        byte_offset(0xd) == 1 && *(*(r12[1] + 0x30))(*r12).byte_offset(0x3c) == 2
    {
        ruff_python_formatter::string::docstring::CodeExample::add::h580c37a480c14f8f(&arg2[4], 
            arg3, arg2);
        /* tailcall */
        return ruff_python_formatter::string::docstring::DocstringLinePrinter::run_action_queue::h5e595196a30effb1(arg1, arg2);
    }
    
    let zmm0: i128 = *arg3;
    let cond:0: bool = arg3[1] == 0;
    let rax_4: i32 = arg3[2];
    let mut var_40: i64 = -0x8000000000000000;
    let var_38: i128 = zmm0;
    let var_28: i32 = rax_4;
    let var_24: bool = cond:0;
    ruff_python_formatter::string::docstring::DocstringLinePrinter::print_one::h8be83db357ed0ed4(
        arg1, arg2, &var_40);
    core::ptr::drop_in_place$LT$ruff_python_formatter..string..docstring..OutputDocstringLine$GT$::h8a3d84e41a5d45bb(&var_40)
}
