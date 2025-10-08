
  fn uu_df::table::Table::get_alignments::h30bf81e1dc4abfc2(arg1: *mut i128, arg2: *mut c_void, arg3: i64) -> i64

{
    let mut var_48: i64 = 0;
    let var_40: i64 = 1;
    let result: i64 = 0;
    let mut r13: i64 = 0;
    
    while arg3 != r13
    {
        let rax_1: u32 = *arg2.byte_offset(r13);
        r13 += 1;
        alloc::vec::Vec$LT$T$C$A$GT$::push::h5276f4d6a06e1d30(&var_48, TEST_BITD(0x3de, rax_1));
    }
    
    arg1[1] = result;
    *arg1 = var_48;
    result
}
