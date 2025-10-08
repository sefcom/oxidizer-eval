
  fn just::line::Line::is_shebang::h85dfa5042413650f(arg1: *mut i32, arg2: i64) -> i64

{
    let rax: i64;
    let var_8: i64 = rax;
    let mut rax_1: *mut c_void;
    let mut rdx: i64;
    rax_1 = just::line::Line::first::h712dd6f4cff55297(arg1, arg2);
    
    if rax_1 == 0
    {
        return 0;
    }
    
    /* tailcall */
    core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h8590487e544a86f3(rax_1, rdx, 
        "#!internal error: entered unreac…", 2)
}
