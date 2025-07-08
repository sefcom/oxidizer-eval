
  int128_t* uu_tail::follow::files::FileHandling::update_reader::haeff66f6ffe85304(void* arg1, char* arg2, size_t arg3)

{
    void* rax = uu_tail::follow::files::FileHandling::get_mut::h1a80ce1ee4fcf7dc(arg1, arg2, arg3);
    int32_t var_58;
    std::fs::File::open::hcbb28a04a46ba590(&var_58, arg2);
    
    if (var_58)
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
    
    int32_t var_54;
    void var_48;
    std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::ha3ac34d0a7f10d70(&var_48, 
        0x2000, var_54);
    int128_t* rax_2 = alloc::boxed::Box$LT$T$GT$::new::hf480b26787a6f5a3(&var_48);
    int64_t rdi_4 = *(rax + 0xc8);
    int64_t* rsi_1 = *(rax + 0xd0);
    *(rax + 0xc8) = rax_2;
    *(rax + 0xd0) = &data_5bc4c8;
    core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..boxed..Box$LT$dyn$u20$std..io..BufRead$GT$$GT$$GT$::hb79f29454372363d(rdi_4, rsi_1);
    return nullptr;
}
