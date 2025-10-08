
  fn fd::filter::owner::OwnerFilter::matches::hd75223a5e7de9c60(arg1: *mut i32, arg2: i32, arg3: i32) -> i64

{
    let rax: i64;
    let var_18: i64 = rax;
    
    if fd::filter::owner::Check$LT$T$GT$::check::h63b4f06e810f44cd(*arg1, arg1[1], arg2) == 0
    {
        return 0;
    }
    
    /* tailcall */
    fd::filter::owner::Check$LT$T$GT$::check::h63b4f06e810f44cd(arg1[2], arg1[3], arg3)
}
