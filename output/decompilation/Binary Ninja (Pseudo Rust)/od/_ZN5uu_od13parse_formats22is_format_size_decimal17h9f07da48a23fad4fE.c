
  fn uu_od::parse_formats::is_format_size_decimal::h9f07da48a23fad4f(arg1: i32, arg2: i8, arg3: *mut i64) -> u64

{
    let mut rbx: i64;
    rbx = arg1 - 0x30 < 0xa;
    rbx &= arg2 != 0;
    
    if rbx != 0
    {
        alloc::string::String::push::h859ae11851fd8b8e(arg3, arg1);
    }
    
    rbx
}
