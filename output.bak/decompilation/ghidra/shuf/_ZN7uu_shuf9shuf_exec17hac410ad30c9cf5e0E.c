undefined  [16] __rustcall uu_shuf::shuf_exec(long param_1,long *param_2)

{
  ulong uVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined **ppuVar7;
  undefined8 unaff_R12;
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined local_b8 [16];
  long local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  long local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  
  if (*param_2 == -0x8000000000000000) {
                    /* try { // try from 00171229 to 00171239 has its CatchHandler @ 00171603 */
    uVar5 = (*(code *)PTR_stdout_0023be90)();
    uVar5 = ::alloc::boxed::Box<T>::new(uVar5);
    ppuVar7 = (undefined **)&DAT_00234ef8;
LAB_001712be:
    std::io::buffered::bufwriter::BufWriter<W>::with_capacity(&local_60,0x2000,uVar5,ppuVar7);
    if (param_2[3] == -0x8000000000000000) {
                    /* try { // try from 001712e3 to 001712e8 has its CatchHandler @ 001715e3 */
      local_90 = (*(code *)PTR_thread_rng_0023be98)();
      local_98 = 1;
      bVar3 = true;
      bVar2 = true;
      cVar4 = *(char *)(param_2 + 7);
joined_r0x001714b3:
      if (cVar4 == '\0') {
                    /* try { // try from 001714bd to 001714ca has its CatchHandler @ 001715c4 */
        local_b8 = (*(code *)PTR_partial_shuffle_0023bec0)(param_1,&local_98,param_2[6]);
        do {
                    /* try { // try from 001714f0 to 001714f7 has its CatchHandler @ 00171601 */
          auVar8 = _<core::iter::adapters::copied::Copied<I>as_core::iter::traits::iterator::Iterator>
                   ::next(local_b8);
          if (auVar8._0_8_ == 0) goto LAB_00171471;
                    /* try { // try from 00171501 to 00171567 has its CatchHandler @ 0017160e */
          uVar5 = _<&[u8]as_uu_shuf::Writable>::write_all_to(auVar8._0_8_,auVar8._8_8_,&local_60);
          auVar8 = _<core::result::Result<T,std::io::error::Error>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
                   ::map_err_context(uVar5);
          if (auVar8._0_8_ != 0) break;
          local_78 = CONCAT31(local_78._1_3_,*(undefined *)((long)param_2 + 0x39));
          if ((ulong)(local_60 - local_50) < 2) {
            uVar5 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold
                              (&local_60,&local_78,1);
          }
          else {
            *(undefined *)(local_58 + local_50) = *(undefined *)((long)param_2 + 0x39);
            local_50 = local_50 + 1;
            uVar5 = 0;
          }
          auVar8 = _<core::result::Result<T,std::io::error::Error>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
                   ::map_err_context(uVar5);
        } while (auVar8._0_8_ == 0);
      }
      else {
        cVar4 = _<alloc::vec::Vec<&[u8]>as_uu_shuf::Shufable>::is_empty
                          (*(undefined8 *)(param_1 + 0x10));
        bVar2 = bVar3;
        if (cVar4 == '\0') {
          uVar1 = param_2[6];
          if (uVar1 != 0) {
            uVar6 = 0;
            do {
              uVar6 = _<usize_as_core::iter::range::Step>::forward_unchecked(uVar6);
                    /* try { // try from 001713db to 001713e8 has its CatchHandler @ 001715e1 */
              auVar8 = (*(code *)PTR_choose_0023beb8)(param_1,&local_98);
                    /* try { // try from 001713e9 to 0017145b has its CatchHandler @ 0017160c */
              uVar5 = _<&[u8]as_uu_shuf::Writable>::write_all_to
                                (auVar8._0_8_,auVar8._8_8_,&local_60);
              auVar8 = _<core::result::Result<T,std::io::error::Error>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
                       ::map_err_context(uVar5);
              if (auVar8._0_8_ != 0) goto LAB_00171577;
              local_b8[0] = *(undefined *)((long)param_2 + 0x39);
              if ((ulong)(local_60 - local_50) < 2) {
                uVar5 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold
                                  (&local_60,local_b8,1);
              }
              else {
                *(undefined *)(local_58 + local_50) = *(undefined *)((long)param_2 + 0x39);
                local_50 = local_50 + 1;
                uVar5 = 0;
              }
              auVar8 = _<core::result::Result<T,std::io::error::Error>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
                       ::map_err_context(uVar5);
              if (auVar8._0_8_ != 0) goto LAB_00171577;
            } while (uVar6 < uVar1);
          }
LAB_00171471:
                    /* try { // try from 00171471 to 0017147e has its CatchHandler @ 001715e3 */
          core::ptr::drop_in_place<uu_shuf::WrappedRng>(&local_98);
                    /* try { // try from 0017147f to 00171488 has its CatchHandler @ 00171603 */
          core::ptr::
          drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn_std::io::Write>>>
                    (&local_60);
          uVar5 = 0;
          goto LAB_001715ac;
        }
                    /* try { // try from 00171314 to 0017134f has its CatchHandler @ 001715c4 */
        _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_78,"no lines to repeat",0x12);
        local_a8 = local_68;
        local_b8._4_4_ = uStack_74;
        local_b8._0_4_ = local_78;
        local_b8._12_4_ = uStack_6c;
        local_b8._8_4_ = uStack_70;
        local_a0 = 1;
        uVar5 = ::alloc::boxed::Box<T>::new(local_b8);
        auVar8._8_8_ = &PTR_drop_in_place<uucore_mods_error_UUsageError>_00234de0;
        auVar8._0_8_ = uVar5;
      }
LAB_00171577:
                    /* try { // try from 00171577 to 00171580 has its CatchHandler @ 001715e3 */
      core::ptr::drop_in_place<uu_shuf::WrappedRng>(&local_98);
    }
    else {
      local_a8 = param_2[5];
      local_b8._0_8_ = param_2[3];
      local_b8._8_8_ = param_2[4];
                    /* try { // try from 00171379 to 00171396 has its CatchHandler @ 001715ca */
      std::fs::File::open(&local_78,local_b8._8_8_);
      _<core::result::Result<T,std::io::error::Error>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
      ::map_err_context(&local_88,&local_78,local_b8);
      if (local_88 == 0) {
        local_94 = local_80;
        local_98 = 0;
                    /* try { // try from 001714a3 to 001714ac has its CatchHandler @ 001715e3 */
        core::ptr::drop_in_place<alloc::string::String>(local_b8);
        bVar3 = false;
        bVar2 = false;
        cVar4 = *(char *)(param_2 + 7);
        goto joined_r0x001714b3;
      }
      auVar8._12_4_ = uStack_7c;
      auVar8._8_4_ = local_80;
      auVar8._0_8_ = local_88;
                    /* try { // try from 001713ac to 001713b5 has its CatchHandler @ 001715e3 */
      core::ptr::drop_in_place<alloc::string::String>(local_b8);
      bVar2 = false;
    }
                    /* try { // try from 00171581 to 0017158a has its CatchHandler @ 00171603 */
    core::ptr::
    drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn_std::io::Write>>>
              (&local_60);
  }
  else {
    local_a8 = param_2[2];
    local_b8._0_8_ = *param_2;
    local_b8._8_8_ = param_2[1];
                    /* try { // try from 00171259 to 00171276 has its CatchHandler @ 001715ec */
    std::fs::File::create(&local_78,local_b8._8_8_);
    _<core::result::Result<T,std::io::error::Error>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
    ::map_err_context(&local_88,&local_78,local_b8);
    if (local_88 == 0) {
                    /* try { // try from 0017129f to 001712a3 has its CatchHandler @ 001715ec */
      uVar5 = ::alloc::boxed::Box<T>::new(local_80);
                    /* try { // try from 001712aa to 001712cf has its CatchHandler @ 00171603 */
      core::ptr::drop_in_place<alloc::string::String>(local_b8);
      ppuVar7 = &PTR_drop_in_place<std_fs_File>_00234f48;
      goto LAB_001712be;
    }
    auVar8._12_4_ = uStack_7c;
    auVar8._8_4_ = local_80;
    auVar8._0_8_ = local_88;
                    /* try { // try from 00171289 to 00171292 has its CatchHandler @ 00171603 */
    core::ptr::drop_in_place<alloc::string::String>(local_b8);
    bVar2 = true;
  }
  unaff_R12 = auVar8._8_8_;
  uVar5 = auVar8._0_8_;
  if ((bVar2) && (param_2[3] != -0x8000000000000000)) {
    core::ptr::drop_in_place<alloc::string::String>(param_2 + 3);
  }
LAB_001715ac:
  auVar9._8_8_ = unaff_R12;
  auVar9._0_8_ = uVar5;
  return auVar9;
}