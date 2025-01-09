undefined  [16] __rustcall
uu_tail::follow::watch::Observer::init_files(int *param_1,long param_2,long param_3)

{
  undefined auVar1 [16];
  undefined8 uVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  int *unaff_R14;
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
  undefined8 local_68;
  undefined8 local_60;
  long local_58;
  long local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  if (*param_1 == 3) {
LAB_00205a16:
    auVar1._8_8_ = 0;
    auVar1._0_8_ = unaff_R14;
    return auVar1 << 0x40;
  }
  local_50 = param_3 * 0x30 + param_2;
  local_78 = param_1 + 8;
  local_58 = param_2;
LAB_00205a90:
  do {
    lVar4 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next(&local_58);
    unaff_R14 = param_1;
    if (lVar4 == 0) goto LAB_00205a16;
    if (*(long *)(lVar4 + 0x18) != -0x8000000000000000) {
      _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone(&local_98,lVar4 + 0x18);
      local_a8 = local_88;
      local_b8 = local_98;
      uStack_b4 = uStack_94;
      uStack_b0 = uStack_90;
      uStack_ac = uStack_8c;
                    /* try { // try from 00205ace to 00205adc has its CatchHandler @ 00205c14 */
      cVar3 = std::path::Path::is_absolute(CONCAT44(uStack_8c,uStack_90));
      if (cVar3 == '\0') {
        std::env::current_dir(&local_98);
        uVar2 = local_88;
        lVar4 = CONCAT44(uStack_94,local_98);
        uVar5 = CONCAT44(uStack_8c,uStack_90);
        if (lVar4 == -0x8000000000000000) {
                    /* try { // try from 00205bd1 to 00205bd9 has its CatchHandler @ 00205c03 */
          auVar6 = uucore::mods::error::
                   _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
                   ::from(uVar5);
          goto LAB_00205be0;
        }
        local_60 = local_88;
        local_88 = local_a8;
        local_98 = local_b8;
        uStack_94 = uStack_b4;
        uStack_90 = uStack_b0;
        uStack_8c = uStack_ac;
                    /* try { // try from 00205b17 to 00205b23 has its CatchHandler @ 00205c05 */
        local_70 = lVar4;
        local_68 = uVar5;
        std::path::Path::join(&local_48,uVar5,uVar2,&local_98);
        local_b8 = local_48;
        uStack_b4 = uStack_44;
        uStack_b0 = uStack_40;
        uStack_ac = uStack_3c;
        local_a8 = local_38;
                    /* try { // try from 00205b3a to 00205bbb has its CatchHandler @ 00205c14 */
        core::ptr::drop_in_place<std::path::PathBuf>(&local_70);
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
          goto LAB_00205a90;
        }
        auVar6 = std::path::Path::parent(CONCAT44(uStack_ac,uStack_b0),local_a8);
        if (auVar6._0_8_ == 0) {
                    /* try { // try from 00205bf6 to 00205c02 has its CatchHandler @ 00205c03 */
          uVar5 = core::option::unwrap_failed(&PTR_DAT_002bbf20);
                    /* catch() { ... } // from try @ 00205bd1 with catch @ 00205c03
                       catch() { ... } // from try @ 00205bf6 with catch @ 00205c03 */
                    /* catch() { ... } // from try @ 00205ace with catch @ 00205c14
                       catch() { ... } // from try @ 00205b3a with catch @ 00205c14 */
          core::ptr::drop_in_place<std::path::PathBuf>(&local_b8);
          auVar6 = _Unwind_Resume(uVar5);
          return auVar6;
        }
        lVar4 = WatcherRx::watch(*(undefined8 *)(param_1 + 4),*(undefined8 *)(param_1 + 6),
                                 auVar6._0_8_,auVar6._8_8_);
        if (lVar4 != 0) {
          auVar6._8_8_ = &PTR_drop_in_place<uucore_mods_error_USimpleError>_002bbdb0;
          auVar6._0_8_ = lVar4;
          goto LAB_00205be0;
        }
      }
      else {
        auVar6 = WatcherRx::watch_with_parent
                           (*(undefined8 *)(param_1 + 4),*(undefined8 *)(param_1 + 6));
        if (auVar6._0_8_ != 0) {
LAB_00205be0:
          core::ptr::drop_in_place<std::path::PathBuf>(&local_b8);
          return auVar6;
        }
      }
      core::ptr::drop_in_place<std::path::PathBuf>(&local_b8);
    }
  } while( true );
}