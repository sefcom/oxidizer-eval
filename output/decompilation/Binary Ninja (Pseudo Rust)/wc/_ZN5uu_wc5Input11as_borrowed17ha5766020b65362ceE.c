
  fn uu_wc::Input::as_borrowed::ha5766020b65362ce(arg1: *mut i64, arg2: *mut i64)

{
    if *arg2 == -0x7fffffffffffffff
    {
        arg1[1] = arg2[1];
        *arg1 = -0x7fffffffffffffff;
        return;
    }
    
    *arg1.byte_offset(8) = *arg2.byte_offset(8);
    *arg1 = -0x8000000000000000;
}
