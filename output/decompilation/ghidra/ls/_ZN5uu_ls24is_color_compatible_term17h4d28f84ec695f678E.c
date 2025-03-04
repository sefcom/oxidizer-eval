undefined8 _ZN5uu_ls24is_color_compatible_term17h4d28f84ec695f678E(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 *local_88;
  undefined *local_80;
  undefined local_68 [8];
  undefined8 local_60;
  long local_58;
  undefined local_50 [16];
  long local_40;
  undefined8 local_38;
  long local_30;
  
  _ZN3std3env3var17hc35b8d22aa896d90E(&local_88,&DAT_00123fb4,4);
  puVar1 = local_88;
  _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_alloc__string__String_C_std__env__VarError_GT__GT_17h586f11e1c15586f9E
            (&local_88);
  _ZN3std3env3var17hc35b8d22aa896d90E(&local_88,&DAT_00134ce6,9);
  puVar2 = local_88;
  _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_alloc__string__String_C_std__env__VarError_GT__GT_17h586f11e1c15586f9E
            (&local_88);
  _ZN3std3env3var17hc35b8d22aa896d90E(&local_88,&DAT_00123fb4,4);
  _ZN4core6result19Result_LT_T_C_E_GT_17unwrap_or_default17h7c71ec71f2af1074E(local_68,&local_88);
                    /* try { // try from 0021f359 to 0021f375 has its CatchHandler @ 0021f414 */
  _ZN3std3env3var17hc35b8d22aa896d90E(&local_88,&DAT_00134ce6,9);
  _ZN4core6result19Result_LT_T_C_E_GT_17unwrap_or_default17h7c71ec71f2af1074E(local_50,&local_88);
  if (((puVar2 == (undefined1 *)0x0 && puVar1 == (undefined1 *)0x0) && (local_58 == 0)) &&
     (local_40 == 0)) {
LAB_0021f3e1:
                    /* try { // try from 0021f3e1 to 0021f3ea has its CatchHandler @ 0021f414 */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hb27a9c8978a01f77E(local_50);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hb27a9c8978a01f77E(local_68);
    uVar4 = 0;
  }
  else {
    if (local_58 != 0) {
      local_38 = local_60;
      local_30 = local_58;
      local_88 = anon_84df56382e2e566cd8a063a5d0153d3b_47_llvm_4004663911042702431;
      local_80 = &DAT_00316b60;
                    /* try { // try from 0021f3b8 to 0021f3c4 has its CatchHandler @ 0021f405 */
      cVar3 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_3any17h6b45ee6d46bfadaeE
                        (&local_88,&local_38);
      if (cVar3 == '\0') goto LAB_0021f3e1;
    }
                    /* try { // try from 0021f3c9 to 0021f3d2 has its CatchHandler @ 0021f414 */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hb27a9c8978a01f77E(local_50);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hb27a9c8978a01f77E(local_68);
    uVar4 = 1;
  }
  return uVar4;
}