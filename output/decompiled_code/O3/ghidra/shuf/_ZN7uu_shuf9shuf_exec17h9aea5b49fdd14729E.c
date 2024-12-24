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
                    /* try { // try from 00170da9 to 00170db9 has its CatchHandler @ 00171183 */
    uVar5 = (*(code *)PTR_stdout_0023be68)();
    uVar5 = ::alloc::boxed::Box<T>::new(uVar5);
    ppuVar7 = (undefined **)&DAT_00234f98;
LAB_00170e3e:
    std::io::buffered::bufwriter::BufWriter<W>::with_capacity(&local_60,0x2000,uVar5,ppuVar7);
    if (param_2[3] == -0x8000000000000000) {
                    /* try { // try from 00170e63 to 00170e68 has its CatchHandler @ 00171163 */
      local_90 = (*(code *)PTR_thread_rng_0023be70)();
      local_98 = 1;
      bVar3 = true;
      bVar2 = true;
      cVar4 = *(char *)(param_2 + 7);
joined_r0x00171033:
      if (cVar4 == '\0') {
                    /* try { // try from 0017103d to 0017104a has its CatchHandler @ 00171144 */
        local_b8 = (*(code *)PTR_partial_shuffle_0023be98)(param_1,&local_98,param_2[6]);
        do {
                    /* try { // try from 00171070 to 00171077 has its CatchHandler @ 00171181 */
          auVar8 = _<core::iter::adapters::copied::Copied<I>as_core::iter::traits::iterator::Iterator>
                   ::next(local_b8);
          if (auVar8._0_8_ == 0) goto LAB_00170ff1;
                    /* try { // try from 00171081 to 001710e7 has its CatchHandler @ 0017118e */
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
                    /* try { // try from 00170f5b to 00170f68 has its CatchHandler @ 00171161 */
              auVar8 = (*(code *)PTR_choose_0023be90)(param_1,&local_98);
                    /* try { // try from 00170f69 to 00170fdb has its CatchHandler @ 0017118c */
              uVar5 = _<&[u8]as_uu_shuf::Writable>::write_all_to
                                (auVar8._0_8_,auVar8._8_8_,&local_60);
              auVar8 = _<core::result::Result<T,std::io::error::Error>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
                       ::map_err_context(uVar5);
              if (auVar8._0_8_ != 0) goto LAB_001710f7;
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
              if (auVar8._0_8_ != 0) goto LAB_001710f7;
            } while (uVar6 < uVar1);
          }
LAB_00170ff1:
                    /* try { // try from 00170ff1 to 00170ffe has its CatchHandler @ 00171163 */
          core::ptr::drop_in_place<uu_shuf::WrappedRng>(&local_98);
                    /* try { // try from 00170fff to 00171008 has its CatchHandler @ 00171183 */
          core::ptr::
          drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn_std::io::Write>>>
                    (&local_60);
          uVar5 = 0;
          goto LAB_0017112c;
        }
                    /* try { // try from 00170e94 to 00170ecf has its CatchHandler @ 00171144 */
        _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_78,&DAT_001163e4,0x12);
        local_a8 = local_68;
        local_b8._4_4_ = uStack_74;
        local_b8._0_4_ = local_78;
        local_b8._12_4_ = uStack_6c;
        local_b8._8_4_ = uStack_70;
        local_a0 = 1;
        uVar5 = ::alloc::boxed::Box<T>::new(local_b8);
        auVar8._8_8_ = &PTR_drop_in_place<uucore_mods_error_UUsageError>_00234e60;
        auVar8._0_8_ = uVar5;
      }
LAB_001710f7:
                    /* try { // try from 001710f7 to 00171100 has its CatchHandler @ 00171163 */
      core::ptr::drop_in_place<uu_shuf::WrappedRng>(&local_98);
    }
    else {
      local_a8 = param_2[5];
      local_b8._0_8_ = param_2[3];
      local_b8._8_8_ = param_2[4];
                    /* try { // try from 00170ef9 to 00170f16 has its CatchHandler @ 0017114a */
      std::fs::File::open(&local_78,local_b8._8_8_);
      _<core::result::Result<T,std::io::error::Error>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
      ::map_err_context(&local_88,&local_78,local_b8);
      if (local_88 == 0) {
        local_94 = local_80;
        local_98 = 0;
                    /* try { // try from 00171023 to 0017102c has its CatchHandler @ 00171163 */
        core::ptr::drop_in_place<alloc::string::String>(local_b8);
        bVar3 = false;
        bVar2 = false;
        cVar4 = *(char *)(param_2 + 7);
        goto joined_r0x00171033;
      }
      auVar8._12_4_ = uStack_7c;
      auVar8._8_4_ = local_80;
      auVar8._0_8_ = local_88;
                    /* try { // try from 00170f2c to 00170f35 has its CatchHandler @ 00171163 */
      core::ptr::drop_in_place<alloc::string::String>(local_b8);
      bVar2 = false;
    }
                    /* try { // try from 00171101 to 0017110a has its CatchHandler @ 00171183 */
    core::ptr::
    drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn_std::io::Write>>>
              (&local_60);
  }
  else {
    local_a8 = param_2[2];
    local_b8._0_8_ = *param_2;
    local_b8._8_8_ = param_2[1];
                    /* try { // try from 00170dd9 to 00170df6 has its CatchHandler @ 0017116c */
    std::fs::File::create(&local_78,local_b8._8_8_);
    _<core::result::Result<T,std::io::error::Error>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
    ::map_err_context(&local_88,&local_78,local_b8);
    if (local_88 == 0) {
                    /* try { // try from 00170e1b to 00170e23 has its CatchHandler @ 0017116c */
      uVar5 = ::alloc::boxed::Box<T>::new(local_80);
                    /* try { // try from 00170e2a to 00170e4f has its CatchHandler @ 00171183 */
      core::ptr::drop_in_place<alloc::string::String>(local_b8);
      ppuVar7 = &PTR_drop_in_place<std_fs_File>_00234fe8;
      goto LAB_00170e3e;
    }
    auVar8._12_4_ = uStack_7c;
    auVar8._8_4_ = local_80;
    auVar8._0_8_ = local_88;
                    /* try { // try from 00170e09 to 00170e12 has its CatchHandler @ 00171183 */
    core::ptr::drop_in_place<alloc::string::String>(local_b8);
    bVar2 = true;
  }
  unaff_R12 = auVar8._8_8_;
  uVar5 = auVar8._0_8_;
  if ((bVar2) && (param_2[3] != -0x8000000000000000)) {
    core::ptr::drop_in_place<alloc::string::String>(param_2 + 3);
  }
LAB_0017112c:
  auVar9._8_8_ = unaff_R12;
  auVar9._0_8_ = uVar5;
  return auVar9;
}