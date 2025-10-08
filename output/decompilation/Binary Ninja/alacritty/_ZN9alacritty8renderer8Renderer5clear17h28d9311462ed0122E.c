
  int64_t alacritty::renderer::Renderer::clear::h28d9311462ed0122(int32_t arg1, float arg2)

{
    *alacritty::gl::storage::ClearColor::hdf1688bbf9319660.0(
        _mm_min_ss(arg1 / 255f, 0x3f800000) * arg2, _mm_min_ss(*arg1[1] / 255f, 0x3f800000) * arg2, 
        _mm_min_ss((arg1 >> 0x10) / 255f, 0x3f800000) * arg2);
    /* jump -> *alacritty::gl::storage::Clear::h2842efd9ecd418e5.0 */
}
