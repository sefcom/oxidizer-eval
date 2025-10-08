
  void (*)() __noreturn alacritty::gl::MultiDrawArrays::load_with::h92bc1a3da0170f84(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glMultiDrawArraysglMultiDrawElem…", 0x11, &data_c86480, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::MultiDrawArrays::hb598791634419d3a = result_1;
    data_ce6168 = result;
    return result;
}
