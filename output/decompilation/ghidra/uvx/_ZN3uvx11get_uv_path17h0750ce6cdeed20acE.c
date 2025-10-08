void _ZN3uvx11get_uv_path17h0750ce6cdeed20acE
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 **local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 *local_e0;
  undefined *local_d8;
  char local_d0;
  char cStack_cf;
  undefined2 uStack_ce;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 **local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 **local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 **local_68;
  undefined8 *local_58;
  undefined *local_50;
  undefined local_48 [24];
  
  lVar5 = -0x8000000000000000;
  bVar2 = true;
  if (param_4 != 0) {
    _ZN3uvx11get_uv_path28__u7b__u7b_closure_u7d__u7d_17hb3af74d129f8e8a0E
              (&local_110,param_2,param_3);
    local_98 = (undefined *)local_100;
    local_120 = uStack_108;
    lVar5 = (long)local_110;
    if (local_110 == (undefined **)0x8000000000000000) {
      lVar5 = -0x8000000000000000;
    }
    else {
                    /* try { // try from 0011ab8c to 0011ab9b has its CatchHandler @ 0011af74 */
      _ZN3std2fs6exists17h9cadd70709e452acE(&local_d0,uStack_108,local_100);
      if (local_d0 == '\x01') {
        local_e0 = (undefined8 *)CONCAT44(uStack_c4,uStack_c8);
        local_90 = local_120;
        uStack_88 = local_98;
        local_b8 = (undefined8 **)&local_90;
        uStack_b0 = (code *)
                    PTR__ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hdc1404ac42f64ec9E_00165e68
        ;
        local_a8 = &local_e0;
        local_a0 = 
        PTR__ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17ha4645305e3b6a355E_00165e70
        ;
        local_110 = &PTR_s_warning__failed_to_determine_if___00163010;
        uStack_108 = (undefined8 *)0x3;
        local_f0 = 0;
        local_100 = (undefined8 **)&local_b8;
        local_f8 = 2;
                    /* try { // try from 0011ac27 to 0011ac31 has its CatchHandler @ 0011af2b */
        (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00165e78)(&local_110);
                    /* try { // try from 0011ac37 to 0011ac54 has its CatchHandler @ 0011af74 */
        _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h65e5ef1b69c12763E(local_e0);
      }
      else if (cStack_cf != '\0') {
        _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17hb5df393ff8a371b0E
                  (&local_110,local_120,local_98);
        param_1[2] = local_100;
        *(undefined4 *)param_1 = (undefined4)local_110;
        *(undefined4 *)((long)param_1 + 4) = local_110._4_4_;
        *(undefined4 *)(param_1 + 1) = (undefined4)uStack_108;
        *(undefined4 *)((long)param_1 + 0xc) = uStack_108._4_4_;
        _ZN4core3ptr67drop_in_place_LT_core__option__Option_LT_std__path__PathBuf_GT__GT_17h1594e359a3e45c89E
                  (lVar5,local_120);
        return;
      }
      bVar2 = false;
    }
  }
  local_b8 = (undefined8 **)&DAT_001097f0;
  uStack_b0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h5eeb34b393a656f6E;
  local_110 = &PTR_s_uv_00163040;
  uStack_108 = (undefined8 *)0x1;
  local_f0 = 0;
  local_f8 = 1;
                    /* try { // try from 0011ace0 to 0011ad09 has its CatchHandler @ 0011af83 */
  local_100 = (undefined8 **)&local_b8;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h3d837e6f33a5f387E(local_48,&local_110);
  _ZN3std4path4Path4join17h73505886d6b9b383E(&local_d0,param_2,param_3,local_48);
  puVar3 = local_c0;
  puVar1 = (undefined8 *)CONCAT44(uStack_c4,uStack_c8);
                    /* try { // try from 0011ad17 to 0011ad4b has its CatchHandler @ 0011af8c */
  _ZN3std2fs6exists17h9cadd70709e452acE(&local_110,puVar1,local_c0);
  if (((char)local_110 == '\0') && (((ulong)local_110 & 0x100) == 0)) {
    _ZN4core3ptr77drop_in_place_LT_core__result__Result_LT_bool_C_std__io__error__Error_GT__GT_17h990fa02aacbdfeb0E
              (0,uStack_108);
    if (!bVar2) {
      local_58 = local_120;
      local_50 = local_98;
      local_d8 = puVar3;
      local_b8 = &local_58;
      uStack_b0 = (code *)
                  PTR__ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hdc1404ac42f64ec9E_00165e68
      ;
      local_a8 = &local_e0;
      local_a0 = 
      PTR__ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hdc1404ac42f64ec9E_00165e68
      ;
      local_110 = &PTR_s_Could_not_find_the__uv__binary_a_00163050;
      uStack_108 = (undefined8 *)0x2;
      local_f0 = 0;
      local_f8 = 2;
                    /* try { // try from 0011aea9 to 0011aeba has its CatchHandler @ 0011af4a */
      local_100 = (undefined8 **)&local_b8;
      local_e0 = puVar1;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h3d837e6f33a5f387E(&local_90,&local_110);
      local_78 = (undefined4)local_90;
      uStack_74 = local_90._4_4_;
      uStack_70 = (undefined4)uStack_88;
      uStack_6c = uStack_88._4_4_;
      local_68 = local_80;
      _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h8f4b31d99210b02cE(lVar5,local_120);
    }
    else {
      uStack_88 = puVar3;
      local_e0 = &local_90;
      local_d8 = 
      PTR__ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hdc1404ac42f64ec9E_00165e68
      ;
      local_110 = &PTR_s_Could_not_find_the__uv__binary_a_00163070;
      uStack_108 = (undefined8 *)0x1;
      local_f0 = 0;
      local_100 = &local_e0;
      local_f8 = 1;
                    /* try { // try from 0011adae to 0011adbc has its CatchHandler @ 0011af5c */
      local_90 = puVar1;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h3d837e6f33a5f387E(&local_b8,&local_110);
      local_78 = (undefined4)local_b8;
      uStack_74 = local_b8._4_4_;
      uStack_70 = (undefined4)uStack_b0;
      uStack_6c = uStack_b0._4_4_;
      local_68 = local_a8;
    }
                    /* try { // try from 0011aeeb to 0011aef7 has its CatchHandler @ 0011af8c */
    uVar4 = _ZN3std2io5error5Error3new17hdf72be64d8c57d1cE(&local_78);
    param_1[1] = uVar4;
    *param_1 = 0x8000000000000000;
    _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h8f4b31d99210b02cE
              (CONCAT44(uStack_cc,CONCAT22(uStack_ce,CONCAT11(cStack_cf,local_d0))),puVar1);
    if (bVar2 || !bVar2) {
      return;
    }
  }
  else {
                    /* try { // try from 0011ade2 to 0011ade9 has its CatchHandler @ 0011af8c */
    _ZN4core3ptr77drop_in_place_LT_core__result__Result_LT_bool_C_std__io__error__Error_GT__GT_17h990fa02aacbdfeb0E
              ((ulong)local_110 & 0xff,uStack_108);
    param_1[2] = local_c0;
    *(uint *)param_1 = CONCAT22(uStack_ce,CONCAT11(cStack_cf,local_d0));
    *(undefined4 *)((long)param_1 + 4) = uStack_cc;
    *(undefined4 *)(param_1 + 1) = uStack_c8;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_c4;
    if (bVar2) {
      return;
    }
  }
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h8f4b31d99210b02cE(lVar5,local_120);
  return;
}