
  fn uu_ls::dired::add_total::hcf0e71387fbf703c(arg1: *mut c_void, arg2: i64) -> i64

{
    let mut rax_3: i64 = *arg1.byte_offset(0x30);
    
    if rax_3 == 0
    {
        let rax: i64 = *arg1.byte_offset(0x10);
        
        if rax == 0
        {
            rax_3 = 0;
        }
        else
        {
            rax_3 = *((rax << 4) + *arg1.byte_offset(8) - 8) + 1;
        }
    }
    
    *arg1.byte_offset(0x30) = rax_3 + arg2 + 2;
    rax_3 + arg2 + 2
}
