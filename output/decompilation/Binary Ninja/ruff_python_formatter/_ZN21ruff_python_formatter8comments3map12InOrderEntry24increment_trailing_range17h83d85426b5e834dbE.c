
  int64_t ruff_python_formatter::comments::map::InOrderEntry::increment_trailing_range::h83d85426b5e834db(void* arg1)

{
    int32_t rax = *(arg1 + 8);
    int32_t rcx = *(arg1 + 0xc);
    
    if (rax)
    {
        if (!rcx)
        {
            int32_t rax_4 =
                ruff_python_formatter::comments::map::PartIndex::incremented::h562ab003bd12ba22(
                rax);
            *(arg1 + 0xc) = rax_4;
            return rax_4;
        }
        
        /* tailcall */
        return ruff_python_formatter::comments::map::PartIndex::increment::h40e90174e8270a0a(arg1
            + 0xc);
    }
    
    if (rcx)
    {
        core::panicking::panic::h85d6dd562679980c("internal error: entered unreacha…");
        /* no return */
    }
    
    int32_t rax_2 = *(arg1 + 4);
    *(arg1 + 8) = rax_2;
    int32_t rax_3 =
        ruff_python_formatter::comments::map::PartIndex::incremented::h562ab003bd12ba22(rax_2);
    *(arg1 + 0xc) = rax_3;
    return rax_3;
}
