
  fn fd::fmt::input::basename::ha1dafb3b189e8a1e(arg1: i64, arg2: i64) -> i64

{
    let rax: i64;
    let var_18: i64 = rax;
    let mut result: i64 = std::path::Path::file_name::h6d40d88bf3fb287a(arg1, arg2);
    
    if result == 0
    {
        result = arg1;
    }
    
    result
}
