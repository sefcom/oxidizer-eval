undefined  [16] _ZN9alacritty7logging15OnDemandLogFile4file17h669b03376981a172E(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined auVar3 [16];
  long *local_118;
  undefined8 local_110;
  undefined **local_108;
  undefined *local_100;
  undefined *local_f8;
  undefined *puStack_f0;
  byte local_e8 [4];
  undefined4 local_e4;
  long *local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  
  plVar1 = (long *)(param_1 + 0x18);
  _ZN3std2fs8metadata17h8f40e5ed4fcd8161E
            (&local_d8,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h672bb05c96f66e9cE
            (&local_d8);
  if ((int)local_d8 == 2) {
                    /* try { // try from 0055deee to 0055def5 has its CatchHandler @ 0055e0b2 */
    _ZN4core3ptr111drop_in_place_LT_core__option__Option_LT_std__io__buffered__linewriter__LineWriter_LT_std__fs__File_GT__GT__GT_17h609f5e131c2b2621E
              (plVar1);
    *plVar1 = -0x8000000000000000;
LAB_0055df04:
    local_d8 = (undefined **)0x1b600000000;
    uStack_d0 = CONCAT26(uStack_d0._6_2_,0x10000010000);
    _ZN3std2fs11OpenOptions4open17h630e6aeca6c875f5E(local_e8,&local_d8,param_1);
    if ((local_e8[0] & 1) != 0) {
      local_118 = local_e0;
                    /* try { // try from 0055df52 to 0055dfc0 has its CatchHandler @ 0055e0d9 */
      local_108 = (undefined **)
                  (*(code *)PTR__ZN3std2io5stdio6stdout17hb6a8e10bcccf3287E_009dff68)();
      puStack_f0 = 
      PTR__ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17ha4645305e3b6a355E_009de518
      ;
      local_d8 = &PTR_s_Unable_to_create_log_file__00983200;
      uStack_d0 = 2;
      local_b8 = 0;
      local_c8 = (undefined ***)&local_f8;
      uStack_c0 = 1;
      local_f8 = (undefined *)&local_118;
      local_110 = (*(code *)
                    PTR__ZN57__LT_std__io__stdio__Stdout_u20_as_u20_std__io__Write_GT_9write_fmt17h3907d576e608aa2aE_009dff78
                  )(&local_108,&local_d8);
      _ZN4core3ptr70drop_in_place_LT_core__option__Option_LT_std__io__error__Error_GT__GT_17h1de10a50e8d7f33dE
                (&local_110);
      uVar2 = 1;
      plVar1 = local_118;
      goto LAB_0055e09c;
    }
    _ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_13with_capacity17ha3a2e60bf0682ee4E
              (&local_d8,local_e4);
                    /* try { // try from 0055dfde to 0055dfe5 has its CatchHandler @ 0055e0c0 */
    _ZN4core3ptr111drop_in_place_LT_core__option__Option_LT_std__io__buffered__linewriter__LineWriter_LT_std__fs__File_GT__GT__GT_17h609f5e131c2b2621E
              (plVar1);
    *(undefined4 *)(param_1 + 0x28) = (undefined4)local_c8;
    *(undefined4 *)(param_1 + 0x2c) = local_c8._4_4_;
    *(undefined4 *)(param_1 + 0x30) = (undefined4)uStack_c0;
    *(undefined4 *)(param_1 + 0x34) = uStack_c0._4_4_;
    *(int *)plVar1 = (int)local_d8;
    *(undefined4 *)(param_1 + 0x1c) = local_d8._4_4_;
    *(undefined4 *)(param_1 + 0x20) = (undefined4)uStack_d0;
    *(undefined4 *)(param_1 + 0x24) = uStack_d0._4_4_;
    uVar2 = 0;
    _ZN4core4sync6atomic12atomic_store17hb8dc95fd2f3c591fE(*(long *)(param_1 + 0x38) + 0x10,1,0);
    local_110 = (*(code *)PTR__ZN3std2io5stdio6stdout17hb6a8e10bcccf3287E_009dff68)();
    local_f8 = *(undefined **)(param_1 + 8);
    puStack_f0 = *(undefined **)(param_1 + 0x10);
    local_108 = &local_f8;
    local_100 = 
    PTR__ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hdc1404ac42f64ec9E_009dff10
    ;
    local_d8 = &PTR_s_Created_log_file_at____009831e0;
    uStack_d0 = 2;
    local_b8 = 0;
    local_c8 = &local_108;
    uStack_c0 = 1;
    local_118 = (long *)(*(code *)
                          PTR__ZN57__LT_std__io__stdio__Stdout_u20_as_u20_std__io__Write_GT_9write_fmt17h3907d576e608aa2aE_009dff78
                        )(&local_110,&local_d8);
    _ZN4core3ptr70drop_in_place_LT_core__option__Option_LT_std__io__error__Error_GT__GT_17h1de10a50e8d7f33dE
              (&local_118);
    if (*(long *)(param_1 + 0x18) != -0x8000000000000000) goto LAB_0055e09c;
    (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_009de108)
              (&PTR_s_alacritty_src_logging_rs____00983220);
  }
  else if (*plVar1 == -0x8000000000000000) goto LAB_0055df04;
  uVar2 = 0;
LAB_0055e09c:
  auVar3._8_8_ = plVar1;
  auVar3._0_8_ = uVar2;
  return auVar3;
}