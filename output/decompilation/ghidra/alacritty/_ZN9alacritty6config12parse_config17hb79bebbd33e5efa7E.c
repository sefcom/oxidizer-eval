void _ZN9alacritty6config12parse_config17hb79bebbd33e5efa7E
               (long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  long lVar1;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  long lStack_88;
  long local_80;
  long lStack_78;
  long local_70;
  long lStack_68;
  long local_60;
  long lStack_58;
  undefined local_50 [32];
  
  (*(code *)PTR__ZN3std3sys3pal4unix2os11split_paths13bytes_to_path17h3f69b771c0ce4140E_009dfd70)
            (&local_a8);
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h86a2df8af84df241E(param_4,&local_a8,&PTR_DAT_00981e50);
  _ZN9alacritty6config18deserialize_config17h5c79ebe9ac2f1598E(&local_a8,param_2,param_3,0);
  uStack_b0 = lStack_88;
  lVar1 = uStack_b0;
  if (CONCAT44(uStack_a4,local_a8) == 7) {
    uStack_b0._0_4_ = (undefined4)lStack_88;
    uStack_b0._4_4_ = (undefined4)((ulong)lStack_88 >> 0x20);
    local_e8 = uStack_a0;
    uStack_e4 = uStack_9c;
    uStack_e0 = uStack_98;
    uStack_dc = uStack_94;
    local_d8 = local_90;
    uStack_d4 = uStack_8c;
    uStack_d0 = (undefined4)uStack_b0;
    uStack_cc = uStack_b0._4_4_;
                    /* try { // try from 005431f4 to 0054320f has its CatchHandler @ 00543287 */
    uStack_b0 = lVar1;
    _ZN9alacritty6config12load_imports17h54203247dc29364fE
              (local_50,&local_e8,param_2,param_3,param_4,param_5);
    uStack_98 = local_d8;
    uStack_94 = uStack_d4;
    local_90 = uStack_d0;
    uStack_8c = uStack_cc;
    local_a8 = local_e8;
    uStack_a4 = uStack_e4;
    uStack_a0 = uStack_e0;
    uStack_9c = uStack_dc;
    _ZN9alacritty6config11serde_utils5merge17h0b6a4a70fea81bc1E(param_1 + 1,local_50,&local_a8);
    *param_1 = 7;
  }
  else {
    param_1[9] = local_60;
    param_1[10] = lStack_58;
    param_1[7] = local_70;
    param_1[8] = lStack_68;
    param_1[5] = local_80;
    param_1[6] = lStack_78;
    param_1[3] = CONCAT44(uStack_8c,local_90);
    param_1[4] = lStack_88;
    param_1[1] = CONCAT44(uStack_9c,uStack_a0);
    param_1[2] = CONCAT44(uStack_94,uStack_98);
    *param_1 = CONCAT44(uStack_a4,local_a8);
  }
  return;
}