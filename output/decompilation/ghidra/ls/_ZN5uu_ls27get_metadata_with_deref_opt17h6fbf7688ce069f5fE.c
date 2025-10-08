void _ZN5uu_ls27get_metadata_with_deref_opt17h6fbf7688ce069f5fE
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  int aiStack_b8 [2];
  undefined8 uStack_b0;
  
  if (param_4 == 0) {
    _ZN3std2fs16symlink_metadata17h7b40b87fa5e11ee0E();
    return;
  }
  uVar1 = _ZN55__LT__RF_T_u20_as_u20_core__convert__AsRef_LT_U_GT__GT_6as_ref17h1be789a66f58a594E
                    (param_2,param_3);
  (*(code *)PTR__ZN3std3sys2fs8metadata17hf06f0e5899fd3acfE_0048faf0)(aiStack_b8,uVar1);
  if (aiStack_b8[0] == 2) {
    param_1[1] = uStack_b0;
    *param_1 = 2;
    return;
  }
  (*(code *)PTR_memcpy_0048f8f8)(param_1,aiStack_b8,0xb0);
  return;
}