
  void (*)() __noreturn alacritty::gl::DeleteSync::load_with::hc710c8ba3ae89a4c(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glDeleteSyncglDeleteVertexArrays…", 0xc, &data_c85c40, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::DeleteSync::h91fb6203a5040649 = result_1;
    data_ce5930 = result;
    return result;
}
