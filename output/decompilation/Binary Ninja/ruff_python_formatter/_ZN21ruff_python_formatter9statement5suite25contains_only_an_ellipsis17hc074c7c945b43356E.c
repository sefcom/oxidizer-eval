
  int64_t ruff_python_formatter::statement::suite::contains_only_an_ellipsis::hc074c7c945b43356(int64_t* arg1, int64_t arg2, void* arg3)

{
    if (arg2 != 1 || *arg1 != -0x7fffffffffffffed)
        return 0;
    
    if (*arg1[1] == 0x18)
    {
        int64_t rax_1;
        int64_t rdx;
        rax_1 = _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Stmt$GT$$GT$::from::h095e0f7c3429d85d(arg1);
        int64_t var_28 = rax_1;
        int64_t var_20_1 = rdx;
        
        if (!ruff_python_formatter::comments::map::MultiMap$LT$K$C$V$GT$::leading::hb31877b14c47a989(arg3 + 0x10, &var_28))
            return 
                ruff_python_formatter::comments::Comments::has_trailing_own_line::h12c05e0461212723(
                arg3, arg1) ^ 1;
    }
    
    return 0;
}
