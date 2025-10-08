
  void (*)() __noreturn alacritty::gl::CompressedTexSubImage2D::load_with::h44ee0ef65d86aacb(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glCompressedTexSubImage2DglCompr…", 0x19, &data_c85b00, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::CompressedTexSubImage2D::h67082f11015a156a = result_1;
    data_ce57e0 = result;
    return result;
}
