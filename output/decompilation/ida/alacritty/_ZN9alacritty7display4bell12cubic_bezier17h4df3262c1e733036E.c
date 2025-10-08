double __fastcall alacritty::display::bell::cubic_bezier(double a1, double a2, double a3, double a4, double a5)
{
  return a1 * ((1.0 - a5) * ((1.0 - a5) * (1.0 - a5)))
       + (1.0 - a5) * (1.0 - a5) * 3.0 * a5 * a2
       + (1.0 - a5) * 3.0 * (a5 * a5) * a3
       + a5 * a5 * a5 * a4;
}