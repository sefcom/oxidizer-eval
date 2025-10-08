
  void (*)() __noreturn alacritty::gl::MultiTexCoordP2uiv::load_with::h085468c34dcf045f(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glMultiTexCoordP2uivglMultiTexCo…", 0x14, 8, 0);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::MultiTexCoordP2uiv::h6f202c9d83d73b3d = result_1;
    data_ce61c8 = result;
    return result;
}
