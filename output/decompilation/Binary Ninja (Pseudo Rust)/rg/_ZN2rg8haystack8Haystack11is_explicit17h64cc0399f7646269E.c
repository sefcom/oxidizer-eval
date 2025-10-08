
  fn rg::haystack::Haystack::is_explicit::h64cc0399f7646269(arg1: *mut i64) -> i64

{
    let mut result: i64;
    
    if *arg1 == 0
    {
        result = 1;
        return result;
    }
    
    if arg1[4] != 0
    {
        return 0;
    }
    
    let result_1: i64 = result;
    rg::haystack::Haystack::is_dir::hd6f752fd2c8f0e5c(arg1) ^ 1
}
