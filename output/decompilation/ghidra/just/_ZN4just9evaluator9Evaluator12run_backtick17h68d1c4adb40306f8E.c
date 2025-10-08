void _ZN4just9evaluator9Evaluator12run_backtick17h68d1c4adb40306f8E(undefined *param_1)

{
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _ZN4just9evaluator9Evaluator11run_command17h86d0b2f36f29e5c6E(&local_80);
  *(undefined8 *)(param_1 + 0x18) = uStack_70;
  *(undefined8 *)(param_1 + 8) = local_80;
  *(undefined8 *)(param_1 + 0x10) = uStack_78;
  *param_1 = 0x38;
  return;
}