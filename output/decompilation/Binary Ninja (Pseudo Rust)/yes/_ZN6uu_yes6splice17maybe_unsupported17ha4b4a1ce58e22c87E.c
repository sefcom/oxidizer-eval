
  fn uu_yes::splice::maybe_unsupported::ha4b4a1ce58e22c87(arg1: i32) -> i64

{
    let rax_3: u64 = arg1;
    
    if arg1 <= 0x26 && TEST_BITQ(0x4000400200, rax_3)
    {
        return 0;
    }
    
    rax_3 << 0x20 | 2
}
