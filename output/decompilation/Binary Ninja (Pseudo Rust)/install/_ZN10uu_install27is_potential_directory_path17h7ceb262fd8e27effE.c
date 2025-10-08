
  fn uu_install::is_potential_directory_path::h7ceb262fd8e27eff(arg1: i64, arg2: u64) -> *mut i8

{
    let rax: i64 = arg1 + arg2;
    
    if (rax == 1 | arg2 == 0) != 0 || *(rax - 1) != 0x2f
    {
        /* tailcall */
        return std::path::Path::is_dir::h02edbc48c38d7d9e(arg1, arg2);
    }
    
    let mut result: *mut i8;
    result = 1;
    result
}
