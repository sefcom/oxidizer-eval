
  fn uu_env::parse_program_opt::h5dc288b3b7b61775(arg1: *mut c_void, arg2: i64, arg3: i64) -> *mut i128

{
    if *arg1.byte_offset(0x99) != 0
    {
        alloc::vec::Vec$LT$T$C$A$GT$::push::h98294152d1093a7c(arg1.byte_offset(0x48), arg2, arg3);
        return nullptr;
    }
    
    let mut var_28: ();
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::he132dab3b8589a55(&var_28, 
        "cannot specify --null (-0) with …", 0x27);
    let var_10_1: i32 = 0x7d;
    alloc::boxed::Box$LT$T$GT$::new::ha5ed2421d13baa8b(&var_28)
}
