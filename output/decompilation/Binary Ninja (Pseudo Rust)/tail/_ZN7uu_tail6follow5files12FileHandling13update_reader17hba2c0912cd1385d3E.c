
  fn uu_tail::follow::files::FileHandling::update_reader::hba2c0912cd1385d3(arg1: *mut c_void, arg2: *mut i8, arg3: u64) -> u64

{
    let rax: *mut c_void =
        uu_tail::follow::files::FileHandling::get_mut::h1b58406c510d0063(arg1, arg2, arg3);
    let mut var_58: i32;
    std::fs::File::open::h45183e62b5972047(&var_58, arg2);
    
    if var_58 == 1
    {
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
    }
    
    let var_54: i32;
    let mut var_48: ();
    std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h293b79a640eb5f10(&var_48, 
        var_54);
    let rax_2: u64 = alloc::boxed::Box$LT$T$GT$::new::hf1e01b4c89005b4b(&var_48);
    let rdi_3: i64 = *rax.byte_offset(0xc8);
    let rsi_2: *mut i64 = *rax.byte_offset(0xd0);
    *rax.byte_offset(0xc8) = rax_2;
    *rax.byte_offset(0xd0) = &data_573408;
    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::h1ddfbf499f92a46c(rdi_3, rsi_2);
    0
}
