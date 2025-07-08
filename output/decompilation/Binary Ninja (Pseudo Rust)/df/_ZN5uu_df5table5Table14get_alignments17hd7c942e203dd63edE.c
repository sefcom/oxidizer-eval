
  fn uu_df::table::Table::get_alignments::hd7c942e203dd63ed(arg1: *mut i128, arg2: i64, arg3: i64) -> i64

{
    let mut var_48: i64 = 0;
    let var_40: i64 = 1;
    let result: i64 = 0;
    let mut var_30: i64 = arg2;
    let var_28: i64 = arg3 + arg2;
    
    loop
    {
        let rax_1: *mut i8 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd80283963ca975b5(&var_30);
        
        if rax_1 == 0
        {
            break;
        }
        
        alloc::vec::Vec$LT$T$C$A$GT$::push::hd36bc5d027d87a0e(&var_48, TEST_BITD(0x3de, *rax_1));
    }
    
    arg1[1] = result;
    *arg1 = var_48;
    result
}
