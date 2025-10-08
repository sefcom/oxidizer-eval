void _ZN9alacritty7migrate4yaml15migrate_imports17he16b1e9186b09947E
               (undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,long param_6)

{
  byte bVar1;
  undefined **ppuVar2;
  undefined8 *puVar3;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 uVar4;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined **local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  long local_188;
  undefined8 local_180;
  undefined8 *local_178;
  undefined8 local_170;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined8 local_160;
  undefined **local_158;
  undefined2 uStack_150;
  undefined2 uStack_14e;
  undefined4 uStack_14c;
  undefined2 local_148;
  undefined2 uStack_146;
  undefined4 uStack_144;
  undefined2 local_140;
  undefined uStack_13e;
  undefined uStack_13d;
  undefined4 uStack_13c;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 *local_a8;
  code *local_a0;
  undefined local_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  local_188 = param_2;
  _ZN9alacritty6config7imports17he228980ef6034b5fE(&local_218,param_3,param_4,param_5,param_6);
  if ((int)local_218 == 1) {
    local_1a8 = local_200;
    local_178 = &local_1b8;
    local_170 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
    local_158 = &PTR_s_import_error__009832c0;
    uStack_150 = 1;
    uStack_14e = 0;
    uStack_14c = 0;
    uStack_138 = 0;
    local_148 = SUB82(&local_178,0);
    uStack_146 = (undefined2)((ulong)&local_178 >> 0x10);
    uStack_144 = (undefined4)((ulong)&local_178 >> 0x20);
    local_140 = 1;
    uStack_13e = 0;
    uStack_13d = 0;
    uStack_13c = 0;
                    /* try { // try from 0055ee5c to 0055ee72 has its CatchHandler @ 0055f357 */
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h50b4264313244ea1E
              (&local_60,0,extraout_RDX,&local_158);
    param_1[2] = local_50;
    *(undefined4 *)param_1 = local_60;
    *(undefined4 *)((long)param_1 + 4) = uStack_5c;
    *(undefined4 *)(param_1 + 1) = uStack_58;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_54;
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcb6d23ea7ad1ac3aE(&local_1b8);
  }
  else {
    local_68 = local_200;
    local_78 = (undefined4)uStack_210;
    uStack_74 = uStack_210._4_4_;
    uStack_70 = (undefined4)uStack_208;
    uStack_6c = uStack_208._4_4_;
    local_1d0 = (undefined **)0x0;
    uStack_1c8 = 8;
    local_1c0 = 0;
    local_180 = param_3;
    _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h2441c7966b064cd0E
              (local_98,&local_78);
    _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h48ec69800376c184E
              (&local_178,local_98);
    if (local_178 != (undefined8 *)0x2) {
      bVar1 = *(byte *)(local_188 + 0x18);
      uVar4 = extraout_RDX_00;
      do {
        if (((ulong)local_178 & 1) != 0) {
          uStack_208 = local_160;
          local_218 = (undefined **)local_170;
          uStack_210 = (undefined *)CONCAT44(uStack_164,uStack_168);
          uStack_1b0 = 
          _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
          local_158 = &PTR_s_import_error__009832c0;
          uStack_150 = 1;
          uStack_14e = 0;
          uStack_14c = 0;
          uStack_138 = 0;
          local_148 = SUB82(&local_1b8,0);
          uStack_146 = (undefined2)((ulong)&local_1b8 >> 0x10);
          uStack_144 = (undefined4)((ulong)&local_1b8 >> 0x20);
          local_140 = 1;
          uStack_13e = 0;
          uStack_13d = 0;
          uStack_13c = 0;
                    /* try { // try from 0055f288 to 0055f29e has its CatchHandler @ 0055f31f */
          local_1b8 = &local_218;
          _ZN4core6option15Option_LT_T_GT_11map_or_else17h50b4264313244ea1E
                    (&local_48,0,uVar4,&local_158);
          param_1[2] = local_38;
          *(undefined4 *)param_1 = local_48;
          *(undefined4 *)((long)param_1 + 4) = uStack_44;
          *(undefined4 *)(param_1 + 1) = uStack_40;
          *(undefined4 *)((long)param_1 + 0xc) = uStack_3c;
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcb6d23ea7ad1ac3aE(&local_218);
LAB_0055f2f6:
                    /* try { // try from 0055f2f6 to 0055f302 has its CatchHandler @ 0055f37b */
          _ZN4core3ptr130drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_core__result__Result_LT_std__path__PathBuf_C_alloc__string__String_GT__GT__GT_17h43a6db806a26cc75E
                    (local_98);
          goto LAB_0055f303;
        }
        local_1e8._0_4_ = (undefined4)local_170;
        local_1e8._4_4_ = local_170._4_4_;
        uStack_1e0 = uStack_168;
        uStack_1dc = uStack_164;
        local_1d8 = local_160;
                    /* try { // try from 0055f00a to 0055f10c has its CatchHandler @ 0055f38f */
        _ZN3std2fs8metadata17h8f40e5ed4fcd8161E(&local_158,CONCAT44(uStack_164,uStack_168));
        ppuVar2 = local_158;
        _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h672bb05c96f66e9cE
                  (&local_158);
        if ((int)ppuVar2 == 2) {
          if ((bVar1 & 1) != 0) {
            local_218 = (undefined **)&local_1e8;
            uStack_210 = 
            PTR__ZN65__LT_std__sys__os_str__bytes__Buf_u20_as_u20_core__fmt__Debug_GT_3fmt17hca7467b342cca1adE_009de9f8
            ;
            local_158 = &PTR_s_Keeping_yaml_config_for_nonexist_009832d0;
            uStack_150 = 2;
            uStack_14e = 0;
            uStack_14c = 0;
            uStack_138 = 0;
            local_148 = SUB82(&local_218,0);
            uStack_146 = (undefined2)((ulong)&local_218 >> 0x10);
            uStack_144 = (undefined4)((ulong)&local_218 >> 0x20);
            local_140 = 1;
            uStack_13e = 0;
            uStack_13d = 0;
            uStack_13c = 0;
            (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_009de5d0)(&local_158);
          }
          (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h880ad8b337de96e9E_009de418)
                    (&local_158,CONCAT44(uStack_1dc,uStack_1e0),local_1d8);
          (*(code *)
            PTR__ZN98__LT_alloc__string__String_u20_as_u20_core__convert__From_LT_alloc__borrow__Cow_LT_str_GT__GT__GT_4from17hf538378189c0d550E_009dede0
          )(&local_218,&local_158);
          local_158 = local_218;
          uStack_150 = SUB82(uStack_210,0);
          uStack_14e = (undefined2)((ulong)uStack_210 >> 0x10);
          uStack_14c = uStack_210._4_4_;
          local_148 = (undefined2)uStack_208;
          uStack_146 = (undefined2)((ulong)uStack_208 >> 0x10);
          uStack_144 = (undefined4)((ulong)uStack_208 >> 0x20);
          uStack_13e = 2;
          _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h0caeefc8e3382ad3E
                    (&local_1d0,&local_158,&PTR_s_alacritty_src_migrate_yaml_rs_009832f0);
        }
        else {
          _ZN9alacritty7migrate14migrate_config17heae155b6e6f7f60cE
                    (&local_158,local_188,CONCAT44(uStack_1dc,uStack_1e0),local_1d8,param_6 + -1);
          if ((int)local_158 == 1) {
            uStack_208 = CONCAT44(uStack_13c,CONCAT13(uStack_13d,CONCAT12(uStack_13e,local_140)));
            local_218 = (undefined **)CONCAT44(uStack_14c,CONCAT22(uStack_14e,uStack_150));
            uStack_210 = (undefined *)CONCAT44(uStack_144,CONCAT22(uStack_146,local_148));
            param_1[2] = uStack_208;
            *(uint *)param_1 = CONCAT22(uStack_14e,uStack_150);
            *(undefined4 *)((long)param_1 + 4) = uStack_14c;
            *(uint *)(param_1 + 1) = CONCAT22(uStack_146,local_148);
            *(undefined4 *)((long)param_1 + 0xc) = uStack_144;
            _ZN4core3mem4drop17ha42964a555fb617bE(&local_1e8);
            goto LAB_0055f2f6;
          }
          local_198 = local_130;
          uStack_1a0 = (undefined4)uStack_138;
          uStack_19c = uStack_138._4_4_;
          local_1b8 = (undefined8 *)CONCAT44(uStack_14c,CONCAT22(uStack_14e,uStack_150));
          uStack_1b0 = (code *)CONCAT44(uStack_144,CONCAT22(uStack_146,local_148));
          local_1a8 = CONCAT44(uStack_13c,CONCAT13(uStack_13d,CONCAT12(uStack_13e,local_140)));
          if ((bVar1 & 1) != 0) {
                    /* try { // try from 0055f149 to 0055f15a has its CatchHandler @ 0055f380 */
            _ZN9alacritty7migrate9Migration15success_message17h6e70dbedf75118d1E
                      (&local_218,&local_1b8,1);
            local_a0 = 
            _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E
            ;
            local_158 = (undefined **)&DAT_00982f40;
            uStack_150 = 2;
            uStack_14e = 0;
            uStack_14c = 0;
            uStack_138 = 0;
            local_148 = SUB82(&local_a8,0);
            uStack_146 = (undefined2)((ulong)&local_a8 >> 0x10);
            uStack_144 = (undefined4)((ulong)&local_a8 >> 0x20);
            local_140 = 1;
            uStack_13e = 0;
            uStack_13d = 0;
            uStack_13c = 0;
            local_a8 = &local_218;
                    /* try { // try from 0055f1b5 to 0055f1bd has its CatchHandler @ 0055f36c */
            (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_009dff18)(&local_158);
            _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcb6d23ea7ad1ac3aE(&local_218)
            ;
          }
                    /* try { // try from 0055f1c6 to 0055f208 has its CatchHandler @ 0055f380 */
          _ZN9alacritty7migrate9Migration8new_path17h798257b5137424a1E(&local_218,&local_1b8);
          local_148 = (undefined2)uStack_208;
          uStack_146 = (undefined2)((ulong)uStack_208 >> 0x10);
          uStack_144 = (undefined4)((ulong)uStack_208 >> 0x20);
          local_158 = local_218;
          uStack_150 = SUB82(uStack_210,0);
          uStack_14e = (undefined2)((ulong)uStack_210 >> 0x10);
          uStack_14c = uStack_210._4_4_;
          uStack_13e = 2;
          _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h0caeefc8e3382ad3E
                    (&local_1d0,&local_158,&PTR_s_alacritty_src_migrate_yaml_rs_00983308);
          _ZN4core3ptr50drop_in_place_LT_alacritty__migrate__Migration_GT_17h82cf96c51dcdbc49E
                    (&local_1b8);
        }
        _ZN4core3mem4drop17ha42964a555fb617bE(&local_1e8);
        _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h48ec69800376c184E
                  (&local_178);
        uVar4 = extraout_RDX_01;
      } while (local_178 != (undefined8 *)0x2);
    }
                    /* try { // try from 0055ef11 to 0055ef2a has its CatchHandler @ 0055f37b */
    _ZN4core3ptr130drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_core__result__Result_LT_std__path__PathBuf_C_alloc__string__String_GT__GT__GT_17h43a6db806a26cc75E
              (local_98);
    puVar3 = (undefined8 *)_ZN4toml5value5Value7get_mut17hee4c5d22fb0901baE(local_180);
    if (puVar3 == (undefined8 *)0x0) {
      *param_1 = 0x8000000000000000;
LAB_0055f303:
      _ZN4core3ptr62drop_in_place_LT_alloc__vec__Vec_LT_toml__value__Value_GT__GT_17h03c7773122835213E
                (&local_1d0);
    }
    else {
      local_148 = (undefined2)local_1c0;
      uStack_146 = (undefined2)((ulong)local_1c0 >> 0x10);
      uStack_144 = (undefined4)((ulong)local_1c0 >> 0x20);
      local_158 = local_1d0;
      uStack_150 = (undefined2)uStack_1c8;
      uStack_14e = (undefined2)((ulong)uStack_1c8 >> 0x10);
      uStack_14c = uStack_1c8._4_4_;
                    /* try { // try from 0055ef51 to 0055ef58 has its CatchHandler @ 0055f32e */
      _ZN4core3ptr39drop_in_place_LT_toml__value__Value_GT_17h7761fefc14a7cec1E(puVar3);
      *(ulong *)((long)puVar3 + 10) = CONCAT26(local_148,CONCAT42(uStack_14c,uStack_14e));
      *(ulong *)((long)puVar3 + 0x12) = CONCAT26(local_140,CONCAT42(uStack_144,uStack_146));
      *puVar3 = local_158;
      puVar3[1] = CONCAT44(uStack_14c,CONCAT22(uStack_14e,uStack_150));
      *(undefined *)((long)puVar3 + 0x1a) = 7;
      *param_1 = 0x8000000000000000;
    }
  }
  return;
}