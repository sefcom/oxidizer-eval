
  fn bat::vscreen::EscapeSequenceOffsetsIterator::next_text::h93bc3d3d1c93e5fa(arg1: *mut i64, arg2: *mut c_void) -> i64

{
    let mut var_20: i32;
    bat::vscreen::EscapeSequenceOffsetsIterator::chars_take_while::hd7045924a81021b7(&var_20, arg2);
    let mut result: i64 = 5;
    
    if var_20 == 1
    {
        let var_18: i128;
        *arg1.byte_offset(8) = var_18;
        result = 0;
    }
    
    *arg1 = result;
    result
}
