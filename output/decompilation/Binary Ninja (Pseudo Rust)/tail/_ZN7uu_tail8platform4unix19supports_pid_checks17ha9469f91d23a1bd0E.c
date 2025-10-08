
  fn uu_tail::platform::unix::supports_pid_checks::ha9469f91d23a1bd0(arg1: i64) -> i64

{
    let rax: i64;
    let var_8: i64 = rax;
    
    if kill(arg1, 0) != 0
    {
        let mut rax_2: i32;
        rax_2 = uu_tail::platform::unix::get_errno::h80cf25b3e2f9c5b9() != 0x26;
        return rax_2;
    }
    
    let mut rax_1: i32;
    rax_1 = 1;
    rax_1
}
