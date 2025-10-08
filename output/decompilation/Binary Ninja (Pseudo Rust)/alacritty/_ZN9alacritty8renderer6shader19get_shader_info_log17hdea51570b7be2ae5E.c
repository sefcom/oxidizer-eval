
  fn alacritty::renderer::shader::get_shader_info_log::hdea51570b7be2ae5(arg1: *mut i64, arg2: i32) -> i64

{
    let mut var_48: i32 = 0;
    *alacritty::gl::storage::GetShaderiv::h69c95f7d61f52dac.0(arg2, 0x8b84, &var_48);
    let mut var_44: i32 = 0;
    let mut rax: i64;
    let mut rdx_1: i64;
    rax = alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::h6d79adff25664689(var_48, 1, 1);
    let mut var_40: i64 = rax;
    let var_30: i64 = 0;
    *alacritty::gl::storage::GetShaderInfoLog::h2a8fa29910573669.0(arg2, var_48, &var_44, rdx_1);
    let rdx_3: i64 = var_44;
    let var_30_1: i64 = rdx_3;
    let mut var_28: ();
    alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_28, rdx_1, rdx_3);
    let var_20: i64;
    let var_18: u64;
    _$LT$$RF$str$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h0eee6798dc8ee10d(
        arg1, var_20, var_18);
    core::ptr::drop_in_place$LT$crossfont..Style$GT$::h2b47363f07595d0e(&var_28);
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hf03622863648a7aa(&var_40)
}
