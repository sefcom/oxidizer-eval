
  fn alacritty::renderer::text::update_projection::h3b47cfa7fc1313de(_: i64, arg2: *mut c_void) -> f32

{
    let result: f32 = *arg2.byte_offset(0x10);
    let mut rdx: i32 = result;
    let mut zmm2: i512;
    zmm2 = {0};
    
    if result < 0f
    {
        rdx = 0;
    }
    
    let zmm1: f32 = *arg2.byte_offset(0x20);
    let mut zmm3: i512;
    zmm3 = 0x4f7fffff;
    
    if result > 4.29496704e+09f
    {
        rdx = -1;
    }
    
    let mut r8: i32 = zmm1;
    
    if zmm1 < 0f
    {
        r8 = 0;
    }
    
    if zmm1 > 4.29496704e+09f
    {
        r8 = -1;
    }
    
    if rdx >= r8 * 2
    {
        let zmm4: f32 = *arg2.byte_offset(0x14);
        let mut rdx_1: i32 = zmm4;
        
        if zmm4 < 0f
        {
            rdx_1 = 0;
        }
        
        let zmm5: f32 = *arg2.byte_offset(0x24);
        
        if zmm4 > 4.29496704e+09f
        {
            rdx_1 = -1;
        }
        
        let mut rsi: i32 = zmm5;
        
        if zmm5 < 0f
        {
            rsi = 0;
        }
        
        if zmm5 > 4.29496704e+09f
        {
            rsi = -1;
        }
        
        if rdx_1 >= rsi * 2
        {
            zmm2 = 0x40000000;
            zmm2 = 2f / (result - (zmm1 + zmm1));
            zmm3 = 0xc0000000;
            zmm3 = -2f / (zmm4 - (zmm5 + zmm5));
            /* jump -> *alacritty::gl::storage::Uniform4f::h285528eef856017e.0 */
        }
    }
    
    result
}
