
  fn uu_touch::pathbuf_from_stdout::h2920ee1b816c3101(arg1: *mut i64) -> *mut u64

{
    let result: *mut u64 =
        std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&arg1[1], "/dev/stdout", 0xb);
    *arg1 = -0x7ffffffffffffffc;
    result
}
