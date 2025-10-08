void _ZN5uu_od13parse_formats17parse_type_string17h86db81d598ba34e9E
               (undefined8 *param_1,long param_2,long param_3)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  undefined extraout_DL;
  ulong extraout_RDX;
  uleb128 *puVar4;
  undefined uVar5;
  ulong uVar6;
  undefined auVar7 [16];
  undefined auVar8 [12];
  undefined local_135;
  undefined4 local_134;
  undefined8 *local_130;
  long local_128;
  long local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  long local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  long local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  long local_d0;
  undefined local_c8;
  long local_c0;
  long local_b8;
  undefined4 *local_b0;
  long local_a8;
  long local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  long local_88;
  undefined7 local_78;
  undefined uStack_71;
  undefined7 uStack_70;
  undefined4 *local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  undefined *local_38;
  
  local_100 = 0;
  uStack_f8 = 8;
  local_f0 = 0;
  local_a0 = param_2 + param_3;
  local_130 = param_1;
  local_128 = param_3;
  local_120 = param_2;
  local_a8 = param_2;
  bVar1 = _ZN4core3str11validations15next_code_point17h48ce1982219e5e58E(&local_a8);
  if (((int)extraout_RDX != 0x110000 & bVar1) == 1) {
    puVar4 = (uleb128 *)(extraout_RDX & 0xffffffff);
    do {
      local_134 = SUB84(puVar4,0);
      switch(local_134) {
      case 0x61:
        cVar2 = '\0';
        break;
      default:
        local_c0 = local_120;
        local_b8 = local_128;
        local_b0 = &local_134;
                    /* try { // try from 00169fe7 to 00169ff0 has its CatchHandler @ 0016a35d */
        _ZN5uu_od13parse_formats17parse_type_string28__u7b__u7b_closure_u7d__u7d_17h85deb7467d087753E
                  (&local_e8,&local_c0);
        local_118 = (undefined4)CONCAT43(uStack_dc,local_e0._1_3_);
        uStack_114._3_1_ = (undefined)uStack_d8;
        uStack_114 = CONCAT13(uStack_114._3_1_,(int3)((uint)uStack_dc >> 8));
        uStack_110 = (undefined4)(CONCAT44(uStack_d4,uStack_d8) >> 8);
        uStack_10c._0_3_ = (undefined3)((uint)uStack_d4 >> 8);
        cVar2 = (char)local_e0;
        if (local_e8 != -0x8000000000000000) {
          local_130[3] = CONCAT35((undefined3)uStack_10c,CONCAT41(uStack_110,uStack_114._3_1_));
          *(ulong *)((long)local_130 + 0x11) = CONCAT44(uStack_114,local_118);
          local_130[1] = local_e8;
          *(char *)(local_130 + 2) = (char)local_e0;
          *local_130 = 1;
          goto LAB_0016a2d7;
        }
        goto LAB_0016a064;
      case 99:
        cVar2 = '\x01';
        break;
      case 100:
        cVar2 = '\x02';
        break;
      case 0x66:
        cVar2 = '\x06';
        break;
      case 0x6f:
        cVar2 = '\x03';
        break;
      case 0x75:
        cVar2 = '\x04';
        break;
      case 0x78:
        cVar2 = '\x05';
      }
      local_c0 = local_120;
      local_b8 = local_128;
      local_b0 = &local_134;
LAB_0016a064:
      uVar6 = 0x2010101010000 >> (cVar2 * '\b' & 0x3fU);
      auVar8 = _ZN4core3str11validations15next_code_point17h48ce1982219e5e58E(&local_a8);
      puVar4 = (uleb128 *)(ulong)auVar8._8_4_;
      if ((auVar8 & (undefined  [12])0x1) == (undefined  [12])0x0) {
        puVar4 = &uleb128_00110000;
      }
      local_135 = 0;
      cVar3 = _ZN5uu_od13parse_formats19is_format_size_char17h68267824c1e455acE
                        (puVar4,uVar6 & 0xffffffff,&local_135);
      if (cVar3 == '\0') {
        local_118 = 0;
        uStack_114 = 0;
        uStack_110 = 1;
        uStack_10c = 0;
        local_108 = 0;
        while( true ) {
                    /* try { // try from 0016a0f0 to 0016a0fd has its CatchHandler @ 0016a362 */
          cVar3 = _ZN5uu_od13parse_formats22is_format_size_decimal17h0429fab3d2c9aacbE
                            (puVar4,uVar6 & 0xff,&local_118);
          if (cVar3 == '\0') break;
          auVar8 = _ZN4core3str11validations15next_code_point17h48ce1982219e5e58E(&local_a8);
          puVar4 = (uleb128 *)(ulong)auVar8._8_4_;
          if ((auVar8 & (undefined  [12])0x1) == (undefined  [12])0x0) {
            puVar4 = &uleb128_00110000;
          }
        }
        uVar5 = local_135;
        if (local_108 != 0) {
          uVar6 = _ZN4core3num20__LT_impl_u20_u8_GT_16from_ascii_radix17h9772a7185930f8d4E
                            (CONCAT44(uStack_10c,uStack_110));
          local_58 = local_120;
          local_50 = local_128;
          uVar5 = extraout_DL;
          local_60 = &local_118;
          if ((uVar6 & 1) != 0) {
                    /* try { // try from 0016a15a to 0016a16b has its CatchHandler @ 0016a35b */
            _ZN5uu_od13parse_formats17parse_type_string28__u7b__u7b_closure_u7d__u7d_17h7d270190361e6d8cE
                      (&local_e8,&local_60);
            local_78 = CONCAT43(uStack_dc,local_e0._1_3_);
            uStack_71 = (undefined)uStack_d8;
            uStack_70 = (undefined7)(CONCAT44(uStack_d4,uStack_d8) >> 8);
            uVar5 = (char)local_e0;
            if (local_e8 != -0x8000000000000000) {
              local_130[3] = CONCAT71(uStack_70,uStack_71);
              *(ulong *)((long)local_130 + 0x11) = CONCAT17(uStack_71,local_78);
              local_130[1] = local_e8;
              *(char *)(local_130 + 2) = (char)local_e0;
              *local_130 = 1;
              _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h0ecbbb68ed17b0f1E
                        (&local_118);
              goto LAB_0016a2d7;
            }
          }
        }
        local_135 = uVar5;
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h0ecbbb68ed17b0f1E(&local_118);
        if ((int)puVar4 != 0x7a) goto LAB_0016a1d5;
LAB_0016a1b6:
        auVar8 = _ZN4core3str11validations15next_code_point17h48ce1982219e5e58E(&local_a8);
        puVar4 = (uleb128 *)(ulong)auVar8._8_4_;
        if ((auVar8 & (undefined  [12])0x1) == (undefined  [12])0x0) {
          puVar4 = &uleb128_00110000;
        }
        uVar5 = 1;
      }
      else {
        auVar7 = _ZN4core3str11validations15next_code_point17h48ce1982219e5e58E(&local_a8);
        if ((auVar7 & (undefined  [16])0x1) == (undefined  [16])0x0) {
          puVar4 = &uleb128_00110000;
        }
        else {
          puVar4 = (uleb128 *)(auVar7._8_8_ & 0xffffffff);
          if (auVar7._8_4_ == 0x7a) goto LAB_0016a1b6;
        }
LAB_0016a1d5:
        uVar5 = 0;
      }
      _ZN5uu_od13parse_formats14od_format_type17h8107691a9d67d600E(&local_e8,cVar2,local_135);
      if (local_e8 == 3) {
        local_40 = local_128;
        local_38 = &local_135;
        local_48 = local_120;
                    /* try { // try from 0016a297 to 0016a2a8 has its CatchHandler @ 0016a356 */
        _ZN5uu_od13parse_formats17parse_type_string28__u7b__u7b_closure_u7d__u7d_17h7807c5a0fd0cc52fE
                  (&local_118,&local_48);
        local_98 = local_118;
        uStack_94 = uStack_114;
        uStack_90 = uStack_110;
        uStack_8c = uStack_10c;
        local_88 = local_108;
        local_130[3] = local_108;
        *(undefined4 *)(local_130 + 1) = local_118;
        *(undefined4 *)((long)local_130 + 0xc) = uStack_114;
        *(undefined4 *)(local_130 + 2) = uStack_110;
        *(undefined4 *)((long)local_130 + 0x14) = uStack_10c;
        *local_130 = 1;
LAB_0016a2d7:
        _ZN4core3ptr89drop_in_place_LT_alloc__vec__Vec_LT_uu_od__parse_formats__ParsedFormatterItemInfo_GT__GT_17h911b774f5eb298b9E
                  (local_100,uStack_f8);
        return;
      }
      local_98 = local_e0;
      uStack_94 = uStack_dc;
      uStack_90 = uStack_d8;
      uStack_8c = uStack_d4;
      local_88 = local_d0;
                    /* try { // try from 0016a227 to 0016a23a has its CatchHandler @ 0016a35d */
      local_c8 = uVar5;
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h50f7d4baac607dc5E
                (&local_100,&local_e8,&PTR_s_src_uu_od_src_parse_formats_rs_00202608);
    } while ((int)puVar4 != 0x110000);
  }
  local_130[3] = local_f0;
  local_130[1] = local_100;
  local_130[2] = uStack_f8;
  *local_130 = 0;
  return;
}