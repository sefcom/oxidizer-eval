
  fn uu_od::parse_formats::od_format_type::h6c27c20666861ca9(arg1: i64, arg2: i8) -> *mut c_void

{
    let result: *mut c_void = jump_table_417f60[arg2] + &jump_table_417f60;
    
    match result
    {
        0x4cac04 =>
        {
            __builtin_memcpy(arg1, 
                "\x00\x00\x00\x00\x00\x00\x00\x00\x90\x56\x4d\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x04\x00\x00\x00\x00\x00\x00\x00", 0x20);
            result
        }
        0x4cacb0 =>
        {
            __builtin_memcpy(arg1, 
                "\x02\x00\x00\x00\x00\x00\x00\x00\x50\x57\x4d\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x04\x00\x00\x00\x00\x00\x00\x00", 0x20);
            result
        }
    }
}
