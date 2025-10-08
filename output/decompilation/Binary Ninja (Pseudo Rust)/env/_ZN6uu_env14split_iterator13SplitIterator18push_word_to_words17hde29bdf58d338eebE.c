
  fn uu_env::split_iterator::SplitIterator::push_word_to_words::hde29bdf58d338eeb(arg1: *mut i128) -> i64

{
    let var_8: i64 = arg1[1];
    let mut var_18: i128 = *arg1;
    *arg1 = 0;
    *arg1.byte_offset(8) = 1;
    arg1[1] = 0;
    alloc::vec::Vec$LT$T$C$A$GT$::push::h76453104f30ccdea(&arg1[4], &var_18)
}
