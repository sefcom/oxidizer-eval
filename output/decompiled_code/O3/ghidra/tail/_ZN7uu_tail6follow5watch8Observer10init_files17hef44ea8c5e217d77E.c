undefined  [16] __rustcall
uu_tail::follow::watch::Observer::init_files(int *param_1,long param_2,long param_3)

{
  undefined auVar1 [16];
  undefined8 uVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  ulong unaff_RBX;
  undefined auVar6 [16];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  int *local_78;
  long local_70;
  long local_68;
  long local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  if (*param_1 != 3) {
    local_68 = param_3 * 0x30 + param_2;
    local_70 = param_2;
    lVar4 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next(&local_70);
    if (lVar4 != 0) {
      unaff_RBX = 0x8000000000000000;
      local_78 = param_1 + 8;
      do {
        if (*(long *)(lVar4 + 0x18) != -0x8000000000000000) {
          _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone(&local_98,lVar4 + 0x18);
          local_a8 = local_88;
          local_b8 = local_98;
          uStack_b4 = uStack_94;
          uStack_b0 = uStack_90;
          uStack_ac = uStack_8c;
                    /* try { // try from 0021688e to 0021689c has its CatchHandler @ 002169ec */
          cVar3 = std::path::Path::is_absolute(CONCAT44(uStack_8c,uStack_90));
          if (cVar3 == '\0') {
            std::env::current_dir(&local_98);
            uVar2 = local_88;
            lVar4 = CONCAT44(uStack_94,local_98);
            uVar5 = CONCAT44(uStack_8c,uStack_90);
            if (lVar4 == -0x8000000000000000) {
                    /* try { // try from 002169ac to 002169b4 has its CatchHandler @ 002169db */
              auVar6 = uucore::mods::error::
                       _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
                       ::from(uVar5);
              goto LAB_002169bb;
            }
            local_50 = local_88;
            local_88 = local_a8;
            local_98 = local_b8;
            uStack_94 = uStack_b4;
            uStack_90 = uStack_b0;
            uStack_8c = uStack_ac;
                    /* try { // try from 002168d7 to 002168e3 has its CatchHandler @ 002169dd */
            local_60 = lVar4;
            local_58 = uVar5;
            std::path::Path::join(&local_48,uVar5,uVar2,&local_98);
            local_b8 = local_48;
            uStack_b4 = uStack_44;
            uStack_b0 = uStack_40;
            uStack_ac = uStack_3c;
            local_a8 = local_38;
                    /* try { // try from 002168fa to 0021697b has its CatchHandler @ 002169ec */
            core::ptr::drop_in_place<std::path::PathBuf>(&local_60);
          }
          cVar3 = _<std::path::Path_as_uu_tail::paths::PathExtTail>::is_tailable
                            (CONCAT44(uStack_ac,uStack_b0),local_a8);
          if (cVar3 == '\0') {
            cVar3 = _<std::path::Path_as_uu_tail::paths::PathExtTail>::is_orphan
                              (CONCAT44(uStack_ac,uStack_b0),local_a8);
            if (cVar3 != '\0') {
              local_88 = local_a8;
              local_98 = local_b8;
              uStack_94 = uStack_b4;
              uStack_90 = uStack_b0;
              uStack_8c = uStack_ac;
              ::alloc::vec::Vec<T,A>::push(local_78,&local_98);
              goto LAB_00216850;
            }
            auVar6 = std::path::Path::parent(CONCAT44(uStack_ac,uStack_b0),local_a8);
            if (auVar6._0_8_ == 0) {
                    /* try { // try from 002169ce to 002169da has its CatchHandler @ 002169db */
              uVar5 = core::option::unwrap_failed(&PTR_s_src_uu_tail_src_follow_watch_rs_h_002beb98)
              ;
                    /* catch() { ... } // from try @ 002169ac with catch @ 002169db
                       catch() { ... } // from try @ 002169ce with catch @ 002169db */
                    /* catch() { ... } // from try @ 0021688e with catch @ 002169ec
                       catch() { ... } // from try @ 002168fa with catch @ 002169ec */
              core::ptr::drop_in_place<std::path::PathBuf>(&local_b8);
              auVar6 = _Unwind_Resume(uVar5);
              return auVar6;
            }
            lVar4 = WatcherRx::watch(*(undefined8 *)(param_1 + 4),*(undefined8 *)(param_1 + 6),
                                     auVar6._0_8_,auVar6._8_8_);
            if (lVar4 != 0) {
              auVar6._8_8_ = &PTR_drop_in_place<uucore_mods_error_USimpleError>_002bea28;
              auVar6._0_8_ = lVar4;
              goto LAB_002169bb;
            }
          }
          else {
            auVar6 = WatcherRx::watch_with_parent
                               (*(undefined8 *)(param_1 + 4),*(undefined8 *)(param_1 + 6));
            if (auVar6._0_8_ != 0) {
LAB_002169bb:
              core::ptr::drop_in_place<std::path::PathBuf>(&local_b8);
              return auVar6;
            }
          }
          core::ptr::drop_in_place<std::path::PathBuf>(&local_b8);
        }
LAB_00216850:
        lVar4 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                          (&local_70);
      } while (lVar4 != 0);
    }
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = unaff_RBX;
  return auVar1 << 0x40;
}