
  fn uu_rmdir::uumain::uumain::points_to_directory::h618067cf6122ffc7(arg1: *mut i8, arg2: i64) -> *mut i8

{
    let mut var_b8: i32;
    std::fs::metadata::h57d3e19175266609(&var_b8, arg2);
    let mut rax: i64;
    
    if var_b8 != 2
    {
        let var_80: i32;
        arg1[1] = (0xf000 & var_80) == 0x4000;
        rax = 0;
    }
    else
    {
        let var_b0: i64;
        *arg1.byte_offset(8) = var_b0;
        rax = 1;
    }
    
    *arg1 = rax;
    arg1
}
