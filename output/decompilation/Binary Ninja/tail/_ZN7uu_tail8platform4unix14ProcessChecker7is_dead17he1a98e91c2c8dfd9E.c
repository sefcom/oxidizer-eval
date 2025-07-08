
  uint64_t uu_tail::platform::unix::ProcessChecker::is_dead::he1a98e91c2c8dfd9(int32_t* arg1)

{
    int32_t rbx = 0;
    
    if (kill(*arg1, 0))
        rbx = uu_tail::platform::unix::get_errno::hcaebd61abd6c9378() != 1;
    
    return rbx;
}
