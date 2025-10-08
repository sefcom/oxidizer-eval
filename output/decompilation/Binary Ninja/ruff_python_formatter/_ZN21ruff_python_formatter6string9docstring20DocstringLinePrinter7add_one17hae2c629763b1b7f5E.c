
  int64_t ruff_python_formatter::string::docstring::DocstringLinePrinter::add_one::hae2c629763b1b7f5(int32_t* arg1, int64_t* arg2, int128_t* arg3)

{
    int64_t* r12 = arg2[0x11];
    *r12;
    r12[1];
    
    if (*(ruff_formatter::formatter::Formatter$LT$Context$GT$::options::he55f9fce45a2dc4a() + 0xd)
        == 1 && *((*(r12[1] + 0x30))(*r12) + 0x3c) == 2)
    {
        ruff_python_formatter::string::docstring::CodeExample::add::h580c37a480c14f8f(&arg2[4], 
            arg3, arg2);
        /* tailcall */
        return ruff_python_formatter::string::docstring::DocstringLinePrinter::run_action_queue::h5e595196a30effb1(arg1, arg2);
    }
    
    int128_t zmm0 = *arg3;
    bool cond:0 = !arg3[1];
    int32_t rax_4 = arg3[2];
    int64_t var_40 = -0x8000000000000000;
    int128_t var_38 = zmm0;
    int32_t var_28 = rax_4;
    bool var_24 = cond:0;
    ruff_python_formatter::string::docstring::DocstringLinePrinter::print_one::h8be83db357ed0ed4(
        arg1, arg2, &var_40);
    return core::ptr::drop_in_place$LT$ruff_python_formatter..string..docstring..OutputDocstringLine$GT$::h8a3d84e41a5d45bb(&var_40);
}
