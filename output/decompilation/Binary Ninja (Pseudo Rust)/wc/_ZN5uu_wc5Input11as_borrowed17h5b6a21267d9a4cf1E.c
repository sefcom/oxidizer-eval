
  fn uu_wc::Input::as_borrowed::h5b6a21267d9a4cf1(arg1: *mut i128, arg2: *mut i64)

{
    if *arg2 == -0x7fffffffffffffff
    {
        arg1[1] = arg2[2];
        *arg1 = *arg2;
        return;
    }
    
    let zmm0: i128 = *arg2.byte_offset(8);
    *arg1 = -0x8000000000000000;
    *arg1.byte_offset(8) = zmm0;
}
