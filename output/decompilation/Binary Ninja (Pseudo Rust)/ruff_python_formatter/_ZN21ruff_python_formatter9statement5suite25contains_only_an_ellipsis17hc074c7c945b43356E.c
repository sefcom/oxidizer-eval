
  fn ruff_python_formatter::statement::suite::contains_only_an_ellipsis::hc074c7c945b43356(arg1: *mut i64, arg2: i64, arg3: *mut c_void) -> i64

{
    if arg2 != 1 || *arg1 != -0x7fffffffffffffed
    {
        return 0;
    }
    
    if *arg1[1] == 0x18
    {
        let mut rax_1: i64;
        let mut rdx: i64;
        rax_1 = _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Stmt$GT$$GT$::from::h095e0f7c3429d85d(arg1);
        let mut var_28: i64 = rax_1;
        let var_20_1: i64 = rdx;
        
        if ruff_python_formatter::comments::map::MultiMap$LT$K$C$V$GT$::leading::hb31877b14c47a989(
            arg3.byte_offset(0x10), &var_28) == 0
        {
            return 
                ruff_python_formatter::comments::Comments::has_trailing_own_line::h12c05e0461212723(
                arg3, arg1) ^ 1;
        }
    }
    
    0
}
