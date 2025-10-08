void _ZN18alacritty_terminal4term6search18RegexIter_LT_T_GT_4skip17h5be9c855bda625b2E
               (undefined (*param_1) [12])

{
  char cVar1;
  undefined8 uVar2;
  undefined auVar3 [12];
  
  uVar2 = *(undefined8 *)(param_1[3] + 4);
  cVar1 = param_1[4][0];
  auVar3 = _ZN18alacritty_terminal4term13Term_LT_T_GT_11expand_wide17h832c6afc1f08b7ffE
                     (uVar2,*(undefined8 *)*param_1,*(undefined4 *)(*param_1 + 8),cVar1);
  *param_1 = auVar3;
  if (cVar1 == '\x01') {
    auVar3 = _ZN18alacritty_terminal5index5Point3add17h870632f29f948f48E
                       (auVar3._0_8_,auVar3._8_4_,uVar2,2,1);
  }
  else {
    auVar3 = _ZN18alacritty_terminal5index5Point3sub17h8b4b7dd5f4447bbcE
                       (auVar3._0_8_,auVar3._8_4_,uVar2,2);
  }
  *param_1 = auVar3;
  return;
}