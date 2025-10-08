
  int64_t ruff_python_formatter::other::commas::has_magic_trailing_comma::h260365a92ddcfcb5(int32_t arg1, int32_t arg2, int64_t* arg3)

{
    if (!*(arg3 + 0x37))
        /* tailcall */
        return ruff_python_formatter::other::commas::has_trailing_comma::h43d4bedccd638eda(arg1, 
            arg2, *arg3, arg3[1]);
    
    return 0;
}
