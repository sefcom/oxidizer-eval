void _ZN9alacritty7display4bell10VisualBell4ring17h00b9dcfa0acc9195E(long param_1)

{
  undefined auVar1 [12];
  
  auVar1 = (*(code *)PTR__ZN3std4time7Instant3now17h767314cc8c6c5886E_009de3e8)();
  *(undefined (*) [12])(param_1 + 0x10) = auVar1;
  _ZN9alacritty7display4bell10VisualBell20intensity_at_instant17h7ef172ac2da99aa5E
            (param_1,auVar1._0_8_);
  return;
}