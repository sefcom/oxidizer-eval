
  fn uu_sort::merge::FileMerger::write_all::h8ffbbdd0c487cde8(arg1: *mut i128, arg2: i64, arg3: *mut i64) -> i64

{
    let mut var_a8: ();
    uu_sort::Output::into_write::h9c5c08d876f77806(&var_a8, arg3);
    let var_28: i128 = arg1[5];
    let var_38: i128 = arg1[4];
    let var_48: i128 = arg1[3];
    let var_58: i128 = arg1[2];
    let var_68: i128 = arg1[1];
    let mut var_78: i128 = *arg1;
    let mut result: i64;
    let mut rdx: i64;
    result = uu_sort::merge::FileMerger::write_all_to::h11b453511c748ea2(&var_78);
    core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$$GT$::h1183853de4007e7a(&var_a8);
    result
}
