
  fn forc_fmt::display_file_diff::h0e6791d1d0ed248f(arg1: i64, arg2: i64, arg3: i64, arg4: i64) -> i64

{
    let mut var_88: ();
    prettydiff::text::diff_lines::h9f37d4ffa3133813(&var_88, arg1, arg2, arg3, arg4);
    let mut var_1c8: ();
    prettydiff::text::LineChangeset::diff::ha1342c8e083a9fe3(&var_1c8, &var_88);
    let mut var_a8: ();
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::he86c3a603bfa32a4(&var_a8, &var_1c8);
    let mut var_110: i64;
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb2b6db71e3da9753(&var_110, &var_a8);
    let rax: i64 = var_110;
    
    if rax != 4
    {
        /* jump -> &data_567220[*(&data_567220).byte_offset(rax << 2)] */
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$prettydiff..basic..DiffOp$LT$$RF$str$GT$$GT$$GT$::hfda4e4c33da7a7a8(&var_a8);
    core::ptr::drop_in_place$LT$prettydiff..text..LineChangeset$GT$::hc00cd269627f84c0(&var_88)
}
