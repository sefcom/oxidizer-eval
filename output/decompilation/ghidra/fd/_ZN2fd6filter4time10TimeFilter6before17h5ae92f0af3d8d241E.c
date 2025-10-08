void _ZN2fd6filter4time10TimeFilter6before17h5ae92f0af3d8d241E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined auVar2 [12];
  
  auVar2 = _ZN2fd6filter4time10TimeFilter8from_str17h9f09e78d43e167d9E(param_2,param_3);
  uVar1 = 2;
  if (auVar2._8_4_ != 1000000000) {
    *(undefined (*) [12])(param_1 + 1) = auVar2;
    uVar1 = 0;
  }
  *param_1 = uVar1;
  return;
}