
  uint64_t uu_tail::follow::files::FileHandling::update_reader::hba2c0912cd1385d3(void* arg1, char* arg2, uint64_t arg3)

{
    void* rax = uu_tail::follow::files::FileHandling::get_mut::h1b58406c510d0063(arg1, arg2, arg3);
    int32_t var_58;
    std::fs::File::open::h45183e62b5972047(&var_58, arg2);
    
    if (var_58 == 1)
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
    
    int32_t var_54;
    void var_48;
    std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h293b79a640eb5f10(&var_48, 
        var_54);
    uint64_t rax_2 = alloc::boxed::Box$LT$T$GT$::new::hf1e01b4c89005b4b(&var_48);
    int64_t rdi_3 = *(rax + 0xc8);
    int64_t* rsi_2 = *(rax + 0xd0);
    *(rax + 0xc8) = rax_2;
    *(rax + 0xd0) = &data_573408;
    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::h1ddfbf499f92a46c(rdi_3, rsi_2);
    return 0;
}
