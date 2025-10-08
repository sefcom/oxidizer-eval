
  fn ruff_python_formatter::string::docstring::DocstringLinePrinter::run_action_queue::h5e595196a30effb1(arg1: *mut i32, arg2: *mut i64) -> *mut i32

{
    let mut var_120: i64;
    alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::pop_front::h29d219b469b29382(&var_120, 
        arg2);
    let rbx: i64 = var_120;
    
    if rbx == -0x7ffffffffffffff9
    {
        core::ptr::drop_in_place$LT$core..option..Option$LT$ruff_python_formatter..string..docstring..CodeExampleAddAction$GT$$GT$::hdb7bd7fb32c59f0e(&var_120);
        *arg1 = 4;
        return arg1;
    }
    
    let var_150: i64 = -0x7ffffffffffffff9;
    let var_1c0: i64 = -0x7ffffffffffffffa;
    let var_290: i64 = -0x8000000000000000;
    let mut rax_2: i64 = rbx + 0x7ffffffffffffffd;
    
    if rax_2 >= 4
    {
        rax_2 = 2;
    }
    
    /* jump -> *(&data_487b2c).byte_offset(rax_2 << 2) + &data_487b2c */
}
