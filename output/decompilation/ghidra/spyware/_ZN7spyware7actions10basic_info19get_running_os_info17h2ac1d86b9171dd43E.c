void _ZN7spyware7actions10basic_info19get_running_os_info17h2ac1d86b9171dd43E
               (undefined (*param_1) [16])

{
  undefined8 uVar1;
  char *pcVar2;
  undefined auVar3 [16];
  
  auVar3 = _ZN5alloc7raw_vec20RawVecInner_LT_A_GT_16with_capacity_in17h590fc4c98277c4adE();
  uVar1 = s_To_be_implemented_0011303c._8_8_;
  pcVar2 = auVar3._8_8_;
  *(undefined8 *)pcVar2 = s_To_be_implemented_0011303c._0_8_;
  *(undefined8 *)(pcVar2 + 8) = uVar1;
  pcVar2[0x10] = 'd';
  *param_1 = auVar3;
  *(undefined8 *)param_1[1] = 0x11;
  return;
}