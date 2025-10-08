void _ZN5uu_ls22display_dir_entry_size17h765544fbf6779e6bE
               (long *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined local_60 [16];
  long local_50;
  undefined local_48 [16];
  long local_38;
  
  lVar3 = _ZN5uu_ls8PathData12get_metadata17h14c40f15e3077b4fE(param_2,param_4);
  if (lVar3 == 0) {
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    _ZN5uu_ls19display_len_or_rdev17h54f0966b5b04a08aE
              (local_60,lVar3,*(undefined8 *)(param_3 + 0xd0),*(undefined *)(param_3 + 0xf9));
    lVar2 = local_50;
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hfc5b24fb008ea041E(local_48);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hfc5b24fb008ea041E(local_60);
    _ZN5uu_ls21display_symlink_count17h2fe71a64427ba274E(local_60,*(undefined8 *)(lVar3 + 0x30));
                    /* try { // try from 0029bdb9 to 0029bddd has its CatchHandler @ 0029be20 */
    uVar1 = *(undefined *)(param_3 + 0xeb);
    lVar4 = _ZN5uu_ls13display_uname17h7c414fef392325b1E
                      (*(undefined4 *)(lVar3 + 0x3c),uVar1,param_4);
    lVar4 = *(long *)(lVar4 + 0x10);
    lVar3 = _ZN5uu_ls13display_group17h274df09bb9587751E
                      (*(undefined4 *)(lVar3 + 0x40),uVar1,param_4);
    lVar3 = *(long *)(lVar3 + 0x10);
    *param_1 = local_50;
    param_1[1] = lVar4;
    param_1[2] = lVar3;
    param_1[3] = local_38 + 2 + lVar2;
    param_1[4] = lVar2;
    param_1[5] = local_38;
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hfc5b24fb008ea041E(local_60);
  }
  return;
}