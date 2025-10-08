
  fn just::line::Line::is_infallible::h6abb30f774dbfe3f(arg1: *mut i32, arg2: i64) -> i64

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
    just::line::Line::is_infallible::_$u7b$$u7b$closure$u7d$$u7d$::h478bb0846cde286f(rax_1, rdx)
}
