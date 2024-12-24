undefined  [16] __rustcall uu_sort::get_leading_gen(undefined8 param_1,long param_2)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long lVar7;
  bool bVar8;
  ulong uVar9;
  undefined auVar10 [16];
  undefined auVar11 [12];
  char *local_88;
  undefined8 local_80;
  undefined *local_78;
  undefined8 uStack_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  undefined8 local_38;
  int iVar5;
  ulong uVar6;
  
  auVar10 = core::str::_<impl_str>::trim_start_matches();
  uVar6 = auVar10._8_8_;
  lVar3 = auVar10._0_8_;
  lVar7 = param_2 - uVar6;
  local_88 = "inf";
  local_80 = 3;
  local_78 = &DAT_0012425c;
  uStack_70 = 4;
  local_68 = "nan";
  local_60 = 3;
  local_58 = 0;
  local_50 = 3;
  if (lVar3 != 0) {
LAB_00223290:
    do {
                    /* try { // try from 00223290 to 002232d2 has its CatchHandler @ 00223479 */
      auVar10 = _<core::array::iter::IntoIter<T,_>as_core::iter::traits::iterator::Iterator>::next
                          (&local_88);
      uVar9 = auVar10._8_8_;
      if (auVar10._0_8_ == 0) goto LAB_00223321;
      if (uVar9 != 0) {
        if (uVar9 < uVar6) {
          if (*(char *)(lVar3 + uVar9) < -0x40) goto LAB_00223290;
        }
        else if (uVar9 != uVar6) goto LAB_00223290;
      }
      cVar2 = core::slice::ascii::_<impl[u8]>::eq_ignore_ascii_case(lVar3,uVar9,auVar10._0_8_,uVar9)
      ;
    } while (cVar2 == '\0');
    param_2 = uVar9 + lVar7;
    core::ptr::drop_in_place<core::array::iter::IntoIter<&str,3_usize>>(&local_88);
    goto LAB_0022345c;
  }
  do {
                    /* try { // try from 002232f0 to 002232f7 has its CatchHandler @ 00223477 */
    auVar10 = _<core::array::iter::IntoIter<T,_>as_core::iter::traits::iterator::Iterator>::next
                        (&local_88);
    if (auVar10._0_8_ == 0) goto LAB_00223321;
    uVar9 = 0;
  } while ((auVar10._8_8_ != 0) && (uVar9 = uVar6, auVar10._8_8_ != uVar6));
                    /* try { // try from 0022330a to 00223320 has its CatchHandler @ 00223488 */
  core::str::slice_error_fail(0,uVar6,0,uVar9,&PTR_s_src_uu_sort_src_sort_rs_002ff2c8);
LAB_00223321:
  core::ptr::drop_in_place<core::array::iter::IntoIter<&str,3_usize>>(&local_88);
  local_40 = lVar3 + uVar6;
  local_38 = 0;
  local_48 = lVar3;
  core::iter::traits::iterator::Iterator::fuse(&local_68,&local_48);
  local_88 = (char *)0x0;
  local_80 = 8;
  local_78 = (undefined *)0x0;
  uStack_70 = 0;
                    /* try { // try from 0022336a to 0022338d has its CatchHandler @ 00223475 */
  lVar3 = itertools::peek_nth::PeekNth<I>::peek_nth(&local_88,0);
  if ((lVar3 != 0) && ((*(int *)(lVar3 + 8) == 0x2d || (*(int *)(lVar3 + 8) == 0x2b)))) {
    _<itertools::peek_nth::PeekNth<I>as_core::iter::traits::iterator::Iterator>::next(&local_88);
  }
  bVar1 = true;
  do {
    do {
                    /* try { // try from 002233a0 to 002233a7 has its CatchHandler @ 0022347b */
      bVar8 = bVar1;
      auVar11 = _<itertools::peek_nth::PeekNth<I>as_core::iter::traits::iterator::Iterator>::next
                          (&local_88);
      iVar5 = auVar11._8_4_;
      lVar3 = auVar11._0_8_;
      if (iVar5 == 0x110000) goto LAB_00223454;
      bVar1 = bVar8;
    } while (iVar5 - 0x30U < 10);
    if (iVar5 != 0x2e) {
                    /* try { // try from 002233db to 0022341b has its CatchHandler @ 00223471 */
      if (((iVar5 == 0x45) || (iVar5 == 0x65)) &&
         (lVar4 = itertools::peek_nth::PeekNth<I>::peek_nth(&local_88,0), lVar4 != 0)) {
        iVar5 = *(int *)(lVar4 + 8);
        auVar11._8_4_ = iVar5;
        auVar11._0_8_ = lVar3;
        if ((iVar5 != 0x2d) && (iVar5 != 0x2b)) goto joined_r0x00223424;
        lVar4 = itertools::peek_nth::PeekNth<I>::peek_nth(&local_88,2);
        if ((lVar4 != 0) && (*(int *)(lVar4 + 8) - 0x30U < 10)) {
          _<itertools::peek_nth::PeekNth<I>as_core::iter::traits::iterator::Iterator>::next
                    (&local_88);
          goto LAB_00223429;
        }
      }
      break;
    }
    bVar1 = false;
  } while (bVar8);
  goto LAB_00223444;
LAB_00223454:
  core::ptr::drop_in_place<itertools::peek_nth::PeekNth<core::str::iter::CharIndices>>(&local_88);
  goto LAB_0022345c;
joined_r0x00223424:
  while (lVar3 = auVar11._0_8_, auVar11._8_4_ - 0x30U < 10) {
LAB_00223429:
                    /* try { // try from 00223429 to 00223430 has its CatchHandler @ 00223473 */
    auVar11 = _<itertools::peek_nth::PeekNth<I>as_core::iter::traits::iterator::Iterator>::next
                        (&local_88);
    if (auVar11._8_4_ == 0x110000) goto LAB_00223454;
  }
LAB_00223444:
  param_2 = lVar3 + lVar7;
  core::ptr::drop_in_place<itertools::peek_nth::PeekNth<core::str::iter::CharIndices>>(&local_88);
LAB_0022345c:
  auVar10._8_8_ = param_2;
  auVar10._0_8_ = lVar7;
  return auVar10;
}