/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * __rustcall
uu_ptx::read_input(undefined8 *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined auVar9 [16];
  undefined8 local_1d8;
  long lStack_1d0;
  long local_1c8;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined8 local_1b0;
  long local_1a8;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  long local_180;
  long lStack_178;
  long local_170;
  undefined *local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined local_148 [16];
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 local_120;
  undefined local_118 [32];
  long local_f8;
  long lStack_f0;
  long local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined local_68 [56];
  
  std::thread::local::LocalKey<T>::try_with(&local_1d8);
  local_148 = core::result::Result<T,E>::expect(&local_1d8);
  local_168 = PTR_DAT_003ee1c0;
  uStack_160 = _UNK_003ee1c8;
  local_158 = _DAT_003ee1d0;
  uStack_154 = _UNK_003ee1d4;
  uStack_150 = _UNK_003ee1d8;
  uStack_14c = _UNK_003ee1dc;
  local_198 = 0;
  local_190 = 8;
  local_188 = 0;
  if (param_3 == 0) {
    uVar6 = 1;
    puVar7 = &DAT_0015ed6a;
  }
  else {
    if (*(char *)(param_4 + 0x58) != '\0') {
      lStack_1d0 = param_2 + param_3 * 0x18;
      local_1d8 = param_2;
      while( true ) {
        lVar3 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                          (&local_1d8);
        if (lVar3 == 0) break;
                    /* try { // try from 002b6285 to 002b628c has its CatchHandler @ 002b654a */
        ::alloc::vec::Vec<T,A>::push
                  (&local_198,*(undefined8 *)(lVar3 + 8),*(undefined8 *)(lVar3 + 0x10));
      }
      goto LAB_002b62b4;
    }
    puVar7 = *(undefined **)(param_2 + 8);
    uVar6 = *(undefined8 *)(param_2 + 0x10);
  }
                    /* try { // try from 002b62aa to 002b62b3 has its CatchHandler @ 002b6522 */
  ::alloc::vec::Vec<T,A>::push(&local_198,puVar7,uVar6);
LAB_002b62b4:
  _<alloc::vec::Vec<T,A>as_core::iter::traits::collect::IntoIterator>::into_iter
            (local_118,&local_198);
  auVar9 = _<alloc::vec::into_iter::IntoIter<T,A>as_core::iter::traits::iterator::Iterator>::next
                     (local_118);
  if (auVar9._0_8_ != 0) {
    lVar3 = 0;
    do {
      uVar8 = auVar9._8_8_;
                    /* try { // try from 002b62f0 to 002b63bd has its CatchHandler @ 002b655b */
      uVar6 = auVar9._0_8_;
      cVar2 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar6,uVar8,&DAT_0015ed6a,1);
      if (cVar2 == '\0') {
        std::fs::File::open(&local_1d8,uVar6,uVar8);
        if ((int)local_1d8 != 0) {
          param_1[1] = lStack_1d0;
          goto LAB_002b64ec;
        }
        uVar4 = ::alloc::boxed::Box<T>::new(local_1d8._4_4_);
        ppuVar5 = &PTR_drop_in_place<std_fs_File>_003ee5a0;
      }
      else {
        uVar4 = std::io::stdio::stdin();
        uVar4 = ::alloc::boxed::Box<T>::new(uVar4);
        ppuVar5 = (undefined **)&DAT_003ee5f8;
      }
      std::io::buffered::bufreader::BufReader<R>::with_capacity(&local_a0,0x2000,uVar4,ppuVar5);
      local_d8 = local_a0;
      uStack_d4 = uStack_9c;
      uStack_d0 = uStack_98;
      uStack_cc = uStack_94;
      local_c8 = local_90;
      uStack_c4 = uStack_8c;
      uStack_c0 = uStack_88;
      uStack_bc = uStack_84;
      local_b8 = local_80;
      uStack_b4 = uStack_7c;
      uStack_b0 = uStack_78;
      uStack_ac = uStack_74;
      local_a8 = local_70;
      core::iter::adapters::try_process(&local_1d8,&local_d8);
      lVar1 = local_1c8;
      if (local_1d8 == -0x8000000000000000) {
        param_1[1] = lStack_1d0;
LAB_002b64ec:
        *param_1 = 0;
        core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&str>>(local_118);
        core::ptr::
        drop_in_place<std::collections::hash::map::HashMap<alloc::string::String,uu_ptx::FileContent>>
                  (&local_168);
        return param_1;
      }
      local_180 = local_1d8;
      lStack_178 = lStack_1d0;
      local_170 = local_1c8;
                    /* try { // try from 002b63f7 to 002b6403 has its CatchHandler @ 002b6529 */
      _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                (&local_130,lStack_1d0,lStack_1d0 + local_1c8 * 0x18);
                    /* try { // try from 002b6404 to 002b6411 has its CatchHandler @ 002b652e */
      _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_1d8,uVar6,uVar8);
      local_e8 = local_1c8;
      local_f8 = local_1d8;
      lStack_f0 = lStack_1d0;
      local_1c8 = local_170;
      local_1d8 = local_180;
      lStack_1d0 = lStack_178;
      local_1b0 = local_120;
      local_1c0 = local_130;
      uStack_1bc = uStack_12c;
      uStack_1b8 = uStack_128;
      uStack_1b4 = uStack_124;
                    /* try { // try from 002b6461 to 002b6483 has its CatchHandler @ 002b6559 */
      local_1a8 = lVar3;
      hashbrown::map::HashMap<K,V,S,A>::insert(local_68,&local_168,&local_f8,&local_1d8);
      core::ptr::drop_in_place<core::option::Option<uu_ptx::FileContent>>(local_68);
      lVar3 = lVar3 + lVar1;
      auVar9 = _<alloc::vec::into_iter::IntoIter<T,A>as_core::iter::traits::iterator::Iterator>::
               next(local_118);
    } while (auVar9._0_8_ != 0);
  }
                    /* try { // try from 002b64a8 to 002b64ff has its CatchHandler @ 002b6524 */
  core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&str>>(local_118);
  *(undefined (*) [16])(param_1 + 4) = local_148;
  param_1[2] = CONCAT44(uStack_154,local_158);
  param_1[3] = CONCAT44(uStack_14c,uStack_150);
  *param_1 = local_168;
  param_1[1] = uStack_160;
  return param_1;
}