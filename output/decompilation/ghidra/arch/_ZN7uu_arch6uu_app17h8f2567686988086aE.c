long _ZN7uu_arch6uu_app17h8f2567686988086aE(long param_1)

{
  undefined8 uVar1;
  undefined auStack_5a8 [700];
  ulong local_2ec;
  undefined4 local_2e4;
  undefined local_2e0 [712];
  
  uVar1 = _ZN6uucore9util_name17h60d842bf27b05e82E();
  _ZN12clap_builder7builder7command7Command3new17hbb56a5a7b96c7e35E(local_2e0,uVar1);
  _ZN12clap_builder7builder7command7Command7version17h7decdfeb72eb2da9E(auStack_5a8,local_2e0);
  _ZN12clap_builder7builder7command7Command5about17h18a6b7e00eeabd4fE(local_2e0,auStack_5a8);
  _ZN12clap_builder7builder7command7Command10after_help17hdeb8b7f265e710a0E(auStack_5a8,local_2e0);
  (*(code *)PTR_memcpy_00208b58)(param_1,auStack_5a8,700);
  *(ulong *)(param_1 + 700) = local_2ec | 0x8000000080;
  *(undefined4 *)(param_1 + 0x2c4) = local_2e4;
  return param_1;
}