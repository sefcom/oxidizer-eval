
  fn rg::flags::hiargs::BinaryDetection::from_low_args::h6e6bee379070ab5d(arg1: i8, arg2: i8) -> u64

{
    let mut rax: i32;
    rax = arg2 == 1;
    let mut result: u64 = (rax << 0x10) + 0x10002;
    
    if (arg1 & 1) != 0
    {
        result = 0;
    }
    
    if arg2 == 2
    {
        return 0;
    }
    
    result
}
