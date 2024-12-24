void __rustcall
uu_cp::copydir::Entry::new
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
  
  std::sys::pal::unix::os::split_paths::bytes_to_path(&local_48,param_3,param_4);
                    /* try { // try from 0020d321 to 0020d32d has its CatchHandler @ 0020d5ce */
  std::path::Path::join
            (&local_78,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),&local_48);
  if (*(long *)(param_2 + 0x18) == -0x8000000000000000) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x20);
  }
                    /* try { // try from 0020d35a to 0020d363 has its CatchHandler @ 0020d5bf */
  get_local_to_root_parent(&local_c8,uStack_70,local_68,uVar5,*(undefined8 *)(param_2 + 0x28));
  if (local_c8 == (undefined **)0x8000000000000000) {
    *param_1 = 0x8000000000000000;
LAB_0020d36e:
                    /* try { // try from 0020d36e to 0020d377 has its CatchHandler @ 0020d5ce */
    core::ptr::drop_in_place<std::path::PathBuf>(&local_78);
    core::ptr::drop_in_place<std::path::PathBuf>(&local_48);
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
                    /* try { // try from 0020d3a6 to 0020d3dd has its CatchHandler @ 0020d5b2 */
      bVar1 = std::path::Path::is_dir(param_3,param_4);
      uVar5 = *(undefined8 *)(param_2 + 0x30);
      uVar6 = *(undefined8 *)(param_2 + 0x38);
      bVar2 = uucore::features::fs::path_ends_with_terminator(uVar5,uVar6);
      if ((bVar1 & bVar2) == 0) {
        lVar4 = std::path::Path::strip_prefix
                          (uStack_e0,local_d8,*(undefined8 *)(param_2 + 0x40),
                           *(undefined8 *)(param_2 + 0x48));
        if (lVar4 == 0) {
          *param_1 = 0x8000000000000000;
                    /* try { // try from 0020d56a to 0020d571 has its CatchHandler @ 0020d5bf */
          core::ptr::drop_in_place<std::path::PathBuf>(&local_e8);
          goto LAB_0020d36e;
        }
        std::sys::pal::unix::os::split_paths::bytes_to_path(&local_c8,lVar4);
                    /* try { // try from 0020d48f to 0020d496 has its CatchHandler @ 0020d577 */
        core::ptr::drop_in_place<std::path::PathBuf>(&local_e8);
        local_d8 = local_b8;
        local_e8 = local_c8;
        uStack_e0 = uStack_c0;
      }
      else {
        lVar4 = std::fs::create_dir_all(uVar5,uVar6);
        if (lVar4 != 0) {
          local_60 = &local_d0;
          pcStack_58 = _<std::io::error::Error_as_core::fmt::Display>::fmt;
          local_c8 = &PTR_s_Failed_to_create_directory__002b5bd0;
          uStack_c0 = 2;
          uStack_a8 = 0;
          local_b8 = &local_60;
          uStack_b0 = 1;
                    /* try { // try from 0020d43c to 0020d446 has its CatchHandler @ 0020d58f */
          local_d0 = lVar4;
          std::io::stdio::_eprint(&local_c8);
                    /* try { // try from 0020d44c to 0020d48e has its CatchHandler @ 0020d5b2 */
          core::ptr::drop_in_place<std::io::error::Error>(local_d0);
        }
      }
    }
    local_b8 = (undefined8 **)local_d8;
    local_c8 = local_e8;
    uStack_c0 = uStack_e0;
                    /* try { // try from 0020d4bd to 0020d4d4 has its CatchHandler @ 0020d5b0 */
    std::path::Path::join(&local_60,uVar5,uVar6,&local_c8);
                    /* try { // try from 0020d4d5 to 0020d4e0 has its CatchHandler @ 0020d59e */
    uVar3 = std::path::Path::is_file(uVar5,uVar6);
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