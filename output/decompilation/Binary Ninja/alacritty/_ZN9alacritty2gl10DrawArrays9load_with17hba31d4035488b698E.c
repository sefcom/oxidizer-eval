
  void (*)() __noreturn alacritty::gl::DrawArrays::load_with::hba31d4035488b698(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glDrawArraysglDrawArraysInstance…", 0xc, &data_c85cd0, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    *alacritty::gl::storage::DrawArrays::ha51bda91551dee03.0 = result_1;
    return result;
}
