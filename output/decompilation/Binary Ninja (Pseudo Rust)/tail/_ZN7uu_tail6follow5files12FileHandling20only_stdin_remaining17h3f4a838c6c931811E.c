
  fn uu_tail::follow::files::FileHandling::only_stdin_remaining::h3f4a838c6c931811(arg1: *mut c_void) -> i64

{
    if *arg1.byte_offset(0x30) != 1
    {
        return 0;
    }
    
    let rax: i64;
    let var_8: i64 = rax;
    let mut result: i64;
    result = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::hfebfdd9a71d0b1ad(
        arg1.byte_offset(0x18), "-.cannot watch parent directory …", 1) != 0;
    result
}
