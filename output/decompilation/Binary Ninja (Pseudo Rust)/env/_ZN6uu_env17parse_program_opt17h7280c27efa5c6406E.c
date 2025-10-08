
  fn uu_env::parse_program_opt::h7280c27efa5c6406(arg1: *mut c_void, arg2: i64, arg3: i64) -> u64

{
    if *arg1.byte_offset(0x99) != 0
    {
        alloc::vec::Vec$LT$T$C$A$GT$::push::h6ca0b45f5c80c114(arg1.byte_offset(0x48), arg2, arg3);
        return 0;
    }
    
    let mut var_28: ();
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hf510679057ea9fe7(&var_28, "cannot specify --null (-0) with …", 0x27);
    let var_10: i32 = 0x7d;
    alloc::boxed::Box$LT$T$GT$::new::h0cd361b0827381d8(&var_28)
}
