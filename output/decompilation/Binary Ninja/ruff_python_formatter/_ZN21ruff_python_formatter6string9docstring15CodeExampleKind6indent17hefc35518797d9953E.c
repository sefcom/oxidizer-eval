
  int64_t ruff_python_formatter::string::docstring::CodeExampleKind::indent::hefc35518797d9953(int128_t* arg1, void* arg2)

{
    int64_t rcx = -0x8000000000000000 ^ *arg2;
    int64_t rax = 1;
    
    if (rcx < 3)
        rax = rcx;
    
    if (!rax)
        /* tailcall */
        return ruff_python_formatter::string::docstring::Indentation::from_str::hcb1a24e2ab546984(
            arg1, *(arg2 + 0x20), *(arg2 + 0x28));
    
    if (rax != 1)
    {
        int64_t rax_5 = *(arg2 + 0x30);
        arg1[1] = rax_5;
        *arg1 = *(arg2 + 0x20);
        return rax_5;
    }
    
    int32_t rax_1 = *(arg2 + 0x30);
    
    if (rax_1 == 5)
    {
        int64_t rax_2 = *(arg2 + 0x28);
        arg1[1] = rax_2;
        *arg1 = *(arg2 + 0x18);
        return rax_2;
    }
    
    *(arg1 + 0x14) = *(arg2 + 0x44);
    *(arg1 + 4) = *(arg2 + 0x34);
    *arg1 = rax_1;
    return rax_1;
}
