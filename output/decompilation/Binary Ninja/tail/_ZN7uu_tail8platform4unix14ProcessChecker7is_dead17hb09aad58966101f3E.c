
  uint64_t uu_tail::platform::unix::ProcessChecker::is_dead::hb09aad58966101f3(int64_t arg1)

{
    int32_t rbx = 0;
    
    if (kill(arg1, 0))
        rbx = uu_tail::platform::unix::get_errno::h80cf25b3e2f9c5b9() != 1;
    
    return rbx;
}
