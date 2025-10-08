
  fn fd::filesystem::strip_current_dir::hccbc9a783f2543e7(arg1: i64, arg2: i64) -> i64

{
    let rax: i64;
    let var_18: i64 = rax;
    let mut result: i64 = std::path::Path::strip_prefix::hf2675ccd78c74225(arg1, arg2);
    
    if result == 0
    {
        result = arg1;
    }
    
    result
}
