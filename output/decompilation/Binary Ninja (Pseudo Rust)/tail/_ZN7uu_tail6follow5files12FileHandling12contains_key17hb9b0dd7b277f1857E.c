
  fn uu_tail::follow::files::FileHandling::contains_key::hb9b0dd7b277f1857(arg1: *mut c_void, arg2: i64, arg3: i64) -> *mut c_void

{
    let rax: i64;
    let var_8: i64 = rax;
    let mut result: *mut c_void;
    result = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::h27fac6d98989e1f4(
        arg1.byte_offset(0x18), arg2, arg3) != 0;
    result
}
