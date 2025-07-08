
  fn uu_sort::print_sorted::h980a3d1e0d6f1cf0(arg1: *mut i128, arg2: *mut c_void, arg3: *mut i64) -> i64

{
    let mut var_48: ();
    uu_sort::Output::into_write::h9c5c08d876f77806(&var_48, arg3);
    let var_58: i128 = arg1[2];
    let var_68: i128 = arg1[1];
    let mut var_78: i128 = *arg1;
    
    loop
    {
        let rax_1: *mut i64 = _$LT$itertools..adaptors..coalesce..CoalesceBy$LT$I$C$F$C$C$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h734feeaecfaf1fbf(&var_78);
        
        if rax_1 == 0
        {
            break;
        }
        
        uu_sort::Line::print::he3975e626e2ad263(rax_1, &var_48, arg2);
    }
    
    core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$$GT$::h1183853de4007e7a(&var_48)
}
