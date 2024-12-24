void __rustcall
uu_test::files(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  char cVar7;
  undefined auVar8 [12];
  undefined auVar9 [12];
  long local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  long local_238;
  long local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined8 local_1a0;
  long local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  long local_178;
  long local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  long local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  long local_c8;
  long local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  std::fs::metadata(&local_258);
  lVar2 = local_230;
  lVar1 = local_238;
  if ((int)local_258 != 2) {
    local_188 = (undefined4)local_248;
    uStack_184 = local_248._4_4_;
    uStack_180 = uStack_240;
    uStack_17c = uStack_23c;
    local_198 = local_258;
    uStack_190 = uStack_250;
    local_168 = local_228;
    uStack_160 = uStack_220;
    local_158 = local_218;
    uStack_150 = uStack_210;
    local_148 = local_208;
    uStack_140 = uStack_200;
    local_138 = local_1f8;
    uStack_130 = uStack_1f0;
    local_128 = local_1e8;
    uStack_120 = uStack_1e0;
    local_118 = local_1d8;
    uStack_110 = uStack_1d0;
    local_108 = local_1c8;
    uStack_100 = uStack_1c0;
    local_f8 = local_1b8;
    uStack_f4 = uStack_1b4;
    uStack_f0 = uStack_1b0;
    uStack_ec = uStack_1ac;
    local_178 = local_238;
    local_170 = local_230;
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>
              (&local_258);
    std::fs::metadata(&local_258,param_4,param_5);
    if ((int)local_258 != 2) {
      local_d8 = (undefined4)local_248;
      uStack_d4 = local_248._4_4_;
      uStack_d0 = uStack_240;
      uStack_cc = uStack_23c;
      local_e8 = local_258;
      uStack_e0 = uStack_250;
      local_b8 = local_228;
      uStack_b0 = uStack_220;
      local_a8 = local_218;
      uStack_a0 = uStack_210;
      local_98 = local_208;
      uStack_90 = uStack_200;
      local_88 = local_1f8;
      uStack_80 = uStack_1f0;
      local_78 = local_1e8;
      uStack_70 = uStack_1e0;
      local_68 = local_1d8;
      uStack_60 = uStack_1d0;
      local_58 = local_1c8;
      uStack_50 = uStack_1c0;
      local_48 = local_1b8;
      uStack_44 = uStack_1b4;
      uStack_40 = uStack_1b0;
      uStack_3c = uStack_1ac;
      local_c8 = local_238;
      local_c0 = local_230;
      core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>
                (&local_258);
      std::ffi::os_str::_<impl_core::convert::TryFrom<&std::ffi::os_str::OsStr>for&str>::try_from
                (&local_258,param_6,param_7);
      if (local_258 != 0) {
LAB_001ad42b:
        local_258 = 1;
        local_248 = param_7;
        uStack_240 = CONCAT31(uStack_240._1_3_,1);
        uStack_250 = param_6;
        _<T_as_alloc::string::ToString>::to_string(param_1 + 1,&local_258);
        *param_1 = 4;
        return;
      }
      local_1a0 = uStack_250;
      local_1a8 = local_248;
      cVar5 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                        (uStack_250,local_248,&DAT_0011d183,3);
      uVar4 = local_1a0;
      uVar3 = local_1a8;
      if (cVar5 == '\0') {
        cVar5 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                          (local_1a0,local_1a8,&DAT_0011d186,3);
        if (cVar5 == '\0') {
          cVar5 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar4,uVar3,&DAT_0011d189,3);
          if (cVar5 == '\0') goto LAB_001ad42b;
          std::fs::Metadata::modified(&local_258,&local_198);
          auVar8 = core::result::Result<T,E>::unwrap(&local_258,&PTR_DAT_00215368);
          std::fs::Metadata::modified(&local_258,&local_e8);
          auVar9 = core::result::Result<T,E>::unwrap(&local_258,&PTR_DAT_00215380);
          bVar6 = auVar8._0_8_ < auVar9._0_8_;
          if (auVar8._0_8_ == auVar9._0_8_) {
            bVar6 = auVar8._8_4_ < auVar9._8_4_;
          }
        }
        else {
          std::fs::Metadata::modified(&local_258,&local_198);
          auVar8 = core::result::Result<T,E>::unwrap(&local_258,&PTR_DAT_00215398);
          std::fs::Metadata::modified(&local_258,&local_e8);
          auVar9 = core::result::Result<T,E>::unwrap(&local_258,&PTR_DAT_002153b0);
          cVar5 = auVar8._0_8_ != auVar9._0_8_;
          if (auVar8._0_8_ < auVar9._0_8_) {
            cVar5 = -1;
          }
          cVar7 = auVar8._8_4_ != auVar9._8_4_;
          if (auVar8._8_4_ < auVar9._8_4_) {
            cVar7 = -1;
          }
          if (cVar5 != '\0') {
            cVar7 = cVar5;
          }
          bVar6 = cVar7 == '\x01';
        }
      }
      else {
        bVar6 = lVar1 == local_238 && lVar2 == local_230;
      }
      *(bool *)(param_1 + 1) = bVar6;
      *param_1 = 7;
      return;
    }
  }
  *(undefined *)(param_1 + 1) = 0;
  *param_1 = 7;
  core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>
            (&local_258);
  return;
}