
  void (*)() __noreturn alacritty::gl::PopDebugGroup::load_with::h65cd64051158d4a4(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glPopDebugGroupglPrimitiveRestar…", 0xf, &data_c86560, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::PopDebugGroup::h6bad56b783b7fb06 = result_1;
    data_ce6300 = result;
    return result;
}
