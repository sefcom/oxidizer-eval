void __rustcall
uu_fmt::parasplit::WordSplit::new
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined auVar1 [16];
  
  auVar1 = core::str::_<impl_str>::trim_start_matches(param_3,param_4);
  *param_1 = param_2;
  *(undefined (*) [16])(param_1 + 1) = auVar1;
  param_1[3] = param_4;
  param_1[4] = 0;
  *(undefined *)(param_1 + 5) = 0;
  return;
}