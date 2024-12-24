void __rustcall
uu_fmt::linebreak::find_kp_breakpoints
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined4 *puVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  ulong *puVar8;
  long lVar9;
  long lVar10;
  bool bVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  bool bVar15;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar16;
  ulong local_1b0;
  undefined local_1a8 [8];
  long local_1a0;
  ulong local_198;
  long local_190;
  long local_188;
  undefined8 local_180;
  undefined8 local_178;
  long local_170;
  undefined8 local_168;
  long local_160;
  long local_158;
  undefined **local_150;
  long local_148;
  long local_140;
  ulong local_138;
  long local_130;
  long local_128;
  undefined local_120 [8];
  long local_118;
  long local_110;
  undefined8 local_108;
  long local_100;
  long local_f8;
  long local_f0;
  ulong local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  undefined local_c0 [16];
  ulong local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  undefined4 local_90;
  undefined2 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined5 uStack_68;
  char local_63;
  undefined2 local_62;
  undefined local_58 [40];
  
  local_108 = param_1;
  core::iter::traits::iterator::Iterator::peekable(&local_d0);
  puVar5 = (undefined8 *)::alloc::alloc::Global::alloc_impl(0x28);
  if (puVar5 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    ::alloc::alloc::handle_alloc_error(8,0x28);
  }
  lVar6 = param_4[4];
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  puVar5[3] = lVar6;
  *(undefined4 *)(puVar5 + 4) = 0;
  *(undefined2 *)((long)puVar5 + 0x24) = 0;
  ::alloc::slice::hack::into_vec(local_1a8,puVar5,1);
  puVar5 = (undefined8 *)::alloc::alloc::Global::alloc_impl(8);
  if (puVar5 == (undefined8 *)0x0) {
                    /* try { // try from 001bd921 to 001bd930 has its CatchHandler @ 001bd93b */
                    /* WARNING: Subroutine does not return */
    ::alloc::alloc::handle_alloc_error(8,8);
  }
  *puVar5 = 0;
                    /* try { // try from 001bd3bb to 001bd3cf has its CatchHandler @ 001bd93b */
  ::alloc::slice::hack::into_vec(local_120,puVar5,1);
  local_180 = 0;
  local_178 = 8;
  local_170 = 0;
  local_130 = *param_4;
  local_e8 = *(ulong *)(local_130 + 0x30);
  local_f8 = *(long *)(local_130 + 0x38);
  lVar14 = local_e8 - local_f8;
  lVar6 = core::cmp::max_by(local_f8,lVar14 + 1);
  local_138 = lVar6 - lVar14;
  local_168 = 0;
  local_160 = 8;
  local_158 = 0;
  cVar2 = *(char *)(param_4 + 6);
  local_148 = param_4[5];
  local_190 = 0;
  local_150 = &PTR_s_src_uu_fmt_src_linebreak_rs_00227b60;
  bVar11 = false;
  local_100 = lVar14;
  do {
    bVar15 = local_d0 == 0;
    local_d0 = 0;
    lVar6 = local_c8;
    if (bVar15) {
      lVar6 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next(local_c0)
      ;
    }
    if (lVar6 == 0) {
                    /* try { // try from 001bd8aa to 001bd8b6 has its CatchHandler @ 001bd942 */
      build_best_path(local_108,local_1a0,local_198,local_118,local_110);
                    /* try { // try from 001bd8b7 to 001bd8c0 has its CatchHandler @ 001bd936 */
      core::ptr::drop_in_place<alloc::vec::Vec<uu_fmt::linebreak::LineBreak>>(&local_168);
                    /* try { // try from 001bd8c1 to 001bd8ca has its CatchHandler @ 001bd931 */
      core::ptr::drop_in_place<alloc::vec::Vec<usize>>(&local_180);
                    /* try { // try from 001bd8cb to 001bd8d7 has its CatchHandler @ 001bd93b */
      core::ptr::drop_in_place<alloc::vec::Vec<usize>>(local_120);
      core::ptr::drop_in_place<alloc::vec::Vec<uu_fmt::linebreak::LineBreak>>(local_1a8);
      return;
    }
    plVar7 = (long *)core::option::Option<T>::get_or_insert_with(&local_d0,local_c0);
    lVar14 = *plVar7;
    cVar4 = '\x01';
    if ((lVar14 != 0) && (*(char *)(lVar14 + 0x38) == '\0')) {
      if (*(char *)(lVar14 + 0x3a) == '\0') {
        cVar4 = '\0';
      }
      else {
        cVar4 = *(char *)(lVar6 + 0x39);
      }
    }
    local_128 = 0;
    if (*(char *)(lVar6 + 0x3a) != '\0' || cVar2 != '\0') {
      local_128 = (ulong)bVar11 + 1;
    }
    local_158 = 0;
    local_170 = 0;
    local_d8 = local_118 + local_110 * 8;
    local_e0 = local_118;
    local_188 = lVar6;
    puVar8 = (ulong *)_<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                                (&local_e0);
    if (puVar8 == (ulong *)0x0) {
      lVar6 = 0x7fffffffffffffff;
      local_1b0 = 0;
      if (local_170 != 0) goto LAB_001bd480;
LAB_001bd80d:
      if (local_198 <= local_1b0) {
        local_150 = &PTR_s_src_uu_fmt_src_linebreak_rs_00227b48;
        uVar12 = local_1b0;
LAB_001bd903:
                    /* try { // try from 001bd903 to 001bd910 has its CatchHandler @ 001bd942 */
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_bounds_check(uVar12,local_198,local_150);
      }
      restart_active_breaks
                (local_58,local_130,local_148,*(undefined8 *)(local_1a0 + 0x18 + local_1b0 * 0x28),
                 *(undefined *)(local_1a0 + 0x25 + local_1b0 * 0x28),local_1b0,local_188,local_128,
                 local_138);
      ::alloc::vec::Vec<T,A>::push(&local_180,local_198);
      ::alloc::vec::Vec<T,A>::push(local_1a8,local_58);
      local_190 = 0;
    }
    else {
      local_140 = 0x7fffffffffffffff;
      local_1b0 = 0;
      lVar10 = 0x7fffffffffffffff;
      local_f0 = lVar14;
      do {
        lVar14 = local_1a0;
        uVar12 = *puVar8;
        if (local_198 <= uVar12) goto LAB_001bd903;
        lVar6 = *(long *)(local_1a0 + 0x10 + uVar12 * 0x28) - local_190;
        *(long *)(local_1a0 + 0x10 + uVar12 * 0x28) = lVar6;
        uVar13 = uVar12;
        if (lVar10 <= lVar6) {
          lVar6 = lVar10;
          uVar13 = local_1b0;
        }
        local_1b0 = uVar13;
        lVar10 = *(long *)(local_188 + 0x28);
        lVar9 = BreakArgs::compute_width
                          (local_130,local_188,*(undefined8 *)(local_1a0 + 0x18 + uVar12 * 0x28),
                           *(undefined *)(local_1a0 + 0x25 + uVar12 * 0x28));
        lVar14 = lVar14 + uVar12 * 0x28;
        uVar13 = lVar9 + local_128 + lVar10 + *(long *)(lVar14 + 0x18);
        if (uVar13 <= local_e8) {
          ::alloc::vec::Vec<T,A>::push(&local_180,uVar12);
          *(undefined *)(lVar14 + 0x25) = 0;
          *(ulong *)(lVar14 + 0x18) = uVar13;
          if (local_138 <= uVar13) {
            if (local_f0 == 0) {
              uVar16 = 0;
              lVar10 = 0;
            }
            else {
              lVar10 = compute_demerits(*(undefined4 *)(lVar14 + 0x20),local_f8 - uVar13,local_100,
                                        lVar10);
              uVar16 = extraout_XMM0_Da;
            }
            if (lVar10 < 100000000000000) {
              lVar9 = *(long *)(lVar14 + 0x10);
              lVar14 = lVar9 + lVar10;
              if (lVar14 < local_140) {
                if ((lVar9 < 0) || (-1 < lVar10 && (lVar10 != 0 || lVar9 == 0))) {
                  local_a8 = local_188;
                  local_8c = 0x100;
                  local_98 = local_148;
                    /* try { // try from 001bd5f8 to 001bd6bb has its CatchHandler @ 001bd944 */
                  local_b0 = uVar12;
                  local_a0 = lVar14;
                  local_90 = uVar16;
                  ::alloc::vec::Vec<T,A>::push(&local_168,&local_b0);
                  local_140 = lVar14;
                }
              }
            }
          }
        }
        puVar8 = (ulong *)_<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::
                          next(&local_e0);
        lVar10 = lVar6;
      } while (puVar8 != (ulong *)0x0);
      if (local_158 != 0) {
        local_158 = local_158 + -1;
        cVar3 = *(char *)(local_160 + 0x25 + local_158 * 0x28);
        if (cVar3 != '\x02') {
          puVar1 = (undefined4 *)(local_160 + local_158 * 0x28);
          local_62 = *(undefined2 *)((long)puVar1 + 0x26);
          uStack_68 = (undefined5)((ulong)*(undefined8 *)((long)puVar1 + 0x1d) >> 0x18);
          local_88 = *puVar1;
          uStack_84 = puVar1[1];
          uStack_80 = puVar1[2];
          uStack_7c = puVar1[3];
          local_78 = puVar1[4];
          uStack_74 = puVar1[5];
          uStack_70 = puVar1[6];
          uStack_6c = puVar1[7];
                    /* try { // try from 001bd7c3 to 001bd888 has its CatchHandler @ 001bd940 */
          local_63 = cVar3;
          ::alloc::vec::Vec<T,A>::push(&local_180,local_198);
          ::alloc::vec::Vec<T,A>::push(local_1a8,&local_88);
        }
      }
      if (local_170 == 0) goto LAB_001bd80d;
LAB_001bd480:
      local_190 = core::cmp::max_by(lVar6);
    }
    core::intrinsics::typed_swap(local_120,&local_180);
    bVar11 = cVar4 != '\0';
  } while( true );
}