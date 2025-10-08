
  fn bat::app::App::new::h327fd37a294c175c(arg1: *mut i8) -> i64

{
    std::io::stdio::stdout::hb6a8e10bcccf3287();
    let rax: i8 = std::sys::io::is_terminal::isatty::is_terminal::he9481b7f77764060();
    let mut result_1: i8;
    bat::app::App::matches::hdbbfdfbdf2b6730c(&result_1, rax);
    let result: i8 = result_1;
    let var_5f: i128;
    let var_4f: i128;
    let var_3f: i128;
    
    if result != 0xd
    {
        let var_20: i128;
        *arg1.byte_offset(0x40) = var_20;
        *arg1.byte_offset(0x30) = var_3f;
        *arg1.byte_offset(0x21) = var_3f;
        *arg1.byte_offset(0x11) = var_4f;
        *arg1.byte_offset(1) = var_5f;
    }
    else
    {
        let mut var_79: i128;
        let var_28: i64;
        *var_79[8] = var_28;
        let var_88: i128 = var_3f;
        let var_98: i128 = var_4f;
        let var_a8: i128 = var_5f;
        *arg1.byte_offset(0x38) = var_28;
        *arg1.byte_offset(0x28) = var_3f;
        *arg1.byte_offset(0x18) = var_4f;
        *arg1.byte_offset(8) = var_5f;
        arg1[0x40] = rax;
    }
    *arg1 = result;
    result
}
