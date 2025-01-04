void __rustcall
uu_env::split_iterator::SplitIterator::take_one(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  byte extraout_DL;
  
  uVar1 = string_expander::StringExpander::take_one(param_2);
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