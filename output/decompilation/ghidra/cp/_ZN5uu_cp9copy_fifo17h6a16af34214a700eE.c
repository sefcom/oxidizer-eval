void _ZN5uu_cp9copy_fifo17h6a16af34214a700eE
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined param_4,
               undefined param_5)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined auVar4 [16];
  undefined8 *local_128;
  code *local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined **local_e0;
  undefined8 uStack_d8;
  undefined8 **local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  
  _ZN3std2fs8metadata17h003d8cdbffde7c56E(&local_e0);
  iVar1 = (int)local_e0;
  _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h6e54671ee6a51b2aE
            (&local_e0);
  if (iVar1 != 2) {
    _ZN5uu_cp13OverwriteMode6verify17h15b46a9de23bd96aE(&local_e0,param_4,param_2,param_3,param_5);
    if ((int)local_e0 != 0xd) {
      param_1[6] = local_b0;
      param_1[7] = uStack_a8;
      param_1[4] = local_c0;
      param_1[5] = uStack_b8;
      param_1[2] = local_d0;
      param_1[3] = uStack_c8;
      *param_1 = local_e0;
      param_1[1] = uStack_d8;
      return;
    }
    lVar3 = _ZN3std2fs11remove_file17h38159f05e7b4dc34E(param_2,param_3);
    if (lVar3 != 0) {
      *param_1 = 2;
      param_1[1] = lVar3;
      return;
    }
  }
  _ZN72__LT__RF_str_u20_as_u20_alloc__ffi__c_str__CString__new__SpecNewImpl_GT_13spec_new_impl17hb0b4810d8b62c0c3E
            (&local_e0,param_2,param_3);
  auVar4 = _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hb6cd498fe806660eE(&local_e0);
  uVar2 = auVar4._0_8_;
  iVar1 = (*(code *)PTR_mkfifo_002bc088)(uVar2,0x1b6);
  if (iVar1 == -1) {
    local_118 = 1;
    local_100 = 1;
    local_128 = &local_118;
    local_120 = 
    _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
    local_e0 = &PTR_s_cannot_create_fifo___File_exists_002b6078;
    uStack_d8 = 2;
    local_c0 = 0;
    local_d0 = &local_128;
    uStack_c8 = 1;
                    /* try { // try from 002086a8 to 002086b6 has its CatchHandler @ 002086f2 */
    local_110 = param_2;
    local_108 = param_3;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h805a87bba4bea7c2E(&local_f8,&local_e0);
    param_1[3] = local_e8;
    *(undefined4 *)(param_1 + 1) = local_f8;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_f4;
    *(undefined4 *)(param_1 + 2) = uStack_f0;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_ec;
    *param_1 = 4;
    _ZN4core3ptr47drop_in_place_LT_alloc__ffi__c_str__CString_GT_17hdcf9c4f1924efb71E
              (uVar2,auVar4._8_8_);
    return;
  }
  *param_1 = 0xd;
  _ZN4core3ptr47drop_in_place_LT_alloc__ffi__c_str__CString_GT_17hdcf9c4f1924efb71E
            (uVar2,auVar4._8_8_);
  return;
}