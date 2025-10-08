
  fn bat::input::InputDescription::set_kind::hc7573ae884c3aeea(arg1: *mut c_void, arg2: *mut i128) -> i64

{
    let rax: i64;
    let var_18: i64 = rax;
    core::ptr::drop_in_place$LT$regex..error..Error$GT$::h92380712fca2cb32(arg1.byte_offset(0x30));
    let result: i64 = arg2[1];
    *arg1.byte_offset(0x40) = result;
    *arg1.byte_offset(0x30) = *arg2;
    result
}
