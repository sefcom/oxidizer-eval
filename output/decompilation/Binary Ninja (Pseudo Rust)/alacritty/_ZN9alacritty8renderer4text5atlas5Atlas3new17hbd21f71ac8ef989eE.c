
  fn alacritty::renderer::text::atlas::Atlas::new::hbd21f71ac8ef989e(arg1: *mut i32, arg2: i8) -> i64

{
    let rax: i64;
    let mut var_18: i64 = rax;
    *var_18[4] = 0;
    *alacritty::gl::storage::PixelStorei::h029e209348732b59.0(0xcf5, 1);
    *alacritty::gl::storage::GenTextures::hb4d686c2057792ad.0(1, &*var_18[4]);
    *alacritty::gl::storage::BindTexture::h1bc957198888829c.0(0xde1, *var_18[4]);
    *alacritty::gl::storage::TexImage2D::hb16e57e790040cbc.0(0xde1, 0, 0x1908, 0x400, 0x400, 0, 
        0x1908, 0x1401, 0);
    *alacritty::gl::storage::TexParameteri::h196cf479b623bb16.0(0xde1, 0x2802, 0x812f);
    *alacritty::gl::storage::TexParameteri::h196cf479b623bb16.0(0xde1, 0x2803, 0x812f);
    *alacritty::gl::storage::TexParameteri::h196cf479b623bb16.0(0xde1, 0x2801, 0x2601);
    *alacritty::gl::storage::TexParameteri::h196cf479b623bb16.0(0xde1, 0x2800, 0x2601);
    *alacritty::gl::storage::BindTexture::h1bc957198888829c.0(0xde1, 0);
    let result: i32 = *var_18[4];
    *arg1 = result;
    *arg1.byte_offset(4) = 0x40000000400;
    arg1[5] = 0;
    arg1[6] = arg2;
    result
}
