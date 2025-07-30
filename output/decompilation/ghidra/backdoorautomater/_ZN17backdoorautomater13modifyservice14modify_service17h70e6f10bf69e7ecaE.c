void _ZN17backdoorautomater13modifyservice14modify_service17h70e6f10bf69e7ecaE
               (undefined8 *param_1,undefined4 *param_2,byte param_3,long param_4,
               undefined8 *param_5,undefined8 *param_6)

{
  ulong uVar1;
  bool bVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  ulong unaff_RBP;
  uint7 uVar9;
  undefined4 uVar10;
  undefined7 uVar11;
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined local_368 [12];
  undefined4 uStack_35c;
  undefined *local_358;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined8 local_318;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined8 local_2f8;
  undefined *local_2e8;
  undefined *puStack_2e0;
  undefined *local_2d8;
  undefined4 local_2c8;
  undefined4 local_2c4;
  undefined8 *local_2c0;
  undefined8 *local_2b8;
  long local_2b0;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined8 local_298;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined local_1b8 [16];
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined *local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined *local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 *local_140;
  undefined4 local_134;
  undefined4 *local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined *local_118;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined local_c8 [24];
  undefined local_b0 [8];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined *local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined *local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined *local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined *local_38;
  
                    /* try { // try from 00153d61 to 00153d84 has its CatchHandler @ 00155278 */
  local_2c0 = param_5;
  local_2b8 = param_6;
  local_2b0 = param_4;
  local_140 = param_1;
  local_130 = param_2;
  (*(code *)
    PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17hb1e8eef355dde452E_00368788
  )(local_c8,param_6);
  local_2e8 = (undefined *)0x0;
  puStack_2e0 = (undefined *)0x1;
  local_2d8 = (undefined *)0x0;
                    /* try { // try from 00153db0 to 00153dcd has its CatchHandler @ 00155259 */
  _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h4aa1dd8ab670f689E
            (&local_288,&DAT_00265654,0x1a);
  local_118 = local_278;
  local_128 = (undefined4)local_288;
  uStack_124 = local_288._4_4_;
  uStack_120 = (undefined4)uStack_280;
  uStack_11c = uStack_280._4_4_;
  uVar1 = unaff_RBP >> 8;
  lVar7 = uVar1 << 8;
                    /* try { // try from 00153df1 to 00153e09 has its CatchHandler @ 00155300 */
  local_1b8 = _ZN94__LT__RF_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17he83e32c7780ec148E
                        (param_4);
  lVar4 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h91a7ac74cc99056eE
                    (local_1b8);
  if (lVar4 != 0) {
    lVar6 = 1;
    do {
                    /* try { // try from 00153e48 to 00153e4c has its CatchHandler @ 00155324 */
      cVar3 = _ZN55__LT__RF_str_u20_as_u20_core__str__pattern__Pattern_GT_15is_contained_in17h36f93e99507e9f19E
                        (*(undefined8 *)(lVar4 + 8),*(undefined8 *)(lVar4 + 0x10));
      if (cVar3 != '\0') {
        switch((uint)param_3) {
        case 1:
          local_278 = (undefined *)local_2c0[1];
          uStack_270 = local_2c0[2];
          local_288 = (undefined **)&DAT_00265771;
          uStack_280 = (undefined *)0x11;
          _ZN5alloc3str17join_generic_copy17hc78a65dc4338aaa9E(local_368,&local_288,2,1,0);
          local_318 = local_358;
          local_328 = local_368._0_4_;
          uStack_324 = local_368._4_4_;
          uStack_320 = local_368._8_4_;
          uStack_31c = uStack_35c;
                    /* try { // try from 0015410b to 00154163 has its CatchHandler @ 00155138 */
          _ZN5alloc3vec16Vec_LT_T_C_A_GT_17extend_from_slice17h3cce9f7974121c70E
                    (&local_328,&DAT_00265677,1);
          _ZN5alloc3vec16Vec_LT_T_C_A_GT_17extend_from_slice17h3cce9f7974121c70E
                    (&local_328,local_2b8[1],local_2b8[2]);
          _ZN5alloc3vec16Vec_LT_T_C_A_GT_17extend_from_slice17h3cce9f7974121c70E
                    (&local_328,&DAT_00265678,0xd);
          (*(code *)
            PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17hb1e8eef355dde452E_00368788
          )(&local_288,&local_328);
                    /* try { // try from 00154164 to 00154170 has its CatchHandler @ 001550d1 */
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_2e8);
          local_2d8 = local_278;
          local_2e8 = (undefined *)local_288;
          puStack_2e0 = uStack_280;
                    /* try { // try from 00154191 to 00154358 has its CatchHandler @ 00155300 */
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_328);
          bVar2 = false;
          goto LAB_00153e9a;
        case 2:
          local_278 = (undefined *)local_2c0[1];
          uStack_270 = local_2c0[2];
          local_288 = (undefined **)&DAT_00265782;
          uStack_280 = (undefined *)0x2f;
          _ZN5alloc3str17join_generic_copy17hc78a65dc4338aaa9E(local_368,&local_288,2,1,0);
          local_318 = local_358;
          local_328 = local_368._0_4_;
          uStack_324 = local_368._4_4_;
          uStack_320 = local_368._8_4_;
          uStack_31c = uStack_35c;
                    /* try { // try from 001545cd to 00154612 has its CatchHandler @ 00155126 */
          _ZN5alloc3vec16Vec_LT_T_C_A_GT_17extend_from_slice17h3cce9f7974121c70E
                    (&local_328,&DAT_00265685,1);
          _ZN5alloc3vec16Vec_LT_T_C_A_GT_17extend_from_slice17h3cce9f7974121c70E
                    (&local_328,local_2b8[1],local_2b8[2]);
          _ZN5alloc3vec16Vec_LT_T_C_A_GT_17extend_from_slice17h3cce9f7974121c70E
                    (&local_328,&DAT_00265686,8);
          local_278 = local_318;
          local_288 = (undefined **)CONCAT44(uStack_324,local_328);
          uStack_280 = (undefined *)CONCAT44(uStack_31c,uStack_320);
                    /* try { // try from 0015462d to 0015468b has its CatchHandler @ 00155121 */
          _ZN5alloc3vec16Vec_LT_T_C_A_GT_6insert17h8c99ab1ccbc4f69cE(param_4,lVar6,&local_288);
          _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h4aa1dd8ab670f689E
                    (&local_288,&DAT_00265756,0xf);
          local_78 = local_278;
          local_88 = (undefined4)local_288;
          uStack_84 = local_288._4_4_;
          uStack_80 = (undefined4)uStack_280;
          uStack_7c = uStack_280._4_4_;
          _ZN5alloc3vec16Vec_LT_T_C_A_GT_6insert17h8c99ab1ccbc4f69cE(param_4,lVar6,&local_88);
          goto LAB_0015469b;
        case 3:
          local_358 = (undefined *)local_2b8[2];
          local_368._0_8_ = *local_2b8;
          unique0x100019f3 = (code *)local_2b8[1];
          local_278 = (undefined *)local_2c0[2];
          local_288 = (undefined **)*local_2c0;
          uStack_280 = (undefined *)local_2c0[1];
          uVar5 = _ZN17backdoorautomater13modifyservice18write_shell_pyfile17hce4cf953ddafe0d0E
                            (local_368,&local_288);
          _ZN17backdoorautomater9sanitizer18sanitize_return_fn17hb2c462d03cd2292cE(uVar5);
          local_288 = (undefined **)&DAT_002657b1;
          uStack_280 = (undefined *)0xe;
          local_278 = &DAT_0026560d;
          uStack_270 = 0x19;
          _ZN5alloc3str17join_generic_copy17hc78a65dc4338aaa9E(local_368,&local_288,2,1,0);
          local_318 = local_358;
          local_328 = local_368._0_4_;
          uStack_324 = local_368._4_4_;
          uStack_320 = local_368._8_4_;
          uStack_31c = uStack_35c;
                    /* try { // try from 0015436d to 00154395 has its CatchHandler @ 00155105 */
          _ZN5alloc3vec16Vec_LT_T_C_A_GT_17extend_from_slice17h3cce9f7974121c70E
                    (&local_328,&DAT_00265765,1);
          (*(code *)
            PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17hb1e8eef355dde452E_00368788
          )(&local_288,&local_328);
                    /* try { // try from 00154396 to 001543a2 has its CatchHandler @ 001550ac */
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_2e8);
          local_2d8 = local_278;
          local_2e8 = (undefined *)local_288;
          puStack_2e0 = uStack_280;
                    /* try { // try from 001543ca to 001544bf has its CatchHandler @ 00155300 */
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_328);
          break;
        case 4:
          local_358 = (undefined *)local_2b8[2];
          local_368._0_8_ = *local_2b8;
          unique0x10001a13 = (code *)local_2b8[1];
          local_278 = (undefined *)local_2c0[2];
          local_288 = (undefined **)*local_2c0;
          uStack_280 = (undefined *)local_2c0[1];
          uVar5 = _ZN17backdoorautomater13modifyservice16write_shell_perl17h8eb642524aa8e285E
                            (local_368,&local_288);
          _ZN17backdoorautomater9sanitizer18sanitize_return_fn17hb2c462d03cd2292cE(uVar5);
          local_288 = (undefined **)&DAT_002657b1;
          uStack_280 = (undefined *)0xe;
          local_278 = &DAT_00265626;
          uStack_270 = 0x17;
          _ZN5alloc3str17join_generic_copy17hc78a65dc4338aaa9E(local_368,&local_288,2,1,0);
          local_318 = local_358;
          local_328 = local_368._0_4_;
          uStack_324 = local_368._4_4_;
          uStack_320 = local_368._8_4_;
          uStack_31c = uStack_35c;
                    /* try { // try from 001544d4 to 001544fc has its CatchHandler @ 001550f6 */
          _ZN5alloc3vec16Vec_LT_T_C_A_GT_17extend_from_slice17h3cce9f7974121c70E
                    (&local_328,&DAT_00265765,1);
          (*(code *)
            PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17hb1e8eef355dde452E_00368788
          )(&local_288,&local_328);
                    /* try { // try from 001544fd to 00154509 has its CatchHandler @ 00155087 */
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_2e8);
          local_2d8 = local_278;
          local_2e8 = (undefined *)local_288;
          puStack_2e0 = uStack_280;
                    /* try { // try from 00154531 to 001545b8 has its CatchHandler @ 00155300 */
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_328);
          break;
        default:
          goto switchD_00154093_caseD_4;
        }
        bVar2 = true;
        goto LAB_00153e9a;
      }
      lVar4 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h91a7ac74cc99056eE
                        (local_1b8);
      lVar6 = lVar6 + 1;
    } while (lVar4 != 0);
  }
switchD_00154093_caseD_4:
  bVar2 = false;
  if (param_3 < 5) {
    uVar10 = 0;
    if ((0x1aU >> (param_3 & 0x1f) & 1) != 0) {
LAB_00153e9a:
      lVar7 = uVar1 << 8;
      local_288 = *(undefined ***)(param_4 + 8);
      uStack_280 = (undefined *)((long)local_288 + *(long *)(param_4 + 0x10) * 0x18);
      local_278 = (undefined *)0x0;
      do {
        auVar12 = _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17ha92a1e7241ae326bE
                            (&local_288);
        lVar4 = auVar12._8_8_;
        if (lVar4 == 0) break;
                    /* try { // try from 00153efb to 00153f12 has its CatchHandler @ 00155335 */
        auVar13 = _ZN4core3str21__LT_impl_u20_str_GT_12trim_matches17heb9c2373ab7cadcfE
                            (*(undefined8 *)(lVar4 + 8),*(undefined8 *)(lVar4 + 0x10));
        cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hb48dcd74040cf04fE
                          (auVar13._0_8_,auVar13._8_8_,&DAT_0026566e,9);
      } while (cVar3 == '\0');
      local_288 = *(undefined ***)(param_4 + 8);
      uStack_280 = (undefined *)((long)local_288 + *(long *)(param_4 + 0x10) * 0x18);
      local_278 = (undefined *)0x0;
      do {
        auVar13 = _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17ha92a1e7241ae326bE
                            (&local_288);
        lVar6 = auVar13._8_8_;
        if (lVar6 == 0) {
          uVar10 = 0;
          param_4 = local_2b0;
          goto LAB_001546a5;
        }
                    /* try { // try from 00153f7c to 00153f93 has its CatchHandler @ 00155333 */
        auVar14 = _ZN4core3str21__LT_impl_u20_str_GT_12trim_matches17heb9c2373ab7cadcfE
                            (*(undefined8 *)(lVar6 + 8),*(undefined8 *)(lVar6 + 0x10));
        cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hb48dcd74040cf04fE
                          (auVar14._0_8_,auVar14._8_8_,&DAT_00265766,9);
        param_4 = local_2b0;
      } while (cVar3 == '\0');
      if (lVar4 == 0) {
        uVar10 = 0;
      }
      else {
        uVar9 = (uint7)(unaff_RBP >> 8);
        uVar11 = (undefined7)((ulong)&local_288 >> 8);
        if (auVar12._0_8_ < auVar13._0_8_) {
          lVar4 = auVar13._0_8_ - 1;
          local_278 = local_2d8;
          local_288 = (undefined **)local_2e8;
          uStack_280 = puStack_2e0;
                    /* try { // try from 00153fdf to 001540f6 has its CatchHandler @ 00155300 */
          _ZN5alloc3vec16Vec_LT_T_C_A_GT_6insert17h8c99ab1ccbc4f69cE(local_2b0,lVar4,&local_288);
          _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h4aa1dd8ab670f689E
                    (&local_288,&DAT_00265756,0xf);
          local_58 = local_278;
          local_68 = (undefined4)local_288;
          uStack_64 = local_288._4_4_;
          uStack_60 = (undefined4)uStack_280;
          uStack_5c = uStack_280._4_4_;
          lVar7 = (ulong)uVar9 << 8;
          _ZN5alloc3vec16Vec_LT_T_C_A_GT_6insert17h8c99ab1ccbc4f69cE(param_4,lVar4,&local_68);
          uVar10 = (undefined4)CONCAT71(uVar11,1);
        }
        else {
          local_278 = local_2d8;
          local_288 = (undefined **)local_2e8;
          uStack_280 = puStack_2e0;
          _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h3237d89e60f90e3aE(local_2b0,&local_288);
          _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h4aa1dd8ab670f689E
                    (&local_288,&DAT_00265756,0xf);
          local_38 = local_278;
          local_48 = (undefined4)local_288;
          uStack_44 = local_288._4_4_;
          uStack_40 = (undefined4)uStack_280;
          uStack_3c = uStack_280._4_4_;
          lVar7 = (ulong)uVar9 << 8;
          _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h3237d89e60f90e3aE(param_4,&local_48);
          uVar10 = (undefined4)CONCAT71(uVar11,1);
        }
      }
    }
  }
  else {
LAB_0015469b:
    bVar2 = false;
    lVar7 = uVar1 << 8;
    uVar10 = 0;
  }
LAB_001546a5:
                    /* try { // try from 001546a5 to 001546b2 has its CatchHandler @ 00155300 */
  uVar11 = (undefined7)((ulong)lVar7 >> 8);
  _local_368 = _ZN94__LT__RF_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17he83e32c7780ec148E
                         (param_4);
  lVar4 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h91a7ac74cc99056eE
                    (local_368);
  uVar8 = (undefined4)CONCAT71(uVar11,1);
  if (lVar4 == 0) {
    local_2c8 = 1;
  }
  else {
    lVar7 = 1;
    do {
                    /* try { // try from 001546e8 to 001546ec has its CatchHandler @ 0015531c */
      cVar3 = _ZN55__LT__RF_str_u20_as_u20_core__str__pattern__Pattern_GT_15is_contained_in17h36f93e99507e9f19E
                        (*(undefined8 *)(lVar4 + 8),*(undefined8 *)(lVar4 + 0x10));
      if (cVar3 != '\0') {
        local_278 = local_118;
        local_288 = (undefined **)CONCAT44(uStack_124,local_128);
        uStack_280 = (undefined *)CONCAT44(uStack_11c,uStack_120);
                    /* try { // try from 0015473f to 00154777 has its CatchHandler @ 00155300 */
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_6insert17h8c99ab1ccbc4f69cE(param_4,lVar7,&local_288);
        local_2c8 = 0;
        uVar8 = 0;
        goto LAB_0015475f;
      }
      lVar4 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h91a7ac74cc99056eE
                        (local_368);
      lVar7 = lVar7 + 1;
    } while (lVar4 != 0);
    local_2c8 = 1;
    uVar8 = (undefined4)CONCAT71(uVar11,1);
  }
LAB_0015475f:
  (*(code *)
    PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17hb1e8eef355dde452E_00368788
  )(local_b0,local_140);
  local_358 = (undefined *)local_140[2];
  local_368._0_8_ = *local_140;
  unique0x10001a33 = (code *)local_140[1];
  local_278 = *(undefined **)(local_130 + 4);
  local_288._0_4_ = *local_130;
  local_288._4_4_ = local_130[1];
  uStack_280._0_4_ = local_130[2];
  uStack_280._4_4_ = local_130[3];
                    /* try { // try from 001547b0 to 00154807 has its CatchHandler @ 001552ce */
  local_2c4 = uVar8;
  uVar5 = _ZN17backdoorautomater13modifyservice13write_service17hc4c312686b13b0b4E
                    (local_368,&local_288,param_4);
  _ZN17backdoorautomater9sanitizer18sanitize_return_fn17hb2c462d03cd2292cE(uVar5);
  local_98 = &DAT_0026563d;
  local_90 = 0x17;
  _ZN3std7process7Command3new17hc59b10cf3f1b2adaE(&local_288,&DAT_002657bf,2);
                    /* try { // try from 00154808 to 00154857 has its CatchHandler @ 001552eb */
  uVar5 = _ZN3std7process7Command3arg17ha1bca970e684ecbeE(&local_288,&DAT_002657c1,2);
  uVar5 = _ZN3std7process7Command3arg17hf81cfe9a1d177945E(uVar5,&local_98);
  (*(code *)PTR__ZN3std7process7Command6output17hf2f7777b705db8a9E_00368e98)(local_368,uVar5);
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17h4dac3b1149b99667E
            (local_1b8,local_368,&PTR_DAT_00329e70);
                    /* try { // try from 00154858 to 0015487f has its CatchHandler @ 001552a9 */
  _ZN4core3ptr42drop_in_place_LT_std__process__Command_GT_17h60da061aa1df0d14E(&local_288);
  (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h7ed9087fa43d10adE_00368300)
            (local_368,CONCAT44(uStack_194,local_198),CONCAT44(uStack_18c,uStack_190));
                    /* try { // try from 00154880 to 00154899 has its CatchHandler @ 00155297 */
  uVar5 = _ZN71__LT_alloc__borrow__Cow_LT_B_GT__u20_as_u20_core__ops__deref__Deref_GT_5deref17ha2c16a4b1cc76445E
                    (local_368);
  _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h4aa1dd8ab670f689E
            (&local_288,uVar5);
  local_298 = local_278;
  local_2a8 = (undefined4)local_288;
  uStack_2a4 = local_288._4_4_;
  uStack_2a0 = (undefined4)uStack_280;
  uStack_29c = uStack_280._4_4_;
                    /* try { // try from 001548ba to 0015491a has its CatchHandler @ 001552c6 */
  _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17hb5385058f177b775E(local_368);
  _ZN17backdoorautomater9sanitizer23sanitize_system_command17hc9c6071c8b9b108cE(&local_2a8);
  local_288 = (undefined **)&DAT_002657f0;
  uStack_280 = (undefined *)0xf;
  local_278 = (undefined *)CONCAT44(uStack_a4,local_a8);
  _ZN5alloc3str17join_generic_copy17hc78a65dc4338aaa9E(local_368,&local_288,2,1,0);
  local_f8 = local_358;
  local_108 = local_368._0_4_;
  uStack_104 = local_368._4_4_;
  uStack_100 = local_368._8_4_;
  uStack_fc = uStack_35c;
                    /* try { // try from 00154935 to 0015494d has its CatchHandler @ 0015530f */
  _ZN3std7process7Command3new17hc59b10cf3f1b2adaE(&local_288,&DAT_002657bf,2);
                    /* try { // try from 0015494e to 0015499a has its CatchHandler @ 001552d6 */
  uVar5 = _ZN3std7process7Command3arg17ha1bca970e684ecbeE(&local_288,&DAT_002657c1,2);
  uVar5 = _ZN3std7process7Command3arg17h1a6c514e95e1ad22E(uVar5,&local_108);
  (*(code *)PTR__ZN3std7process7Command6output17hf2f7777b705db8a9E_00368e98)(local_368,uVar5);
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17h4dac3b1149b99667E
            (&local_328,local_368,&PTR_DAT_00329e88);
                    /* try { // try from 0015499b to 001549a7 has its CatchHandler @ 00155217 */
  _ZN4core3ptr41drop_in_place_LT_std__process__Output_GT_17h78d1e539beaf0e46E(local_1b8);
  local_188 = local_2f8;
  local_198 = local_308;
  uStack_194 = uStack_304;
  uStack_190 = uStack_300;
  uStack_18c = uStack_2fc;
  local_1a8 = (undefined4)local_318;
  uStack_1a4 = local_318._4_4_;
  uStack_1a0 = uStack_310;
  uStack_19c = uStack_30c;
  local_1b8._4_4_ = uStack_324;
  local_1b8._0_4_ = local_328;
  local_1b8._12_4_ = uStack_31c;
  local_1b8._8_4_ = uStack_320;
                    /* try { // try from 001549e2 to 00154a09 has its CatchHandler @ 0015530f */
  _ZN4core3ptr42drop_in_place_LT_std__process__Command_GT_17h60da061aa1df0d14E(&local_288);
  (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h7ed9087fa43d10adE_00368300)
            (local_368,CONCAT44(uStack_194,local_198),CONCAT44(uStack_18c,uStack_190));
                    /* try { // try from 00154a0a to 00154a23 has its CatchHandler @ 00155285 */
  uVar5 = _ZN71__LT_alloc__borrow__Cow_LT_B_GT__u20_as_u20_core__ops__deref__Deref_GT_5deref17ha2c16a4b1cc76445E
                    (local_368);
  _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h4aa1dd8ab670f689E
            (&local_288,uVar5);
  local_318 = local_278;
  local_328 = (undefined4)local_288;
  uStack_324 = local_288._4_4_;
  uStack_320 = (undefined4)uStack_280;
  uStack_31c = uStack_280._4_4_;
                    /* try { // try from 00154a3e to 00154a4a has its CatchHandler @ 001551f8 */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_2a8);
  local_298 = local_318;
  local_2a8 = local_328;
  uStack_2a4 = uStack_324;
  uStack_2a0 = uStack_320;
  uStack_29c = uStack_31c;
                    /* try { // try from 00154a65 to 00154aca has its CatchHandler @ 0015530f */
  _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17hb5385058f177b775E(local_368);
  _ZN17backdoorautomater9sanitizer23sanitize_system_command17hc9c6071c8b9b108cE(&local_2a8);
  local_288 = (undefined **)&DAT_00265020;
  uStack_280 = (undefined *)0x10;
  local_278 = (undefined *)CONCAT44(uStack_a4,local_a8);
  uStack_270 = CONCAT44(uStack_9c,uStack_a0);
  _ZN5alloc3str17join_generic_copy17hc78a65dc4338aaa9E(local_368,&local_288,2,1,0);
  local_d8 = local_358;
  local_e8 = local_368._0_4_;
  uStack_e4 = local_368._4_4_;
  uStack_e0 = local_368._8_4_;
  uStack_dc = uStack_35c;
  local_178 = (undefined *)0x0;
  uStack_170 = 1;
  local_168 = 0;
  local_158 = (undefined *)0x0;
  uStack_150 = 1;
  local_148 = 0;
  local_134 = uVar10;
  while( true ) {
    auVar12 = _ZN74__LT_alloc__string__String_u20_as_u20_core__ops__index__Index_LT_I_GT__GT_5index17h1ea7f21b51de2163E
                        (uStack_150,local_148);
                    /* try { // try from 00154b68 to 00154c9f has its CatchHandler @ 0015540b */
    cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hb48dcd74040cf04fE
                      (auVar12._0_8_,auVar12._8_8_,&DAT_0026576f,2);
    lVar4 = local_2b0;
    if (cVar3 != '\0') break;
    local_288 = &PTR_DAT_00329f08;
    uStack_280 = (undefined *)0x1;
    local_278 = (undefined *)0x8;
    uStack_270 = 0;
    local_268 = 0;
    _ZN3std2io5stdio6_print17h9670eaecb29bc3fcE(&local_288);
    local_368._0_8_ = local_c8;
    stack0xfffffffffffffca0 =
         _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h0123b85e18e164baE;
    local_288 = &PTR_DAT_00329f18;
    uStack_280 = (undefined *)0x2;
    local_268 = 0;
    local_278 = local_368;
    uStack_270 = 1;
    _ZN3std2io5stdio6_print17h9670eaecb29bc3fcE(&local_288);
    local_288 = &PTR_DAT_00329f38;
    uStack_280 = (undefined *)0x1;
    local_278 = (undefined *)0x8;
    uStack_270 = 0;
    local_268 = 0;
    _ZN3std2io5stdio6_print17h9670eaecb29bc3fcE(&local_288);
    local_288 = (undefined **)(*(code *)PTR__ZN3std2io5stdio5stdin17h333095a056b9945dE_00368938)();
    auVar12 = (*(code *)PTR__ZN3std2io5stdio5Stdin9read_line17h820297227bc0cfb0E_00368e88)
                        (&local_288,&local_178);
    _ZN4core6result19Result_LT_T_C_E_GT_6expect17h53a72b4a2a5f7bb1E(auVar12._0_8_,auVar12._8_8_);
    uVar5 = _ZN4core3str21__LT_impl_u20_str_GT_16trim_end_matches17h14d5fe48804a90edE
                      (uStack_170,local_168,10);
    _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h4aa1dd8ab670f689E
              (&local_288,uVar5);
    local_358 = local_278;
    local_368._0_8_ = local_288;
    unique0x10001c71 = (code *)uStack_280;
                    /* try { // try from 00154cba to 00154cc1 has its CatchHandler @ 001553c7 */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_178);
    local_168 = local_358;
    local_178 = (undefined *)local_368._0_8_;
    uStack_170 = stack0xfffffffffffffca0;
                    /* try { // try from 00154cdc to 00154ce4 has its CatchHandler @ 0015540b */
    _ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17hb1e8eef355dde452E
              (&local_288,&local_178);
                    /* try { // try from 00154ce5 to 00154cec has its CatchHandler @ 001553e6 */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_158);
    local_148 = local_278;
    local_158 = (undefined *)local_288;
    uStack_150 = uStack_280;
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_5clear17hef16271c1d0d6175E(&local_178);
  }
  local_288 = &PTR_DAT_00329ea0;
  uStack_280 = (undefined *)0x1;
  local_278 = (undefined *)0x8;
  uStack_270 = 0;
  local_268 = 0;
                    /* try { // try from 00154d5c to 00154d99 has its CatchHandler @ 00155317 */
  (*(code *)PTR__ZN3std2io5stdio6_print17h9670eaecb29bc3fcE_00368b80)(&local_288);
  uVar10 = local_134;
  _ZN3std7process7Command3new17hc59b10cf3f1b2adaE(&local_288,&DAT_002657bf,2);
                    /* try { // try from 00154d9a to 00154de6 has its CatchHandler @ 001552b1 */
  uVar5 = _ZN3std7process7Command3arg17ha1bca970e684ecbeE(&local_288,&DAT_002657c1,2);
  uVar5 = _ZN3std7process7Command3arg17h1a6c514e95e1ad22E(uVar5,&local_e8);
  (*(code *)PTR__ZN3std7process7Command6output17hf2f7777b705db8a9E_00368e98)(local_368,uVar5);
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17h4dac3b1149b99667E
            (&local_328,local_368,&PTR_DAT_00329eb0);
                    /* try { // try from 00154de7 to 00154df3 has its CatchHandler @ 001551b6 */
  _ZN4core3ptr41drop_in_place_LT_std__process__Output_GT_17h78d1e539beaf0e46E(local_1b8);
  local_188 = local_2f8;
  local_198 = local_308;
  uStack_194 = uStack_304;
  uStack_190 = uStack_300;
  uStack_18c = uStack_2fc;
  local_1a8 = (undefined4)local_318;
  uStack_1a4 = local_318._4_4_;
  uStack_1a0 = uStack_310;
  uStack_19c = uStack_30c;
  local_1b8._4_4_ = uStack_324;
  local_1b8._0_4_ = local_328;
  local_1b8._12_4_ = uStack_31c;
  local_1b8._8_4_ = uStack_320;
                    /* try { // try from 00154e2e to 00154e55 has its CatchHandler @ 00155317 */
  _ZN4core3ptr42drop_in_place_LT_std__process__Command_GT_17h60da061aa1df0d14E(&local_288);
  (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h7ed9087fa43d10adE_00368300)
            (local_368,CONCAT44(uStack_194,local_198),CONCAT44(uStack_18c,uStack_190));
                    /* try { // try from 00154e56 to 00154e6f has its CatchHandler @ 00155266 */
  uVar5 = _ZN71__LT_alloc__borrow__Cow_LT_B_GT__u20_as_u20_core__ops__deref__Deref_GT_5deref17ha2c16a4b1cc76445E
                    (local_368);
  _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h4aa1dd8ab670f689E
            (&local_288,uVar5);
  local_318 = local_278;
  local_328 = (undefined4)local_288;
  uStack_324 = local_288._4_4_;
  uStack_320 = (undefined4)uStack_280;
  uStack_31c = uStack_280._4_4_;
                    /* try { // try from 00154e8a to 00154e96 has its CatchHandler @ 00155194 */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_2a8);
  local_298 = local_318;
  local_2a8 = local_328;
  uStack_2a4 = uStack_324;
  uStack_2a0 = uStack_320;
  uStack_29c = uStack_31c;
                    /* try { // try from 00154eb1 to 00154fac has its CatchHandler @ 00155317 */
  _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17hb5385058f177b775E(local_368);
  _ZN17backdoorautomater9sanitizer18sanitize_ex_stderr17h2f447f0a04b557e6E(&local_2a8);
  local_288 = &PTR_DAT_00329ec8;
  uStack_280 = (undefined *)0x1;
  local_278 = (undefined *)0x8;
  uStack_270 = 0;
  local_268 = 0;
  (*(code *)PTR__ZN3std2io5stdio6_print17h9670eaecb29bc3fcE_00368b80)(&local_288);
  local_368._0_8_ = local_c8;
  stack0xfffffffffffffca0 =
       _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h0123b85e18e164baE;
  local_288 = &PTR_DAT_00329ed8;
  uStack_280 = (undefined *)0x2;
  local_268 = 0;
  uStack_270 = 1;
  local_278 = local_368;
  (*(code *)PTR__ZN3std2io5stdio6_print17h9670eaecb29bc3fcE_00368b80)(&local_288);
  local_288 = &PTR_DAT_00329ef8;
  uStack_280 = (undefined *)0x1;
  local_278 = (undefined *)0x8;
  uStack_270 = 0;
  local_268 = 0;
  (*(code *)PTR__ZN3std2io5stdio6_print17h9670eaecb29bc3fcE_00368b80)(&local_288);
                    /* try { // try from 00154fad to 00154fb9 has its CatchHandler @ 0015518c */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_158);
                    /* try { // try from 00154fba to 00154fc6 has its CatchHandler @ 00155184 */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_178);
                    /* try { // try from 00154fc7 to 00154fd3 has its CatchHandler @ 0015530f */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_e8);
                    /* try { // try from 00154fd4 to 00154fe0 has its CatchHandler @ 001552c6 */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_108);
                    /* try { // try from 00154fe1 to 00154fed has its CatchHandler @ 001552a9 */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_2a8);
                    /* try { // try from 00154fee to 00154ffa has its CatchHandler @ 001552ce */
  _ZN4core3ptr41drop_in_place_LT_std__process__Output_GT_17h78d1e539beaf0e46E(local_1b8);
                    /* try { // try from 00154ffe to 0015500a has its CatchHandler @ 00155300 */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(local_b0);
  if ((char)local_2c8 != '\0') {
                    /* try { // try from 0015501d to 00155029 has its CatchHandler @ 00155259 */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_128);
  }
  if ((char)uVar10 == '\0') {
                    /* try { // try from 0015502f to 0015503b has its CatchHandler @ 00155179 */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_2e8);
  }
                    /* try { // try from 0015503f to 0015504b has its CatchHandler @ 00155278 */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(local_c8);
  if (!bVar2) {
                    /* try { // try from 00155053 to 0015505f has its CatchHandler @ 00155166 */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(local_2b8);
                    /* try { // try from 00155060 to 0015506c has its CatchHandler @ 0015515b */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(local_2c0);
  }
  _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h8814db29c860c5cdE
            (lVar4);
  return;
}