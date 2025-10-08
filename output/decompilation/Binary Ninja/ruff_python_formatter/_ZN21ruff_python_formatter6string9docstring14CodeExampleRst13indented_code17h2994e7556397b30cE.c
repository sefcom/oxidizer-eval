
  void* ruff_python_formatter::string::docstring::CodeExampleRst::indented_code::h2994e7556397b30c(void* arg1)

{
    if (*(arg1 + 0x30) == 5)
        return 8;
    
    int64_t rax;
    int64_t var_38 = rax;
    void* result = *(arg1 + 8);
    int64_t rcx = *(arg1 + 0x10);
    
    if (rcx)
    {
        int64_t var_38_1 = rcx;
        void* i = result;
        
        do
        {
            char* r14_1 = *i;
            uint64_t r15_1 = *(i + 8);
            char* rax_2;
            int64_t rdx_3;
            
            if (core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9d68bd4861bf742(r14_1, r15_1))
                rax_2 = ruff_python_formatter::string::docstring::Indentation::trim_start_str::hc370b9ca7c92b427(arg1 + 0x30, r14_1, r15_1);
            else
            {
                rax_2 = 1;
                rdx_3 = 0;
            }
            
            *(i + 0x28) = rax_2;
            *(i + 0x30) = rdx_3;
            i += 0x38;
        } while (i != rcx * 0x38 + result);
    }
    
    return result;
}
