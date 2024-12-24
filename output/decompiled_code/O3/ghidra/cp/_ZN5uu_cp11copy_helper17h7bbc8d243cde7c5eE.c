void __rustcall
uu_cp::copy_helper(long *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,char param_9
                  ,char param_10,undefined8 param_11)

{
  undefined auVar1 [16];
  char cVar2;
  long lVar3;
  undefined auVar4 [16];
  int local_b8;
  undefined4 uStack_b4;
  undefined2 uStack_b0;
  undefined uStack_ae;
  undefined uStack_ad;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined3 uStack_a0;
  undefined5 uStack_9d;
  undefined3 local_98;
  undefined5 uStack_95;
  undefined3 uStack_90;
  undefined5 uStack_8d;
  undefined3 local_88;
  undefined5 uStack_85;
  undefined3 uStack_80;
  undefined5 uStack_7d;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  long local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  int local_40;
  undefined4 local_3c;
  long local_38;
  
  auVar1._8_8_ = param_5;
  auVar1._0_8_ = param_4;
  if (*(char *)(param_6 + 0x44) != '\0') {
    auVar4 = std::path::Path::parent(param_4,param_5);
    if (auVar4._0_8_ == 0) {
      auVar4 = auVar1;
    }
    lVar3 = std::fs::create_dir_all(auVar4._0_8_,auVar4._8_8_);
    if (lVar3 != 0) {
      *param_1 = 2;
      param_1[1] = lVar3;
      return;
    }
  }
  cVar2 = uucore::features::fs::path_ends_with_terminator(param_4,param_5);
  if ((cVar2 != '\0') && (cVar2 = std::path::Path::is_dir(param_4,param_5), cVar2 == '\0')) {
    std::sys::pal::unix::os::split_paths::bytes_to_path(param_1 + 1,param_4,param_5);
    *param_1 = 0xc;
    return;
  }
  cVar2 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(param_2,param_3,"/dev/null",9);
  if (cVar2 == '\0') {
    if (((param_10 == '\0') || (*(char *)(param_6 + 0x46) == '\0')) ||
       (*(char *)(param_6 + 0x3f) != '\0')) {
      if (param_9 == '\0') {
        platform::linux::copy_on_write
                  (&local_b8,param_2,param_3,param_4,param_5,*(undefined *)(param_6 + 0x4b),
                   *(undefined *)(param_6 + 0x4a),param_7,param_8,param_10);
        local_78._0_3_ = CONCAT12(uStack_ae,uStack_b0);
        if (CONCAT44(uStack_b4,local_b8) != 0xd) {
          param_1[7] = CONCAT53(uStack_7d,uStack_80);
          *(ulong *)((long)param_1 + 0x2b) = CONCAT35(local_88,uStack_8d);
          *(ulong *)((long)param_1 + 0x33) = CONCAT35(uStack_80,uStack_85);
          *(ulong *)((long)param_1 + 0x1b) = CONCAT35(local_98,uStack_9d);
          *(ulong *)((long)param_1 + 0x23) = CONCAT35(uStack_90,uStack_95);
          *(ulong *)((long)param_1 + 0xb) =
               CONCAT35((undefined3)uStack_a8,CONCAT41(uStack_ac,uStack_ad));
          *(ulong *)((long)param_1 + 0x13) = CONCAT35(uStack_a0,CONCAT41(uStack_a4,uStack_a8._3_1_))
          ;
          *(undefined *)((long)param_1 + 10) = uStack_ae;
          *(undefined2 *)(param_1 + 1) = uStack_b0;
          *param_1 = CONCAT44(uStack_b4,local_b8);
          return;
        }
        local_60 = CONCAT53(local_60._3_5_,(undefined3)local_78);
        if ((*(char *)(param_6 + 0x3e) == '\0') && (*(char *)(param_6 + 0x47) != '\0')) {
          show_debug(&local_60);
        }
        goto LAB_00207acc;
      }
      copy_link(&local_b8,param_2,param_3,param_4,param_5,param_11);
    }
    else {
      copy_fifo(&local_b8,param_4,param_5,*(undefined4 *)(param_6 + 0x3c),
                *(undefined *)(param_6 + 0x47));
    }
    if (local_b8 != 0xd) {
      param_1[6] = CONCAT53(uStack_85,local_88);
      param_1[7] = CONCAT53(uStack_7d,uStack_80);
      param_1[4] = CONCAT53(uStack_95,local_98);
      param_1[5] = CONCAT53(uStack_8d,uStack_90);
      param_1[2] = CONCAT44(uStack_a4,uStack_a8);
      param_1[3] = CONCAT53(uStack_9d,uStack_a0);
      *param_1 = CONCAT44(uStack_b4,local_b8);
      param_1[1] = CONCAT44(uStack_ac,CONCAT13(uStack_ad,CONCAT12(uStack_ae,uStack_b0)));
      return;
    }
  }
  else {
    std::fs::File::create(&local_40,param_4,param_5);
                    /* try { // try from 0020798e to 0020799c has its CatchHandler @ 00207bad */
    local_60 = param_4;
    local_58 = param_5;
    _<T_as_alloc::string::ToString>::to_string(&local_78,&local_60);
    uStack_a8 = (undefined4)local_68;
    uStack_a4 = (undefined4)((ulong)local_68 >> 0x20);
    local_b8 = local_78;
    uStack_b4 = uStack_74;
    uStack_b0 = (undefined2)uStack_70;
    uStack_ae = (undefined)((uint)uStack_70 >> 0x10);
    uStack_ad = (undefined)((uint)uStack_70 >> 0x18);
    uStack_ac = uStack_6c;
    if (local_40 == 0) {
      core::ptr::
      drop_in_place<<core::result::Result<std::fs::File,std::io::error::Error>as_quick_error::ResultExt<std::fs::File,std::io::error::Error>>::context<alloc::string::String>::__closure__>
                (&local_b8);
      uStack_70 = local_3c;
    }
    else {
      local_50 = CONCAT44(uStack_a8,uStack_6c);
      local_48 = uStack_a4;
      if (CONCAT44(uStack_74,local_78) != -0x8000000000000000) {
        *(undefined4 *)((long)param_1 + 0x1c) = uStack_a4;
        *(undefined8 *)((long)param_1 + 0x14) = local_50;
        *param_1 = 3;
        param_1[1] = CONCAT44(uStack_74,local_78);
        *(undefined4 *)(param_1 + 2) = uStack_70;
        param_1[4] = local_38;
        return;
      }
    }
    core::ptr::drop_in_place<std::fs::File>(uStack_70);
  }
LAB_00207acc:
  *param_1 = 0xd;
  return;
}