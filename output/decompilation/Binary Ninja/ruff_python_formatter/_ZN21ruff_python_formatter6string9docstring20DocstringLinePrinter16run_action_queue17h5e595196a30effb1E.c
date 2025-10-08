
  int32_t* ruff_python_formatter::string::docstring::DocstringLinePrinter::run_action_queue::h5e595196a30effb1(int32_t* arg1, int64_t* arg2)

{
    int64_t var_120;
    alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::pop_front::h29d219b469b29382(&var_120, 
        arg2);
    int64_t rbx = var_120;
    
    if (rbx == -0x7ffffffffffffff9)
    {
        core::ptr::drop_in_place$LT$core..option..Option$LT$ruff_python_formatter..string..docstring..CodeExampleAddAction$GT$$GT$::hdb7bd7fb32c59f0e(&var_120);
        *arg1 = 4;
        return arg1;
    }
    
    int64_t var_150 = -0x7ffffffffffffff9;
    int64_t var_1c0 = -0x7ffffffffffffffa;
    int64_t var_290 = -0x8000000000000000;
    int64_t rax_2 = rbx + 0x7ffffffffffffffd;
    
    if (rax_2 >= 4)
        rax_2 = 2;
    
    /* jump -> *(&data_487b2c + (rax_2 << 2)) + &data_487b2c */
}
