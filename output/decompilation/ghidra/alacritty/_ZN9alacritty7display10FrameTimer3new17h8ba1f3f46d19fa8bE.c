void _ZN9alacritty7display10FrameTimer3new17h8ba1f3f46d19fa8bE(undefined (*param_1) [12])

{
  undefined auVar1 [12];
  
  auVar1 = (*(code *)PTR__ZN3std4time7Instant3now17h767314cc8c6c5886E_009de3e8)();
  *param_1 = auVar1;
  *(undefined (*) [12])(param_1[1] + 4) = auVar1;
  *(undefined8 *)(param_1[2] + 8) = 0;
  *(undefined4 *)(param_1[3] + 4) = 0;
  return;
}