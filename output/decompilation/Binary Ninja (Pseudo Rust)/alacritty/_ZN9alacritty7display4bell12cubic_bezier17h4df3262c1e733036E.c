
  fn alacritty::display::bell::cubic_bezier::h4df3262c1e733036(arg1: f64, arg2: f64, arg3: f64, arg4: f64, arg5: f64) -> f64

{
    let zmm5: f64 = 1.0 - arg5;
    let zmm6: f64 = zmm5 * zmm5;
    let zmm7: f64 = 3.0;
    arg1 = arg1 * zmm5 * zmm6 + zmm6 * zmm7 * arg5 * arg2;
    arg2 = arg5 * arg5;
    arg1 + zmm5 * zmm7 * arg2 * arg3 + arg2 * arg5 * arg4
}
