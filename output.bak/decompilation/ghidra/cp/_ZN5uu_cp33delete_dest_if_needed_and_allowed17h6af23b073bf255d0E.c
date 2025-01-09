void __rustcall
uu_cp::delete_dest_if_needed_and_allowed
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,long param_6,char param_7,undefined8 param_8)

{
  char cVar1;
  long lVar2;
  bool bVar3;
  undefined **local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined **local_258;
  undefined8 uStack_250;
  undefined8 **local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 *local_228;
  code *local_220;
  long local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  int local_168;
  undefined4 uStack_164;
  long local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  byte local_130;
  undefined7 uStack_12f;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  long local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (1 < *(byte *)(param_6 + 0x3c)) goto LAB_0020626e;
  if (*(char *)(param_6 + 0x3d) == '\x02') {
    if (*(char *)(param_6 + 0x38) == '\0') goto LAB_0020626e;
    bVar3 = *(char *)(param_6 + 0x41) != '\0';
    if ((!bVar3) && (param_7 != '\0')) {
      bVar3 = *(char *)(param_6 + 0x40) != '\0';
    }
    uucore::features::fs::FileInformation::from_path(&local_168,param_2,param_3,bVar3);
    local_1f8 = 1;
    local_1e0 = 1;
    local_228 = &local_1f8;
    local_220 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
    local_258 = &PTR_s_cannot_stat_002b5f08;
    uStack_250 = 1;
    local_238 = 0;
    local_248 = &local_228;
    local_240 = 1;
                    /* try { // try from 00206090 to 0020609e has its CatchHandler @ 00206286 */
    local_1f0 = param_2;
    local_1e8 = param_3;
    core::option::Option<T>::map_or_else(&local_270,&local_258);
    local_248 = (undefined8 **)local_260;
    local_258 = local_270;
    uStack_250 = uStack_268;
    if (CONCAT44(uStack_164,local_168) != 0) {
      param_1[3] = local_260;
      param_1[1] = local_270;
      param_1[2] = uStack_268;
      *param_1 = 3;
      param_1[4] = local_160;
      return;
    }
    local_208 = local_150;
    local_218 = local_160;
    uStack_210 = uStack_158;
    local_1d8 = local_140;
    uStack_1d0 = uStack_138;
    local_1c8 = CONCAT71(uStack_12f,local_130);
    uStack_1c0 = uStack_128;
    local_1b8 = local_120;
    uStack_1b0 = uStack_118;
    local_1a8 = local_110;
    uStack_1a0 = uStack_108;
    local_198 = local_100;
    uStack_190 = uStack_f8;
    local_188 = local_f0;
    uStack_180 = uStack_e8;
    local_178 = local_e0;
    uStack_174 = uStack_dc;
    uStack_170 = uStack_d8;
    uStack_16c = uStack_d4;
    core::ptr::
    drop_in_place<<core::result::Result<uucore::features::fs::FileInformation,std::io::error::Error>as_quick_error::ResultExt<uucore::features::fs::FileInformation,std::io::error::Error>>::context<alloc::string::String>::__closure__>
              (&local_258);
    local_b8 = local_218;
    uStack_b0 = uStack_210;
    local_a8 = local_208;
    local_a0 = local_148;
    local_98 = local_1d8;
    uStack_90 = uStack_1d0;
    local_88 = (undefined4)local_1c8;
    uStack_84 = local_1c8._4_4_;
    uStack_80 = (undefined4)uStack_1c0;
    uStack_7c = uStack_1c0._4_4_;
    local_78 = (undefined4)local_1b8;
    uStack_74 = local_1b8._4_4_;
    uStack_70 = (undefined4)uStack_1b0;
    uStack_6c = uStack_1b0._4_4_;
    local_68 = (undefined4)local_1a8;
    uStack_64 = local_1a8._4_4_;
    uStack_60 = (undefined4)uStack_1a0;
    uStack_5c = uStack_1a0._4_4_;
    local_58 = local_198;
    uStack_50 = uStack_190;
    local_48 = local_188;
    uStack_40 = uStack_180;
    local_38 = local_178;
    uStack_34 = uStack_174;
    uStack_30 = uStack_170;
    uStack_2c = uStack_16c;
    lVar2 = hashbrown::map::HashMap<K,V,S,A>::get_inner(param_8,&local_b8);
    if (lVar2 == 0) goto LAB_0020626e;
  }
  else if ((*(char *)(param_6 + 0x3d) != '\x01') &&
          (cVar1 = uucore::features::fs::is_symlink_loop(param_4,param_5), cVar1 == '\0')) {
    std::fs::metadata(&local_168,param_4,param_5);
    if (local_168 == 2) goto LAB_00206261;
    if ((local_130 & 0x92) != 0) goto LAB_0020626e;
  }
  local_160 = std::fs::remove_file(param_4,param_5);
  if (local_160 != 0) {
LAB_00206261:
    *param_1 = 2;
    param_1[1] = local_160;
    return;
  }
LAB_0020626e:
  *param_1 = 0xd;
  return;
}