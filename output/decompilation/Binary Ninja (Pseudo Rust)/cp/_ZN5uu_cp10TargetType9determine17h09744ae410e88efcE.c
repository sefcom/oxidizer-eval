
  fn uu_cp::TargetType::determine::h09744ae410e88efc(arg1: i64, arg2: *mut i8, arg3: u64) -> i64

{
    if arg1 <= 1
    {
        let rax: i64;
        let var_8_1: i64 = rax;
        
        if std::path::Path::is_dir::h9ac0db933706da51(arg2, arg3) == 0
        {
            return 1;
        }
    }
    
    0
}
