long __rustcall uu_numfmt::handle_args(undefined4 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined auVar3 [16];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  puVar1 = PTR_format_and_handle_validation_0023a3b8;
  local_58 = *param_1;
  uStack_54 = param_1[1];
  uStack_50 = param_1[2];
  uStack_4c = param_1[3];
  local_48 = *(undefined8 *)(param_1 + 4);
  uStack_40 = *(undefined8 *)(param_1 + 6);
  local_38 = *(undefined8 *)(param_1 + 8);
  uStack_30 = *(undefined8 *)(param_1 + 10);
  local_28 = *(undefined8 *)(param_1 + 0xc);
  uStack_20 = *(undefined8 *)(param_1 + 0xe);
  do {
    auVar3 = _<core::iter::adapters::map::Map<I,F>as_core::iter::traits::iterator::Iterator>::next
                       (&local_58);
    if (auVar3._0_8_ == 0) {
      return 0;
    }
    lVar2 = (*(code *)puVar1)(auVar3._0_8_,auVar3._8_8_,param_2);
  } while (lVar2 == 0);
  return lVar2;
}