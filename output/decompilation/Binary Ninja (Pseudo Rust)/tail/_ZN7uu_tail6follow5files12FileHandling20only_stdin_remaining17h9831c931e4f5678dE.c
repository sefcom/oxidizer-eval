
  fn uu_tail::follow::files::FileHandling::only_stdin_remaining::h9831c931e4f5678d(arg1: *mut c_void) -> *mut c_void

{
    if *arg1.byte_offset(0x30) != 1
    {
        return 0;
    }
    
    let rax: i64;
    let var_8: i64 = rax;
    let mut result: *mut c_void;
    result = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::h27fac6d98989e1f4(
        arg1.byte_offset(0x18), "-cannot open '' for reading", 1) != 0;
    result
}
