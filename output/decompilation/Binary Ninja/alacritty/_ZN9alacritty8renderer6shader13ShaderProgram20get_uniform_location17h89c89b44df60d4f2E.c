
  int64_t alacritty::renderer::shader::ShaderProgram::get_uniform_location::h89c89b44df60d4f2(int64_t* arg1, int32_t arg2, int64_t arg3, int64_t arg4)

{
    int32_t rax = *alacritty::gl::storage::GetUniformLocation::h3be57d0a0114f07a.0(arg2, arg3);
    int64_t result;
    
    if (rax == 0xffffffff)
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
    return result;
}
