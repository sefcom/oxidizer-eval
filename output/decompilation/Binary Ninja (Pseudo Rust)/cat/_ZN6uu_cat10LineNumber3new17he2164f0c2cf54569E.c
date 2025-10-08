
  fn uu_cat::LineNumber::new::he2164f0c2cf54569(arg1: *mut i128) -> i512

{
    let mut result_1: i128;
    __builtin_strncpy(&result_1, "0000000000000000000000000", 0x19);
    let mut var_f: ();
    core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::copy_from_slice::h981deb73633b05d4(&var_f);
    let result: i128 = result_1;
    let var_1f: i128;
    arg1[1] = var_1f;
    *arg1 = result;
    __builtin_memcpy(&arg1[2], 
        "\x19\x00\x00\x00\x00\x00\x00\x00\x1e\x00\x00\x00\x00\x00\x00\x00\x1f\x00\x00\x00\x00\x00\x00\x00", 0x18);
    result
}
