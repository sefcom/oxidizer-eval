void _ZN5uu_cp7copydir5Entry3new17heaaef3e8d8dce243E
               (undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,char param_5)

{
  byte bVar1;
  byte bVar2;
  undefined uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined **local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  long local_d0;
  undefined **local_c8;
  undefined8 uStack_c0;
  undefined8 **local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  long *local_60;
  code *pcStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  _ZN3std3sys3pal4unix2os11split_paths13bytes_to_path17h0549813f23b52483E(&local_48,param_3,param_4)
  ;
                    /* try { // try from 0020dce1 to 0020dced has its CatchHandler @ 0020df8e */
  _ZN3std4path4Path4join17h92bb591ebe182d97E
            (&local_78,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),&local_48);
  if (*(long *)(param_2 + 0x18) == -0x8000000000000000) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x20);
  }
                    /* try { // try from 0020dd1a to 0020dd23 has its CatchHandler @ 0020df7f */
  _ZN5uu_cp7copydir24get_local_to_root_parent17h75359c1e8aa399d0E
            (&local_c8,uStack_70,local_68,uVar5,*(undefined8 *)(param_2 + 0x28));
  if (local_c8 == (undefined **)0x8000000000000000) {
    *param_1 = 0x8000000000000000;
LAB_0020dd2e:
                    /* try { // try from 0020dd2e to 0020dd37 has its CatchHandler @ 0020df8e */
    _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17ha8df8090ff0f5f1eE(&local_78);
    _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17ha8df8090ff0f5f1eE(&local_48);
  }
  else {
    local_d8 = local_b8;
    local_e8 = local_c8;
    uStack_e0 = uStack_c0;
    if (param_5 == '\0') {
      uVar5 = *(undefined8 *)(param_2 + 0x30);
      uVar6 = *(undefined8 *)(param_2 + 0x38);
    }
    else {
                    /* try { // try from 0020dd66 to 0020dd9d has its CatchHandler @ 0020df72 */
      bVar1 = _ZN3std4path4Path6is_dir17h9ac0db933706da51E(param_3,param_4);
      uVar5 = *(undefined8 *)(param_2 + 0x30);
      uVar6 = *(undefined8 *)(param_2 + 0x38);
      bVar2 = _ZN6uucore8features2fs25path_ends_with_terminator17h30fe62ab1cf88eeeE(uVar5,uVar6);
      if ((bVar1 & bVar2) == 0) {
        lVar4 = _ZN3std4path4Path12strip_prefix17h5d7e53b0b6c79402E
                          (uStack_e0,local_d8,*(undefined8 *)(param_2 + 0x40),
                           *(undefined8 *)(param_2 + 0x48));
        if (lVar4 == 0) {
          *param_1 = 0x8000000000000000;
                    /* try { // try from 0020df2a to 0020df31 has its CatchHandler @ 0020df7f */
          _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17ha8df8090ff0f5f1eE(&local_e8);
          goto LAB_0020dd2e;
        }
        _ZN3std3sys3pal4unix2os11split_paths13bytes_to_path17h0549813f23b52483E(&local_c8,lVar4);
                    /* try { // try from 0020de4f to 0020de56 has its CatchHandler @ 0020df37 */
        _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17ha8df8090ff0f5f1eE(&local_e8);
        local_d8 = local_b8;
        local_e8 = local_c8;
        uStack_e0 = uStack_c0;
      }
      else {
        lVar4 = _ZN3std2fs14create_dir_all17h4110e3e76e14203bE(uVar5,uVar6);
        if (lVar4 != 0) {
          local_60 = &local_d0;
          pcStack_58 = 
          _ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h59fe8285afbb4739E;
          local_c8 = &PTR_s_Failed_to_create_directory__002b62a0;
          uStack_c0 = 2;
          uStack_a8 = 0;
          local_b8 = &local_60;
          uStack_b0 = 1;
                    /* try { // try from 0020ddfc to 0020de06 has its CatchHandler @ 0020df4f */
          local_d0 = lVar4;
          _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_c8);
                    /* try { // try from 0020de0c to 0020de4e has its CatchHandler @ 0020df72 */
          _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h414e413090760199E(local_d0);
        }
      }
    }
    local_b8 = (undefined8 **)local_d8;
    local_c8 = local_e8;
    uStack_c0 = uStack_e0;
                    /* try { // try from 0020de7d to 0020de94 has its CatchHandler @ 0020df70 */
    _ZN3std4path4Path4join17hb4c158bd60fe0cf5E(&local_60,uVar5,uVar6,&local_c8);
                    /* try { // try from 0020de95 to 0020dea0 has its CatchHandler @ 0020df5e */
    uVar3 = _ZN3std4path4Path7is_file17h82f08f46fb8d8099E(uVar5,uVar6);
    param_1[8] = local_50;
    param_1[6] = local_60;
    param_1[7] = pcStack_58;
    *param_1 = local_78;
    param_1[1] = uStack_70;
    param_1[4] = uStack_40;
    param_1[5] = local_38;
    param_1[2] = local_68;
    param_1[3] = local_48;
    *(undefined *)(param_1 + 9) = uVar3;
  }
  return;
}