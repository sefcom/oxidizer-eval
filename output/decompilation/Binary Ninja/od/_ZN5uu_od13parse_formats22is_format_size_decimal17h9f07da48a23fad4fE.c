
  uint64_t uu_od::parse_formats::is_format_size_decimal::h9f07da48a23fad4f(int32_t arg1, char arg2, int64_t* arg3)

{
    int64_t rbx;
    rbx = arg1 - 0x30 < 0xa;
    rbx &= arg2;
    
    if (rbx)
        alloc::string::String::push::h859ae11851fd8b8e(arg3, arg1);
    
    return rbx;
}
