
  fn fd::filter::owner::Check$LT$T$GT$::check::h63b4f06e810f44cd(arg1: i32, arg2: i32, arg3: i32) -> i64

{
    if arg1 == 0
    {
        /* tailcall */
        return core::cmp::impls::_$LT$impl$u20$core..cmp..PartialEq$u20$for$u20$i32$GT$::eq::h398acf1977478f7f(arg3, arg2);
    }
    
    if arg1 == 1
    {
        /* tailcall */
        return core::cmp::impls::_$LT$impl$u20$core..cmp..PartialEq$u20$for$u20$u32$GT$::ne::h47a748b3f9f2b49b(arg3, arg2);
    }
    
    let mut result: i64;
    result = 1;
    result
}
