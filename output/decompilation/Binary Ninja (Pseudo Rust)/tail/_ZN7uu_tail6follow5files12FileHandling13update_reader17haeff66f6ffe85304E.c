
  fn uu_tail::follow::files::FileHandling::update_reader::haeff66f6ffe85304(arg1: *mut c_void, arg2: *mut i8, arg3: size_t) -> *mut i128

{
    let rax: *mut c_void =
        uu_tail::follow::files::FileHandling::get_mut::h1a80ce1ee4fcf7dc(arg1, arg2, arg3);
    let mut var_58: i32;
    std::fs::File::open::hcbb28a04a46ba590(&var_58, arg2);
    
    if var_58 != 0
    {
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
    }
    
    let var_54: i32;
    let mut var_48: ();
    std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::ha3ac34d0a7f10d70(&var_48, 
        0x2000, var_54);
    let rax_2: *mut i128 = alloc::boxed::Box$LT$T$GT$::new::hf480b26787a6f5a3(&var_48);
    let rdi_4: i64 = *rax.byte_offset(0xc8);
    let rsi_1: *mut i64 = *rax.byte_offset(0xd0);
    *rax.byte_offset(0xc8) = rax_2;
    *rax.byte_offset(0xd0) = &data_5bc4c8;
    core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..boxed..Box$LT$dyn$u20$std..io..BufRead$GT$$GT$$GT$::hb79f29454372363d(rdi_4, rsi_1);
    nullptr
}
