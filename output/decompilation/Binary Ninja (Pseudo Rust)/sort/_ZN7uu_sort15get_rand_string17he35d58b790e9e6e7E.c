
  fn uu_sort::get_rand_string::he35d58b790e9e6e7(arg1: *mut i8) -> *mut i8

{
    let mut var_10: i64 = rand::rngs::thread::thread_rng::hb51ef0c041e68525();
    rand::rng::Rng::sample::h9a4d1690a9be04b9(arg1, &var_10);
    core::ptr::drop_in_place$LT$rand..rngs..thread..ThreadRng$GT$::hb7599d4f5721d48e(&var_10);
    arg1
}
