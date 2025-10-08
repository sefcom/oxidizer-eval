
  fn zoxide::db::dir::Dir::score::h9351a6bad969e8fa(arg1: i64, arg2: i64, arg3: f64) -> f64

{
    let mut rax: i64 = 0;
    
    if arg2 >= arg1
    {
        rax = arg2 - arg1;
    }
    
    if rax < 0xe10
    {
        return arg3 * 4.0;
    }
    
    if rax < 0x15180
    {
        return arg3 * 2.0;
    }
    
    let mut rcx: i64;
    rcx = rax < 0x93a80;
    arg3 * *(&data_418cd0).byte_offset(rcx << 3)
}
