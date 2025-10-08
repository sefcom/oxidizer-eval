void _ZN8uu_split6number18DynamicWidthNumber6digits17h3f586449ee60c902E
               (undefined8 *param_1,ulong param_2,byte param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  bool bVar6;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 *local_38;
  
  uVar4 = (ulong)param_3;
  uVar2 = (uVar4 - 1) * uVar4;
  lVar5 = 2;
  if (uVar2 <= param_2) {
    do {
      param_2 = param_2 - uVar2;
      lVar5 = lVar5 + 1;
      uVar2 = uVar2 * uVar4;
    } while (uVar2 <= param_2);
  }
  local_50 = 0;
  uStack_48 = 1;
  local_40 = 0;
  local_38 = param_1;
  if (param_2 != 0) {
    if (param_3 == 0) {
      (*(code *)
        PTR__ZN4core9panicking11panic_const23panic_const_rem_by_zero17hedb898bfe2cd5907E_002120c0)
                (&PTR_s_src_uu_split_src_number_rs_0020abf0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    do {
      if (param_2 >> 0x20 == 0) {
        uVar2 = param_2 & 0xffffffff;
        uVar3 = (undefined4)(uVar2 % uVar4);
      }
      else {
        uVar3 = (undefined4)(param_2 % uVar4);
        uVar2 = param_2;
      }
                    /* try { // try from 0016b9a9 to 0016b9b5 has its CatchHandler @ 0016ba10 */
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hec3bc305ec2b1aaaE
                (&local_50,uVar3,&PTR_s_src_uu_split_src_number_rs_0020ac08);
      bVar6 = uVar4 <= param_2;
      param_2 = uVar2 / uVar4;
    } while (bVar6);
  }
                    /* try { // try from 0016b9be to 0016ba0b has its CatchHandler @ 0016ba0e */
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_6resize17hb2fbbb6384bf1fbfE(&local_50,lVar5);
  _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_7reverse17h9b9aacd060e138afE(uStack_48,local_40);
  local_38[2] = local_40;
  *local_38 = local_50;
  local_38[1] = uStack_48;
  return;
}