void _ZN4just6source6Source4root17hc15322b4e8fc1460E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 *puStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  puVar2 = (undefined4 *)_ZN5alloc5alloc6Global10alloc_impl17h6fb1b6049873c120E(8,0x18);
  if (puVar2 == (undefined4 *)0x0) {
    (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17h88aa4f4f9d19c4f9E_00566740)(8,0x18);
  }
  else {
                    /* try { // try from 0038b3cc to 0038b3de has its CatchHandler @ 0038b4ff */
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17he141d0e2f3955eabE
              (&local_80,param_2,param_3);
    local_58 = local_70;
    local_68 = local_80;
    uStack_64 = uStack_7c;
    uStack_60 = uStack_78;
    uStack_5c = uStack_74;
    *(undefined8 *)(puVar2 + 4) = local_70;
    *puVar2 = local_80;
    puVar2[1] = uStack_7c;
    puVar2[2] = uStack_78;
    puVar2[3] = uStack_74;
    local_50 = 1;
    local_40 = 1;
    local_38 = 0x8000000000000000;
                    /* try { // try from 0038b423 to 0038b432 has its CatchHandler @ 0038b4fa */
    puStack_48 = puVar2;
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17he141d0e2f3955eabE
              (&local_80,param_2,param_3);
    local_58 = local_70;
    local_68 = local_80;
    uStack_64 = uStack_7c;
    uStack_60 = uStack_78;
    uStack_5c = uStack_74;
                    /* try { // try from 0038b447 to 0038b468 has its CatchHandler @ 0038b512 */
    lVar3 = (*(code *)PTR__ZN3std4path4Path6parent17hef287f60afa56900E_00566a90)(param_2,param_3);
    if (lVar3 != 0) {
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17he141d0e2f3955eabE
                (&local_80,lVar3);
      param_1[0xb] = local_70;
      param_1[9] = CONCAT44(uStack_7c,local_80);
      param_1[10] = CONCAT44(uStack_74,uStack_78);
      *(undefined4 *)(param_1 + 0xf) = 0;
      *param_1 = local_50;
      param_1[1] = puStack_48;
      param_1[2] = local_40;
      param_1[3] = 0;
      param_1[4] = 8;
      param_1[5] = 0;
      param_1[0xc] = local_38;
      param_1[0xd] = uStack_30;
      param_1[0xe] = local_28;
      param_1[6] = CONCAT44(uStack_64,local_68);
      param_1[7] = CONCAT44(uStack_5c,uStack_60);
      param_1[8] = local_58;
      return;
    }
  }
                    /* try { // try from 0038b4eb to 0038b4f7 has its CatchHandler @ 0038b512 */
  (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_00565e68)(&PTR_DAT_00530ff0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}