
  uint64_t uu_od::parse_formats::is_format_size_decimal::h0429fab3d2c9aacb(int32_t arg1, char arg2, int64_t* arg3)

{
    int64_t rbx;
    rbx = arg1 - 0x30 < 0xa;
    rbx &= arg2;
    
    if (rbx)
        alloc::string::String::push::h0ede46164189e411(arg3, arg1);
    
    return rbx;
}
