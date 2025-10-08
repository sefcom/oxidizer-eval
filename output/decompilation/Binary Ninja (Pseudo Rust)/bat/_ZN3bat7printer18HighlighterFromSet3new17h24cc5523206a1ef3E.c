
  fn bat::printer::HighlighterFromSet::new::h24cc5523206a1ef3(arg1: *mut i128, arg2: *mut c_void, arg3: i64, arg4: *mut c_void) -> *mut i128

{
    let rax: i64;
    let var_18: i64 = rax;
    let result: *mut i128 = syntect::easy::HighlightLines::new::hacf82a199c8740e5(arg1, arg2, arg4);
    arg1[0xd] = arg3;
    result
}
