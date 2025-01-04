void __rustcall
uu_uniq::handle_preceding_options
          (undefined8 param_1,undefined8 param_2,undefined *param_3,undefined *param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  char cVar3;
  undefined uVar4;
  undefined4 extraout_EAX;
  undefined4 extraout_EAX_00;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined4 local_3c;
  undefined *local_38;
  
  cVar3 = core::slice::_<impl[T]>::starts_with(param_1,param_2,"--",2);
  if (cVar3 != '\0') {
    local_38 = param_3;
    core::str::traits::
    _<impl_core::slice::index::SliceIndex<str>for_core::ops::range::RangeFrom<usize>>::get
              (param_1,param_2);
    if (CONCAT44(extraout_var,extraout_EAX) == 0) {
      core::str::slice_error_fail(param_1,param_2,2,param_2,&PTR_s_src_uu_uniq_src_uniq_rs_00230530)
      ;
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar2 = CONCAT44(extraout_var,extraout_EAX);
    cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                      (CONCAT44(extraout_var,extraout_EAX),extraout_RDX,"skip-chars",10);
    uVar4 = 1;
    if (cVar3 == '\0') {
      cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                        (uVar2,extraout_RDX,"skip-fields",0xb);
      if (cVar3 == '\0') {
        cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                          (uVar2,extraout_RDX,"check-chars",0xb);
        if (cVar3 == '\0') {
          cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar2,extraout_RDX,"group",5);
          if (cVar3 == '\0') {
            uVar4 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                              (uVar2,extraout_RDX,"all-repeated",0xc);
          }
        }
      }
    }
    *local_38 = uVar4;
    param_3 = local_38;
  }
  cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(param_1,param_2,"-s",2);
  uVar4 = 1;
  if (cVar3 == '\0') {
    cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(param_1,param_2,"-f",2);
    if (cVar3 == '\0') {
      uVar4 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(param_1,param_2,"-w",2);
    }
  }
  *param_4 = uVar4;
  local_3c = 0;
  core::char::methods::encode_utf8_raw(0x2d,&local_3c);
  cVar3 = core::slice::_<impl[T]>::starts_with
                    (param_1,param_2,CONCAT44(extraout_var_00,extraout_EAX_00),extraout_RDX_00);
  if (cVar3 == '\0') {
    *param_4 = 0;
    *param_3 = 0;
  }
  return;
}