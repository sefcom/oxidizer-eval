
  fn uu_tail::platform::unix::supports_pid_checks::h8a33793bec8fc4a9(arg1: i64) -> i64

{
    let rax: i64;
    let var_8: i64 = rax;
    
    if kill(arg1, 0) != 0
    {
        let mut rax_2: i32;
        rax_2 = uu_tail::platform::unix::get_errno::hcaebd61abd6c9378() != 0x26;
        return rax_2;
    }
    
    let mut rax_1: i32;
    rax_1 = 1;
    rax_1
}
