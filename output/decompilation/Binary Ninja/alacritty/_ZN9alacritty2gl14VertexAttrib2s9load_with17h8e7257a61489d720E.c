
  void (*)() __noreturn alacritty::gl::VertexAttrib2s::load_with::h8e7257a61489d720(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glVertexAttrib2sTryFromCharError", 0x10, &data_c86ac0, 2);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::VertexAttrib2s::h9e873e0d785d91a7 = result_1;
    data_ce6918 = result;
    return result;
}
