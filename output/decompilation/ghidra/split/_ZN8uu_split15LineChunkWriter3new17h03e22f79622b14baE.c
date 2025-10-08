void _ZN8uu_split15LineChunkWriter3new17h03e22f79622b14baE(long *param_1,long param_2,long param_3)

{
  undefined auVar1 [16];
  long local_b0;
  long lStack_a8;
  long local_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  long local_68;
  long local_60;
  long local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  _ZN8uu_split9filenames16FilenameIterator3new17hc2a8a0f7203a171bE
            (&local_68,*(undefined8 *)(param_3 + 0x30),*(undefined8 *)(param_3 + 0x38),
             param_3 + 0x40);
  if (local_68 == -0x7fffffffffffffff) {
    param_1[1] = local_60;
    param_1[2] = local_58;
    *param_1 = -0x8000000000000000;
  }
  else {
    local_78 = local_30;
    uStack_74 = uStack_2c;
    uStack_70 = uStack_28;
    uStack_6c = uStack_24;
    uStack_88 = uStack_40;
    uStack_84 = uStack_3c;
    uStack_80 = uStack_38;
    uStack_7c = uStack_34;
    uStack_98 = uStack_50;
    uStack_94 = uStack_4c;
    uStack_90 = uStack_48;
    uStack_8c = uStack_44;
    local_b0 = local_68;
    lStack_a8 = local_60;
    local_a0 = local_58;
                    /* try { // try from 0016fa20 to 0016fa46 has its CatchHandler @ 0016fad5 */
    _ZN8uu_split15LineChunkWriter15start_new_chunk17h270b7287cecb38e1E(&local_68,param_3,&local_b0);
    if (local_68 == -0x8000000000000000) {
      auVar1 = (*(code *)
                 PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_00212150
               )();
      *(undefined (*) [16])(param_1 + 1) = auVar1;
      *param_1 = -0x8000000000000000;
      _ZN4core3ptr58drop_in_place_LT_uu_split__filenames__FilenameIterator_GT_17h3a3dca25075fae6fE
                (local_b0,lStack_a8);
    }
    else {
      param_1[4] = CONCAT44(uStack_44,uStack_48);
      param_1[5] = CONCAT44(uStack_3c,uStack_40);
      param_1[2] = local_58;
      param_1[3] = CONCAT44(uStack_4c,uStack_50);
      param_1[0xe] = CONCAT44(uStack_6c,uStack_70);
      param_1[0xc] = CONCAT44(uStack_7c,uStack_80);
      param_1[0xd] = CONCAT44(uStack_74,local_78);
      param_1[10] = CONCAT44(uStack_8c,uStack_90);
      param_1[0xb] = CONCAT44(uStack_84,uStack_88);
      param_1[8] = local_a0;
      param_1[9] = CONCAT44(uStack_94,uStack_98);
      param_1[6] = local_b0;
      param_1[7] = lStack_a8;
      *param_1 = local_68;
      param_1[1] = local_60;
      param_1[0xf] = param_3;
      param_1[0x10] = param_2;
      param_1[0x11] = 0;
      param_1[0x12] = param_2;
    }
  }
  return;
}