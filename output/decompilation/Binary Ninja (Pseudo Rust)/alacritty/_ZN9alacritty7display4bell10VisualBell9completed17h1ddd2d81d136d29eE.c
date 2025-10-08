
  fn alacritty::display::bell::VisualBell::completed::h1ddd2d81d136d29e(arg1: *mut i64) -> i64

{
    let rbx: i32 = arg1[3];
    let mut result: i64;
    
    if rbx != 0x3b9aca00
    {
        let r15_1: i64 = arg1[2];
        let mut rax: i64;
        let mut rdx_1: i32;
        rax = std::time::Instant::now::h767314cc8c6c5886();
        let mut var_28: i64 = rax;
        let var_20_1: i32 = rdx_1;
        let mut rdx_2: i32;
        result = std::time::Instant::duration_since::h569f2ab177f38507(&var_28, r15_1);
        let temp0_1: i64 = *arg1;
        let mut cond:0_1: bool = result < temp0_1;
        
        if result == temp0_1
        {
            cond:0_1 = rdx_2 < arg1[1];
        }
        
        if !cond:0_1
        {
            arg1[3] = 0x3b9aca00;
        }
    }
    
    result = rbx == 0x3b9aca00;
    result
}
