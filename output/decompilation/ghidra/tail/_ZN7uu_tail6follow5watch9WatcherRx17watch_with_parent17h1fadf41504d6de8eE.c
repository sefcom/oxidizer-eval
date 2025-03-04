undefined  [16]
_ZN7uu_tail6follow5watch9WatcherRx17watch_with_parent17h1fadf41504d6de8eE
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 **ppuVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 **local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 *local_50;
  code *local_48;
  undefined local_40 [16];
  undefined8 local_30;
  
  _ZN3std3sys3pal4unix2os11split_paths13bytes_to_path17h0549813f23b52483E(&local_b8,param_3,param_4)
  ;
                    /* try { // try from 00204c1f to 00204c6c has its CatchHandler @ 00204e5d */
  cVar2 = _ZN3std4path4Path7is_file17h82f08f46fb8d8099E(uStack_b0,local_a8);
  if (cVar2 == '\0') {
LAB_00204d60:
                    /* try { // try from 00204d6a to 00204dac has its CatchHandler @ 00204e5d */
    cVar2 = _ZN3std4path4Path11is_absolute17h3431a23d91045560E(uStack_b0,local_a8);
    if (cVar2 != '\0') {
LAB_00204dd9:
                    /* try { // try from 00204dd9 to 00204de3 has its CatchHandler @ 00204e5d */
      lVar3 = _ZN7uu_tail6follow5watch9WatcherRx5watch17h12bff18e757f3bf5E
                        (param_1,param_2,uStack_b0,local_a8);
      if (lVar3 == 0) {
        _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hd68403fe0abd735bE(&local_b8);
        uVar4 = 0;
        goto LAB_00204e07;
      }
      goto LAB_00204dec;
    }
    _ZN3std2fs12canonicalize17hd214f5c614fa2ecbE(&local_98,uStack_b0,local_a8);
    ppuVar1 = local_88;
    if (local_98 != (undefined **)0x8000000000000000) {
                    /* try { // try from 00204dbd to 00204dc4 has its CatchHandler @ 00204e4a */
      _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hd68403fe0abd735bE(&local_b8);
      local_b8 = (long)local_98;
      uStack_b0 = uStack_90;
      local_a8 = ppuVar1;
      goto LAB_00204dd9;
    }
    auVar9 = _ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17hcd961c31063bf4faE
                       ();
  }
  else {
    auVar9 = _ZN3std4path4Path6parent17h65c9a340a6266f2dE(uStack_b0,local_a8);
    lVar3 = auVar9._0_8_;
    if (lVar3 != 0) {
      cVar2 = _ZN3std4path4Path6is_dir17h9ac0db933706da51E(lVar3,auVar9._8_8_);
      if (cVar2 == '\0') {
        _ZN3std3sys6os_str5bytes5Slice8to_owned17h2d9ba69626881113E(&local_98,&DAT_00129816,1);
        local_58 = local_88;
        local_68 = (undefined4)local_98;
        uStack_64 = local_98._4_4_;
        uStack_60 = (undefined4)uStack_90;
        uStack_5c = uStack_90._4_4_;
                    /* try { // try from 00204d45 to 00204d4c has its CatchHandler @ 00204e1e */
        _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hd68403fe0abd735bE(&local_b8);
        local_a8 = local_58;
        uVar5 = local_68;
        uVar6 = uStack_64;
        uVar7 = uStack_60;
        uVar8 = uStack_5c;
      }
      else {
        _ZN3std3sys3pal4unix2os11split_paths13bytes_to_path17h0549813f23b52483E
                  (&local_98,lVar3,auVar9._8_8_);
                    /* try { // try from 00204c6d to 00204c74 has its CatchHandler @ 00204e32 */
        _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hd68403fe0abd735bE(&local_b8);
        local_a8 = local_88;
        uVar5 = (undefined4)local_98;
        uVar6 = local_98._4_4_;
        uVar7 = (undefined4)uStack_90;
        uVar8 = uStack_90._4_4_;
      }
      local_b8 = CONCAT44(uVar6,uVar5);
      uStack_b0 = CONCAT44(uVar8,uVar7);
      goto LAB_00204d60;
    }
    local_68 = (undefined4)uStack_b0;
    uStack_64 = uStack_b0._4_4_;
    uStack_60 = (undefined4)local_a8;
    uStack_5c = local_a8._4_4_;
    local_50 = &local_68;
    local_48 = 
    _ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17h5a3c32fa16876e76E;
    local_98 = &PTR_DAT_002bbd68;
    uStack_90 = 1;
    local_78 = 0;
    local_88 = &local_50;
    local_80 = 1;
                    /* try { // try from 00204cda to 00204d30 has its CatchHandler @ 00204e5d */
    _ZN4core6option15Option_LT_T_GT_11map_or_else17hb4ba59fb1ad49b60E(local_40,&local_98);
    local_80 = CONCAT44(local_80._4_4_,1);
    local_88 = (undefined4 **)local_30;
    lVar3 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h7645b42f7bfbf581E(&local_98);
LAB_00204dec:
    auVar9._8_8_ = &
                   PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17he6319248e6802a40E_002bbdb0
    ;
    auVar9._0_8_ = lVar3;
  }
  param_1 = auVar9._8_8_;
  uVar4 = auVar9._0_8_;
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hd68403fe0abd735bE(&local_b8);
LAB_00204e07:
  auVar10._8_8_ = param_1;
  auVar10._0_8_ = uVar4;
  return auVar10;
}