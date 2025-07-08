
  int64_t uu_split::number::Number::increment::h9d7b4dd7e07da8c6(int64_t* arg1)

{
    if (*arg1 != -0x8000000000000000)
        /* tailcall */
        return uu_split::number::FixedWidthNumber::increment::h00b6e667aed53161(arg1);
    
    arg1[1] += 1;
    return 0;
}
