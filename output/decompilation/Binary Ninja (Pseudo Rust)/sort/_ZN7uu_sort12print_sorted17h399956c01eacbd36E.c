
  fn uu_sort::print_sorted::h399956c01eacbd36(arg1: i64, arg2: i64, arg3: *mut c_void, arg4: *mut i64) -> i64

{
    let mut var_50: ();
    uu_sort::Output::into_write::h9c5c08d876f77806(&var_50, arg4);
    let mut var_60: i64 = arg1;
    let var_58: i64 = arg2;
    
    loop
    {
        let rax_1: *mut i64 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h025563f650802cf2(&var_60);
        
        if rax_1 == 0
        {
            break;
        }
        
        uu_sort::Line::print::he3975e626e2ad263(rax_1, &var_50, arg3);
    }
    
    core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$$GT$::h1183853de4007e7a(&var_50)
}
