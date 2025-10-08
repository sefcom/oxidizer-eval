
  void (*)() __noreturn alacritty::gl::VertexAttribIPointer::load_with::he0ae7388eda69eaf(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glVertexAttribIPointerglVertexAt…", 0x16, &data_c86ee0, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::VertexAttribIPointer::hf63061dad7bd07d1 = result_1;
    data_ce6c00 = result;
    return result;
}
