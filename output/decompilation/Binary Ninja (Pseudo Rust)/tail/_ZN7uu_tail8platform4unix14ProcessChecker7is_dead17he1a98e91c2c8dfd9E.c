
  fn uu_tail::platform::unix::ProcessChecker::is_dead::he1a98e91c2c8dfd9(arg1: *mut i32) -> u64

{
    let mut rbx: i32 = 0;
    
    if kill(*arg1, 0) != 0
    {
        rbx = uu_tail::platform::unix::get_errno::hcaebd61abd6c9378() != 1;
    }
    
    rbx
}
