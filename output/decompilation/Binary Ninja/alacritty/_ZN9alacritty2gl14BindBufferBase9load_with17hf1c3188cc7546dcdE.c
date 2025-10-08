
  void (*)() __noreturn alacritty::gl::BindBufferBase::load_with::hf1c3188cc7546dcd(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glBindBufferBaseglReadnPixelsEXT…", 0x10, &data_c85940, 2);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::BindBufferBase::h25810b87c8f2ee14 = result_1;
    data_ce55b8 = result;
    return result;
}
