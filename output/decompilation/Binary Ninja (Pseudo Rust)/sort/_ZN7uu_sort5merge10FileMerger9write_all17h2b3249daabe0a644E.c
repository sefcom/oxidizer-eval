
  fn uu_sort::merge::FileMerger::write_all::h2b3249daabe0a644(arg1: *mut i128, arg2: i64, arg3: *mut i64) -> i64

{
    let mut var_a8: ();
    uu_sort::Output::into_write::hce87a09f168f8bb5(&var_a8, arg3);
    let var_28: i128 = arg1[5];
    let var_38: i128 = arg1[4];
    let var_48: i128 = arg1[3];
    let var_58: i128 = arg1[2];
    let var_68: i128 = arg1[1];
    let mut var_78: i128 = *arg1;
    let mut result: i64;
    let mut rdx: i64;
    result = uu_sort::merge::FileMerger::write_all_to::hbebd4de149aa0871(&var_78, arg2);
    core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$$GT$::h9ee5d69f67e9e91a(&var_a8);
    result
}
