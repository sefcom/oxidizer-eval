void _ZN6uu_env14split_iterator13SplitIterator8take_one17h1e0059af94c5f623E
               (undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  byte extraout_DL;
  
  uVar1 = (*(code *)
            PTR__ZN6uu_env15string_expander14StringExpander8take_one17hd9c3a6abe6131b4dE_00219308)
                    (param_2);
  uVar2 = 0xc;
  if (extraout_DL != 2) {
    *(undefined8 *)(param_1 + 2) = uVar1;
    *(undefined8 *)(param_1 + 4) = uVar1;
    *(byte *)(param_1 + 6) = extraout_DL & 1;
    uVar2 = 0xb;
  }
  *param_1 = uVar2;
  return;
}