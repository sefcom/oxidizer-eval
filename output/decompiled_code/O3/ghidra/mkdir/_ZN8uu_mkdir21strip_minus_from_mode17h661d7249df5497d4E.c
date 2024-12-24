undefined8 __rustcall uu_mkdir::strip_minus_from_mode(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  uint extraout_EDX;
  undefined auVar7 [16];
  undefined auStack_68 [16];
  ulong uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  auStack_68 = _<&mut_alloc::vec::Vec<T,A>as_core::iter::traits::collect::IntoIterator>::into_iter()
  ;
  puVar5 = (undefined8 *)
           _<core::slice::iter::IterMut<T>as_core::iter::traits::iterator::Iterator>::next
                     (auStack_68);
  if (puVar5 != (undefined8 *)0x0) {
    do {
      cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                        (puVar5[1],puVar5[2],&DAT_0011e0ea,2);
      if (cVar3 != '\0') {
        return 0;
      }
      uVar1 = puVar5[1];
      uVar2 = puVar5[2];
      uStack_58 = uStack_58 & 0xffffffff00000000;
      auVar7 = core::char::methods::encode_utf8_raw(0x2d,&uStack_58);
      auVar7 = _<&str_as_core::str::pattern::Pattern>::strip_prefix_of
                         (auVar7._0_8_,auVar7._8_8_,uVar1,uVar2);
      if (auVar7._0_8_ != 0) {
        uStack_58 = puVar5[1];
        lStack_50 = puVar5[2] + uStack_58;
        lVar6 = _<core::str::iter::Chars_as_core::iter::traits::iterator::Iterator>::advance_by
                          (&uStack_58);
        if (lVar6 == 0) {
          iVar4 = core::str::validations::next_code_point(&uStack_58);
          if ((iVar4 != 0) &&
             (((extraout_EDX - 0x58 < 0x21 &&
               ((0x1bc808001U >> ((ulong)(extraout_EDX - 0x58) & 0x3f) & 1) != 0)) ||
              ((extraout_EDX & 0x1ffff8) == 0x30)))) {
            _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&uStack_48,auVar7._0_8_,auVar7._8_8_);
            core::ptr::drop_in_place<alloc::string::String>(puVar5);
            puVar5[2] = uStack_38;
            *puVar5 = uStack_48;
            puVar5[1] = uStack_40;
            return 1;
          }
        }
      }
      puVar5 = (undefined8 *)
               _<core::slice::iter::IterMut<T>as_core::iter::traits::iterator::Iterator>::next
                         (auStack_68);
    } while (puVar5 != (undefined8 *)0x0);
  }
  return 0;
}