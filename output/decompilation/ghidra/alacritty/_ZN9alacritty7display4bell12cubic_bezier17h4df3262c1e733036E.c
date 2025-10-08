double _ZN9alacritty7display4bell12cubic_bezier17h4df3262c1e733036E
                 (double param_1,double param_2,double param_3,double param_4,double param_5)

{
  double dVar1;
  
  dVar1 = _s__001ea5d0 - param_5;
  return param_1 * dVar1 * dVar1 * dVar1 + dVar1 * dVar1 * _s__001ea998 * param_5 * param_2 +
         dVar1 * _s__001ea998 * param_5 * param_5 * param_3 + param_5 * param_5 * param_5 * param_4;
}