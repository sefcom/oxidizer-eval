undefined8 * __rustcall uu_du::parse_time_style(undefined8 *param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_38;
  undefined local_30 [24];
  
  if (param_2 == 0) {
LAB_001f3f92:
    param_1[1] = &DAT_0011cf4a;
    param_1[2] = 0xe;
  }
  else {
    cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(param_2,param_3,&DAT_0010f8b8,8);
    if (cVar1 == '\0') {
      cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                        (param_2,param_3,"long-isoDateTime",8);
      if (cVar1 != '\0') goto LAB_001f3f92;
      cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(param_2,param_3,&DAT_0011cf47,3);
      if (cVar1 == '\0') {
        _<T_as_alloc::slice::hack::ConvertVec>::to_vec(local_30,param_2,param_3);
        local_38 = 2;
        uVar2 = ::alloc::boxed::Box<T>::new(&local_38);
        param_1[1] = uVar2;
        param_1[2] = &PTR_drop_in_place<uu_du_DuError>_00284558;
        uVar2 = 1;
        goto LAB_001f3fa7;
      }
      param_1[1] = "%Y-%m-%dENETDOWNThursday";
      param_1[2] = 8;
    }
    else {
      param_1[1] = &DAT_0011cf58;
      param_1[2] = 0x17;
    }
  }
  uVar2 = 0;
LAB_001f3fa7:
  *param_1 = uVar2;
  return param_1;
}