
  void* ruff_python_formatter::statement::suite::should_insert_blank_line_after_class_in_stub_file::h5a93a285ad0ff8fd(int64_t arg1, void* arg2, int64_t arg3, void* arg4, void* arg5)

{
    int64_t var_50 = arg1;
    void* result = nullptr;
    
    if (arg3 != 0x5e && *(arg5 + 0x33) == 1)
    {
        if (arg1 != 3)
        {
            int64_t rax_2;
            int64_t rdx_2;
            rax_2 = ruff_python_ast::node::_$LT$impl$u20$ruff_python_ast..generated..AnyNodeRef$GT$::last_child_in_body::h106de3f3c845d12e(&var_50);
            int64_t var_40 = rax_2;
            int64_t var_38_1 = rdx_2;
            char var_28_1 = 0;
            void* var_30_1 = arg5 + 0x10;
            return _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h0e6737ab96195750(
                _$LT$core..iter..adapters..take_while..TakeWhile$LT$I$C$P$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::try_fold::h639535931336aded(&var_40), 
                1);
        }
        
        void* rbx_1 = *(arg5 + 0x10);
        
        if (!ruff_python_formatter::statement::suite::contains_only_an_ellipsis::hc074c7c945b43356(
                *(arg2 + 0x20), *(arg2 + 0x28), rbx_1))
            result =
                ruff_python_formatter::comments::Comments::has_trailing_own_line::h8c381b2842dc94aa(
                rbx_1, 3) ^ 1;
        else
        {
            int64_t r14_2 = *(arg2 + 0x10);
            
            if (arg3 != 3)
            {
                result = 1;
                
                if (!r14_2)
                    result = arg3 == 2;
            }
            else
            {
                result = 1;
                
                if (ruff_python_formatter::statement::suite::contains_only_an_ellipsis::hc074c7c945b43356(*(arg4 + 0x20), *(arg4 + 0x28), rbx_1) && !(r14_2 | *(arg4 + 0x10)))
                    result = arg3 == 2;
            }
        }
    }
    
    return result;
}
