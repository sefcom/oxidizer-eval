
  double alacritty::display::bell::cubic_bezier::h4df3262c1e733036(double arg1, double arg2, double arg3, double arg4, double arg5) __pure

{
    double zmm5 = 1.0 - arg5;
    double zmm6 = zmm5 * zmm5;
    double zmm7 = 3.0;
    arg1 = arg1 * zmm5 * zmm6 + zmm6 * zmm7 * arg5 * arg2;
    arg2 = arg5 * arg5;
    return arg1 + zmm5 * zmm7 * arg2 * arg3 + arg2 * arg5 * arg4;
}
