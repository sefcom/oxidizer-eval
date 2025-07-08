
  fn uu_env::split_iterator::SplitIterator::push_word_to_words::h2e43e9c5d0186d6c(arg1: *mut i128) -> i64

{
    let var_8: i64 = arg1[1];
    let mut var_18: i128 = *arg1;
    *arg1 = 0;
    *arg1.byte_offset(8) = 1;
    arg1[1] = 0;
    alloc::vec::Vec$LT$T$C$A$GT$::push::hb06191b2410fa606(&arg1[4], &var_18)
}
