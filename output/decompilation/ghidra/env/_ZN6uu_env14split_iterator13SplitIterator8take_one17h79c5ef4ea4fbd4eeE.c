void _ZN6uu_env14split_iterator13SplitIterator8take_one17h79c5ef4ea4fbd4eeE
               (undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  byte extraout_DL;
  
  uVar1 = _ZN6uu_env15string_expander14StringExpander8take_one17haa545a6e4e1a581cE(param_2);
  uVar2 = 8;
  if (extraout_DL != 2) {
    *(undefined8 *)(param_1 + 2) = uVar1;
    *(undefined8 *)(param_1 + 4) = uVar1;
    *(byte *)(param_1 + 6) = extraout_DL & 1;
    uVar2 = 5;
  }
  *param_1 = uVar2;
  return;
}