
  void (*)() __noreturn alacritty::gl::DrawElementsInstanced::load_with::h9dd1282e2bd224ca(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glDrawElementsInstancedglDrawEle…", 0x17, &data_c85d70, 4);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    *alacritty::gl::storage::DrawElementsInstanced::hea1d83919bf93ee2.0 = result_1;
    return result;
}
