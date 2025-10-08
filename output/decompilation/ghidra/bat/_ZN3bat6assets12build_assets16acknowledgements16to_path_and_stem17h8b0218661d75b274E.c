void _ZN3bat6assets12build_assets16acknowledgements16to_path_and_stem17h8b0218661d75b274E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  uVar1 = *(undefined8 *)(param_4 + 8);
  uVar2 = *(undefined8 *)(param_4 + 0x10);
                    /* try { // try from 00532e12 to 00532e22 has its CatchHandler @ 00532f54 */
  (*(code *)PTR__ZN3std3sys3pal4unix2os11split_paths13bytes_to_path17h3f69b771c0ce4140E_00807948)
            (&local_60,uVar1,uVar2);
                    /* try { // try from 00532e23 to 00532e42 has its CatchHandler @ 00532f76 */
  lVar3 = (*(code *)PTR__ZN3std4path4Path9file_stem17hc69c2d2c61933548E_00807580)(uVar1,uVar2);
  if (lVar3 == 0) {
    *param_1 = 0x8000000000000000;
  }
  else {
    _ZN3bat6assets12build_assets16acknowledgements16to_path_and_stem28__u7b__u7b_closure_u7d__u7d_17ha4c4cc66c561dd06E
              (&local_a8,lVar3);
    local_48 = CONCAT44(uStack_a4,local_a8);
    uStack_40 = uStack_a0;
    uStack_3c = uStack_9c;
    uStack_38 = (undefined4)uStack_98;
    uStack_34 = uStack_98._4_4_;
                    /* try { // try from 00532e56 to 00532e84 has its CatchHandler @ 00532f67 */
    lVar3 = _ZN3std4path4Path12strip_prefix17h5ec9330b9b24ba92E(uVar1,uVar2,param_2,param_3);
    if (lVar3 == 0) {
      local_78 = -0x8000000000000000;
    }
    else {
      _ZN3bat6assets12build_assets16acknowledgements16to_path_and_stem28__u7b__u7b_closure_u7d__u7d_17ha4c4cc66c561dd06E
                (&local_a8,lVar3);
      local_68 = uStack_98;
      local_78 = CONCAT44(uStack_a4,local_a8);
      uStack_70 = uStack_a0;
      uStack_6c = uStack_9c;
      if (local_78 != -0x8000000000000000) {
        param_1[7] = CONCAT44(uStack_9c,uStack_a0);
        param_1[8] = uStack_98;
        local_a8 = local_60;
        uStack_a4 = uStack_5c;
        uStack_a0 = uStack_58;
        uStack_9c = uStack_54;
        uStack_98 = local_50;
        uStack_88 = CONCAT44(uStack_3c,uStack_40);
        local_90 = local_48;
        local_80 = CONCAT44(uStack_34,uStack_38);
        param_1[4] = uStack_88;
        param_1[5] = local_80;
        param_1[2] = local_50;
        param_1[3] = local_48;
        *(undefined4 *)param_1 = local_60;
        *(undefined4 *)((long)param_1 + 4) = uStack_5c;
        *(undefined4 *)(param_1 + 1) = uStack_58;
        *(undefined4 *)((long)param_1 + 0xc) = uStack_54;
        param_1[6] = local_78;
        goto LAB_00532f3e;
      }
    }
    _ZN4core3ptr100drop_in_place_LT_core__result__Result_LT_alloc__string__String_C_std__path__StripPrefixError_GT__GT_17h7b85c5c873696979E
              (&local_78);
    *param_1 = 0x8000000000000000;
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h2ec3c51b3420dbb5E(&local_48);
  }
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hf251af593e1b1affE(&local_60);
LAB_00532f3e:
  _ZN4core3ptr44drop_in_place_LT_walkdir__dent__DirEntry_GT_17h50b222f334d69360E(param_4);
  return;
}