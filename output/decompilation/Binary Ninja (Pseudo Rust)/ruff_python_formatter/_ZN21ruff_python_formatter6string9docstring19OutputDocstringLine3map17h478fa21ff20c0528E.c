
  fn ruff_python_formatter::string::docstring::OutputDocstringLine::map::h478fa21ff20c0528(arg1: *mut i128, arg2: *mut i64, arg3: i64) -> i64

{
    arg2[2];
    let mut var_28: i128;
    ruff_python_formatter::string::docstring::DocstringLinePrinter::run_action_queue::_$u7b$$u7b$closure$u7d$$u7d$::h051dbca0586d6014(&var_28, arg3, arg2[1]);
    let var_18: i64;
    arg1[1] = var_18;
    *arg1 = var_28;
    *arg1.byte_offset(0x18) = arg2[3];
    *arg1.byte_offset(0x1c) = *arg2.byte_offset(0x1c);
    /* tailcall */
    core::ptr::drop_in_place$LT$ruff_python_formatter..string..docstring..OutputDocstringLine$GT$::h8a3d84e41a5d45bb(arg2)
}
