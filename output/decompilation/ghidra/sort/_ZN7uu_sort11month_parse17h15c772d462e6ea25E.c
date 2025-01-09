undefined __rustcall uu_sort::month_parse(void)

{
  char cVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined auVar4 [16];
  undefined **local_30;
  undefined **local_28;
  
  auVar4 = core::str::_<impl_str>::trim_matches();
  local_30 = &PTR_s_JANFEBMARAPRMAYJUNJULAUGSEPOCTNO_002ffe20;
  local_28 = &PTR_drop_in_place<std_fs_File>_002fff40;
  puVar2 = (undefined8 *)
           _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next(&local_30);
  if (puVar2 != (undefined8 *)0x0) {
    do {
      uVar3 = puVar2[1];
      if (uVar3 == 0) {
        uVar3 = 0;
LAB_002245b7:
        cVar1 = core::slice::ascii::_<impl[u8]>::eq_ignore_ascii_case
                          (auVar4._0_8_,uVar3,*puVar2,uVar3);
        if (cVar1 != '\0') {
          return *(undefined *)(puVar2 + 2);
        }
      }
      else if (uVar3 < auVar4._8_8_) {
        if (-0x41 < *(char *)(auVar4._0_8_ + uVar3)) goto LAB_002245b7;
      }
      else if (uVar3 == auVar4._8_8_) goto LAB_002245b7;
      puVar2 = (undefined8 *)
               _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                         (&local_30);
    } while (puVar2 != (undefined8 *)0x0);
  }
  return 0;
}