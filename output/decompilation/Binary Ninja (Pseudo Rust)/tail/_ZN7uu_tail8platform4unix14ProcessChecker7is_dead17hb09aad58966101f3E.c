
  fn uu_tail::platform::unix::ProcessChecker::is_dead::hb09aad58966101f3(arg1: i64) -> u64

{
    let mut rbx: i32 = 0;
    
    if kill(arg1, 0) != 0
    {
        rbx = uu_tail::platform::unix::get_errno::h80cf25b3e2f9c5b9() != 1;
    }
    
    rbx
}
