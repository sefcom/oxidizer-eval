
  void (*)() __noreturn alacritty::gl::GetObjectLabelKHR::load_with::hf63f8406faa821a6(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGetObjectLabelKHRglGetObjectPt…", 0x13, 8, 0);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::GetObjectLabelKHR::hbd38e88ee419e6c5 = result_1;
    data_ce5d78 = result;
    return result;
}
