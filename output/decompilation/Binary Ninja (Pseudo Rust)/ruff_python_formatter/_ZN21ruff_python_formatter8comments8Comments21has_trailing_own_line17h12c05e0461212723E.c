
  fn ruff_python_formatter::comments::Comments::has_trailing_own_line::h12c05e0461212723(arg1: *mut c_void, arg2: *mut i64) -> *mut c_void

{
    let mut rax: i64;
    let mut rdx: i64;
    rax = _$LT$T$u20$as$u20$core..convert..Into$LT$U$GT$$GT$::into::haffdd116a2991132(arg2);
    let mut var_18: i64 = rax;
    let var_10: i64 = rdx;
    let mut rax_1: i64;
    let mut rdx_1: i64;
    rax_1 =
        ruff_python_formatter::comments::map::MultiMap$LT$K$C$V$GT$::trailing::hdc749e0acdbc0869(
        arg1.byte_offset(0x10), &var_18);
    var_18 = rax_1;
    let var_10_1: i64 = rax_1 + rdx_1 * 0xc;
    _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::h33a3afc225c216c0(&var_18)
}
