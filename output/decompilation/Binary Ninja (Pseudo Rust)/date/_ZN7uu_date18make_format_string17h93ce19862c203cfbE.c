
  fn uu_date::make_format_string::h93ce19862c203cfb(arg1: *mut c_void) -> *mut c_void

{
    let rax: i64 = -0x8000000000000000 ^ *arg1.byte_offset(0x20);
    let mut rcx: i64 = 3;
    
    if rax < 5
    {
        rcx = rax;
    }
    
    match rcx
    {
        0 =>
        {
            let rax_1: u64 = *arg1.byte_offset(0x28);
            *(&data_453800).byte_offset(rax_1 << 3);
            *(&data_453828).byte_offset(rax_1 << 2) + &data_453828
        }
        1 =>
        {
            "%a, %d %h %Y %T %z%F %T.%f%:z%c"
        }
        2 =>
        {
            let rax_5: u64 = *arg1.byte_offset(0x28);
            *(&data_453840).byte_offset(rax_5 << 3);
            *(&data_453858).byte_offset(rax_5 << 2) + &data_453858
        }
        3 =>
        {
            *arg1.byte_offset(0x30);
            *arg1.byte_offset(0x28)
        }
        4 =>
        {
            "%c"
        }
    }
}
