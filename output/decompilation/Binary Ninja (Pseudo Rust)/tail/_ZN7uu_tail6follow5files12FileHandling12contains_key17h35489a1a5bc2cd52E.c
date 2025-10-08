
  fn uu_tail::follow::files::FileHandling::contains_key::h35489a1a5bc2cd52(arg1: *mut c_void, arg2: i64, arg3: i64) -> i64

{
    let rax: i64;
    let var_8: i64 = rax;
    let mut result: i64;
    result = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::hfebfdd9a71d0b1ad(
        arg1.byte_offset(0x18), arg2, arg3) != 0;
    result
}
