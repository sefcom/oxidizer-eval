void __rustcall
uu_dd::parseargs::Parser::parse_output_flags
          (undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined auVar5 [16];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined local_68 [48];
  undefined2 local_38;
  
  _<char_as_core::str::pattern::Pattern>::into_searcher(local_68,0x2c);
  local_78 = 0;
  local_38 = 1;
  local_70 = param_4;
  auVar5 = core::str::iter::SplitInternal<P>::next(&local_78);
  if (auVar5._0_8_ != 0) {
    do {
      uVar4 = auVar5._8_8_;
      uVar3 = auVar5._0_8_;
      cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar3,uVar4,&DAT_00122ddf,3);
      if (cVar1 != '\0') {
        _<T_as_alloc::slice::hack::ConvertVec>::to_vec(param_1 + 1,param_3,param_4);
        *param_1 = 0xb;
        return;
      }
      cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar3,uVar4,&DAT_00122de2,6);
      puVar2 = (undefined *)(param_2 + 0xc3);
      if (((((cVar1 == '\0') &&
            (cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                               (uVar3,uVar4,&DAT_00122de8,9), puVar2 = (undefined *)(param_2 + 0xc4)
            , cVar1 == '\0')) &&
           (cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar3,uVar4,&DAT_00122df1,5)
           , puVar2 = (undefined *)(param_2 + 0xc5), cVar1 == '\0')) &&
          (((cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                               (uVar3,uVar4,&DAT_00118fe4,4), puVar2 = (undefined *)(param_2 + 0xc6)
            , cVar1 == '\0' &&
            (cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                               (uVar3,uVar4,&DAT_00122df6,7), puVar2 = (undefined *)(param_2 + 199),
            cVar1 == '\0')) &&
           ((cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                               (uVar3,uVar4,&DAT_00118d58,8), puVar2 = (undefined *)(param_2 + 200),
            cVar1 == '\0' &&
            ((cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                                (uVar3,uVar4,&DAT_00122dfd,7),
             puVar2 = (undefined *)(param_2 + 0xc9), cVar1 == '\0' &&
             (cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                                (uVar3,uVar4,&DAT_00122e04,6),
             puVar2 = (undefined *)(param_2 + 0xca), cVar1 == '\0')))))))) &&
         (cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar3,uVar4,"nofollow",8),
         puVar2 = (undefined *)(param_2 + 0xcb), cVar1 == '\0')) {
        cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar3,uVar4,&DAT_00122e0a,7);
        if (cVar1 != '\0') {
          _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_c0,uVar3,uVar4);
          *param_1 = 0xb;
          param_1[1] = local_c0;
          param_1[2] = uStack_b8;
          param_1[3] = local_b0;
          return;
        }
        cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar3,uVar4,&DAT_00122e11,6);
        if (cVar1 != '\0') {
          _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_a8,uVar3,uVar4);
          *param_1 = 0xb;
          param_1[1] = local_a8;
          param_1[2] = uStack_a0;
          param_1[3] = local_98;
          return;
        }
        cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar3,uVar4,&DAT_00118f84,4);
        if (cVar1 != '\0') {
          _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_90,uVar3,uVar4);
          *param_1 = 0xb;
          param_1[1] = local_90;
          param_1[2] = uStack_88;
          param_1[3] = local_80;
          return;
        }
        cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar3,uVar4,&DAT_00122e35,6);
        puVar2 = (undefined *)(param_2 + 0xc1);
        if ((cVar1 != '\0') ||
           (cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                              (uVar3,uVar4,&DAT_00122e3b,10), puVar2 = (undefined *)(param_2 + 0xcf)
           , cVar1 != '\0')) goto LAB_001d3e50;
        cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar3,uVar4,&DAT_00122e17,9);
        if (((cVar1 == '\0') &&
            (cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                               (uVar3,uVar4,&DAT_00122e20,0xb), cVar1 == '\0')) &&
           (cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                              (uVar3,uVar4,&DAT_00122e2b,10), cVar1 == '\0')) {
          _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_d8,uVar3,uVar4);
          *param_1 = 5;
          param_1[1] = local_d8;
          param_1[2] = uStack_d0;
          param_1[3] = local_c8;
          return;
        }
      }
      else {
LAB_001d3e50:
        *puVar2 = 1;
      }
      auVar5 = core::str::iter::SplitInternal<P>::next(&local_78);
    } while (auVar5._0_8_ != 0);
  }
  *param_1 = 0xe;
  return;
}