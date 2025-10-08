
  fn uu_tsort::Graph::indegree::h78335c1a80f6dbc5(arg1: *mut c_void, arg2: *mut i64, arg3: i64) -> i64

{
    let rax: i64;
    let var_8: i64 = rax;
    let rax_1: *mut c_void =
        hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::hbf23ef7421c68646(
        arg1.byte_offset(0x18), arg2, arg3);
    
    if rax_1 == 0
    {
        return 0;
    }
    
    *rax_1.byte_offset(0x28);
    1
}
