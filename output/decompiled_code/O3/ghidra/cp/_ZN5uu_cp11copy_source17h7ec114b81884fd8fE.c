void __rustcall
uu_cp::copy_source(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined param_7,long param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  long local_128;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  long local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  int local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  long local_88;
  long lStack_80;
  long local_78;
  long lStack_70;
  long local_68;
  long lStack_60;
  undefined local_50 [32];
  
  cVar4 = std::path::Path::is_dir(param_3,param_4);
  if (cVar4 == '\0') {
    uVar1 = *(undefined4 *)(param_8 + 0x44);
    construct_dest_path(&local_d8,param_3,param_4,param_5,param_6,param_7,
                        *(undefined *)(param_8 + 0x42),uVar1);
    local_98 = CONCAT44(uStack_cc,uStack_d0);
    uStack_90 = CONCAT44(uStack_c4,uStack_c8);
    local_128 = CONCAT44(uStack_bc,uStack_c0);
    if (CONCAT44(uStack_d4,local_d8) == 0xd) {
      local_138 = uStack_d0;
      uStack_134 = uStack_cc;
      uStack_130 = uStack_c8;
      uStack_12c = uStack_c4;
                    /* try { // try from 002037ca to 00203807 has its CatchHandler @ 00203a54 */
      local_88 = local_128;
      copy_file(&local_98,param_2,param_3,param_4,CONCAT44(uStack_c4,uStack_c8),local_128,param_8,
                param_9,param_10,param_11,1);
      if ((char)uVar1 != '\0') {
                    /* try { // try from 00203822 to 00203834 has its CatchHandler @ 00203a59 */
        aligned_ancestors(&local_d8,param_3,param_4,CONCAT44(uStack_12c,uStack_130),local_128);
        _<alloc::vec::Vec<T,A>as_core::iter::traits::collect::IntoIterator>::into_iter
                  (local_50,&local_d8);
        _<alloc::vec::into_iter::IntoIter<T,A>as_core::iter::traits::iterator::Iterator>::next
                  (&local_f8,local_50);
        if (local_f8 != 0) {
          do {
            uVar3 = local_e0;
            uVar2 = local_e8;
            uucore::features::fs::canonicalize(&local_150,local_f8,local_f0,0,1);
            if (CONCAT44(uStack_14c,local_150) == -0x8000000000000000) {
LAB_00203890:
                    /* try { // try from 00203890 to 002038cf has its CatchHandler @ 00203a8d */
              core::ptr::
              drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>
                        (&local_150);
            }
            else {
              local_108 = local_140;
              local_118 = local_150;
              uStack_114 = uStack_14c;
              uStack_110 = uStack_148;
              uStack_10c = uStack_144;
                    /* try { // try from 002038fa to 00203910 has its CatchHandler @ 00203a63 */
              copy_attributes(&local_d8,CONCAT44(uStack_144,uStack_148),local_140,uVar2,uVar3,
                              param_8 + 0x30);
              if (local_d8 != 0xd) {
                *(undefined4 *)(param_1 + 6) = local_a8;
                *(undefined4 *)((long)param_1 + 0x34) = uStack_a4;
                *(undefined4 *)(param_1 + 7) = uStack_a0;
                *(undefined4 *)((long)param_1 + 0x3c) = uStack_9c;
                *(undefined4 *)(param_1 + 4) = local_b8;
                *(undefined4 *)((long)param_1 + 0x24) = uStack_b4;
                *(undefined4 *)(param_1 + 5) = uStack_b0;
                *(undefined4 *)((long)param_1 + 0x2c) = uStack_ac;
                *(undefined4 *)(param_1 + 2) = uStack_c8;
                *(undefined4 *)((long)param_1 + 0x14) = uStack_c4;
                *(undefined4 *)(param_1 + 3) = uStack_c0;
                *(undefined4 *)((long)param_1 + 0x1c) = uStack_bc;
                *(int *)param_1 = local_d8;
                *(undefined4 *)((long)param_1 + 4) = uStack_d4;
                *(undefined4 *)(param_1 + 1) = uStack_d0;
                *(undefined4 *)((long)param_1 + 0xc) = uStack_cc;
                    /* try { // try from 00203a09 to 00203a12 has its CatchHandler @ 00203a4f */
                core::ptr::drop_in_place<std::path::PathBuf>(&local_118);
                if (CONCAT44(uStack_14c,local_150) == -0x8000000000000000) {
                    /* try { // try from 00203a24 to 00203a2d has its CatchHandler @ 00203a4d */
                  core::ptr::
                  drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>
                            (&local_150);
                }
                    /* try { // try from 00203a2e to 00203a3a has its CatchHandler @ 00203a59 */
                core::ptr::
                drop_in_place<alloc::vec::into_iter::IntoIter<(&std::path::Path,&std::path::Path)>>
                          (local_50);
                    /* try { // try from 00203a3b to 00203a47 has its CatchHandler @ 00203a54 */
                core::ptr::drop_in_place<core::result::Result<(),uu_cp::Error>>(&local_98);
                goto LAB_002039ba;
              }
                    /* try { // try from 0020391f to 00203928 has its CatchHandler @ 00203a5e */
              core::ptr::drop_in_place<std::path::PathBuf>(&local_118);
              if (CONCAT44(uStack_14c,local_150) == -0x8000000000000000) goto LAB_00203890;
            }
            _<alloc::vec::into_iter::IntoIter<T,A>as_core::iter::traits::iterator::Iterator>::next
                      (&local_f8,local_50);
          } while (local_f8 != 0);
        }
                    /* try { // try from 0020397b to 00203987 has its CatchHandler @ 00203a59 */
        core::ptr::
        drop_in_place<alloc::vec::into_iter::IntoIter<(&std::path::Path,&std::path::Path)>>
                  (local_50);
      }
      param_1[6] = local_68;
      param_1[7] = lStack_60;
      param_1[4] = local_78;
      param_1[5] = lStack_70;
      param_1[2] = local_88;
      param_1[3] = lStack_80;
      *(undefined4 *)param_1 = (undefined4)local_98;
      *(undefined4 *)((long)param_1 + 4) = local_98._4_4_;
      *(undefined4 *)(param_1 + 1) = (undefined4)uStack_90;
      *(undefined4 *)((long)param_1 + 0xc) = uStack_90._4_4_;
LAB_002039ba:
      core::ptr::drop_in_place<std::path::PathBuf>(&local_138);
    }
    else {
      param_1[6] = CONCAT44(uStack_a4,local_a8);
      param_1[7] = CONCAT44(uStack_9c,uStack_a0);
      param_1[4] = CONCAT44(uStack_b4,local_b8);
      param_1[5] = CONCAT44(uStack_ac,uStack_b0);
      param_1[3] = local_128;
      param_1[1] = local_98;
      param_1[2] = uStack_90;
      *param_1 = CONCAT44(uStack_d4,local_d8);
    }
  }
  else {
    copydir::copy_directory
              (param_1,param_2,param_3,param_4,param_5,param_6,param_8,param_9,param_10,param_11,1);
  }
  return;
}