
  int64_t uu_tail::platform::unix::supports_pid_checks::h8a33793bec8fc4a9(int64_t arg1)

{
    int64_t rax;
    int64_t var_8 = rax;
    
    if (kill(arg1, 0))
    {
        int32_t rax_2;
        rax_2 = uu_tail::platform::unix::get_errno::hcaebd61abd6c9378() != 0x26;
        return rax_2;
    }
    
    int32_t rax_1;
    rax_1 = 1;
    return rax_1;
}
