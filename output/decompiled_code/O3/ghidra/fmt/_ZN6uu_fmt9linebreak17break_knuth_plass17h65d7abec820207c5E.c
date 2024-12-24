long __rustcall uu_fmt::linebreak::break_knuth_plass(long param_1,long param_2,long param_3)

{
  char *pcVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  undefined auVar6 [16];
  long local_a8;
  long lStack_a0;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  char *local_80;
  undefined8 local_78;
  long *local_70;
  char local_68;
  undefined local_67;
  char local_66;
  long local_60;
  long local_58;
  long lStack_50;
  undefined local_48 [8];
  long local_40;
  long local_38;
  
  local_58 = param_1;
  lStack_50 = param_2;
  auVar6 = _<core::slice::iter::Iter<T>as_core::clone::Clone>::clone();
  find_kp_breakpoints(local_48,auVar6._0_8_,auVar6._8_8_,param_3);
  lStack_a0 = local_38 * 0x10 + local_40;
  local_a8 = local_40;
  local_90 = *(undefined4 *)(param_3 + 8);
  uStack_8c = *(undefined4 *)(param_3 + 0xc);
  uStack_88 = *(undefined4 *)(param_3 + 0x10);
  uStack_84 = *(undefined4 *)(param_3 + 0x14);
  pcVar1 = (char *)(param_3 + 0x30);
  local_78 = *(undefined8 *)(param_3 + 0x18);
  local_70 = &local_58;
                    /* try { // try from 001bceef to 001bcf00 has its CatchHandler @ 001bd0c1 */
  local_80 = pcVar1;
  core::iter::traits::double_ended::DoubleEndedIterator::try_rfold(&local_68,&local_a8,&local_90);
  lVar4 = local_60;
  if (local_68 == '\0') {
    local_a8 = local_58;
    lStack_a0 = lStack_50;
    lVar3 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next(&local_a8);
    if (lVar3 == 0) {
LAB_001bd067:
      plVar2 = *(long **)(param_3 + 0x18);
      lVar4 = plVar2[2];
      if ((ulong)(*plVar2 - lVar4) < 2) {
                    /* try { // try from 001bd08f to 001bd09f has its CatchHandler @ 001bd0c1 */
        lVar4 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(plVar2,"\n",1);
      }
      else {
        *(undefined *)(plVar2[1] + lVar4) = 10;
        plVar2[2] = lVar4 + 1;
        lVar4 = 0;
      }
    }
    else {
                    /* try { // try from 001bcf4b to 001bcfb2 has its CatchHandler @ 001bd0bf */
      if ((local_66 == '\0') ||
         (lVar4 = write_newline(*(undefined8 *)(param_3 + 8),*(undefined8 *)(param_3 + 0x10),
                                *(undefined8 *)(param_3 + 0x18)), lVar4 == 0)) {
        slice_if_fresh(&local_90,local_66,*(undefined8 *)(lVar3 + 0x10),
                       *(undefined8 *)(lVar3 + 0x18),*(undefined8 *)(lVar3 + 0x20),*pcVar1,
                       *(undefined *)(lVar3 + 0x3a),*(undefined *)(lVar3 + 0x38),local_67);
        cVar5 = *(char *)(lVar3 + 0x39);
        lVar4 = write_with_spaces(CONCAT44(uStack_84,uStack_88),local_80,
                                  CONCAT44(uStack_8c,local_90),*(undefined8 *)(param_3 + 0x18));
        if (lVar4 == 0) {
          do {
            lVar4 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                              (&local_a8);
            if (lVar4 == 0) goto LAB_001bd067;
                    /* try { // try from 001bd021 to 001bd058 has its CatchHandler @ 001bd0c3 */
            slice_if_fresh(&local_90,0,*(undefined8 *)(lVar4 + 0x10),*(undefined8 *)(lVar4 + 0x18),
                           *(undefined8 *)(lVar4 + 0x20),*pcVar1 != '\0',
                           *(char *)(lVar4 + 0x3a) != '\0',*(char *)(lVar4 + 0x38) != '\0',
                           cVar5 != '\0');
            cVar5 = *(char *)(lVar4 + 0x39);
            lVar4 = write_with_spaces(CONCAT44(uStack_84,uStack_88),local_80,
                                      CONCAT44(uStack_8c,local_90),*(undefined8 *)(param_3 + 0x18));
          } while (lVar4 == 0);
        }
      }
    }
  }
  core::ptr::drop_in_place<alloc::vec::Vec<(&uu_fmt::parasplit::WordInfo,bool)>>(local_48);
  return lVar4;
}