void __rustcall
uu_ls::return_total(undefined8 *param_1,undefined **param_2,long param_3,long param_4,
                   undefined8 param_5)

{
  undefined uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 ****ppppuVar4;
  long lVar5;
  undefined auVar6 [16];
  undefined8 ***local_b0;
  code *local_a8;
  long local_a0;
  code *local_98;
  undefined **local_90;
  undefined **local_88;
  undefined8 ***local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 *local_48 [3];
  
  local_88 = param_2 + param_3 * 0x26;
  local_90 = param_2;
  lVar3 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next(&local_90);
  if (lVar3 == 0) {
    lVar5 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_4 + 0xd8);
    lVar5 = 0;
    uVar1 = *(undefined *)(param_4 + 0xf1);
    do {
      local_b0 = (undefined8 ***)PathData::get_metadata(lVar3,param_5);
      ppppuVar4 = (undefined8 ****)local_b0;
      if ((undefined8 ****)local_b0 != (undefined8 ****)0x0) {
        ppppuVar4 = &local_b0;
      }
      lVar3 = core::option::Option<T>::map_or(ppppuVar4,uVar2,uVar1);
      lVar5 = lVar5 + lVar3;
      lVar3 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                        (&local_90);
    } while (lVar3 != 0);
  }
  if ((*(char *)(param_4 + 0xee) == '\0') || (auVar6 = dired::indent(param_5), auVar6._0_8_ == 0)) {
    display_size(local_48,lVar5,*(undefined *)(param_4 + 0xf1));
    local_a0 = param_4 + 0xfa;
    local_a8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_98 = _<uucore::mods::line_ending::LineEnding_as_core::fmt::Display>::fmt;
    local_90 = &PTR_DAT_003127c8;
    local_88 = (undefined **)0x2;
    local_70 = 0;
    local_80 = &local_b0;
    local_78 = 2;
                    /* try { // try from 002290d9 to 002290e7 has its CatchHandler @ 0022912c */
    local_b0 = (undefined8 ***)local_48;
    core::option::Option<T>::map_or_else(&local_60,&local_90);
                    /* try { // try from 002290e8 to 002290f4 has its CatchHandler @ 0022911d */
    core::ptr::drop_in_place<alloc::string::String>(local_48);
    param_1[2] = local_50;
    *param_1 = local_60;
    param_1[1] = uStack_58;
  }
  else {
    *(undefined (*) [16])(param_1 + 1) = auVar6;
    *param_1 = 0x8000000000000000;
  }
  return;
}