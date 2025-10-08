
  fn alacritty::renderer::shader::ShaderProgram::get_uniform_location::h89c89b44df60d4f2(arg1: *mut i64, arg2: i32, arg3: i64, arg4: i64) -> i64

{
    let rax: i32 = *alacritty::gl::storage::GetUniformLocation::h3be57d0a0114f07a.0(arg2, arg3);
    let mut result: i64;
    
    if rax == 0xffffffff
    {
        arg1[1] = arg3;
        arg1[2] = arg4;
        result = 2;
    }
    else
    {
        arg1[1] = rax;
        result = 3;
    }
    
    *arg1 = result;
    result
}
