void _ZN2fd4exec14CommandBuilder3new17hca05f3b06b44effdE
               (long *param_1,long *param_2,long param_3,long param_4)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  undefined8 local_268;
  undefined8 uStack_260;
  long local_258;
  undefined8 local_250;
  undefined8 uStack_248;
  long local_240;
  long *local_238;
  long local_230;
  undefined8 local_228;
  undefined4 local_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  long local_210;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  long local_1f8 [28];
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  long local_108 [27];
  
  local_268 = 0;
  uStack_260 = 8;
  local_258 = 0;
  local_228 = 2;
  local_250 = 0;
  uStack_248 = 8;
  local_240 = 0;
  local_230 = param_4;
  if (param_3 == 0) {
    lVar3 = 2;
  }
  else {
    param_3 = param_3 << 5;
    lVar3 = 2;
    bVar2 = true;
    local_238 = param_1;
    do {
      if (*param_2 == 0) {
        _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17h7df9c0162a275d7cE
                  (&local_208,param_2[2],param_2[3]);
        local_108[0] = local_1f8[0];
        local_118 = local_208;
        uStack_114 = uStack_204;
        uStack_110 = uStack_200;
        uStack_10c = uStack_1fc;
        _ZN4core3ptr72drop_in_place_LT_core__option__Option_LT_fd__fmt__FormatTemplate_GT__GT_17he3b111ca2613cc1dE
                  (&local_228);
        local_228 = 0;
        local_210 = local_108[0];
        local_220 = local_118;
        uStack_21c = uStack_114;
        uStack_218 = uStack_110;
        uStack_214 = uStack_10c;
        lVar3 = 0;
        bVar2 = false;
      }
      else if (bVar2) {
                    /* try { // try from 002f34ff to 002f35be has its CatchHandler @ 002f3705 */
        _ZN2fd3fmt14FormatTemplate8generate17he820548229a842f6E(&local_208,param_2);
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hd0e2cf8889d82ba1E
                  (&local_268,&local_208,&PTR_s_src_exec_mod_rs_00502200);
        bVar2 = true;
      }
      else {
        _ZN2fd3fmt14FormatTemplate8generate17he820548229a842f6E(&local_208,param_2);
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hd0e2cf8889d82ba1E
                  (&local_250,&local_208,&PTR_s_src_exec_mod_rs_005021e8);
      }
      param_2 = param_2 + 4;
      param_3 = param_3 + -0x20;
      param_1 = local_238;
    } while (param_3 != 0);
  }
                    /* try { // try from 002f35e2 to 002f35eb has its CatchHandler @ 002f3703 */
  _ZN2fd4exec14CommandBuilder11new_command17hd2fd042878a0df86E(&local_208,uStack_260,local_258);
  (*(code *)PTR_memcpy_0053fd28)(local_108,local_1f8,0xd8);
  local_1f8[0] = local_258;
  local_208 = (undefined4)local_268;
  uStack_204 = local_268._4_4_;
  uStack_200 = (undefined4)uStack_260;
  uStack_1fc = uStack_260._4_4_;
  if (lVar3 == 2) {
                    /* try { // try from 002f36f4 to 002f3700 has its CatchHandler @ 002f372c */
    (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_0053fff8)
              (&PTR_s_src_exec_mod_rs_00502218);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  param_1[3] = local_210;
  param_1[1] = CONCAT44(uStack_21c,local_220);
  param_1[2] = CONCAT44(uStack_214,uStack_218);
  *(undefined4 *)(param_1 + 7) = (undefined4)local_250;
  *(undefined4 *)((long)param_1 + 0x3c) = local_250._4_4_;
  *(undefined4 *)(param_1 + 8) = (undefined4)uStack_248;
  *(undefined4 *)((long)param_1 + 0x44) = uStack_248._4_4_;
  param_1[9] = local_240;
  (*(code *)PTR_memcpy_0053fd28)(param_1 + 10,&local_118,0xe8);
  param_1[4] = local_268;
  param_1[5] = uStack_260;
  param_1[6] = local_258;
  *param_1 = lVar3;
  param_1[0x27] = 0;
  param_1[0x28] = local_230;
  *(undefined *)(param_1 + 0x29) = 2;
  return;
}