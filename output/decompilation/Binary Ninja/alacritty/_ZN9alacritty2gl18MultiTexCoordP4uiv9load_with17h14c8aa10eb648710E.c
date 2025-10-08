
  void (*)() __noreturn alacritty::gl::MultiTexCoordP4uiv::load_with::h14c8aa10eb648710(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glMultiTexCoordP4uivglNormalP3ui…", 0x14, 8, 0);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::MultiTexCoordP4uiv::h9f14509d32fef8c0 = result_1;
    data_ce6208 = result;
    return result;
}
