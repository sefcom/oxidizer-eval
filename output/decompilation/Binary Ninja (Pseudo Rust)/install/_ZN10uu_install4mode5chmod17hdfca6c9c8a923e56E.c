
  fn uu_install::mode::chmod::hdfca6c9c8a923e56(arg1: i64, arg2: i64) -> i64

{
    let rdx: i32;
    let mut result: i64 = std::fs::set_permissions::h487174ed31211552(arg1, arg2, rdx);
    
    if result != 0
    {
        uu_install::mode::chmod::_$u7b$$u7b$closure$u7d$$u7d$::hc6b73c885d269683(arg1, arg2, 
            result);
    }
    
    result = result != 0;
    result
}
