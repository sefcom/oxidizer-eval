
  void (*)() __noreturn alacritty::gl::CompressedTexImage3D::load_with::ha16ba4186deeec15(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glCompressedTexImage3DglCompress…", 0x16, &data_c85ae0, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::CompressedTexImage3D::h67b0c59de9ec6a2f = result_1;
    data_ce57c0 = result;
    return result;
}
