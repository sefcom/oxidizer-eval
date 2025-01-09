void __rustcall uu_rm::normalize(undefined8 *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  undefined auVar3 [16];
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 *puStack_1d0;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 uStack_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined uStack_160;
  undefined7 uStack_15f;
  byte bStack_158;
  undefined3 uStack_157;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined uStack_148;
  undefined4 uStack_147;
  undefined4 uStack_143;
  undefined4 uStack_13f;
  undefined4 uStack_13b;
  undefined4 uStack_137;
  undefined4 uStack_133;
  undefined4 uStack_12f;
  undefined3 uStack_12b;
  undefined uStack_128;
  undefined7 uStack_127;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  byte bStack_e0;
  undefined4 uStack_df;
  undefined4 uStack_db;
  undefined4 uStack_d7;
  undefined4 uStack_d3;
  undefined4 uStack_cf;
  undefined4 uStack_cb;
  undefined4 uStack_c7;
  undefined4 uStack_c3;
  undefined4 uStack_bf;
  undefined4 uStack_bb;
  undefined4 uStack_b7;
  byte bStack_a8;
  undefined3 uStack_a7;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined uStack_98;
  undefined7 uStack_97;
  undefined uStack_90;
  undefined7 uStack_8f;
  undefined uStack_88;
  undefined7 uStack_87;
  undefined uStack_80;
  undefined7 uStack_7f;
  undefined uStack_78;
  undefined7 uStack_77;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_1d0 = param_1;
  std::path::Path::components(&uStack_120);
  bStack_158 = 0xb;
  core::option::Option<T>::get_or_insert_with(&bStack_158,&uStack_120);
  if (bStack_158 < 6) {
    bStack_e0 = bStack_158;
    uStack_df = CONCAT13((undefined)uStack_154,uStack_157);
    uStack_db = CONCAT13((undefined)uStack_150,uStack_154._1_3_);
    uStack_d7 = CONCAT13((undefined)uStack_14c,uStack_150._1_3_);
    uStack_d3 = CONCAT13(uStack_148,uStack_14c._1_3_);
    uStack_cf = uStack_147;
    uStack_cb = uStack_143;
    uStack_c7 = uStack_13f;
    uStack_c3 = uStack_13b;
    uStack_bf = uStack_137;
    uStack_bb = uStack_133;
    uStack_b7 = uStack_12f;
    bStack_158 = 0xb;
    uVar2 = std::path::Component::as_os_str(&bStack_e0);
    std::sys::os_str::bytes::Slice::to_owned(&uStack_1e8,uVar2);
  }
  else {
    uStack_1e8 = 0;
    uStack_1e0 = 1;
    uStack_1d8 = 0;
  }
  uStack_38 = uStack_e8;
  uStack_48 = uStack_f8;
  uStack_40 = uStack_f0;
  uStack_58 = uStack_108;
  uStack_50 = uStack_100;
  uStack_68 = uStack_118;
  uStack_60 = uStack_110;
  uStack_78 = uStack_128;
  uStack_77 = uStack_127;
  uStack_70 = uStack_120;
  uStack_88 = uStack_13b._3_1_;
  uStack_87 = (undefined7)
              (CONCAT35((undefined3)uStack_133,CONCAT41(uStack_137,uStack_13b._3_1_)) >> 8);
  uStack_80 = uStack_133._3_1_;
  uStack_7f = (undefined7)(CONCAT35(uStack_12b,CONCAT41(uStack_12f,uStack_133._3_1_)) >> 8);
  uStack_98 = uStack_148;
  uStack_97 = (undefined7)(CONCAT35((undefined3)uStack_143,CONCAT41(uStack_147,uStack_148)) >> 8);
  uStack_90 = uStack_143._3_1_;
  uStack_8f = (undefined7)
              (CONCAT35((undefined3)uStack_13b,CONCAT41(uStack_13f,uStack_143._3_1_)) >> 8);
  bStack_a8 = bStack_158;
  uStack_a7 = uStack_157;
  uStack_a4 = uStack_154;
  uStack_a0 = uStack_150;
  uStack_9c = uStack_14c;
switchD_001c1b04_caseD_7:
  bVar1 = bStack_a8;
  bStack_a8 = 0xb;
  if (bVar1 == 0xb) {
    _<std::path::Components_as_core::iter::traits::iterator::Iterator>::next(&uStack_190,&uStack_70)
    ;
    uStack_1c4 = uStack_18c;
    uStack_1bc = uStack_184;
    uStack_1b4 = uStack_17c;
    uStack_1ac = uStack_174;
    uStack_1a4 = uStack_16c;
    uStack_19c = uStack_164;
    uStack_1c8 = uStack_190;
    uStack_1c0 = uStack_188;
    uStack_1b8 = uStack_180;
    uStack_1b0 = uStack_178;
    uStack_1a8 = uStack_170;
    uStack_1a0 = uStack_168;
  }
  else {
    uStack_16c = (undefined4)((uint7)uStack_87 >> 0x18);
    uStack_168 = CONCAT31((int3)uStack_7f,uStack_80);
    uStack_164 = (undefined4)((uint7)uStack_7f >> 0x18);
    uStack_17c = (undefined4)((uint7)uStack_97 >> 0x18);
    uStack_178 = CONCAT31((int3)uStack_8f,uStack_90);
    uStack_174 = (undefined4)((uint7)uStack_8f >> 0x18);
    uStack_170 = CONCAT31((int3)uStack_87,uStack_88);
    uStack_180 = CONCAT31((int3)uStack_97,uStack_98);
    uStack_190 = CONCAT31(uStack_a7,bVar1);
    uStack_1c4 = uStack_a4;
    uStack_1bc = uStack_9c;
    uStack_1b4 = uStack_17c;
    uStack_1ac = uStack_174;
    uStack_1a4 = uStack_16c;
    uStack_19c = uStack_164;
    uStack_160 = uStack_78;
    uStack_15f = uStack_77;
    uStack_1c8 = uStack_190;
    uStack_1c0 = uStack_a0;
    uStack_1b8 = uStack_180;
    uStack_1b0 = uStack_178;
    uStack_1a8 = uStack_170;
    uStack_1a0 = uStack_168;
    uStack_190._0_1_ = bVar1;
  }
  if ((byte)uStack_190 == 10) {
    puStack_1d0[2] = uStack_1d8;
    *puStack_1d0 = uStack_1e8;
    puStack_1d0[1] = uStack_1e0;
    return;
  }
  uStack_198 = CONCAT71(uStack_15f,uStack_160);
  uStack_190 = uStack_1c8;
  uStack_18c = uStack_1c4;
  uStack_188 = uStack_1c0;
  uStack_184 = uStack_1bc;
  uStack_180 = uStack_1b8;
  uStack_17c = uStack_1b4;
  uStack_178 = uStack_1b0;
  uStack_174 = uStack_1ac;
  uStack_170 = uStack_1a8;
  uStack_16c = uStack_1a4;
  uStack_168 = uStack_1a0;
  uStack_164 = uStack_19c;
  switch((undefined)uStack_1c8) {
  case 6:
    auVar3 = std::path::Component::as_os_str(&uStack_1c8);
    break;
  case 7:
    goto switchD_001c1b04_caseD_7;
  case 8:
    std::path::PathBuf::pop(&uStack_1e8);
    goto switchD_001c1b04_caseD_7;
  case 9:
    auVar3._4_4_ = uStack_1bc;
    auVar3._0_4_ = uStack_1c0;
    auVar3._12_4_ = uStack_1b4;
    auVar3._8_4_ = uStack_1b8;
    break;
  default:
    goto switchD_001c1b04_caseD_4;
  }
  std::path::PathBuf::push(&uStack_1e8,auVar3._0_8_,auVar3._8_8_);
  goto switchD_001c1b04_caseD_7;
switchD_001c1b04_caseD_4:
                    /* WARNING: Subroutine does not return */
  core::panicking::panic("internal error: entered unreachable code",0x28,&DAT_00228240);
}