
  fn rg::flags::parse::FlagMap::find::hdf23bd2dbf42aadc(arg1: *mut i64, arg2: *mut i64, arg3: i64) -> i64

{
    let rax: i64;
    let var_8: i64 = rax;
    let rax_1: *mut c_void =
        hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::h6b60bcfa749c140b(arg1, arg2, 
        arg3);
    
    if rax_1 == 0
    {
        return 0;
    }
    
    *rax_1.byte_offset(0x18);
    1
}
