
  fn uu_sort::get_rand_string::hfc771f269e2134eb(arg1: *mut i128) -> *mut i128

{
    let mut var_10: *mut i64 = rand::rngs::thread::rng::h4ff389470e265d23();
    rand::rng::Rng::sample::h1f7306a7ff6421f3(arg1, &var_10);
    core::ptr::drop_in_place$LT$rand..rngs..thread..ThreadRng$GT$::hb7ded22a97c9c564(&var_10);
    arg1
}
