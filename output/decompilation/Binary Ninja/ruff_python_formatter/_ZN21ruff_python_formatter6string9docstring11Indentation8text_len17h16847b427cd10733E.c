
  uint64_t ruff_python_formatter::string::docstring::Indentation::text_len::h16847b427cd10733(int32_t* arg1)

{
    int64_t rbx;
    
    switch (*arg1)
    {
        case 0:
        case 1:
        {
            rbx = *(arg1 + 8);
            break;
        }
        case 2:
        case 3:
        {
            rbx = *(arg1 + 0x10) + *(arg1 + 8);
            break;
        }
        case 4:
        {
            return arg1[1];
            break;
        }
    }
    
    if (!(rbx >> 0x20))
    {
        core::result::Result$LT$T$C$E$GT$::unwrap::h1e98140e442e0df8(0);
        return rbx;
    }
    
    core::result::Result$LT$T$C$E$GT$::unwrap::h1e98140e442e0df8(1);
    trap(6);
}
