
  fn ruff_python_formatter::comments::map::MultiMap$LT$K$C$V$GT$::entry_to_out_of_order::h99c7313a90e9d36b(arg1: *mut i32, arg2: i64, arg3: i64, arg4: *mut i64) -> *mut c_void

{
    let rdi: i32 = *arg1;
    
    if rdi == 0
    {
        return &arg1[2];
    }
    
    let rcx: i64 = arg4[2];
    let mut rax: i64;
    let mut rdx_1: i64;
    rax = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h2681de418ccc56ae(rdi - 1, arg1[1] - 1, arg2, arg3);
    let mut var_48: ();
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hd104e18b08a90af8(&var_48, rax, rdx_1);
    alloc::vec::Vec$LT$T$C$A$GT$::push::h212ac18df04ae491(arg4, &var_48);
    let rsi_4: i32 = arg1[2];
    let rdi_5: u64 = arg1[1] - 1;
    let mut rsi_5: u64 = rsi_4 - 1;
    
    if rsi_4 < 1
    {
        rsi_5 = rdi_5;
    }
    
    let mut rax_1: i64;
    let mut rdx_4: i64;
    rax_1 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h2681de418ccc56ae(rdi_5, rsi_5, arg2, arg3);
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hd104e18b08a90af8(&var_48, rax_1, rdx_4);
    alloc::vec::Vec$LT$T$C$A$GT$::push::h212ac18df04ae491(arg4, &var_48);
    let mut rax_2: u64;
    let mut rdx_6: i64;
    rax_2 =
        ruff_python_formatter::comments::map::InOrderEntry::trailing_range::h32d34cc5d8d5c983(arg1);
    let mut rax_3: i64;
    let mut rdx_8: i64;
    rax_3 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h2681de418ccc56ae(rax_2, rdx_6, arg2, arg3);
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hd104e18b08a90af8(&var_48, rax_3, rdx_8);
    alloc::vec::Vec$LT$T$C$A$GT$::push::h212ac18df04ae491(arg4, &var_48);
    *arg1 = 0;
    *arg1.byte_offset(8) = rcx;
    &arg1[2]
}
