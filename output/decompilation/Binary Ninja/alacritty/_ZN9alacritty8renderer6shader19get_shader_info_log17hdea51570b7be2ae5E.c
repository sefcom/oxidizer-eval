
  int64_t alacritty::renderer::shader::get_shader_info_log::hdea51570b7be2ae5(int64_t* arg1, int32_t arg2)

{
    int32_t var_48 = 0;
    *alacritty::gl::storage::GetShaderiv::h69c95f7d61f52dac.0(arg2, 0x8b84, &var_48);
    int32_t var_44 = 0;
    int64_t rax;
    int64_t rdx_1;
    rax = alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::h6d79adff25664689(var_48, 1, 1);
    int64_t var_40 = rax;
    int64_t var_30 = 0;
    *alacritty::gl::storage::GetShaderInfoLog::h2a8fa29910573669.0(arg2, var_48, &var_44, rdx_1);
    int64_t rdx_3 = var_44;
    int64_t var_30_1 = rdx_3;
    void var_28;
    alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_28, rdx_1, rdx_3);
    int64_t var_20;
    uint64_t var_18;
    _$LT$$RF$str$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h0eee6798dc8ee10d(
        arg1, var_20, var_18);
    core::ptr::drop_in_place$LT$crossfont..Style$GT$::h2b47363f07595d0e(&var_28);
    return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hf03622863648a7aa(&var_40);
}
