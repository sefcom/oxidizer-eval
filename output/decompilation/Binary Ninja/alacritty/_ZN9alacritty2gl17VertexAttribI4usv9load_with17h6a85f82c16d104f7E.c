
  void (*)() __noreturn alacritty::gl::VertexAttribI4usv::load_with::h6a85f82c16d104f7(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glVertexAttribI4usvglVertexAttri…", 0x13, &data_c86ed0, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::VertexAttribI4usv::h5e885ac7b8f9682e = result_1;
    data_ce6bf0 = result;
    return result;
}
