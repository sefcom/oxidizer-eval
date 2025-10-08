
  void (*)() __noreturn alacritty::gl::ObjectPtrLabel::load_with::hda417673bf4b9893(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glObjectPtrLabelglUniform2uivEXT…", 0x10, &data_c864c0, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::ObjectPtrLabel::h1eb18e24d978b9ab = result_1;
    data_ce6258 = result;
    return result;
}
