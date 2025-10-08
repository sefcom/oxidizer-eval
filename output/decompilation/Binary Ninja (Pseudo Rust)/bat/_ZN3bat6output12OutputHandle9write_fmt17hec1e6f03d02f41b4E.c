
  fn bat::output::OutputHandle::write_fmt::hec1e6f03d02f41b4(arg1: *mut i8, arg2: *mut i32, arg3: i64) -> *mut i8

{
    let rdi: i64 = *arg2.byte_offset(8);
    let rax: i64 = *arg2.byte_offset(0x10);
    
    if *arg2 != 1
    {
        let rax_3: i64 = (*(rax + 0x48))(rdi, arg3);
        
        if rax_3 != 0
        {
            *arg1 = 0;
            *arg1.byte_offset(8) = rax_3;
            return arg1;
        }
    }
    else if (*(rax + 0x28))(rdi, arg3) != 0
    {
        *arg1 = 1;
        return arg1;
    }
    
    *arg1 = 0xd;
    arg1
}
