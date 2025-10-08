
  int64_t ruff_python_formatter::string::docstring::Indentation::columns::h9e266497152669ca(int32_t* arg1)

{
    int64_t result = *(arg1 + 8);
    
    switch (*arg1)
    {
        case 0:
        case 4:
        {
            return result;
            break;
        }
        case 1:
        {
            return result << 3;
            break;
        }
        case 2:
        {
            return (result << 3) + *(arg1 + 0x10);
            break;
        }
        case 3:
        {
            return (result & 0xfffffffffffffff8) + (*(arg1 + 0x10) << 3);
            break;
        }
    }
}
