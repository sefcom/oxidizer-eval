void __rustcall
uu_ptx::get_reference
          (long *param_1,char param_2,char param_3,long param_4,undefined8 param_5,
          undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 **ppuVar4;
  undefined *local_a0;
  long lStack_98;
  undefined8 **local_90;
  undefined *local_88;
  undefined8 local_80;
  long local_70;
  undefined8 *local_68;
  code *local_60;
  long *local_58;
  code *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined local_30;
  
  if (param_2 == '\0') {
    if (param_3 == '\0') {
      *param_1 = 0;
      param_1[1] = 1;
      param_1[2] = 0;
    }
    else {
      regex::regex::string::Regex::find_at(&local_a0,param_7,param_8,param_5,param_6);
      puVar3 = local_a0;
      ppuVar4 = (undefined8 **)local_a0;
      if (local_a0 != (undefined *)0x0) {
        puVar3 = local_88;
        ppuVar4 = local_90;
      }
      lVar2 = core::str::traits::
              _<impl_core::slice::index::SliceIndex<str>for_core::ops::range::Range<usize>>::get
                        (ppuVar4,puVar3,param_5,param_6);
      if (lVar2 == 0) {
        core::str::slice_error_fail(param_5,param_6,ppuVar4,puVar3,&DAT_003ee698);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_a0,lVar2);
      param_1[2] = (long)local_90;
      *param_1 = (long)local_a0;
      param_1[1] = lStack_98;
    }
  }
  else {
    local_40 = *(undefined4 *)(param_4 + 0x20);
    uStack_3c = *(undefined4 *)(param_4 + 0x24);
    uStack_38 = *(undefined4 *)(param_4 + 0x28);
    uStack_34 = *(undefined4 *)(param_4 + 0x2c);
    local_48 = 0;
    local_30 = 0;
    local_70 = *(long *)(param_4 + 0x38) + 1;
    local_68 = &local_48;
    local_60 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
    local_58 = &local_70;
    local_50 = core::fmt::num::imp::_<impl_core::fmt::Display_for_u64>::fmt;
    local_a0 = &DAT_003ee6b0;
    lStack_98 = 2;
    local_80 = 0;
    local_90 = &local_68;
    local_88 = (undefined *)0x2;
    core::option::Option<T>::map_or_else(param_1,&local_a0);
  }
  return;
}