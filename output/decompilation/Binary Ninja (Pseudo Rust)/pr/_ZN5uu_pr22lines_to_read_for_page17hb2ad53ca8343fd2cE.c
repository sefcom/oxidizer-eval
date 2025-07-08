
  fn uu_pr::lines_to_read_for_page::hb2ad53ca8343fd2c(arg1: *mut c_void) -> i64

{
    let mut rdx: i64 = 1;
    
    if *arg1.byte_offset(0x100) != -0x8000000000000000
    {
        rdx = *arg1.byte_offset(0x120);
    }
    
    (*arg1.byte_offset(0x138) >> *arg1.byte_offset(0x140)) * rdx
}
